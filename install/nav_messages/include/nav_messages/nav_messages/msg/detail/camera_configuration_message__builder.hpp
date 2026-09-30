// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from nav_messages:msg/CameraConfigurationMessage.idl
// generated code does not contain a copyright notice

#ifndef NAV_MESSAGES__MSG__DETAIL__CAMERA_CONFIGURATION_MESSAGE__BUILDER_HPP_
#define NAV_MESSAGES__MSG__DETAIL__CAMERA_CONFIGURATION_MESSAGE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "nav_messages/msg/detail/camera_configuration_message__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace nav_messages
{

namespace msg
{

namespace builder
{

class Init_CameraConfigurationMessage_fps
{
public:
  explicit Init_CameraConfigurationMessage_fps(::nav_messages::msg::CameraConfigurationMessage & msg)
  : msg_(msg)
  {}
  ::nav_messages::msg::CameraConfigurationMessage fps(::nav_messages::msg::CameraConfigurationMessage::_fps_type arg)
  {
    msg_.fps = std::move(arg);
    return std::move(msg_);
  }

private:
  ::nav_messages::msg::CameraConfigurationMessage msg_;
};

class Init_CameraConfigurationMessage_channels
{
public:
  explicit Init_CameraConfigurationMessage_channels(::nav_messages::msg::CameraConfigurationMessage & msg)
  : msg_(msg)
  {}
  Init_CameraConfigurationMessage_fps channels(::nav_messages::msg::CameraConfigurationMessage::_channels_type arg)
  {
    msg_.channels = std::move(arg);
    return Init_CameraConfigurationMessage_fps(msg_);
  }

private:
  ::nav_messages::msg::CameraConfigurationMessage msg_;
};

class Init_CameraConfigurationMessage_width
{
public:
  explicit Init_CameraConfigurationMessage_width(::nav_messages::msg::CameraConfigurationMessage & msg)
  : msg_(msg)
  {}
  Init_CameraConfigurationMessage_channels width(::nav_messages::msg::CameraConfigurationMessage::_width_type arg)
  {
    msg_.width = std::move(arg);
    return Init_CameraConfigurationMessage_channels(msg_);
  }

private:
  ::nav_messages::msg::CameraConfigurationMessage msg_;
};

class Init_CameraConfigurationMessage_height
{
public:
  explicit Init_CameraConfigurationMessage_height(::nav_messages::msg::CameraConfigurationMessage & msg)
  : msg_(msg)
  {}
  Init_CameraConfigurationMessage_width height(::nav_messages::msg::CameraConfigurationMessage::_height_type arg)
  {
    msg_.height = std::move(arg);
    return Init_CameraConfigurationMessage_width(msg_);
  }

private:
  ::nav_messages::msg::CameraConfigurationMessage msg_;
};

class Init_CameraConfigurationMessage_header
{
public:
  Init_CameraConfigurationMessage_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CameraConfigurationMessage_height header(::nav_messages::msg::CameraConfigurationMessage::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_CameraConfigurationMessage_height(msg_);
  }

private:
  ::nav_messages::msg::CameraConfigurationMessage msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::nav_messages::msg::CameraConfigurationMessage>()
{
  return nav_messages::msg::builder::Init_CameraConfigurationMessage_header();
}

}  // namespace nav_messages

#endif  // NAV_MESSAGES__MSG__DETAIL__CAMERA_CONFIGURATION_MESSAGE__BUILDER_HPP_
