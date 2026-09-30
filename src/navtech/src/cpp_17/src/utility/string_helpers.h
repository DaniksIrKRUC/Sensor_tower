#ifndef STRING_HELPERS_H
#define STRING_HELPERS_H

#include <algorithm> 
#include <functional> 
#include <cctype>
#include <locale>
#include <string>
#include <vector>
#include <sstream>
#include <type_traits>

namespace Navtech::Utility {

    inline std::string to_hex_string(const std::vector<uint8_t>& v) 
	{
		std::ostringstream ss { };

		ss << std::hex << std::setfill('0') << std::uppercase;
	
		for(const auto i : v) {
			ss << std::setw(2) << static_cast<unsigned>(i);
		}

		return ss.str();
	}


	template <typename T, typename std::enable_if<std::is_integral<T>::value, bool>::type = true>
	inline std::string to_hex_string(const T& v) 
	{
		std::ostringstream ss { };

		ss << "0x";
		ss << std::hex << std::setfill('0') << std::uppercase;
		ss << std::setw(2) << static_cast<unsigned>(v);
		return ss.str();
	}


    // trim from start
    //
    static inline std::string& ltrim(std::string& s) 
    {
        s.erase(
            s.begin(), 
            std::find_if(s.begin(), s.end(), std::not1(std::ptr_fun<int, int>(std::isspace)))
        );

        return s;
    }


    static inline std::string ltrim(std::string&& s) 
    {
        s.erase(
            s.begin(), 
            std::find_if(s.begin(), s.end(), std::not1(std::ptr_fun<int, int>(std::isspace)))
        );

        return s;
    }

    // trim from end
    //
    static inline std::string& rtrim(std::string& s) 
    {
        s.erase(
            std::find_if(s.rbegin(), 
            s.rend(),
            std::not1(std::ptr_fun<int, int>(std::isspace))).base(), s.end()
        );

        return s;
    }


    static inline std::string rtrim(std::string&& s) 
    {
        s.erase(
            std::find_if(s.rbegin(), 
            s.rend(),
            std::not1(std::ptr_fun<int, int>(std::isspace))).base(), s.end()
        );

        return s;
    }


    // trim from both ends
    //
    static inline std::string& trim(std::string& s) 
    {
        return ltrim(rtrim(s));
    }
    

    static inline std::string trim(std::string&& s) 
    {
        return ltrim(rtrim(s));
    }


    static inline std::vector<std::string>& split(const std::string& s, char delim, std::vector<std::string>& elems) 
    {
        std::stringstream ss { s };
        std::string item;

        while (std::getline(ss, item, delim)) {
            elems.push_back(item);
        }

        return elems;
    }


    static inline std::vector<std::string> split(const std::string& s, char delim) 
    {
        std::vector<std::string> elems { };

        split(s, delim, elems);
        return elems;
    }


    static inline void replace(std::string& s, const std::string& search, const std::string& replace) 
    {
        for (size_t pos = 0; ; pos += replace.length()) {
            pos = s.find(search, pos);

            if (pos == std::string::npos) break;

            s.erase(pos, search.length());
            s.insert(pos, replace);
        }
    }


} // namespace Navtech::Utility

#endif // STRING_HELPERS_H