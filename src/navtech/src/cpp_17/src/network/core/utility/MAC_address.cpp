#include <algorithm>
#include <iomanip>

#include "MAC_address.h"
#include "string_helpers.h"


namespace Navtech::Networking {


    MAC_address::MAC_address(std::string_view mac_str) :
        octets { from_string(mac_str) }
    {
    }


    MAC_address::MAC_address(const std::uint8_t* const byte_array)
    {
        using namespace std;

        copy_n(byte_array, num_octets, begin(octets));
    }


    MAC_address::MAC_address(const MAC_address::Byte_array& byte_array) :
        octets { byte_array }
    {
    }


    MAC_address& MAC_address::operator=(const Byte_array& mac_addr)
    {
        octets = mac_addr;
        return *this;
    }


    MAC_address& MAC_address::operator=(std::string_view mac_str)
    {
        octets = from_string(mac_str);
        return *this;
    }


    MAC_address::Byte_array MAC_address::to_byte_array() const
    {
        return octets;
    }

    std::string MAC_address::to_string() const
    {
        using namespace std;

        stringstream ss { };
        ss << hex;
        ss << setw(2) << setfill('0') << static_cast<int>(octets[0]) << ":";
        ss << setw(2) << setfill('0') << static_cast<int>(octets[1]) << ":";
        ss << setw(2) << setfill('0') << static_cast<int>(octets[2]) << ":";
        ss << setw(2) << setfill('0') << static_cast<int>(octets[3]) << ":";
        ss << setw(2) << setfill('0') << static_cast<int>(octets[4]) << ":";
        ss << setw(2) << setfill('0') << static_cast<int>(octets[5]);

        return ss.str();
    }


    MAC_address::Byte_array MAC_address::from_string(std::string_view add_str)
    {
        using namespace std;

        auto elems = Utility::split(string { add_str }, ':');

        if (elems.size() != num_octets) return { };

        Byte_array byte_array { };

        byte_array[0] = stoi(elems[0], 0, 16);
        byte_array[1] = stoi(elems[1], 0, 16);
        byte_array[2] = stoi(elems[2], 0, 16);
        byte_array[3] = stoi(elems[3], 0, 16);
        byte_array[4] = stoi(elems[4], 0, 16);
        byte_array[5] = stoi(elems[5], 0, 16);

        return byte_array;
    }

} // namespace Navtech::Networking