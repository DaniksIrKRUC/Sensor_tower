#ifndef DATAGRAM_CONNECTION_H
#define DATAGRAM_CONNECTION_H

#include <atomic>

#include "Connection_traits.h"
#include "Event_traits.h"
#include "socket_exceptions.h"

#include "Active.h"
#include "pointer_types.h"
#include "Time_utils.h"
#include "Log.h"

using Navtech::Utility::stdout_log;
using Navtech::Utility::endl;
using Navtech::Utility::Logging_level;

using namespace Navtech::Time;

namespace Navtech::Networking::Datagram {

    // =================================================================================================================
    //
    template <Protocol protocol, Transport transport>
    class Sender {
    public:
        // Type aliases.
        // The '_Ty' postfix denotes a template type. Rather than being
        // supplied as template parameters on the class (which would be
        // unwieldy) these parameters are looked up from the Connection_traits
        // class, using the appropriate combination of protocol and transport
        //
        using Event_traits      = Navtech::Networking::Event_traits<protocol, transport>;
        using Connection_traits = Navtech::Networking::Connection_traits<protocol, transport>;
        using Protocol_traits   = typename Connection_traits::Protocol_traits;
        using Socket_Ty         = typename Connection_traits::Socket;
        using Message_buffer_Ty = typename Connection_traits::Message_buffer;
        using ID_Ty             = typename Connection_traits::ID;
        using Dispatcher_Ty     = typename Event_traits::Dispatcher;

        Sender(
            Socket_Ty&          sckt, 
            ID_Ty               id, 
            Dispatcher_Ty&      event_dispatcher
        );

        void start();
        void stop();

        void send(const Message_buffer_Ty& msg);
        void send(Message_buffer_Ty&& msg);

        void enable();
        void disable();
    
    private:
        // External service associations
        //
        association_to<Socket_Ty>           socket;
        association_to<Dispatcher_Ty>       protocol_events;

        // Operating state
        //
        std::atomic<bool> enabled { false };

        // Async function implementation
        //
        void do_send(Message_buffer_Ty& msg);

        // Identity
        //
        ID_Ty id;
    };



    template <Protocol protocol, Transport transport>
    Sender<protocol, transport>::Sender(
        Sender<protocol, transport>::Socket_Ty&       sckt, 
        Sender<protocol, transport>::ID_Ty            identity, 
        Sender<protocol, transport>::Dispatcher_Ty&   protocol_event_dispatcher
    ) :
        socket          { associate_with(sckt) },
        protocol_events { associate_with(protocol_event_dispatcher) },
        id              { identity }
    {
    }


    template <Protocol protocol, Transport transport>
    void Sender<protocol, transport>::start()
    {
        enable();
    }


    template <Protocol protocol, Transport transport>
    void Sender<protocol, transport>::stop()
    {
        disable();
    }


    template <Protocol protocol, Transport transport>
    void Sender<protocol, transport>::send(const Sender<protocol, transport>::Message_buffer_Ty& msg)
    {
        if (!enabled) return;

        try {
            socket->send(msg);
        }
        catch (std::system_error& ex) {
            disable();
            protocol_events->template notify<Event_traits::Tx_error>(id);
        }
    }


    template <Protocol protocol, Transport transport>
    void Sender<protocol, transport>::send(Sender<protocol, transport>::Message_buffer_Ty&& msg)
    {
        if (!enabled) return;

        try {
            socket->send(std::move(msg));
        }
        catch (std::system_error& ex) {
            disable();
            protocol_events->template notify<Event_traits::Tx_error>(id);
        }
    }


    template <Protocol protocol, Transport transport>
    void Sender<protocol, transport>::enable()
    {
        enabled = true;
    }


    template <Protocol protocol, Transport transport>
    void Sender<protocol, transport>::disable()
    {
        enabled = false;
    }


    // =================================================================================================================
    //
    template <Protocol protocol, Transport transport>
    class Receiver : public Utility::Active {
    public:
        // Type aliases.
        // The '_Ty' postfix denotes a template type. Rather than being
        // supplied as template parameters on the class (which would be
        // unwieldy) these parameters are looked up from the Connection_traits
        // class, using the appropriate combination of protocol and transport
        //
        using Event_traits      = Navtech::Networking::Event_traits<protocol, transport>;
        using Connection_traits = Navtech::Networking::Connection_traits<protocol, transport>;
        using Protocol_traits   = typename Connection_traits::Protocol_traits;
        using Socket_Ty         = typename Connection_traits::Socket;
        using Message_buffer_Ty = typename Connection_traits::Message_buffer;
        using Message           = typename Connection_traits::Message;
        using ID_Ty             = typename Connection_traits::ID;
        using Dispatcher_Ty     = typename Event_traits::Dispatcher;

        Receiver(
            Socket_Ty&          sckt, 
            ID_Ty               identity, 
            Dispatcher_Ty&      protocol_event_dispatcher
        );

        void enable();
        void disable();

    private:
        // External service associations
        //
        association_to<Socket_Ty>           socket;
        association_to<Dispatcher_Ty>       protocol_events;

        // Operating state
        //
        std::atomic<bool> enabled { false };
        ID_Ty   id;

        // Active class overrides
        //
        void on_start() override;
        void on_stop()  override;

        // Buffers for incoming data
        //
        Message incoming_msg { };
    
        // Finite State Machine implementation 
        // (Moore machine - behaviour in-state)
        //
        enum State { initial, reading_header, reading_payload, dispatching, closing, num_states };
        enum Event { error, go, valid_header, invalid_header, message_complete, dispatched, num_events };
        
        using Activity = void (Receiver::*)(void);

        struct State_cell {
            State    next_state;
            Activity do_action;
        };

        State current_state { initial };

        void post_event(Event e) { async_call(&Receiver::process_event, this, e); }

        void read_header();
        void read_payload();
        void dispatch();
        void shutdown();
        void process_event(Event e);

        static constexpr State_cell state_machine[num_events][num_states] {
        //                   Initial                                     Reading header                                Reading payload                       Dispatching                              Closing
        /* error        */ { {},                                         { closing,         &Receiver::shutdown },     { closing,     &Receiver::shutdown }, { },                                        { } },
        /* go           */ { { reading_header, &Receiver::read_header }, { },                                          { },                                  { },                                        { } },
        /* valid hdr    */ { {},                                         { reading_payload, &Receiver::read_payload }, { },                                  { },                                        { } },
        /* invalid hdr  */ { {},                                         { reading_header,  &Receiver::read_header },  { },                                  { },                                        { } },
        /* msg complete */ { {},                                         { },                                          { dispatching, &Receiver::dispatch }, { },                                        { } },
        /* dispatched   */ { {},                                         { },                                          { },                                  { reading_header, &Receiver::read_header }, { } }
        };  
    };


    template <Protocol protocol, Transport transport>
    Receiver<protocol, transport>::Receiver(
        Receiver<protocol, transport>::Socket_Ty&     sckt, 
        Receiver<protocol, transport>::ID_Ty          identity,
        Receiver<protocol, transport>::Dispatcher_Ty& protocol_event_dispatcher
    ) :
        Active          { "Receiver" },
        socket          { associate_with(sckt) },
        protocol_events { associate_with(protocol_event_dispatcher) },
        id              { identity }
    {
    }


    template <Protocol protocol, Transport transport>
    void Receiver<protocol, transport>::on_start()
    {
        enabled = true;

        // Post an event to kick-start the state machine
        //
        post_event(go);
    }


    template <Protocol protocol, Transport transport>
    void Receiver<protocol, transport>::on_stop()
    {
        enabled = false;
    }


    template <Protocol protocol, Transport transport>
    void Receiver<protocol, transport>::read_header()
    {
        if (!enabled) return;
        if (!socket->is_open()) post_event(error);

        try {
            // For a datagram socket, peek the receive buffer for the
            // header data.  It must be removed in a single
            // read with the payload
            //
            auto header_sz = Protocol_traits::header_size(incoming_msg);
            auto recv_data = socket->receive(header_sz, Socket_Ty::Read_mode::peek);
            Protocol_traits::add_header(incoming_msg, std::move(recv_data.second));

            bool header_is_valid    { Protocol_traits::is_valid(incoming_msg) };

            if (header_is_valid) {
                post_event(valid_header);
            }
            else {
                // Consume, and discard, the (invalid) header from the receive buffer
                //
                socket->receive(Protocol_traits::header_size(incoming_msg));
                Protocol_traits::clear(incoming_msg);
                
                post_event(invalid_header);
            }
        }
        catch (client_shutdown& e) {
            stdout_log << "Stream receiver [" << std::to_string(id) << "] " 
                       << "read_header() - client disconnected"
                       << endl;
            disable();
            post_event(error);
        }
        catch (std::system_error& e) {
            stdout_log << "Stream receiver [" << std::to_string(id) << "] " 
                       << "read_header() - caught exception: " << e.what()
                       << endl;
            disable();
            post_event(error);
        }
    }


    template <Protocol protocol, Transport transport>
    void Receiver<protocol, transport>::read_payload()
    {
        if (!enabled) return;
        if (!socket->is_open()) post_event(error);

        try { 
            // For a datagram socket, retrieve both the header and payload as a single
            // read.
            //
            auto header_sz  = Protocol_traits::header_size(incoming_msg);
            auto payload_sz = Protocol_traits::payload_size(incoming_msg);
            auto recv_data  = socket->receive(header_sz + payload_sz);
            Protocol_traits::replace_data(incoming_msg, std::move(recv_data.second));

            post_event(message_complete);
        }
        catch (client_shutdown& e) {
            stdout_log << "Stream receiver [" << std::to_string(id) << "] " 
                       << "read_payload() - client disconnected"
                       << endl;
            disable();
            post_event(error);
        }
        catch (std::system_error& e) {
            stdout_log << "Stream receiver [" << std::to_string(id) << "] " 
                       << "read_payload() - caught exeception: " << e.what()
                       << endl;
            disable();
            post_event(error);
        }
    }


    template <Protocol protocol, Transport transport>
    void Receiver<protocol, transport>::dispatch()
    {
        try {
            Protocol_traits::add_client_id(incoming_msg, id);
            Protocol_traits::add_ip_address(incoming_msg, socket->peer().ip_address);

            protocol_events->template notify<Event_traits::Received_message>(std::move(incoming_msg));

            post_event(dispatched);
        }
        catch (std::system_error& e) {
            disable();
            post_event(error);
        }
    }


    template <Protocol protocol, Transport transport>
    void Receiver<protocol, transport>::shutdown()
    {
        protocol_events->template notify<Event_traits::Rx_error>(id);
    }


    template <Protocol protocol, Transport transport>
    void Receiver<protocol, transport>::process_event(Receiver<protocol, transport>::Event event)
    {
        if (!state_machine[event][current_state].do_action) return;

        auto activity = state_machine[event][current_state].do_action;
        current_state = state_machine[event][current_state].next_state;

        (this->*activity)();
    }


    template <Protocol protocol, Transport transport>
    void Receiver<protocol, transport>::enable()
    {
        enabled = true;
    }


    template <Protocol protocol, Transport transport>
    void Receiver<protocol, transport>::disable()
    {
        enabled = false;
    }


    // =================================================================================================================
    //
    template <Protocol protocol, Transport transport>
    class Connection {
    public:
        // Type aliases.
        // The '_Ty' postfix denotes a template type. Rather than being
        // supplied as template parameters on the class (which would be
        // unwieldy) these parameters are looked up from the Connection_traits
        // class, using the appropriate combination of protocol and transport
        //
        using Event_traits      = Navtech::Networking::Event_traits<protocol, transport>;
        using Connection_traits = Navtech::Networking::Connection_traits<protocol, transport>;
        using Protocol_traits   = typename Connection_traits::Protocol_traits;
        using Socket_Ty         = typename Connection_traits::Socket;
        using Message_Ty        = typename Connection_traits::Message;
        using ID_Ty             = typename Connection_traits::ID;
        using Dispatcher_Ty     = typename Event_traits::Dispatcher;

        enum Direction { rx, tx, tx_rx };

        Connection(
            ID_Ty               identifier, 
            Socket_Ty&&         sckt, 
            Dispatcher_Ty&      protocol_event_dispatcher,
            Direction           dir = Direction::rx
        );
        ~Connection();

        void open();
        void close();

        void bind_to(const Endpoint& local_endpt);
        void remote_endpoint(const Endpoint& remote_endpt);
        Endpoint remote_endpoint() const;

        void send(const Message_Ty& msg);
        void send(Message_Ty&& msg);

        bool is_enabled() const;

    private:
        // External associations
        //
        association_to<Dispatcher_Ty>       protocol_events;

        // Internal components
        //
        Socket_Ty socket { };
        Sender<protocol, transport>   sender   { socket };
        Receiver<protocol, transport> receiver { socket };

        // Event handling (from sender and receiver)
        //
        Utility::Event_handler<ID_Ty> error_handler { };
        void on_error(const ID_Ty& identity);

        // Internal state
        //
        ID_Ty       id        { };
        bool        enabled   { false };
        Direction   direction { Direction::rx };

        bool is_set(Direction d) const
        {
            if (direction == tx_rx)   return true;
            if (direction == d)       return true;
            return false;
        }
    };



    template <Protocol protocol, Transport transport>
    Connection<protocol, transport>::Connection(
        Connection<protocol, transport>::ID_Ty            identity, 
        Connection<protocol, transport>::Socket_Ty&&      sckt,
        Connection<protocol, transport>::Dispatcher_Ty&   protocol_event_dispatcher,
        Connection<protocol, transport>::Direction        dir
    ) :
        protocol_events { associate_with(protocol_event_dispatcher) },
        socket          { std::move(sckt) },
        sender          { socket, identity, protocol_event_dispatcher },
        receiver        { socket, identity, protocol_event_dispatcher },
        id              { identity },
        direction       { dir }
    {
    }


    template <Protocol protocol, Transport transport>
    Connection<protocol, transport>::~Connection()
    {
        close();
    }


    template <Protocol protocol, Transport transport>
    void Connection<protocol, transport>::open()
    {
        if (!socket.is_open()) {
            stdout_log << "Datagram connection. Open failed!" << endl;
            return;
        }

        enabled = true;

        error_handler.when_notified_invoke(&Connection::on_error, this);
        protocol_events->template attach_to<Event_traits::Tx_error>(error_handler);
        protocol_events->template attach_to<Event_traits::Rx_error>(error_handler);

        if (is_set(tx)) sender.start();
        if (is_set(rx)) receiver.start();
    }


    template <Protocol protocol, Transport transport>
    void Connection<protocol, transport>::close()
    {
        if (!enabled) return;
        enabled = false;

        protocol_events->template detach_from<Event_traits::Tx_error>(error_handler);
        protocol_events->template detach_from<Event_traits::Rx_error>(error_handler);

        try {
            socket.close();
        }
        catch (std::system_error& e) {
            // We're closing, so ignore any errors
            // the socket may throw.
        }

        stdout_log << "Datagram connection, stopping receiver..." << endl;

        if (is_set(tx)) sender.stop();

        if (is_set(rx)) {
            receiver.stop();
            receiver.join();
        }
    }


    template <Protocol protocol, Transport transport>
    void Connection<protocol, transport>::on_error(const ID_Ty& session_in_error)
    {
        if (session_in_error != this->id) return;

        // The receiver of the connection_error event 
        // should terminate this connection.
        //
        protocol_events->template notify<Event_traits::Connection_error>(id);
    }


    template <Protocol protocol, Transport transport>
    void Connection<protocol, transport>::bind_to(const Endpoint& local_endpt)
    {
        socket.bind_to(local_endpt);
    }


    template <Protocol protocol, Transport transport>
    void Connection<protocol, transport>::remote_endpoint(const Endpoint& remote_endpt)
    {
        socket.remote_endpoint(remote_endpt);
    }


    template <Protocol protocol, Transport transport>
    void Connection<protocol, transport>::send(const Connection<protocol, transport>::Message_Ty& msg)
    {
        if (!enabled) return;

        sender.send(Protocol_traits::to_buffer(msg));
    }


    template <Protocol protocol, Transport transport>
    void Connection<protocol, transport>::send(Connection<protocol, transport>::Message_Ty&& msg)
    {
        if (!enabled) return;

        sender.send(Protocol_traits::to_buffer(std::move(msg)));
    }


    template <Protocol protocol, Transport transport>
    Endpoint Connection<protocol, transport>::remote_endpoint() const
    {
        return socket.peer();
    }


    template <Protocol protocol, Transport transport>
    bool Connection<protocol, transport>::is_enabled() const
    {
        return enabled;
    }


} // namespace Navtech::Networking::Datagram

#endif // DATAGRAM_CONNECTION_H