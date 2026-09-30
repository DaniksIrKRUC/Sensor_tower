// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from nav_messages:msg/CameraConfigurationMessage.idl
// generated code does not contain a copyright notice

#ifndef NAV_MESSAGES__MSG__DETAIL__CAMERA_CONFIGURATION_MESSAGE__STRUCT_H_
#define NAV_MESSAGES__MSG__DETAIL__CAMERA_CONFIGURATION_MESSAGE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"

/// Struct defined in msg/CameraConfigurationMessage in the package nav_messages.
/**
  * A ROS message to define camera configuration information
 */
typedef struct nav_messages__msg__CameraConfigurationMessage
{
  /// add a header message to hold message timestamp
  std_msgs__msg__Header header;
  /// Image height
  uint32_t height;
  /// Image width
  uint32_t width;
  /// Image number of color channels
  uint32_t channels;
  /// Camera frames per second
  uint32_t fps;
} nav_messages__msg__CameraConfigurationMessage;

// Struct for a sequence of nav_messages__msg__CameraConfigurationMessage.
typedef struct nav_messages__msg__CameraConfigurationMessage__Sequence
{
  nav_messages__msg__CameraConfigurationMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} nav_messages__msg__CameraConfigurationMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // NAV_MESSAGES__MSG__DETAIL__CAMERA_CONFIGURATION_MESSAGE__STRUCT_H_
