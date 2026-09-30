// generated from rosidl_generator_cs/resource/idl_typesupport.c.em
// with input from nav_messages:msg/CameraConfigurationMessage.idl
// generated code does not contain a copyright notice




#include <stdbool.h>
#include <stdint.h>
#include <rosidl_runtime_c/visibility_control.h>

#include <nav_messages/msg/camera_configuration_message.h>

ROSIDL_GENERATOR_C_EXPORT
void * nav_messages__msg__CameraConfigurationMessage_native_get_type_support()
{
    return (void *)ROSIDL_GET_MSG_TYPE_SUPPORT(nav_messages, msg, CameraConfigurationMessage);
}

ROSIDL_GENERATOR_C_EXPORT
void *nav_messages__msg__CameraConfigurationMessage_native_create_native_message()
{
   nav_messages__msg__CameraConfigurationMessage *ros_message = nav_messages__msg__CameraConfigurationMessage__create();
   return ros_message;
}

ROSIDL_GENERATOR_C_EXPORT
void nav_messages__msg__CameraConfigurationMessage_native_destroy_native_message(void *raw_ros_message) {
  nav_messages__msg__CameraConfigurationMessage *ros_message = (nav_messages__msg__CameraConfigurationMessage *)raw_ros_message;
  nav_messages__msg__CameraConfigurationMessage__destroy(ros_message);
}


