#ifndef MAC_ADDRESS_H
#define MAC_ADDRESS_H

#include <cstdint>
#include <string_view>
#include <array>

#include "Endian.h"

namespace Navtech {

    namespace Networking {

        class MAC_address {
        public:
            static constexpr std::size_t num_octets { 6 };
            using Byte_array = std::array<std::uint8_t, num_octets>;
            
            MAC_address() = default;
            MAC_address(std::string_view add_str);
            MAC_address(const std::uint8_t* const byte_array);
            MAC_address(const Byte_array& byte_array);

            MAC_address& operator=(const Byte_array& mac_addr);
            MAC_address& operator=(std::string_view mac_str);
        
            Byte_array   to_byte_array() const;
            std::string  to_string() const;

        private:
            std::array<std::uint8_t, num_octets> octets { };

            Byte_array from_string(std::string_view add_str);
        };


    } // namespace Networking


    // User-defined literals
    //
    inline Networking::MAC_address operator""_mac(const char* mac_str, std::size_t sz)
    {
        return Networking::MAC_address { std::string_view { mac_str, sz } };
    }


} // namespace Navtech

#endif // MAC_ADDRESS_H