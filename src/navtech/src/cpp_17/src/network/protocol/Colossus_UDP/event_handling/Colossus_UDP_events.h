#ifndef COLOSSUS_UDP_EVENTS_H
#define COLOSSUS_UDP_EVENTS_H

#include "Event_dispatcher.h"
#include "Colossus_UDP_protocol.h"


namespace Navtech::Networking::Colossus_protocol::UDP {

    enum class Event {
        send_message,           // A message is ready to be sent
        received_message,       // A message has been received
        tx_error,               // An error occurred when sending
        rx_error,               // An error occurred when receiving
        connection_error,       // A (terminal) error occurred with the specified connection
        client_connected,       // A new client connection has been established
        client_disconnected     // A client connection has disconnected
	};  

    // See Event_dispatcher.h for details on how to configure Event_traits
    //
	template <Event> struct Event_traits 				            { using Parameter = Message::ID; };
    template <> struct Event_traits<Event::send_message>            { using Parameter = Message; };
    template <> struct Event_traits<Event::received_message>        { using Parameter = Message; };

	using Event_dispatcher = Utility::Dispatcher<Event, Event_traits>;

    // Global instance declarations, for client and/or server
    // 
    namespace Client_event {

        extern Event_dispatcher dispatcher;
    }

} // namespace Navtech::Networking::Colossus_protocol::UDP

#endif // COLOSSUS_UDP_EVENTS_H