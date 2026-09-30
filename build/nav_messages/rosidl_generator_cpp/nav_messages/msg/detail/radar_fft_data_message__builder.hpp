// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from nav_messages:msg/RadarFftDataMessage.idl
// generated code does not contain a copyright notice

#ifndef NAV_MESSAGES__MSG__DETAIL__RADAR_FFT_DATA_MESSAGE__BUILDER_HPP_
#define NAV_MESSAGES__MSG__DETAIL__RADAR_FFT_DATA_MESSAGE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "nav_messages/msg/detail/radar_fft_data_message__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace nav_messages
{

namespace msg
{

namespace builder
{

class Init_RadarFftDataMessage_data_length
{
public:
  explicit Init_RadarFftDataMessage_data_length(::nav_messages::msg::RadarFftDataMessage & msg)
  : msg_(msg)
  {}
  ::nav_messages::msg::RadarFftDataMessage data_length(::nav_messages::msg::RadarFftDataMessage::_data_length_type arg)
  {
    msg_.data_length = std::move(arg);
    return std::move(msg_);
  }

private:
  ::nav_messages::msg::RadarFftDataMessage msg_;
};

class Init_RadarFftDataMessage_data
{
public:
  explicit Init_RadarFftDataMessage_data(::nav_messages::msg::RadarFftDataMessage & msg)
  : msg_(msg)
  {}
  Init_RadarFftDataMessage_data_length data(::nav_messages::msg::RadarFftDataMessage::_data_type arg)
  {
    msg_.data = std::move(arg);
    return Init_RadarFftDataMessage_data_length(msg_);
  }

private:
  ::nav_messages::msg::RadarFftDataMessage msg_;
};

class Init_RadarFftDataMessage_ntp_split_seconds
{
public:
  explicit Init_RadarFftDataMessage_ntp_split_seconds(::nav_messages::msg::RadarFftDataMessage & msg)
  : msg_(msg)
  {}
  Init_RadarFftDataMessage_data ntp_split_seconds(::nav_messages::msg::RadarFftDataMessage::_ntp_split_seconds_type arg)
  {
    msg_.ntp_split_seconds = std::move(arg);
    return Init_RadarFftDataMessage_data(msg_);
  }

private:
  ::nav_messages::msg::RadarFftDataMessage msg_;
};

class Init_RadarFftDataMessage_ntp_seconds
{
public:
  explicit Init_RadarFftDataMessage_ntp_seconds(::nav_messages::msg::RadarFftDataMessage & msg)
  : msg_(msg)
  {}
  Init_RadarFftDataMessage_ntp_split_seconds ntp_seconds(::nav_messages::msg::RadarFftDataMessage::_ntp_seconds_type arg)
  {
    msg_.ntp_seconds = std::move(arg);
    return Init_RadarFftDataMessage_ntp_split_seconds(msg_);
  }

private:
  ::nav_messages::msg::RadarFftDataMessage msg_;
};

class Init_RadarFftDataMessage_sweep_counter
{
public:
  explicit Init_RadarFftDataMessage_sweep_counter(::nav_messages::msg::RadarFftDataMessage & msg)
  : msg_(msg)
  {}
  Init_RadarFftDataMessage_ntp_seconds sweep_counter(::nav_messages::msg::RadarFftDataMessage::_sweep_counter_type arg)
  {
    msg_.sweep_counter = std::move(arg);
    return Init_RadarFftDataMessage_ntp_seconds(msg_);
  }

private:
  ::nav_messages::msg::RadarFftDataMessage msg_;
};

class Init_RadarFftDataMessage_azimuth
{
public:
  explicit Init_RadarFftDataMessage_azimuth(::nav_messages::msg::RadarFftDataMessage & msg)
  : msg_(msg)
  {}
  Init_RadarFftDataMessage_sweep_counter azimuth(::nav_messages::msg::RadarFftDataMessage::_azimuth_type arg)
  {
    msg_.azimuth = std::move(arg);
    return Init_RadarFftDataMessage_sweep_counter(msg_);
  }

private:
  ::nav_messages::msg::RadarFftDataMessage msg_;
};

class Init_RadarFftDataMessage_angle
{
public:
  explicit Init_RadarFftDataMessage_angle(::nav_messages::msg::RadarFftDataMessage & msg)
  : msg_(msg)
  {}
  Init_RadarFftDataMessage_azimuth angle(::nav_messages::msg::RadarFftDataMessage::_angle_type arg)
  {
    msg_.angle = std::move(arg);
    return Init_RadarFftDataMessage_azimuth(msg_);
  }

private:
  ::nav_messages::msg::RadarFftDataMessage msg_;
};

class Init_RadarFftDataMessage_header
{
public:
  Init_RadarFftDataMessage_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RadarFftDataMessage_angle header(::nav_messages::msg::RadarFftDataMessage::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_RadarFftDataMessage_angle(msg_);
  }

private:
  ::nav_messages::msg::RadarFftDataMessage msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::nav_messages::msg::RadarFftDataMessage>()
{
  return nav_messages::msg::builder::Init_RadarFftDataMessage_header();
}

}  // namespace nav_messages

#endif  // NAV_MESSAGES__MSG__DETAIL__RADAR_FFT_DATA_MESSAGE__BUILDER_HPP_
