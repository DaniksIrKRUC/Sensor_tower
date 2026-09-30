// generated from rosidl_generator_cs/resource/idl.c.em
// with input from ouster_sensor_msgs:msg/PacketMsg.idl
// generated code does not contain a copyright notice



#include <stdlib.h>
#include <stdio.h>
#include <assert.h>
#include <stdint.h>
#include <string.h>

#include <ouster_sensor_msgs/msg/packet_msg.h>
#include <rosidl_runtime_c/visibility_control.h>
#include <rosidl_runtime_c/primitives_sequence.h>
#include <rosidl_runtime_c/primitives_sequence_functions.h>




ROSIDL_GENERATOR_C_EXPORT
bool ouster_sensor_msgs__msg__PacketMsg_native_write_field_buf(uint8_t *value, int size, void *message_handle)
{
  ouster_sensor_msgs__msg__PacketMsg *ros_message = (ouster_sensor_msgs__msg__PacketMsg *)message_handle;
  size_t previous_sequence_size = ros_message->buf.size;
  bool size_changed = previous_sequence_size != (size_t)size;
  if (size_changed && previous_sequence_size != 0)
  {
    rosidl_runtime_c__uint8__Sequence__fini(&ros_message->buf);
  }
  if (size_changed)
  {
    if (!rosidl_runtime_c__uint8__Sequence__init(&ros_message->buf, size))
      return false;
  }
  uint8_t *dest = ros_message->buf.data;
  memcpy(dest, value, sizeof(uint8_t)*size);
  return true;
}


ROSIDL_GENERATOR_C_EXPORT
uint8_t *ouster_sensor_msgs__msg__PacketMsg_native_read_field_buf(int *size, void *message_handle)
{
  ouster_sensor_msgs__msg__PacketMsg *ros_message = (ouster_sensor_msgs__msg__PacketMsg *)message_handle;
  *size = ros_message->buf.size;
  return ros_message->buf.data;
}








