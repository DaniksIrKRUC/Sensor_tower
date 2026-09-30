// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from nav_messages:msg/RadarFftDataMessage.idl
// generated code does not contain a copyright notice

#ifndef NAV_MESSAGES__MSG__DETAIL__RADAR_FFT_DATA_MESSAGE__STRUCT_HPP_
#define NAV_MESSAGES__MSG__DETAIL__RADAR_FFT_DATA_MESSAGE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__nav_messages__msg__RadarFftDataMessage __attribute__((deprecated))
#else
# define DEPRECATED__nav_messages__msg__RadarFftDataMessage __declspec(deprecated)
#endif

namespace nav_messages
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RadarFftDataMessage_
{
  using Type = RadarFftDataMessage_<ContainerAllocator>;

  explicit RadarFftDataMessage_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    (void)_init;
  }

  explicit RadarFftDataMessage_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _angle_type =
    std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>>;
  _angle_type angle;
  using _azimuth_type =
    std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>>;
  _azimuth_type azimuth;
  using _sweep_counter_type =
    std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>>;
  _sweep_counter_type sweep_counter;
  using _ntp_seconds_type =
    std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>>;
  _ntp_seconds_type ntp_seconds;
  using _ntp_split_seconds_type =
    std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>>;
  _ntp_split_seconds_type ntp_split_seconds;
  using _data_type =
    std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>>;
  _data_type data;
  using _data_length_type =
    std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>>;
  _data_length_type data_length;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__angle(
    const std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>> & _arg)
  {
    this->angle = _arg;
    return *this;
  }
  Type & set__azimuth(
    const std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>> & _arg)
  {
    this->azimuth = _arg;
    return *this;
  }
  Type & set__sweep_counter(
    const std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>> & _arg)
  {
    this->sweep_counter = _arg;
    return *this;
  }
  Type & set__ntp_seconds(
    const std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>> & _arg)
  {
    this->ntp_seconds = _arg;
    return *this;
  }
  Type & set__ntp_split_seconds(
    const std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>> & _arg)
  {
    this->ntp_split_seconds = _arg;
    return *this;
  }
  Type & set__data(
    const std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>> & _arg)
  {
    this->data = _arg;
    return *this;
  }
  Type & set__data_length(
    const std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>> & _arg)
  {
    this->data_length = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    nav_messages::msg::RadarFftDataMessage_<ContainerAllocator> *;
  using ConstRawPtr =
    const nav_messages::msg::RadarFftDataMessage_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<nav_messages::msg::RadarFftDataMessage_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<nav_messages::msg::RadarFftDataMessage_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      nav_messages::msg::RadarFftDataMessage_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<nav_messages::msg::RadarFftDataMessage_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      nav_messages::msg::RadarFftDataMessage_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<nav_messages::msg::RadarFftDataMessage_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<nav_messages::msg::RadarFftDataMessage_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<nav_messages::msg::RadarFftDataMessage_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__nav_messages__msg__RadarFftDataMessage
    std::shared_ptr<nav_messages::msg::RadarFftDataMessage_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__nav_messages__msg__RadarFftDataMessage
    std::shared_ptr<nav_messages::msg::RadarFftDataMessage_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RadarFftDataMessage_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->angle != other.angle) {
      return false;
    }
    if (this->azimuth != other.azimuth) {
      return false;
    }
    if (this->sweep_counter != other.sweep_counter) {
      return false;
    }
    if (this->ntp_seconds != other.ntp_seconds) {
      return false;
    }
    if (this->ntp_split_seconds != other.ntp_split_seconds) {
      return false;
    }
    if (this->data != other.data) {
      return false;
    }
    if (this->data_length != other.data_length) {
      return false;
    }
    return true;
  }
  bool operator!=(const RadarFftDataMessage_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RadarFftDataMessage_

// alias to use template instance with default allocator
using RadarFftDataMessage =
  nav_messages::msg::RadarFftDataMessage_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace nav_messages

#endif  // NAV_MESSAGES__MSG__DETAIL__RADAR_FFT_DATA_MESSAGE__STRUCT_HPP_
