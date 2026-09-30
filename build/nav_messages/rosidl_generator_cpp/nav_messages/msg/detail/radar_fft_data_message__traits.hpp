// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from nav_messages:msg/RadarFftDataMessage.idl
// generated code does not contain a copyright notice

#ifndef NAV_MESSAGES__MSG__DETAIL__RADAR_FFT_DATA_MESSAGE__TRAITS_HPP_
#define NAV_MESSAGES__MSG__DETAIL__RADAR_FFT_DATA_MESSAGE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "nav_messages/msg/detail/radar_fft_data_message__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace nav_messages
{

namespace msg
{

inline void to_flow_style_yaml(
  const RadarFftDataMessage & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: angle
  {
    if (msg.angle.size() == 0) {
      out << "angle: []";
    } else {
      out << "angle: [";
      size_t pending_items = msg.angle.size();
      for (auto item : msg.angle) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: azimuth
  {
    if (msg.azimuth.size() == 0) {
      out << "azimuth: []";
    } else {
      out << "azimuth: [";
      size_t pending_items = msg.azimuth.size();
      for (auto item : msg.azimuth) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: sweep_counter
  {
    if (msg.sweep_counter.size() == 0) {
      out << "sweep_counter: []";
    } else {
      out << "sweep_counter: [";
      size_t pending_items = msg.sweep_counter.size();
      for (auto item : msg.sweep_counter) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: ntp_seconds
  {
    if (msg.ntp_seconds.size() == 0) {
      out << "ntp_seconds: []";
    } else {
      out << "ntp_seconds: [";
      size_t pending_items = msg.ntp_seconds.size();
      for (auto item : msg.ntp_seconds) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: ntp_split_seconds
  {
    if (msg.ntp_split_seconds.size() == 0) {
      out << "ntp_split_seconds: []";
    } else {
      out << "ntp_split_seconds: [";
      size_t pending_items = msg.ntp_split_seconds.size();
      for (auto item : msg.ntp_split_seconds) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: data
  {
    if (msg.data.size() == 0) {
      out << "data: []";
    } else {
      out << "data: [";
      size_t pending_items = msg.data.size();
      for (auto item : msg.data) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: data_length
  {
    if (msg.data_length.size() == 0) {
      out << "data_length: []";
    } else {
      out << "data_length: [";
      size_t pending_items = msg.data_length.size();
      for (auto item : msg.data_length) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RadarFftDataMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_block_style_yaml(msg.header, out, indentation + 2);
  }

  // member: angle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.angle.size() == 0) {
      out << "angle: []\n";
    } else {
      out << "angle:\n";
      for (auto item : msg.angle) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: azimuth
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.azimuth.size() == 0) {
      out << "azimuth: []\n";
    } else {
      out << "azimuth:\n";
      for (auto item : msg.azimuth) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: sweep_counter
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.sweep_counter.size() == 0) {
      out << "sweep_counter: []\n";
    } else {
      out << "sweep_counter:\n";
      for (auto item : msg.sweep_counter) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: ntp_seconds
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.ntp_seconds.size() == 0) {
      out << "ntp_seconds: []\n";
    } else {
      out << "ntp_seconds:\n";
      for (auto item : msg.ntp_seconds) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: ntp_split_seconds
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.ntp_split_seconds.size() == 0) {
      out << "ntp_split_seconds: []\n";
    } else {
      out << "ntp_split_seconds:\n";
      for (auto item : msg.ntp_split_seconds) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: data
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.data.size() == 0) {
      out << "data: []\n";
    } else {
      out << "data:\n";
      for (auto item : msg.data) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: data_length
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.data_length.size() == 0) {
      out << "data_length: []\n";
    } else {
      out << "data_length:\n";
      for (auto item : msg.data_length) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RadarFftDataMessage & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace nav_messages

namespace rosidl_generator_traits
{

[[deprecated("use nav_messages::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const nav_messages::msg::RadarFftDataMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  nav_messages::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use nav_messages::msg::to_yaml() instead")]]
inline std::string to_yaml(const nav_messages::msg::RadarFftDataMessage & msg)
{
  return nav_messages::msg::to_yaml(msg);
}

template<>
inline const char * data_type<nav_messages::msg::RadarFftDataMessage>()
{
  return "nav_messages::msg::RadarFftDataMessage";
}

template<>
inline const char * name<nav_messages::msg::RadarFftDataMessage>()
{
  return "nav_messages/msg/RadarFftDataMessage";
}

template<>
struct has_fixed_size<nav_messages::msg::RadarFftDataMessage>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<nav_messages::msg::RadarFftDataMessage>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<nav_messages::msg::RadarFftDataMessage>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // NAV_MESSAGES__MSG__DETAIL__RADAR_FFT_DATA_MESSAGE__TRAITS_HPP_
