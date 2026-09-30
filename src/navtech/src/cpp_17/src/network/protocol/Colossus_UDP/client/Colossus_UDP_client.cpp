#include "Colossus_UDP_client.h"
#include "Colossus_UDP_events.h"

#include "Log.h"
using Navtech::Utility::stdout_log;
using Navtech::Utility::endl;
using Navtech::Utility::Logging_level;

namespace Navtech::Networking::Colossus_protocol::UDP {

    Client::Client(const Endpoint& local_endpt) :
        client          { local_endpt, Client_event::dispatcher },
        msg_dispatcher  { *this, Client_event::dispatcher }
    {
    }


    void Client::start()
    {
        client.start();
        msg_dispatcher.start();
    }


    void Client::stop()
    {
        stdout_log << "UDP dispatcher stopping..." << endl;
        msg_dispatcher.stop();
        msg_dispatcher.join();

        stdout_log << "UDP client stopping..." << endl;
        client.stop();
        client.join();
    }


    void Client::set_handler(Type type, const Handler& handler)
    {
        msg_dispatcher.attach_to(type, handler);
    }


    void Client::remove_handler(Type type)
    {
        msg_dispatcher.detach_from(type);
    }

} // namespace Navtech::Networking::Colossos_protocol::UDP