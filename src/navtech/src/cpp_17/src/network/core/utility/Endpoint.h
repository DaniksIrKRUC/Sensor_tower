#ifndef ENDPOINT_H
#define ENDPOINT_H

#include <cstdint>
#include <string>
#ifdef __linux__
#include <arpa/inet.h>
#elif _WIN32
#include <winsock2.h>
#include <ws2tcpip.h>
#endif

#include "IP_address.h"
#include "net_conversion.h"
#include "Network_port.h"

namespace Navtech::Networking {

    struct Endpoint {
        IP_address ip_address { Networking::IP_address::any() };
        Port       port       { };


        Endpoint() = default;
        
        Endpoint(const Port& p) : port { p }
        {
        }

        Endpoint(const IP_address& ip_addr, const Port& p) : 
            ip_address  { ip_addr },
            port        { p }
        {
        }

        Endpoint(const struct sockaddr& socket_addr, const Port& p)
        {
            union Address{
                struct sockaddr sa;
                struct sockaddr_in sa_ipv4;
            };

            Address addr { socket_addr };
            ip_address = Networking::IP_address { addr.sa_ipv4.sin_addr.s_addr, Endian::network };
            port       = p;
        }

        Endpoint(const struct sockaddr& socket_addr)
        {
            union Address{
                struct sockaddr sa;
                struct sockaddr_in sa_ipv4;
            };

            Address addr { socket_addr };
            ip_address = IP_address { addr.sa_ipv4.sin_addr.s_addr, Endian::network };
            port       = Port       { addr.sa_ipv4.sin_port, Endian::network };
        }

        Endpoint(const struct sockaddr_in& socket_addr) :
            ip_address { socket_addr },
            port       { socket_addr.sin_port, Endian::network }
        {
        }

        std::string to_string() const
        {
            return ip_address.to_string() + ":" + port.to_string();
        }

        struct sockaddr_in to_sockaddr() const
        {
            sockaddr_in addr { };
            addr.sin_family         = AF_INET;
            addr.sin_addr.s_addr    = ip_address.value_as(Endian::network);
            addr.sin_port           = port.to_uint16(Endian::network);

            return addr;
        }

        struct ip_mreq to_mreq() const
        {
            struct ip_mreq mreq { };
            mreq.imr_multiaddr.s_addr = ip_address.value_as(Endian::network);
            mreq.imr_interface.s_addr = IP_address::any().value_as(Endian::network);

            return mreq;
        }

        static Endpoint null()
        {
            return Endpoint { };
        }

        operator bool() const
        {
            return port.to_uint16() != 0;
        }
    };


    inline bool operator== (const Endpoint& lhs, const Endpoint& rhs)
    {
        return ((lhs.ip_address == rhs.ip_address) && (lhs.port == rhs.port));
    }


    inline bool operator!= (const Endpoint& lhs, const Endpoint& rhs)
    {
        return !(lhs == rhs);
    }

} // namespace Navtech::Networking

#endif // ENDPOINT_H