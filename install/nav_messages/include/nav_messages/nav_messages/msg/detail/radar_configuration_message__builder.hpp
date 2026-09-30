// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from nav_messages:msg/RadarConfigurationMessage.idl
// generated code does not contain a copyright notice

#ifndef NAV_MESSAGES__MSG__DETAIL__RADAR_CONFIGURATION_MESSAGE__BUILDER_HPP_
#define NAV_MESSAGES__MSG__DETAIL__RADAR_CONFIGURATION_MESSAGE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "nav_messages/msg/detail/radar_configuration_message__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace nav_messages
{

namespace msg
{

namespace builder
{

class Init_RadarConfigurationMessage_range_offset
{
public:
  explicit Init_RadarConfigurationMessage_range_offset(::nav_messages::msg::RadarConfigurationMessage & msg)
  : msg_(msg)
  {}
  ::nav_messages::msg::RadarConfigurationMessage range_offset(::nav_messages::msg::RadarConfigurationMessage::_range_offset_type arg)
  {
    msg_.range_offset = std::move(arg);
    return std::move(msg_);
  }

private:
  ::nav_messages::msg::RadarConfigurationMessage msg_;
};

class Init_RadarConfigurationMessage_range_gain
{
public:
  explicit Init_RadarConfigurationMessage_range_gain(::nav_messages::msg::RadarConfigurationMessage & msg)
  : msg_(msg)
  {}
  Init_RadarConfigurationMessage_range_offset range_gain(::nav_messages::msg::RadarConfigurationMessage::_range_gain_type arg)
  {
    msg_.range_gain = std::move(arg);
    return Init_RadarConfigurationMessage_range_offset(msg_);
  }

private:
  ::nav_messages::msg::RadarConfigurationMessage msg_;
};

class Init_RadarConfigurationMessage_expected_rotation_rate
{
public:
  explicit Init_RadarConfigurationMessage_expected_rotation_rate(::nav_messages::msg::RadarConfigurationMessage & msg)
  : msg_(msg)
  {}
  Init_RadarConfigurationMessage_range_gain expected_rotation_rate(::nav_messages::msg::RadarConfigurationMessage::_expected_rotation_rate_type arg)
  {
    msg_.expected_rotation_rate = std::move(arg);
    return Init_RadarConfigurationMessage_range_gain(msg_);
  }

private:
  ::nav_messages::msg::RadarConfigurationMessage msg_;
};

class Init_RadarConfigurationMessage_range_in_bins
{
public:
  explicit Init_RadarConfigurationMessage_range_in_bins(::nav_messages::msg::RadarConfigurationMessage & msg)
  : msg_(msg)
  {}
  Init_RadarConfigurationMessage_expected_rotation_rate range_in_bins(::nav_messages::msg::RadarConfigurationMessage::_range_in_bins_type arg)
  {
    msg_.range_in_bins = std::move(arg);
    return Init_RadarConfigurationMessage_expected_rotation_rate(msg_);
  }

private:
  ::nav_messages::msg::RadarConfigurationMessage msg_;
};

class Init_RadarConfigurationMessage_bin_size
{
public:
  explicit Init_RadarConfigurationMessage_bin_size(::nav_messages::msg::RadarConfigurationMessage & msg)
  : msg_(msg)
  {}
  Init_RadarConfigurationMessage_range_in_bins bin_size(::nav_messages::msg::RadarConfigurationMessage::_bin_size_type arg)
  {
    msg_.bin_size = std::move(arg);
    return Init_RadarConfigurationMessage_range_in_bins(msg_);
  }

private:
  ::nav_messages::msg::RadarConfigurationMessage msg_;
};

class Init_RadarConfigurationMessage_encoder_size
{
public:
  explicit Init_RadarConfigurationMessage_encoder_size(::nav_messages::msg::RadarConfigurationMessage & msg)
  : msg_(msg)
  {}
  Init_RadarConfigurationMessage_bin_size encoder_size(::nav_messages::msg::RadarConfigurationMessage::_encoder_size_type arg)
  {
    msg_.encoder_size = std::move(arg);
    return Init_RadarConfigurationMessage_bin_size(msg_);
  }

private:
  ::nav_messages::msg::RadarConfigurationMessage msg_;
};

class Init_RadarConfigurationMessage_azimuth_samples
{
public:
  explicit Init_RadarConfigurationMessage_azimuth_samples(::nav_messages::msg::RadarConfigurationMessage & msg)
  : msg_(msg)
  {}
  Init_RadarConfigurationMessage_encoder_size azimuth_samples(::nav_messages::msg::RadarConfigurationMessage::_azimuth_samples_type arg)
  {
    msg_.azimuth_samples = std::move(arg);
    return Init_RadarConfigurationMessage_encoder_size(msg_);
  }

private:
  ::nav_messages::msg::RadarConfigurationMessage msg_;
};

class Init_RadarConfigurationMessage_header
{
public:
  Init_RadarConfigurationMessage_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RadarConfigurationMessage_azimuth_samples header(::nav_messages::msg::RadarConfigurationMessage::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_RadarConfigurationMessage_azimuth_samples(msg_);
  }

private:
  ::nav_messages::msg::RadarConfigurationMessage msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::nav_messages::msg::RadarConfigurationMessage>()
{
  return nav_messages::msg::builder::Init_RadarConfigurationMessage_header();
}

}  // namespace nav_messages

#endif  // NAV_MESSAGES__MSG__DETAIL__RADAR_CONFIGURATION_MESSAGE__BUILDER_HPP_
