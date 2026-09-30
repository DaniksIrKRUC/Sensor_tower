// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from nav_messages:msg/RadarConfigurationMessage.idl
// generated code does not contain a copyright notice

#ifndef NAV_MESSAGES__MSG__DETAIL__RADAR_CONFIGURATION_MESSAGE__STRUCT_H_
#define NAV_MESSAGES__MSG__DETAIL__RADAR_CONFIGURATION_MESSAGE__STRUCT_H_

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
// Member 'azimuth_samples'
// Member 'encoder_size'
// Member 'bin_size'
// Member 'range_in_bins'
// Member 'expected_rotation_rate'
// Member 'range_gain'
// Member 'range_offset'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/RadarConfigurationMessage in the package nav_messages.
/**
  * A ROS message based on a configuration data message from a radar
 */
typedef struct nav_messages__msg__RadarConfigurationMessage
{
  /// add a header message to hold message timestamp
  std_msgs__msg__Header header;
  /// azimuth_samples (uint16) represented as a network order (uint8_t) byte array
  rosidl_runtime_c__uint8__Sequence azimuth_samples;
  /// encoder_size (uint16) represented as a network order (uint8_t) byte array
  rosidl_runtime_c__uint8__Sequence encoder_size;
  /// bin_size (double) represented as a network order (uint8_t) byte array
  rosidl_runtime_c__uint8__Sequence bin_size;
  /// range_in_bins (uint16) represented as a network order (uint8_t) byte array
  rosidl_runtime_c__uint8__Sequence range_in_bins;
  /// expected_rotation_rate (uint16) represented as a network order (uint8_t) byte array
  rosidl_runtime_c__uint8__Sequence expected_rotation_rate;
  /// range_gain (float) represented as a network order (uint8_t) byte array
  rosidl_runtime_c__uint8__Sequence range_gain;
  /// range_offset (float) represented as a network order (uint8_t) byte array
  rosidl_runtime_c__uint8__Sequence range_offset;
} nav_messages__msg__RadarConfigurationMessage;

// Struct for a sequence of nav_messages__msg__RadarConfigurationMessage.
typedef struct nav_messages__msg__RadarConfigurationMessage__Sequence
{
  nav_messages__msg__RadarConfigurationMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} nav_messages__msg__RadarConfigurationMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // NAV_MESSAGES__MSG__DETAIL__RADAR_CONFIGURATION_MESSAGE__STRUCT_H_
