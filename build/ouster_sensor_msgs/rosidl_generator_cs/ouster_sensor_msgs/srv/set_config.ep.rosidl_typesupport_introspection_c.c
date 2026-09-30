// generated from rosidl_generator_cs/resource/idl_typesupport.c.em
// with input from ouster_sensor_msgs:srv/SetConfig.idl
// generated code does not contain a copyright notice







#include <stdbool.h>
#include <stdint.h>
#include <rosidl_runtime_c/visibility_control.h>

#include <ouster_sensor_msgs/srv/set_config.h>

ROSIDL_GENERATOR_C_EXPORT
void * ouster_sensor_msgs__srv__SetConfig_Request_native_get_type_support()
{
    return (void *)ROSIDL_GET_SRV_TYPE_SUPPORT(ouster_sensor_msgs, srv, SetConfig);
}

ROSIDL_GENERATOR_C_EXPORT
void *ouster_sensor_msgs__srv__SetConfig_Request_native_create_native_message()
{
   ouster_sensor_msgs__srv__SetConfig_Request *ros_message = ouster_sensor_msgs__srv__SetConfig_Request__create();
   return ros_message;
}

ROSIDL_GENERATOR_C_EXPORT
void ouster_sensor_msgs__srv__SetConfig_Request_native_destroy_native_message(void *raw_ros_message) {
  ouster_sensor_msgs__srv__SetConfig_Request *ros_message = (ouster_sensor_msgs__srv__SetConfig_Request *)raw_ros_message;
  ouster_sensor_msgs__srv__SetConfig_Request__destroy(ros_message);
}







ROSIDL_GENERATOR_C_EXPORT
void * ouster_sensor_msgs__srv__SetConfig_Response_native_get_type_support()
{
    return (void *)ROSIDL_GET_SRV_TYPE_SUPPORT(ouster_sensor_msgs, srv, SetConfig);
}

ROSIDL_GENERATOR_C_EXPORT
void *ouster_sensor_msgs__srv__SetConfig_Response_native_create_native_message()
{
   ouster_sensor_msgs__srv__SetConfig_Response *ros_message = ouster_sensor_msgs__srv__SetConfig_Response__create();
   return ros_message;
}

ROSIDL_GENERATOR_C_EXPORT
void ouster_sensor_msgs__srv__SetConfig_Response_native_destroy_native_message(void *raw_ros_message) {
  ouster_sensor_msgs__srv__SetConfig_Response *ros_message = (ouster_sensor_msgs__srv__SetConfig_Response *)raw_ros_message;
  ouster_sensor_msgs__srv__SetConfig_Response__destroy(ros_message);
}

