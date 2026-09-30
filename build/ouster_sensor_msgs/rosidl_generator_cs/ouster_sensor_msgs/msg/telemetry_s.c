// generated from rosidl_generator_cs/resource/idl.c.em
// with input from ouster_sensor_msgs:msg/Telemetry.idl
// generated code does not contain a copyright notice



#include <stdlib.h>
#include <stdio.h>
#include <assert.h>
#include <stdint.h>
#include <string.h>

#include <ouster_sensor_msgs/msg/telemetry.h>
#include <rosidl_runtime_c/visibility_control.h>

ROSIDL_GENERATOR_C_EXPORT
uint16_t ouster_sensor_msgs__msg__Telemetry_native_read_field_countdown_thermal_shutdown(void *message_handle)
{
  ouster_sensor_msgs__msg__Telemetry *ros_message = (ouster_sensor_msgs__msg__Telemetry *)message_handle;
  return ros_message->countdown_thermal_shutdown;
}
ROSIDL_GENERATOR_C_EXPORT
uint16_t ouster_sensor_msgs__msg__Telemetry_native_read_field_countdown_shot_limiting(void *message_handle)
{
  ouster_sensor_msgs__msg__Telemetry *ros_message = (ouster_sensor_msgs__msg__Telemetry *)message_handle;
  return ros_message->countdown_shot_limiting;
}
ROSIDL_GENERATOR_C_EXPORT
uint8_t ouster_sensor_msgs__msg__Telemetry_native_read_field_thermal_shutdown(void *message_handle)
{
  ouster_sensor_msgs__msg__Telemetry *ros_message = (ouster_sensor_msgs__msg__Telemetry *)message_handle;
  return ros_message->thermal_shutdown;
}
ROSIDL_GENERATOR_C_EXPORT
uint8_t ouster_sensor_msgs__msg__Telemetry_native_read_field_shot_limiting(void *message_handle)
{
  ouster_sensor_msgs__msg__Telemetry *ros_message = (ouster_sensor_msgs__msg__Telemetry *)message_handle;
  return ros_message->shot_limiting;
}

ROSIDL_GENERATOR_C_EXPORT
void ouster_sensor_msgs__msg__Telemetry_native_write_field_countdown_thermal_shutdown(void *message_handle, uint16_t value)
{
  ouster_sensor_msgs__msg__Telemetry *ros_message = (ouster_sensor_msgs__msg__Telemetry *)message_handle;
  ros_message->countdown_thermal_shutdown = value;
}
ROSIDL_GENERATOR_C_EXPORT
void ouster_sensor_msgs__msg__Telemetry_native_write_field_countdown_shot_limiting(void *message_handle, uint16_t value)
{
  ouster_sensor_msgs__msg__Telemetry *ros_message = (ouster_sensor_msgs__msg__Telemetry *)message_handle;
  ros_message->countdown_shot_limiting = value;
}
ROSIDL_GENERATOR_C_EXPORT
void ouster_sensor_msgs__msg__Telemetry_native_write_field_thermal_shutdown(void *message_handle, uint8_t value)
{
  ouster_sensor_msgs__msg__Telemetry *ros_message = (ouster_sensor_msgs__msg__Telemetry *)message_handle;
  ros_message->thermal_shutdown = value;
}
ROSIDL_GENERATOR_C_EXPORT
void ouster_sensor_msgs__msg__Telemetry_native_write_field_shot_limiting(void *message_handle, uint8_t value)
{
  ouster_sensor_msgs__msg__Telemetry *ros_message = (ouster_sensor_msgs__msg__Telemetry *)message_handle;
  ros_message->shot_limiting = value;
}










ROSIDL_GENERATOR_C_EXPORT
void * ouster_sensor_msgs__msg__Telemetry_native_get_nested_message_handle_header(void *message_handle)
{
  ouster_sensor_msgs__msg__Telemetry *ros_message = (ouster_sensor_msgs__msg__Telemetry *)message_handle;
  std_msgs__msg__Header *nested_message = &(ros_message->header);
  return (void *)nested_message;
}




