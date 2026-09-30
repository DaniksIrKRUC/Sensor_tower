#ifndef COLOSSUS_UDP_MESSAGE_TYPES_H
#define COLOSSUS_UDP_MESSAGE_TYPES_H

#include <cstdint>

namespace Navtech::Networking::Colossus_protocol::UDP {

    enum class Type : std::uint8_t {
        invalid             = 0,
        discovery           = 10,
        network_settings    = 20,
        keep_alive          = 30,
        point_cloud         = 40
    };

} // namespace Navtech::Networking::Colossus_protocol::UDP

#endif // COLOSSUS_UDP_MESSAGE_TYPES_H