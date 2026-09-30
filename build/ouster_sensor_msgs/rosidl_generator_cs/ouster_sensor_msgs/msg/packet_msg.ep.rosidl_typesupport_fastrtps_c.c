// generated from rosidl_generator_cs/resource/idl_typesupport.c.em
// with input from ouster_sensor_msgs:msg/PacketMsg.idl
// generated code does not contain a copyright notice




#include <stdbool.h>
#include <stdint.h>
#include <rosidl_runtime_c/visibility_control.h>

#include <ouster_sensor_msgs/msg/packet_msg.h>

ROSIDL_GENERATOR_C_EXPORT
void * ouster_sensor_msgs__msg__PacketMsg_native_get_type_support()
{
    return (void *)ROSIDL_GET_MSG_TYPE_SUPPORT(ouster_sensor_msgs, msg, PacketMsg);
}

ROSIDL_GENERATOR_C_EXPORT
void *ouster_sensor_msgs__msg__PacketMsg_native_create_native_message()
{
   ouster_sensor_msgs__msg__PacketMsg *ros_message = ouster_sensor_msgs__msg__PacketMsg__create();
   return ros_message;
}

ROSIDL_GENERATOR_C_EXPORT
void ouster_sensor_msgs__msg__PacketMsg_native_destroy_native_message(void *raw_ros_message) {
  ouster_sensor_msgs__msg__PacketMsg *ros_message = (ouster_sensor_msgs__msg__PacketMsg *)raw_ros_message;
  ouster_sensor_msgs__msg__PacketMsg__destroy(ros_message);
}


