// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from nav_messages:msg/CameraConfigurationMessage.idl
// generated code does not contain a copyright notice

#ifndef NAV_MESSAGES__MSG__DETAIL__CAMERA_CONFIGURATION_MESSAGE__STRUCT_HPP_
#define NAV_MESSAGES__MSG__DETAIL__CAMERA_CONFIGURATION_MESSAGE__STRUCT_HPP_

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
# define DEPRECATED__nav_messages__msg__CameraConfigurationMessage __attribute__((deprecated))
#else
# define DEPRECATED__nav_messages__msg__CameraConfigurationMessage __declspec(deprecated)
#endif

namespace nav_messages
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct CameraConfigurationMessage_
{
  using Type = CameraConfigurationMessage_<ContainerAllocator>;

  explicit CameraConfigurationMessage_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->height = 0ul;
      this->width = 0ul;
      this->channels = 0ul;
      this->fps = 0ul;
    }
  }

  explicit CameraConfigurationMessage_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->height = 0ul;
      this->width = 0ul;
      this->channels = 0ul;
      this->fps = 0ul;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _height_type =
    uint32_t;
  _height_type height;
  using _width_type =
    uint32_t;
  _width_type width;
  using _channels_type =
    uint32_t;
  _channels_type channels;
  using _fps_type =
    uint32_t;
  _fps_type fps;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__height(
    const uint32_t & _arg)
  {
    this->height = _arg;
    return *this;
  }
  Type & set__width(
    const uint32_t & _arg)
  {
    this->width = _arg;
    return *this;
  }
  Type & set__channels(
    const uint32_t & _arg)
  {
    this->channels = _arg;
    return *this;
  }
  Type & set__fps(
    const uint32_t & _arg)
  {
    this->fps = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    nav_messages::msg::CameraConfigurationMessage_<ContainerAllocator> *;
  using ConstRawPtr =
    const nav_messages::msg::CameraConfigurationMessage_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<nav_messages::msg::CameraConfigurationMessage_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<nav_messages::msg::CameraConfigurationMessage_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      nav_messages::msg::CameraConfigurationMessage_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<nav_messages::msg::CameraConfigurationMessage_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      nav_messages::msg::CameraConfigurationMessage_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<nav_messages::msg::CameraConfigurationMessage_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<nav_messages::msg::CameraConfigurationMessage_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<nav_messages::msg::CameraConfigurationMessage_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__nav_messages__msg__CameraConfigurationMessage
    std::shared_ptr<nav_messages::msg::CameraConfigurationMessage_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__nav_messages__msg__CameraConfigurationMessage
    std::shared_ptr<nav_messages::msg::CameraConfigurationMessage_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CameraConfigurationMessage_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->height != other.height) {
      return false;
    }
    if (this->width != other.width) {
      return false;
    }
    if (this->channels != other.channels) {
      return false;
    }
    if (this->fps != other.fps) {
      return false;
    }
    return true;
  }
  bool operator!=(const CameraConfigurationMessage_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CameraConfigurationMessage_

// alias to use template instance with default allocator
using CameraConfigurationMessage =
  nav_messages::msg::CameraConfigurationMessage_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace nav_messages

#endif  // NAV_MESSAGES__MSG__DETAIL__CAMERA_CONFIGURATION_MESSAGE__STRUCT_HPP_
