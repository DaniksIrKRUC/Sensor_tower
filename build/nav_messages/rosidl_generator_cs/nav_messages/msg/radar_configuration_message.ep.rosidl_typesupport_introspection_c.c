// generated from rosidl_generator_cs/resource/idl_typesupport.c.em
// with input from nav_messages:msg/RadarConfigurationMessage.idl
// generated code does not contain a copyright notice




#include <stdbool.h>
#include <stdint.h>
#include <rosidl_runtime_c/visibility_control.h>

#include <nav_messages/msg/radar_configuration_message.h>

ROSIDL_GENERATOR_C_EXPORT
void * nav_messages__msg__RadarConfigurationMessage_native_get_type_support()
{
    return (void *)ROSIDL_GET_MSG_TYPE_SUPPORT(nav_messages, msg, RadarConfigurationMessage);
}

ROSIDL_GENERATOR_C_EXPORT
void *nav_messages__msg__RadarConfigurationMessage_native_create_native_message()
{
   nav_messages__msg__RadarConfigurationMessage *ros_message = nav_messages__msg__RadarConfigurationMessage__create();
   return ros_message;
}

ROSIDL_GENERATOR_C_EXPORT
void nav_messages__msg__RadarConfigurationMessage_native_destroy_native_message(void *raw_ros_message) {
  nav_messages__msg__RadarConfigurationMessage *ros_message = (nav_messages__msg__RadarConfigurationMessage *)raw_ros_message;
  nav_messages__msg__RadarConfigurationMessage__destroy(ros_message);
}


