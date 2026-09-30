// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from nav_messages:msg/RadarFftDataMessage.idl
// generated code does not contain a copyright notice

#ifndef NAV_MESSAGES__MSG__DETAIL__RADAR_FFT_DATA_MESSAGE__STRUCT_H_
#define NAV_MESSAGES__MSG__DETAIL__RADAR_FFT_DATA_MESSAGE__STRUCT_H_

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
// Member 'angle'
// Member 'azimuth'
// Member 'sweep_counter'
// Member 'ntp_seconds'
// Member 'ntp_split_seconds'
// Member 'data'
// Member 'data_length'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/RadarFftDataMessage in the package nav_messages.
/**
  * A ROS message based on an FFT data message from a radar
 */
typedef struct nav_messages__msg__RadarFftDataMessage
{
  /// add a header message to hold message timestamp
  std_msgs__msg__Header header;
  /// angle (double) represented as a network order (uint8_t) byte array
  rosidl_runtime_c__uint8__Sequence angle;
  /// azimuth (uint16_t) represented as a network order (uint8_t) byte array
  rosidl_runtime_c__uint8__Sequence azimuth;
  /// sweep_counter (uint16_t) represented as a network order (uint8_t) byte array
  rosidl_runtime_c__uint8__Sequence sweep_counter;
  /// ntp_seconds (uint32_t) represented as a network order (uint8_t) byte array
  rosidl_runtime_c__uint8__Sequence ntp_seconds;
  /// ntp_split_seconds (uint32_t) represented as a network order (uint8_t) byte array
  rosidl_runtime_c__uint8__Sequence ntp_split_seconds;
  /// data (uint8_t) represented as a network order (uint8_t) byte array
  rosidl_runtime_c__uint8__Sequence data;
  /// data_length (uint16_t) represented as a network order (uint8_t) byte array
  rosidl_runtime_c__uint8__Sequence data_length;
} nav_messages__msg__RadarFftDataMessage;

// Struct for a sequence of nav_messages__msg__RadarFftDataMessage.
typedef struct nav_messages__msg__RadarFftDataMessage__Sequence
{
  nav_messages__msg__RadarFftDataMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} nav_messages__msg__RadarFftDataMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // NAV_MESSAGES__MSG__DETAIL__RADAR_FFT_DATA_MESSAGE__STRUCT_H_
