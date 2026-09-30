// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from nav_messages:msg/CameraConfigurationMessage.idl
// generated code does not contain a copyright notice

#ifndef NAV_MESSAGES__MSG__DETAIL__CAMERA_CONFIGURATION_MESSAGE__TRAITS_HPP_
#define NAV_MESSAGES__MSG__DETAIL__CAMERA_CONFIGURATION_MESSAGE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "nav_messages/msg/detail/camera_configuration_message__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace nav_messages
{

namespace msg
{

inline void to_flow_style_yaml(
  const CameraConfigurationMessage & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: height
  {
    out << "height: ";
    rosidl_generator_traits::value_to_yaml(msg.height, out);
    out << ", ";
  }

  // member: width
  {
    out << "width: ";
    rosidl_generator_traits::value_to_yaml(msg.width, out);
    out << ", ";
  }

  // member: channels
  {
    out << "channels: ";
    rosidl_generator_traits::value_to_yaml(msg.channels, out);
    out << ", ";
  }

  // member: fps
  {
    out << "fps: ";
    rosidl_generator_traits::value_to_yaml(msg.fps, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const CameraConfigurationMessage & msg,
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

  // member: height
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "height: ";
    rosidl_generator_traits::value_to_yaml(msg.height, out);
    out << "\n";
  }

  // member: width
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "width: ";
    rosidl_generator_traits::value_to_yaml(msg.width, out);
    out << "\n";
  }

  // member: channels
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "channels: ";
    rosidl_generator_traits::value_to_yaml(msg.channels, out);
    out << "\n";
  }

  // member: fps
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fps: ";
    rosidl_generator_traits::value_to_yaml(msg.fps, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const CameraConfigurationMessage & msg, bool use_flow_style = false)
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
  const nav_messages::msg::CameraConfigurationMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  nav_messages::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use nav_messages::msg::to_yaml() instead")]]
inline std::string to_yaml(const nav_messages::msg::CameraConfigurationMessage & msg)
{
  return nav_messages::msg::to_yaml(msg);
}

template<>
inline const char * data_type<nav_messages::msg::CameraConfigurationMessage>()
{
  return "nav_messages::msg::CameraConfigurationMessage";
}

template<>
inline const char * name<nav_messages::msg::CameraConfigurationMessage>()
{
  return "nav_messages/msg/CameraConfigurationMessage";
}

template<>
struct has_fixed_size<nav_messages::msg::CameraConfigurationMessage>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<nav_messages::msg::CameraConfigurationMessage>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<nav_messages::msg::CameraConfigurationMessage>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // NAV_MESSAGES__MSG__DETAIL__CAMERA_CONFIGURATION_MESSAGE__TRAITS_HPP_
