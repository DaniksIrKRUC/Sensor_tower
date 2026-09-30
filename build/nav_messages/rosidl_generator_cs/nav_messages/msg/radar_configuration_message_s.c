// generated from rosidl_generator_cs/resource/idl.c.em
// with input from nav_messages:msg/RadarConfigurationMessage.idl
// generated code does not contain a copyright notice



#include <stdlib.h>
#include <stdio.h>
#include <assert.h>
#include <stdint.h>
#include <string.h>

#include <nav_messages/msg/radar_configuration_message.h>
#include <rosidl_runtime_c/visibility_control.h>
#include <rosidl_runtime_c/primitives_sequence.h>
#include <rosidl_runtime_c/primitives_sequence_functions.h>




ROSIDL_GENERATOR_C_EXPORT
bool nav_messages__msg__RadarConfigurationMessage_native_write_field_azimuth_samples(uint8_t *value, int size, void *message_handle)
{
  nav_messages__msg__RadarConfigurationMessage *ros_message = (nav_messages__msg__RadarConfigurationMessage *)message_handle;
  size_t previous_sequence_size = ros_message->azimuth_samples.size;
  bool size_changed = previous_sequence_size != (size_t)size;
  if (size_changed && previous_sequence_size != 0)
  {
    rosidl_runtime_c__uint8__Sequence__fini(&ros_message->azimuth_samples);
  }
  if (size_changed)
  {
    if (!rosidl_runtime_c__uint8__Sequence__init(&ros_message->azimuth_samples, size))
      return false;
  }
  uint8_t *dest = ros_message->azimuth_samples.data;
  memcpy(dest, value, sizeof(uint8_t)*size);
  return true;
}
ROSIDL_GENERATOR_C_EXPORT
bool nav_messages__msg__RadarConfigurationMessage_native_write_field_encoder_size(uint8_t *value, int size, void *message_handle)
{
  nav_messages__msg__RadarConfigurationMessage *ros_message = (nav_messages__msg__RadarConfigurationMessage *)message_handle;
  size_t previous_sequence_size = ros_message->encoder_size.size;
  bool size_changed = previous_sequence_size != (size_t)size;
  if (size_changed && previous_sequence_size != 0)
  {
    rosidl_runtime_c__uint8__Sequence__fini(&ros_message->encoder_size);
  }
  if (size_changed)
  {
    if (!rosidl_runtime_c__uint8__Sequence__init(&ros_message->encoder_size, size))
      return false;
  }
  uint8_t *dest = ros_message->encoder_size.data;
  memcpy(dest, value, sizeof(uint8_t)*size);
  return true;
}
ROSIDL_GENERATOR_C_EXPORT
bool nav_messages__msg__RadarConfigurationMessage_native_write_field_bin_size(uint8_t *value, int size, void *message_handle)
{
  nav_messages__msg__RadarConfigurationMessage *ros_message = (nav_messages__msg__RadarConfigurationMessage *)message_handle;
  size_t previous_sequence_size = ros_message->bin_size.size;
  bool size_changed = previous_sequence_size != (size_t)size;
  if (size_changed && previous_sequence_size != 0)
  {
    rosidl_runtime_c__uint8__Sequence__fini(&ros_message->bin_size);
  }
  if (size_changed)
  {
    if (!rosidl_runtime_c__uint8__Sequence__init(&ros_message->bin_size, size))
      return false;
  }
  uint8_t *dest = ros_message->bin_size.data;
  memcpy(dest, value, sizeof(uint8_t)*size);
  return true;
}
ROSIDL_GENERATOR_C_EXPORT
bool nav_messages__msg__RadarConfigurationMessage_native_write_field_range_in_bins(uint8_t *value, int size, void *message_handle)
{
  nav_messages__msg__RadarConfigurationMessage *ros_message = (nav_messages__msg__RadarConfigurationMessage *)message_handle;
  size_t previous_sequence_size = ros_message->range_in_bins.size;
  bool size_changed = previous_sequence_size != (size_t)size;
  if (size_changed && previous_sequence_size != 0)
  {
    rosidl_runtime_c__uint8__Sequence__fini(&ros_message->range_in_bins);
  }
  if (size_changed)
  {
    if (!rosidl_runtime_c__uint8__Sequence__init(&ros_message->range_in_bins, size))
      return false;
  }
  uint8_t *dest = ros_message->range_in_bins.data;
  memcpy(dest, value, sizeof(uint8_t)*size);
  return true;
}
ROSIDL_GENERATOR_C_EXPORT
bool nav_messages__msg__RadarConfigurationMessage_native_write_field_expected_rotation_rate(uint8_t *value, int size, void *message_handle)
{
  nav_messages__msg__RadarConfigurationMessage *ros_message = (nav_messages__msg__RadarConfigurationMessage *)message_handle;
  size_t previous_sequence_size = ros_message->expected_rotation_rate.size;
  bool size_changed = previous_sequence_size != (size_t)size;
  if (size_changed && previous_sequence_size != 0)
  {
    rosidl_runtime_c__uint8__Sequence__fini(&ros_message->expected_rotation_rate);
  }
  if (size_changed)
  {
    if (!rosidl_runtime_c__uint8__Sequence__init(&ros_message->expected_rotation_rate, size))
      return false;
  }
  uint8_t *dest = ros_message->expected_rotation_rate.data;
  memcpy(dest, value, sizeof(uint8_t)*size);
  return true;
}
ROSIDL_GENERATOR_C_EXPORT
bool nav_messages__msg__RadarConfigurationMessage_native_write_field_range_gain(uint8_t *value, int size, void *message_handle)
{
  nav_messages__msg__RadarConfigurationMessage *ros_message = (nav_messages__msg__RadarConfigurationMessage *)message_handle;
  size_t previous_sequence_size = ros_message->range_gain.size;
  bool size_changed = previous_sequence_size != (size_t)size;
  if (size_changed && previous_sequence_size != 0)
  {
    rosidl_runtime_c__uint8__Sequence__fini(&ros_message->range_gain);
  }
  if (size_changed)
  {
    if (!rosidl_runtime_c__uint8__Sequence__init(&ros_message->range_gain, size))
      return false;
  }
  uint8_t *dest = ros_message->range_gain.data;
  memcpy(dest, value, sizeof(uint8_t)*size);
  return true;
}
ROSIDL_GENERATOR_C_EXPORT
bool nav_messages__msg__RadarConfigurationMessage_native_write_field_range_offset(uint8_t *value, int size, void *message_handle)
{
  nav_messages__msg__RadarConfigurationMessage *ros_message = (nav_messages__msg__RadarConfigurationMessage *)message_handle;
  size_t previous_sequence_size = ros_message->range_offset.size;
  bool size_changed = previous_sequence_size != (size_t)size;
  if (size_changed && previous_sequence_size != 0)
  {
    rosidl_runtime_c__uint8__Sequence__fini(&ros_message->range_offset);
  }
  if (size_changed)
  {
    if (!rosidl_runtime_c__uint8__Sequence__init(&ros_message->range_offset, size))
      return false;
  }
  uint8_t *dest = ros_message->range_offset.data;
  memcpy(dest, value, sizeof(uint8_t)*size);
  return true;
}


ROSIDL_GENERATOR_C_EXPORT
uint8_t *nav_messages__msg__RadarConfigurationMessage_native_read_field_azimuth_samples(int *size, void *message_handle)
{
  nav_messages__msg__RadarConfigurationMessage *ros_message = (nav_messages__msg__RadarConfigurationMessage *)message_handle;
  *size = ros_message->azimuth_samples.size;
  return ros_message->azimuth_samples.data;
}
ROSIDL_GENERATOR_C_EXPORT
uint8_t *nav_messages__msg__RadarConfigurationMessage_native_read_field_encoder_size(int *size, void *message_handle)
{
  nav_messages__msg__RadarConfigurationMessage *ros_message = (nav_messages__msg__RadarConfigurationMessage *)message_handle;
  *size = ros_message->encoder_size.size;
  return ros_message->encoder_size.data;
}
ROSIDL_GENERATOR_C_EXPORT
uint8_t *nav_messages__msg__RadarConfigurationMessage_native_read_field_bin_size(int *size, void *message_handle)
{
  nav_messages__msg__RadarConfigurationMessage *ros_message = (nav_messages__msg__RadarConfigurationMessage *)message_handle;
  *size = ros_message->bin_size.size;
  return ros_message->bin_size.data;
}
ROSIDL_GENERATOR_C_EXPORT
uint8_t *nav_messages__msg__RadarConfigurationMessage_native_read_field_range_in_bins(int *size, void *message_handle)
{
  nav_messages__msg__RadarConfigurationMessage *ros_message = (nav_messages__msg__RadarConfigurationMessage *)message_handle;
  *size = ros_message->range_in_bins.size;
  return ros_message->range_in_bins.data;
}
ROSIDL_GENERATOR_C_EXPORT
uint8_t *nav_messages__msg__RadarConfigurationMessage_native_read_field_expected_rotation_rate(int *size, void *message_handle)
{
  nav_messages__msg__RadarConfigurationMessage *ros_message = (nav_messages__msg__RadarConfigurationMessage *)message_handle;
  *size = ros_message->expected_rotation_rate.size;
  return ros_message->expected_rotation_rate.data;
}
ROSIDL_GENERATOR_C_EXPORT
uint8_t *nav_messages__msg__RadarConfigurationMessage_native_read_field_range_gain(int *size, void *message_handle)
{
  nav_messages__msg__RadarConfigurationMessage *ros_message = (nav_messages__msg__RadarConfigurationMessage *)message_handle;
  *size = ros_message->range_gain.size;
  return ros_message->range_gain.data;
}
ROSIDL_GENERATOR_C_EXPORT
uint8_t *nav_messages__msg__RadarConfigurationMessage_native_read_field_range_offset(int *size, void *message_handle)
{
  nav_messages__msg__RadarConfigurationMessage *ros_message = (nav_messages__msg__RadarConfigurationMessage *)message_handle;
  *size = ros_message->range_offset.size;
  return ros_message->range_offset.data;
}






ROSIDL_GENERATOR_C_EXPORT
void * nav_messages__msg__RadarConfigurationMessage_native_get_nested_message_handle_header(void *message_handle)
{
  nav_messages__msg__RadarConfigurationMessage *ros_message = (nav_messages__msg__RadarConfigurationMessage *)message_handle;
  std_msgs__msg__Header *nested_message = &(ros_message->header);
  return (void *)nested_message;
}




