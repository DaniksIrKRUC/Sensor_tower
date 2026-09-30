// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from nav_messages:msg/RadarConfigurationMessage.idl
// generated code does not contain a copyright notice

#ifndef NAV_MESSAGES__MSG__DETAIL__RADAR_CONFIGURATION_MESSAGE__STRUCT_HPP_
#define NAV_MESSAGES__MSG__DETAIL__RADAR_CONFIGURATION_MESSAGE__STRUCT_HPP_

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
# define DEPRECATED__nav_messages__msg__RadarConfigurationMessage __attribute__((deprecated))
#else
# define DEPRECATED__nav_messages__msg__RadarConfigurationMessage __declspec(deprecated)
#endif

namespace nav_messages
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RadarConfigurationMessage_
{
  using Type = RadarConfigurationMessage_<ContainerAllocator>;

  explicit RadarConfigurationMessage_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    (void)_init;
  }

  explicit RadarConfigurationMessage_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _azimuth_samples_type =
    std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>>;
  _azimuth_samples_type azimuth_samples;
  using _encoder_size_type =
    std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>>;
  _encoder_size_type encoder_size;
  using _bin_size_type =
    std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>>;
  _bin_size_type bin_size;
  using _range_in_bins_type =
    std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>>;
  _range_in_bins_type range_in_bins;
  using _expected_rotation_rate_type =
    std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>>;
  _expected_rotation_rate_type expected_rotation_rate;
  using _range_gain_type =
    std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>>;
  _range_gain_type range_gain;
  using _range_offset_type =
    std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>>;
  _range_offset_type range_offset;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__azimuth_samples(
    const std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>> & _arg)
  {
    this->azimuth_samples = _arg;
    return *this;
  }
  Type & set__encoder_size(
    const std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>> & _arg)
  {
    this->encoder_size = _arg;
    return *this;
  }
  Type & set__bin_size(
    const std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>> & _arg)
  {
    this->bin_size = _arg;
    return *this;
  }
  Type & set__range_in_bins(
    const std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>> & _arg)
  {
    this->range_in_bins = _arg;
    return *this;
  }
  Type & set__expected_rotation_rate(
    const std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>> & _arg)
  {
    this->expected_rotation_rate = _arg;
    return *this;
  }
  Type & set__range_gain(
    const std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>> & _arg)
  {
    this->range_gain = _arg;
    return *this;
  }
  Type & set__range_offset(
    const std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>> & _arg)
  {
    this->range_offset = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    nav_messages::msg::RadarConfigurationMessage_<ContainerAllocator> *;
  using ConstRawPtr =
    const nav_messages::msg::RadarConfigurationMessage_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<nav_messages::msg::RadarConfigurationMessage_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<nav_messages::msg::RadarConfigurationMessage_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      nav_messages::msg::RadarConfigurationMessage_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<nav_messages::msg::RadarConfigurationMessage_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      nav_messages::msg::RadarConfigurationMessage_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<nav_messages::msg::RadarConfigurationMessage_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<nav_messages::msg::RadarConfigurationMessage_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<nav_messages::msg::RadarConfigurationMessage_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__nav_messages__msg__RadarConfigurationMessage
    std::shared_ptr<nav_messages::msg::RadarConfigurationMessage_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__nav_messages__msg__RadarConfigurationMessage
    std::shared_ptr<nav_messages::msg::RadarConfigurationMessage_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RadarConfigurationMessage_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->azimuth_samples != other.azimuth_samples) {
      return false;
    }
    if (this->encoder_size != other.encoder_size) {
      return false;
    }
    if (this->bin_size != other.bin_size) {
      return false;
    }
    if (this->range_in_bins != other.range_in_bins) {
      return false;
    }
    if (this->expected_rotation_rate != other.expected_rotation_rate) {
      return false;
    }
    if (this->range_gain != other.range_gain) {
      return false;
    }
    if (this->range_offset != other.range_offset) {
      return false;
    }
    return true;
  }
  bool operator!=(const RadarConfigurationMessage_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RadarConfigurationMessage_

// alias to use template instance with default allocator
using RadarConfigurationMessage =
  nav_messages::msg::RadarConfigurationMessage_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace nav_messages

#endif  // NAV_MESSAGES__MSG__DETAIL__RADAR_CONFIGURATION_MESSAGE__STRUCT_HPP_
