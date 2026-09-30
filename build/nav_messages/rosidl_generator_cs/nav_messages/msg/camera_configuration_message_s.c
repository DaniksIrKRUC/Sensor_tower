// generated from rosidl_generator_cs/resource/idl.c.em
// with input from nav_messages:msg/CameraConfigurationMessage.idl
// generated code does not contain a copyright notice



#include <stdlib.h>
#include <stdio.h>
#include <assert.h>
#include <stdint.h>
#include <string.h>

#include <nav_messages/msg/camera_configuration_message.h>
#include <rosidl_runtime_c/visibility_control.h>

ROSIDL_GENERATOR_C_EXPORT
uint32_t nav_messages__msg__CameraConfigurationMessage_native_read_field_height(void *message_handle)
{
  nav_messages__msg__CameraConfigurationMessage *ros_message = (nav_messages__msg__CameraConfigurationMessage *)message_handle;
  return ros_message->height;
}
ROSIDL_GENERATOR_C_EXPORT
uint32_t nav_messages__msg__CameraConfigurationMessage_native_read_field_width(void *message_handle)
{
  nav_messages__msg__CameraConfigurationMessage *ros_message = (nav_messages__msg__CameraConfigurationMessage *)message_handle;
  return ros_message->width;
}
ROSIDL_GENERATOR_C_EXPORT
uint32_t nav_messages__msg__CameraConfigurationMessage_native_read_field_channels(void *message_handle)
{
  nav_messages__msg__CameraConfigurationMessage *ros_message = (nav_messages__msg__CameraConfigurationMessage *)message_handle;
  return ros_message->channels;
}
ROSIDL_GENERATOR_C_EXPORT
uint32_t nav_messages__msg__CameraConfigurationMessage_native_read_field_fps(void *message_handle)
{
  nav_messages__msg__CameraConfigurationMessage *ros_message = (nav_messages__msg__CameraConfigurationMessage *)message_handle;
  return ros_message->fps;
}

ROSIDL_GENERATOR_C_EXPORT
void nav_messages__msg__CameraConfigurationMessage_native_write_field_height(void *message_handle, uint32_t value)
{
  nav_messages__msg__CameraConfigurationMessage *ros_message = (nav_messages__msg__CameraConfigurationMessage *)message_handle;
  ros_message->height = value;
}
ROSIDL_GENERATOR_C_EXPORT
void nav_messages__msg__CameraConfigurationMessage_native_write_field_width(void *message_handle, uint32_t value)
{
  nav_messages__msg__CameraConfigurationMessage *ros_message = (nav_messages__msg__CameraConfigurationMessage *)message_handle;
  ros_message->width = value;
}
ROSIDL_GENERATOR_C_EXPORT
void nav_messages__msg__CameraConfigurationMessage_native_write_field_channels(void *message_handle, uint32_t value)
{
  nav_messages__msg__CameraConfigurationMessage *ros_message = (nav_messages__msg__CameraConfigurationMessage *)message_handle;
  ros_message->channels = value;
}
ROSIDL_GENERATOR_C_EXPORT
void nav_messages__msg__CameraConfigurationMessage_native_write_field_fps(void *message_handle, uint32_t value)
{
  nav_messages__msg__CameraConfigurationMessage *ros_message = (nav_messages__msg__CameraConfigurationMessage *)message_handle;
  ros_message->fps = value;
}










ROSIDL_GENERATOR_C_EXPORT
void * nav_messages__msg__CameraConfigurationMessage_native_get_nested_message_handle_header(void *message_handle)
{
  nav_messages__msg__CameraConfigurationMessage *ros_message = (nav_messages__msg__CameraConfigurationMessage *)message_handle;
  std_msgs__msg__Header *nested_message = &(ros_message->header);
  return (void *)nested_message;
}




