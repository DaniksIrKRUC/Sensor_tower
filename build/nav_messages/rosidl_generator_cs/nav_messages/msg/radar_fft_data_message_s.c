// generated from rosidl_generator_cs/resource/idl.c.em
// with input from nav_messages:msg/RadarFftDataMessage.idl
// generated code does not contain a copyright notice



#include <stdlib.h>
#include <stdio.h>
#include <assert.h>
#include <stdint.h>
#include <string.h>

#include <nav_messages/msg/radar_fft_data_message.h>
#include <rosidl_runtime_c/visibility_control.h>
#include <rosidl_runtime_c/primitives_sequence.h>
#include <rosidl_runtime_c/primitives_sequence_functions.h>




ROSIDL_GENERATOR_C_EXPORT
bool nav_messages__msg__RadarFftDataMessage_native_write_field_angle(uint8_t *value, int size, void *message_handle)
{
  nav_messages__msg__RadarFftDataMessage *ros_message = (nav_messages__msg__RadarFftDataMessage *)message_handle;
  size_t previous_sequence_size = ros_message->angle.size;
  bool size_changed = previous_sequence_size != (size_t)size;
  if (size_changed && previous_sequence_size != 0)
  {
    rosidl_runtime_c__uint8__Sequence__fini(&ros_message->angle);
  }
  if (size_changed)
  {
    if (!rosidl_runtime_c__uint8__Sequence__init(&ros_message->angle, size))
      return false;
  }
  uint8_t *dest = ros_message->angle.data;
  memcpy(dest, value, sizeof(uint8_t)*size);
  return true;
}
ROSIDL_GENERATOR_C_EXPORT
bool nav_messages__msg__RadarFftDataMessage_native_write_field_azimuth(uint8_t *value, int size, void *message_handle)
{
  nav_messages__msg__RadarFftDataMessage *ros_message = (nav_messages__msg__RadarFftDataMessage *)message_handle;
  size_t previous_sequence_size = ros_message->azimuth.size;
  bool size_changed = previous_sequence_size != (size_t)size;
  if (size_changed && previous_sequence_size != 0)
  {
    rosidl_runtime_c__uint8__Sequence__fini(&ros_message->azimuth);
  }
  if (size_changed)
  {
    if (!rosidl_runtime_c__uint8__Sequence__init(&ros_message->azimuth, size))
      return false;
  }
  uint8_t *dest = ros_message->azimuth.data;
  memcpy(dest, value, sizeof(uint8_t)*size);
  return true;
}
ROSIDL_GENERATOR_C_EXPORT
bool nav_messages__msg__RadarFftDataMessage_native_write_field_sweep_counter(uint8_t *value, int size, void *message_handle)
{
  nav_messages__msg__RadarFftDataMessage *ros_message = (nav_messages__msg__RadarFftDataMessage *)message_handle;
  size_t previous_sequence_size = ros_message->sweep_counter.size;
  bool size_changed = previous_sequence_size != (size_t)size;
  if (size_changed && previous_sequence_size != 0)
  {
    rosidl_runtime_c__uint8__Sequence__fini(&ros_message->sweep_counter);
  }
  if (size_changed)
  {
    if (!rosidl_runtime_c__uint8__Sequence__init(&ros_message->sweep_counter, size))
      return false;
  }
  uint8_t *dest = ros_message->sweep_counter.data;
  memcpy(dest, value, sizeof(uint8_t)*size);
  return true;
}
ROSIDL_GENERATOR_C_EXPORT
bool nav_messages__msg__RadarFftDataMessage_native_write_field_ntp_seconds(uint8_t *value, int size, void *message_handle)
{
  nav_messages__msg__RadarFftDataMessage *ros_message = (nav_messages__msg__RadarFftDataMessage *)message_handle;
  size_t previous_sequence_size = ros_message->ntp_seconds.size;
  bool size_changed = previous_sequence_size != (size_t)size;
  if (size_changed && previous_sequence_size != 0)
  {
    rosidl_runtime_c__uint8__Sequence__fini(&ros_message->ntp_seconds);
  }
  if (size_changed)
  {
    if (!rosidl_runtime_c__uint8__Sequence__init(&ros_message->ntp_seconds, size))
      return false;
  }
  uint8_t *dest = ros_message->ntp_seconds.data;
  memcpy(dest, value, sizeof(uint8_t)*size);
  return true;
}
ROSIDL_GENERATOR_C_EXPORT
bool nav_messages__msg__RadarFftDataMessage_native_write_field_ntp_split_seconds(uint8_t *value, int size, void *message_handle)
{
  nav_messages__msg__RadarFftDataMessage *ros_message = (nav_messages__msg__RadarFftDataMessage *)message_handle;
  size_t previous_sequence_size = ros_message->ntp_split_seconds.size;
  bool size_changed = previous_sequence_size != (size_t)size;
  if (size_changed && previous_sequence_size != 0)
  {
    rosidl_runtime_c__uint8__Sequence__fini(&ros_message->ntp_split_seconds);
  }
  if (size_changed)
  {
    if (!rosidl_runtime_c__uint8__Sequence__init(&ros_message->ntp_split_seconds, size))
      return false;
  }
  uint8_t *dest = ros_message->ntp_split_seconds.data;
  memcpy(dest, value, sizeof(uint8_t)*size);
  return true;
}
ROSIDL_GENERATOR_C_EXPORT
bool nav_messages__msg__RadarFftDataMessage_native_write_field_data(uint8_t *value, int size, void *message_handle)
{
  nav_messages__msg__RadarFftDataMessage *ros_message = (nav_messages__msg__RadarFftDataMessage *)message_handle;
  size_t previous_sequence_size = ros_message->data.size;
  bool size_changed = previous_sequence_size != (size_t)size;
  if (size_changed && previous_sequence_size != 0)
  {
    rosidl_runtime_c__uint8__Sequence__fini(&ros_message->data);
  }
  if (size_changed)
  {
    if (!rosidl_runtime_c__uint8__Sequence__init(&ros_message->data, size))
      return false;
  }
  uint8_t *dest = ros_message->data.data;
  memcpy(dest, value, sizeof(uint8_t)*size);
  return true;
}
ROSIDL_GENERATOR_C_EXPORT
bool nav_messages__msg__RadarFftDataMessage_native_write_field_data_length(uint8_t *value, int size, void *message_handle)
{
  nav_messages__msg__RadarFftDataMessage *ros_message = (nav_messages__msg__RadarFftDataMessage *)message_handle;
  size_t previous_sequence_size = ros_message->data_length.size;
  bool size_changed = previous_sequence_size != (size_t)size;
  if (size_changed && previous_sequence_size != 0)
  {
    rosidl_runtime_c__uint8__Sequence__fini(&ros_message->data_length);
  }
  if (size_changed)
  {
    if (!rosidl_runtime_c__uint8__Sequence__init(&ros_message->data_length, size))
      return false;
  }
  uint8_t *dest = ros_message->data_length.data;
  memcpy(dest, value, sizeof(uint8_t)*size);
  return true;
}


ROSIDL_GENERATOR_C_EXPORT
uint8_t *nav_messages__msg__RadarFftDataMessage_native_read_field_angle(int *size, void *message_handle)
{
  nav_messages__msg__RadarFftDataMessage *ros_message = (nav_messages__msg__RadarFftDataMessage *)message_handle;
  *size = ros_message->angle.size;
  return ros_message->angle.data;
}
ROSIDL_GENERATOR_C_EXPORT
uint8_t *nav_messages__msg__RadarFftDataMessage_native_read_field_azimuth(int *size, void *message_handle)
{
  nav_messages__msg__RadarFftDataMessage *ros_message = (nav_messages__msg__RadarFftDataMessage *)message_handle;
  *size = ros_message->azimuth.size;
  return ros_message->azimuth.data;
}
ROSIDL_GENERATOR_C_EXPORT
uint8_t *nav_messages__msg__RadarFftDataMessage_native_read_field_sweep_counter(int *size, void *message_handle)
{
  nav_messages__msg__RadarFftDataMessage *ros_message = (nav_messages__msg__RadarFftDataMessage *)message_handle;
  *size = ros_message->sweep_counter.size;
  return ros_message->sweep_counter.data;
}
ROSIDL_GENERATOR_C_EXPORT
uint8_t *nav_messages__msg__RadarFftDataMessage_native_read_field_ntp_seconds(int *size, void *message_handle)
{
  nav_messages__msg__RadarFftDataMessage *ros_message = (nav_messages__msg__RadarFftDataMessage *)message_handle;
  *size = ros_message->ntp_seconds.size;
  return ros_message->ntp_seconds.data;
}
ROSIDL_GENERATOR_C_EXPORT
uint8_t *nav_messages__msg__RadarFftDataMessage_native_read_field_ntp_split_seconds(int *size, void *message_handle)
{
  nav_messages__msg__RadarFftDataMessage *ros_message = (nav_messages__msg__RadarFftDataMessage *)message_handle;
  *size = ros_message->ntp_split_seconds.size;
  return ros_message->ntp_split_seconds.data;
}
ROSIDL_GENERATOR_C_EXPORT
uint8_t *nav_messages__msg__RadarFftDataMessage_native_read_field_data(int *size, void *message_handle)
{
  nav_messages__msg__RadarFftDataMessage *ros_message = (nav_messages__msg__RadarFftDataMessage *)message_handle;
  *size = ros_message->data.size;
  return ros_message->data.data;
}
ROSIDL_GENERATOR_C_EXPORT
uint8_t *nav_messages__msg__RadarFftDataMessage_native_read_field_data_length(int *size, void *message_handle)
{
  nav_messages__msg__RadarFftDataMessage *ros_message = (nav_messages__msg__RadarFftDataMessage *)message_handle;
  *size = ros_message->data_length.size;
  return ros_message->data_length.data;
}






ROSIDL_GENERATOR_C_EXPORT
void * nav_messages__msg__RadarFftDataMessage_native_get_nested_message_handle_header(void *message_handle)
{
  nav_messages__msg__RadarFftDataMessage *ros_message = (nav_messages__msg__RadarFftDataMessage *)message_handle;
  std_msgs__msg__Header *nested_message = &(ros_message->header);
  return (void *)nested_message;
}




