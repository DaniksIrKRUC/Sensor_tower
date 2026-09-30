// generated from rosidl_generator_cs/resource/idl.c.em
// with input from ouster_sensor_msgs:srv/GetConfig.idl
// generated code does not contain a copyright notice




#include <stdlib.h>
#include <stdio.h>
#include <assert.h>
#include <stdint.h>
#include <string.h>

#include <ouster_sensor_msgs/srv/get_config.h>
#include <rosidl_runtime_c/visibility_control.h>


ROSIDL_GENERATOR_C_EXPORT
uint8_t ouster_sensor_msgs__srv__GetConfig_Request_native_read_field_structure_needs_at_least_one_member(void *message_handle)
{
  ouster_sensor_msgs__srv__GetConfig_Request *ros_message = (ouster_sensor_msgs__srv__GetConfig_Request *)message_handle;
  return ros_message->structure_needs_at_least_one_member;
}


ROSIDL_GENERATOR_C_EXPORT
void ouster_sensor_msgs__srv__GetConfig_Request_native_write_field_structure_needs_at_least_one_member(void *message_handle, uint8_t value)
{
  ouster_sensor_msgs__srv__GetConfig_Request *ros_message = (ouster_sensor_msgs__srv__GetConfig_Request *)message_handle;
  ros_message->structure_needs_at_least_one_member = value;
}











#include <rosidl_runtime_c/string.h>
#include <rosidl_runtime_c/string_functions.h>

ROSIDL_GENERATOR_C_EXPORT
const char * ouster_sensor_msgs__srv__GetConfig_Response_native_read_field_config(void *message_handle)
{
  ouster_sensor_msgs__srv__GetConfig_Response *ros_message = (ouster_sensor_msgs__srv__GetConfig_Response *)message_handle;
  return ros_message->config.data;
}


ROSIDL_GENERATOR_C_EXPORT
void ouster_sensor_msgs__srv__GetConfig_Response_native_write_field_config(void *message_handle, const char * value)
{
  ouster_sensor_msgs__srv__GetConfig_Response *ros_message = (ouster_sensor_msgs__srv__GetConfig_Response *)message_handle;
  if (&ros_message->config.data)
  { // reinitializing string if message is being reused
    rosidl_runtime_c__String__fini(&ros_message->config);
    rosidl_runtime_c__String__init(&ros_message->config);
  }
  rosidl_runtime_c__String__assign(
    &ros_message->config, value);
}








