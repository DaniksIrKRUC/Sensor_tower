// ---------------------------------------------------------------------------------------------------------------------
// Copyright 2023 Navtech Radar Limited
// This file is part of IASDK which is released under The MIT License (MIT).
// See file LICENSE.txt in project root or go to https://opensource.org/licenses/MIT
// for full license details.
//
// Disclaimer:
// Navtech Radar is furnishing this item "as is". Navtech Radar does not provide 
// any warranty of the item whatsoever, whether express, implied, or statutory,
// including, but not limited to, any warranty of merchantability or fitness
// for a particular purpose or any warranty that the contents of the item will
// be error-free.
// In no respect shall Navtech Radar incur any liability for any damages, including,
// but limited to, direct, indirect, special, or consequential damages arising
// out of, resulting from, or any way connected to the use of the item, whether
// or not based upon warranty, contract, tort, or otherwise; whether or not
// injury was sustained by persons or property or otherwise; and whether or not
// loss was sustained from, or arose out of, the results of, the item, or any
// services that may be provided by Navtech Radar.
// ---------------------------------------------------------------------------------------------------------------------

#ifndef ACCEPTOR_H
#define ACCEPTOR_H

#include "Stream_server_traits.h"
#include "Active.h"
#include "Endpoint.h"
#include "pointer_types.h"
#include "Log.h"

using Navtech::Utility::stdout_log;
using Navtech::Utility::endl;
using Navtech::Utility::Logging_level;

namespace Navtech::Networking {

    template <Protocol, Transport> class Stream_server;


    template <Protocol protocol, Transport transport>
    class Acceptor : public Utility::Active {
    public:
        using Server_traits     = Stream_server_traits<protocol, transport>;
        using Protocol_traits   = Navtech::Networking::Protocol_traits<protocol, transport>;
        using Socket            = typename Server_traits::Socket;

        Acceptor(Stream_server<protocol, transport>& svr);
        Acceptor(Stream_server<protocol, transport>& svr, Port port);

        void bind_to(Port port);

    private:
        association_to<Stream_server<protocol, transport>> server;
        Endpoint endpoint;
        Socket   listening_socket { };

        // Active object overrides
        //
        void on_start() override;
        void on_stop()  override;
        Active::Task_state run() override;
    };



    template <Protocol protocol, Transport transport>
    Acceptor<protocol, transport>::Acceptor(Stream_server<protocol, transport>& svr) :
        Active   { "Acceptor" },
        server   { associate_with(svr) }
    {
    }


    template <Protocol protocol, Transport transport>
    Acceptor<protocol, transport>::Acceptor(Stream_server<protocol, transport>& svr, Port port) :
        Active   { "Acceptor" },
        server   { associate_with(svr) },
        endpoint { port }
    {
    }


    template <Protocol protocol, Transport transport>
    void Acceptor<protocol, transport>::bind_to(Port port)
    {
        endpoint.port = port;
    }


    template <Protocol protocol, Transport transport>
    void Acceptor<protocol, transport>::on_start()
    {
        stdout_log << "Accepter - listening on port [" << endpoint.port.to_string() << "]" << endl;;

        try {
            listening_socket.bind_to(endpoint);
            listening_socket.listen(Server_traits::max_connections);
        }
        catch (std::system_error& e) {
            // TODO - diagnostic logging
            //
            stdout_log << "Acceptor on_start() caught exception: " + std::string(e.what()) << endl;
        }
    }


    template <Protocol protocol, Transport transport>
    void Acceptor<protocol, transport>::on_stop()
    {
       listening_socket.close(); 
    }


    template <Protocol protocol, Transport transport>
    Utility::Active::Task_state Acceptor<protocol, transport>::run()
    {
        try {
            try_dispatch_async();
            auto incoming = Server_traits::allocate_socket(listening_socket.accept());

            // TODO - configure socket options, if required.
            //

            auto client = incoming->peer();
            stdout_log << "Acceptor - connected to [" << client.to_string() << "]" << endl;

            server->start_connection(std::move(incoming));
        }
        catch (std::system_error& ex) {
            stdout_log << Logging_level::debug << "Acceptor - " << ex.what() << endl;
            return Task_state::finished;
        }

        return Task_state::not_finished;
    }

} // namespace Navtech::Networking


#endif