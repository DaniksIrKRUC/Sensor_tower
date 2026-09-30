// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from nav_messages:msg/RadarConfigurationMessage.idl
// generated code does not contain a copyright notice

#ifndef NAV_MESSAGES__MSG__DETAIL__RADAR_CONFIGURATION_MESSAGE__TRAITS_HPP_
#define NAV_MESSAGES__MSG__DETAIL__RADAR_CONFIGURATION_MESSAGE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "nav_messages/msg/detail/radar_configuration_message__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace nav_messages
{

namespace msg
{

inline void to_flow_style_yaml(
  const RadarConfigurationMessage & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: azimuth_samples
  {
    if (msg.azimuth_samples.size() == 0) {
      out << "azimuth_samples: []";
    } else {
      out << "azimuth_samples: [";
      size_t pending_items = msg.azimuth_samples.size();
      for (auto item : msg.azimuth_samples) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: encoder_size
  {
    if (msg.encoder_size.size() == 0) {
      out << "encoder_size: []";
    } else {
      out << "encoder_size: [";
      size_t pending_items = msg.encoder_size.size();
      for (auto item : msg.encoder_size) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: bin_size
  {
    if (msg.bin_size.size() == 0) {
      out << "bin_size: []";
    } else {
      out << "bin_size: [";
      size_t pending_items = msg.bin_size.size();
      for (auto item : msg.bin_size) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: range_in_bins
  {
    if (msg.range_in_bins.size() == 0) {
      out << "range_in_bins: []";
    } else {
      out << "range_in_bins: [";
      size_t pending_items = msg.range_in_bins.size();
      for (auto item : msg.range_in_bins) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: expected_rotation_rate
  {
    if (msg.expected_rotation_rate.size() == 0) {
      out << "expected_rotation_rate: []";
    } else {
      out << "expected_rotation_rate: [";
      size_t pending_items = msg.expected_rotation_rate.size();
      for (auto item : msg.expected_rotation_rate) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: range_gain
  {
    if (msg.range_gain.size() == 0) {
      out << "range_gain: []";
    } else {
      out << "range_gain: [";
      size_t pending_items = msg.range_gain.size();
      for (auto item : msg.range_gain) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: range_offset
  {
    if (msg.range_offset.size() == 0) {
      out << "range_offset: []";
    } else {
      out << "range_offset: [";
      size_t pending_items = msg.range_offset.size();
      for (auto item : msg.range_offset) {
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
  const RadarConfigurationMessage & msg,
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

  // member: azimuth_samples
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.azimuth_samples.size() == 0) {
      out << "azimuth_samples: []\n";
    } else {
      out << "azimuth_samples:\n";
      for (auto item : msg.azimuth_samples) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: encoder_size
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.encoder_size.size() == 0) {
      out << "encoder_size: []\n";
    } else {
      out << "encoder_size:\n";
      for (auto item : msg.encoder_size) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: bin_size
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.bin_size.size() == 0) {
      out << "bin_size: []\n";
    } else {
      out << "bin_size:\n";
      for (auto item : msg.bin_size) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: range_in_bins
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.range_in_bins.size() == 0) {
      out << "range_in_bins: []\n";
    } else {
      out << "range_in_bins:\n";
      for (auto item : msg.range_in_bins) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: expected_rotation_rate
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.expected_rotation_rate.size() == 0) {
      out << "expected_rotation_rate: []\n";
    } else {
      out << "expected_rotation_rate:\n";
      for (auto item : msg.expected_rotation_rate) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: range_gain
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.range_gain.size() == 0) {
      out << "range_gain: []\n";
    } else {
      out << "range_gain:\n";
      for (auto item : msg.range_gain) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: range_offset
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.range_offset.size() == 0) {
      out << "range_offset: []\n";
    } else {
      out << "range_offset:\n";
      for (auto item : msg.range_offset) {
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

inline std::string to_yaml(const RadarConfigurationMessage & msg, bool use_flow_style = false)
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
  const nav_messages::msg::RadarConfigurationMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  nav_messages::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use nav_messages::msg::to_yaml() instead")]]
inline std::string to_yaml(const nav_messages::msg::RadarConfigurationMessage & msg)
{
  return nav_messages::msg::to_yaml(msg);
}

template<>
inline const char * data_type<nav_messages::msg::RadarConfigurationMessage>()
{
  return "nav_messages::msg::RadarConfigurationMessage";
}

template<>
inline const char * name<nav_messages::msg::RadarConfigurationMessage>()
{
  return "nav_messages/msg/RadarConfigurationMessage";
}

template<>
struct has_fixed_size<nav_messages::msg::RadarConfigurationMessage>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<nav_messages::msg::RadarConfigurationMessage>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<nav_messages::msg::RadarConfigurationMessage>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // NAV_MESSAGES__MSG__DETAIL__RADAR_CONFIGURATION_MESSAGE__TRAITS_HPP_
