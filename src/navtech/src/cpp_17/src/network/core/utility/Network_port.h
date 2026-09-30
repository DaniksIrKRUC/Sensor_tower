#ifndef NETWORK_PORT_H
#define NETWORK_PORT_H

#include <cstdint>
#include <string>

#include "net_conversion.h"

namespace Navtech::Networking {

    class Port {
    public:
        Port() = default;
        Port(std::uint16_t port_num) : port { port_num } { }
        Port(std::uint16_t port_num, Endian from) : port { from == Endian::host ? port_num : to_uint16_host(port_num) } { }
        Port(const std::string& str) : port { static_cast<std::uint16_t>(std::stoi(str)) } { }

        std::uint16_t to_uint16() const              { return port; }
        std::uint16_t to_uint16(Endian to) const     { return (to == Endian::host ? port : to_uint16_network(port)); }
        std::string   to_string() const              { return std::to_string(port); }

        bool operator==(const Port& rhs) const       { return this->port == rhs.port; }
        bool operator!=(const Port& rhs) const       { return !(*this == rhs); }
    
    private:
        std::uint16_t port { };
    };

} // namepsace Navtech::Networking

#endif // NETWORK_PORT_H