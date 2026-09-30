#ifndef COLOSSUS_UDP_CLIENT_H
#define COLOSSUS_UDP_CLIENT_H

#include "Colossus_UDP_protocol.h"
#include "Datagram_client.h"
#include "Message_dispatchers.h"
#include "Time_utils.h"

namespace Navtech::Networking::Colossus_protocol::UDP {

    // Client for handling Colossus messages to/from a radar
    //
    class Client {
    public:
        using Handler           = std::function<void(Client&, Message&)>;
        using Dispatcher_type   = Message_dispatcher<Protocol::colossus, Transport::udp, Client>;
        using Client_type       = Datagram_client<Protocol::colossus, Transport::udp>;
       
        Client(const Endpoint& local_endpt);

        void start();
        void stop();

        void set_handler(Type type, const Handler& handler);
        void remove_handler(Type type);

    private:
        Client_type     client;
        Dispatcher_type msg_dispatcher;
    };

} // namespace Navtech::Networking::Colossus_protocol::UDP


#endif // COLOSSUS_UDP_CLIENT_H