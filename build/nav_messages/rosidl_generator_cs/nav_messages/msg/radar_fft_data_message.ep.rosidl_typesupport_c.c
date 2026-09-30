// generated from rosidl_generator_cs/resource/idl_typesupport.c.em
// with input from nav_messages:msg/RadarFftDataMessage.idl
// generated code does not contain a copyright notice




#include <stdbool.h>
#include <stdint.h>
#include <rosidl_runtime_c/visibility_control.h>

#include <nav_messages/msg/radar_fft_data_message.h>

ROSIDL_GENERATOR_C_EXPORT
void * nav_messages__msg__RadarFftDataMessage_native_get_type_support()
{
    return (void *)ROSIDL_GET_MSG_TYPE_SUPPORT(nav_messages, msg, RadarFftDataMessage);
}

ROSIDL_GENERATOR_C_EXPORT
void *nav_messages__msg__RadarFftDataMessage_native_create_native_message()
{
   nav_messages__msg__RadarFftDataMessage *ros_message = nav_messages__msg__RadarFftDataMessage__create();
   return ros_message;
}

ROSIDL_GENERATOR_C_EXPORT
void nav_messages__msg__RadarFftDataMessage_native_destroy_native_message(void *raw_ros_message) {
  nav_messages__msg__RadarFftDataMessage *ros_message = (nav_messages__msg__RadarFftDataMessage *)raw_ros_message;
  nav_messages__msg__RadarFftDataMessage__destroy(ros_message);
}


