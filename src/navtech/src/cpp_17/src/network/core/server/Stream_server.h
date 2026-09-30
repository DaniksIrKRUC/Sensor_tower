#ifndef STREAM_SERVER_H
#define STREAM_SERVER_H

#include "Stream_server_traits.h"
#include "Event_traits.h"
#include "Acceptor.h"
#include "Connection_manager.h"
#include "Endpoint.h"

#include "Active.h"


namespace Navtech::Networking {

    template <Protocol protocol, Transport transport>
    class Stream_server : public Utility::Active {
    public:
        // Type aliases.
        // The '_Ty' postfix denotes a template type. Rather than being
        // supplied as template parameters on the class (which would be
        // unwieldy) these parameters are looked up from the Connection_traits
        // class, using the appropriate combination of protocol and transport
        //
        using Event_traits      = Navtech::Networking::Event_traits<protocol, transport>;
        using Server_traits     = Stream_server_traits<protocol, transport>;
        using Socket_ptr_Ty     = typename Server_traits::Socket_ptr;
        using Message           = typename Server_traits::Message;
        using ID_Ty             = typename Server_traits::ID;
        using Dispatcher_Ty     = typename Event_traits::Dispatcher;

        Stream_server(Dispatcher_Ty& event_dispatcher);
        Stream_server(Port port, Dispatcher_Ty& event_dispatcher);

        void bind_to(Port port);

        void send(const Message& msg);
        void send(Message&& msg);

    protected:
        friend class Acceptor<protocol, transport>;

        // Asynchronous interface
        //
        void start_connection(const Socket_ptr_Ty& socket);
        void start_connection_impl(const Socket_ptr_Ty& socket);

    private:
        // External associations
        //
        association_to<Dispatcher_Ty> dispatcher;

        Acceptor<protocol, transport>           acceptor;
        Connection_manager<protocol, transport> connection_mgr;

        // Active object overrides
        //
        void on_start() override;
        void on_stop()  override;

        // Error event handling
        //
        Utility::Event_handler<ID_Ty> error_handler { };
        void on_error(ID_Ty connection_id);

        // Internal state
        //
        bool enabled { false };

        // Send implementation
        //
        Utility::Event_handler<Message> send_handler { };    
    };


    // ----------------------------------------------------------------------------------------------------------------
    //
    template <Protocol protocol, Transport transport>
    Stream_server<protocol, transport>::Stream_server(
        Stream_server<protocol, transport>::Dispatcher_Ty& event_dispatcher
    ) :
        Active          { "Stream Server" },
        dispatcher      { associate_with(event_dispatcher) },
        acceptor        { *this },
        connection_mgr  { event_dispatcher }
    {
    }


    template <Protocol protocol, Transport transport>
    Stream_server<protocol, transport>::Stream_server(
        Port                                                port,
        Stream_server<protocol, transport>::Dispatcher_Ty&  event_dispatcher
    ) :
        Active          { "Stream Server" },
        dispatcher      { associate_with(event_dispatcher) },
        acceptor        { *this, port },
        connection_mgr  { event_dispatcher }
    {
    }


    template <Protocol protocol, Transport transport>
    void Stream_server<protocol, transport>::bind_to(Port port)
    {
        acceptor.bind_to(port);
    }


    template <Protocol protocol, Transport transport>
    void Stream_server<protocol, transport>::on_start()
    {
        error_handler.when_notified_invoke(
            [this](ID_Ty connection_id) 
            {
                async_call(&Stream_server::on_error, this, connection_id); 
            }
        );
        
        dispatcher->template attach_to<Event_traits::Connection_error>(error_handler);

        send_handler.when_notified_invoke(&Stream_server<protocol, transport>::send, this);
        dispatcher->template attach_to<Event_traits::Send_message>(send_handler);
        
        acceptor.start();
        enabled = true;

        // TODO - logging
        //
        stdout_log << Server_traits::Protocol_traits::name << " stream server - started." << endl;
    }


    template <Protocol protocol, Transport transport>
    void Stream_server<protocol, transport>::on_stop()
    {
        stdout_log << Server_traits::Protocol_traits::name << " stream server - stopping..." << endl;

        enabled = false;

        dispatcher->template detach_from<Event_traits::Connection_error>(error_handler);
        dispatcher->template detach_from<Event_traits::Send_message>(send_handler);

        acceptor.stop();
        acceptor.join();

        connection_mgr.remove_all();
    }


    template <Protocol protocol, Transport transport>
    void Stream_server<protocol, transport>::on_error(ID_Ty connection_id)
    {
        if (!enabled) return;

        stdout_log << "Stream server - received error from connection [" << connection_id << "]" << endl;

        connection_mgr.remove(connection_id);
    }


    template <Protocol protocol, Transport transport>
    void Stream_server<protocol, transport>::start_connection(const Socket_ptr_Ty& socket_ptr)
    {
        if (!enabled) return;
    
        async_call(&Stream_server<protocol, transport>::start_connection_impl, this, std::move(socket_ptr));
    }


    template <Protocol protocol, Transport transport>
    void Stream_server<protocol, transport>::start_connection_impl(const Socket_ptr_Ty& socket_ptr)
    {
        stdout_log << Server_traits::Protocol_traits::name << " stream server - starting new connection" << endl;
       
        connection_mgr.create_connection(std::move(*socket_ptr));
    }


    template <Protocol protocol, Transport transport>
    void Stream_server<protocol, transport>::send(const Message& msg)
    {
        if (!enabled) return;

        // Forward to the connection manager for 
        // distribution to the appropriate connection
        //
        connection_mgr.send(msg);
    }


    template <Protocol protocol, Transport transport>
    void Stream_server<protocol, transport>::send(Message&& msg)
    {
        if (!enabled) return;
        
        connection_mgr.send(std::move(msg));
    }

} // namespace Navtech::Networking

#endif // STREAM_SERVER_H