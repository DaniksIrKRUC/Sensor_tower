// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from nav_messages:msg/RadarFftDataMessage.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "nav_messages/msg/detail/radar_fft_data_message__rosidl_typesupport_introspection_c.h"
#include "nav_messages/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "nav_messages/msg/detail/radar_fft_data_message__functions.h"
#include "nav_messages/msg/detail/radar_fft_data_message__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `angle`
// Member `azimuth`
// Member `sweep_counter`
// Member `ntp_seconds`
// Member `ntp_split_seconds`
// Member `data`
// Member `data_length`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void nav_messages__msg__RadarFftDataMessage__rosidl_typesupport_introspection_c__RadarFftDataMessage_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  nav_messages__msg__RadarFftDataMessage__init(message_memory);
}

void nav_messages__msg__RadarFftDataMessage__rosidl_typesupport_introspection_c__RadarFftDataMessage_fini_function(void * message_memory)
{
  nav_messages__msg__RadarFftDataMessage__fini(message_memory);
}

size_t nav_messages__msg__RadarFftDataMessage__rosidl_typesupport_introspection_c__size_function__RadarFftDataMessage__angle(
  const void * untyped_member)
{
  const rosidl_runtime_c__uint8__Sequence * member =
    (const rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return member->size;
}

const void * nav_messages__msg__RadarFftDataMessage__rosidl_typesupport_introspection_c__get_const_function__RadarFftDataMessage__angle(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__uint8__Sequence * member =
    (const rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return &member->data[index];
}

void * nav_messages__msg__RadarFftDataMessage__rosidl_typesupport_introspection_c__get_function__RadarFftDataMessage__angle(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__uint8__Sequence * member =
    (rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return &member->data[index];
}

void nav_messages__msg__RadarFftDataMessage__rosidl_typesupport_introspection_c__fetch_function__RadarFftDataMessage__angle(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint8_t * item =
    ((const uint8_t *)
    nav_messages__msg__RadarFftDataMessage__rosidl_typesupport_introspection_c__get_const_function__RadarFftDataMessage__angle(untyped_member, index));
  uint8_t * value =
    (uint8_t *)(untyped_value);
  *value = *item;
}

void nav_messages__msg__RadarFftDataMessage__rosidl_typesupport_introspection_c__assign_function__RadarFftDataMessage__angle(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint8_t * item =
    ((uint8_t *)
    nav_messages__msg__RadarFftDataMessage__rosidl_typesupport_introspection_c__get_function__RadarFftDataMessage__angle(untyped_member, index));
  const uint8_t * value =
    (const uint8_t *)(untyped_value);
  *item = *value;
}

bool nav_messages__msg__RadarFftDataMessage__rosidl_typesupport_introspection_c__resize_function__RadarFftDataMessage__angle(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__uint8__Sequence * member =
    (rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  rosidl_runtime_c__uint8__Sequence__fini(member);
  return rosidl_runtime_c__uint8__Sequence__init(member, size);
}

size_t nav_messages__msg__RadarFftDataMessage__rosidl_typesupport_introspection_c__size_function__RadarFftDataMessage__azimuth(
  const void * untyped_member)
{
  const rosidl_runtime_c__uint8__Sequence * member =
    (const rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return member->size;
}

const void * nav_messages__msg__RadarFftDataMessage__rosidl_typesupport_introspection_c__get_const_function__RadarFftDataMessage__azimuth(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__uint8__Sequence * member =
    (const rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return &member->data[index];
}

void * nav_messages__msg__RadarFftDataMessage__rosidl_typesupport_introspection_c__get_function__RadarFftDataMessage__azimuth(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__uint8__Sequence * member =
    (rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return &member->data[index];
}

void nav_messages__msg__RadarFftDataMessage__rosidl_typesupport_introspection_c__fetch_function__RadarFftDataMessage__azimuth(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint8_t * item =
    ((const uint8_t *)
    nav_messages__msg__RadarFftDataMessage__rosidl_typesupport_introspection_c__get_const_function__RadarFftDataMessage__azimuth(untyped_member, index));
  uint8_t * value =
    (uint8_t *)(untyped_value);
  *value = *item;
}

void nav_messages__msg__RadarFftDataMessage__rosidl_typesupport_introspection_c__assign_function__RadarFftDataMessage__azimuth(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint8_t * item =
    ((uint8_t *)
    nav_messages__msg__RadarFftDataMessage__rosidl_typesupport_introspection_c__get_function__RadarFftDataMessage__azimuth(untyped_member, index));
  const uint8_t * value =
    (const uint8_t *)(untyped_value);
  *item = *value;
}

bool nav_messages__msg__RadarFftDataMessage__rosidl_typesupport_introspection_c__resize_function__RadarFftDataMessage__azimuth(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__uint8__Sequence * member =
    (rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  rosidl_runtime_c__uint8__Sequence__fini(member);
  return rosidl_runtime_c__uint8__Sequence__init(member, size);
}

size_t nav_messages__msg__RadarFftDataMessage__rosidl_typesupport_introspection_c__size_function__RadarFftDataMessage__sweep_counter(
  const void * untyped_member)
{
  const rosidl_runtime_c__uint8__Sequence * member =
    (const rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return member->size;
}

const void * nav_messages__msg__RadarFftDataMessage__rosidl_typesupport_introspection_c__get_const_function__RadarFftDataMessage__sweep_counter(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__uint8__Sequence * member =
    (const rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return &member->data[index];
}

void * nav_messages__msg__RadarFftDataMessage__rosidl_typesupport_introspection_c__get_function__RadarFftDataMessage__sweep_counter(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__uint8__Sequence * member =
    (rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return &member->data[index];
}

void nav_messages__msg__RadarFftDataMessage__rosidl_typesupport_introspection_c__fetch_function__RadarFftDataMessage__sweep_counter(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint8_t * item =
    ((const uint8_t *)
    nav_messages__msg__RadarFftDataMessage__rosidl_typesupport_introspection_c__get_const_function__RadarFftDataMessage__sweep_counter(untyped_member, index));
  uint8_t * value =
    (uint8_t *)(untyped_value);
  *value = *item;
}

void nav_messages__msg__RadarFftDataMessage__rosidl_typesupport_introspection_c__assign_function__RadarFftDataMessage__sweep_counter(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint8_t * item =
    ((uint8_t *)
    nav_messages__msg__RadarFftDataMessage__rosidl_typesupport_introspection_c__get_function__RadarFftDataMessage__sweep_counter(untyped_member, index));
  const uint8_t * value =
    (const uint8_t *)(untyped_value);
  *item = *value;
}

bool nav_messages__msg__RadarFftDataMessage__rosidl_typesupport_introspection_c__resize_function__RadarFftDataMessage__sweep_counter(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__uint8__Sequence * member =
    (rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  rosidl_runtime_c__uint8__Sequence__fini(member);
  return rosidl_runtime_c__uint8__Sequence__init(member, size);
}

size_t nav_messages__msg__RadarFftDataMessage__rosidl_typesupport_introspection_c__size_function__RadarFftDataMessage__ntp_seconds(
  const void * untyped_member)
{
  const rosidl_runtime_c__uint8__Sequence * member =
    (const rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return member->size;
}

const void * nav_messages__msg__RadarFftDataMessage__rosidl_typesupport_introspection_c__get_const_function__RadarFftDataMessage__ntp_seconds(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__uint8__Sequence * member =
    (const rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return &member->data[index];
}

void * nav_messages__msg__RadarFftDataMessage__rosidl_typesupport_introspection_c__get_function__RadarFftDataMessage__ntp_seconds(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__uint8__Sequence * member =
    (rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return &member->data[index];
}

void nav_messages__msg__RadarFftDataMessage__rosidl_typesupport_introspection_c__fetch_function__RadarFftDataMessage__ntp_seconds(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint8_t * item =
    ((const uint8_t *)
    nav_messages__msg__RadarFftDataMessage__rosidl_typesupport_introspection_c__get_const_function__RadarFftDataMessage__ntp_seconds(untyped_member, index));
  uint8_t * value =
    (uint8_t *)(untyped_value);
  *value = *item;
}

void nav_messages__msg__RadarFftDataMessage__rosidl_typesupport_introspection_c__assign_function__RadarFftDataMessage__ntp_seconds(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint8_t * item =
    ((uint8_t *)
    nav_messages__msg__RadarFftDataMessage__rosidl_typesupport_introspection_c__get_function__RadarFftDataMessage__ntp_seconds(untyped_member, index));
  const uint8_t * value =
    (const uint8_t *)(untyped_value);
  *item = *value;
}

bool nav_messages__msg__RadarFftDataMessage__rosidl_typesupport_introspection_c__resize_function__RadarFftDataMessage__ntp_seconds(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__uint8__Sequence * member =
    (rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  rosidl_runtime_c__uint8__Sequence__fini(member);
  return rosidl_runtime_c__uint8__Sequence__init(member, size);
}

size_t nav_messages__msg__RadarFftDataMessage__rosidl_typesupport_introspection_c__size_function__RadarFftDataMessage__ntp_split_seconds(
  const void * untyped_member)
{
  const rosidl_runtime_c__uint8__Sequence * member =
    (const rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return member->size;
}

const void * nav_messages__msg__RadarFftDataMessage__rosidl_typesupport_introspection_c__get_const_function__RadarFftDataMessage__ntp_split_seconds(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__uint8__Sequence * member =
    (const rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return &member->data[index];
}

void * nav_messages__msg__RadarFftDataMessage__rosidl_typesupport_introspection_c__get_function__RadarFftDataMessage__ntp_split_seconds(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__uint8__Sequence * member =
    (rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return &member->data[index];
}

void nav_messages__msg__RadarFftDataMessage__rosidl_typesupport_introspection_c__fetch_function__RadarFftDataMessage__ntp_split_seconds(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint8_t * item =
    ((const uint8_t *)
    nav_messages__msg__RadarFftDataMessage__rosidl_typesupport_introspection_c__get_const_function__RadarFftDataMessage__ntp_split_seconds(untyped_member, index));
  uint8_t * value =
    (uint8_t *)(untyped_value);
  *value = *item;
}

void nav_messages__msg__RadarFftDataMessage__rosidl_typesupport_introspection_c__assign_function__RadarFftDataMessage__ntp_split_seconds(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint8_t * item =
    ((uint8_t *)
    nav_messages__msg__RadarFftDataMessage__rosidl_typesupport_introspection_c__get_function__RadarFftDataMessage__ntp_split_seconds(untyped_member, index));
  const uint8_t * value =
    (const uint8_t *)(untyped_value);
  *item = *value;
}

bool nav_messages__msg__RadarFftDataMessage__rosidl_typesupport_introspection_c__resize_function__RadarFftDataMessage__ntp_split_seconds(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__uint8__Sequence * member =
    (rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  rosidl_runtime_c__uint8__Sequence__fini(member);
  return rosidl_runtime_c__uint8__Sequence__init(member, size);
}

size_t nav_messages__msg__RadarFftDataMessage__rosidl_typesupport_introspection_c__size_function__RadarFftDataMessage__data(
  const void * untyped_member)
{
  const rosidl_runtime_c__uint8__Sequence * member =
    (const rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return member->size;
}

const void * nav_messages__msg__RadarFftDataMessage__rosidl_typesupport_introspection_c__get_const_function__RadarFftDataMessage__data(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__uint8__Sequence * member =
    (const rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return &member->data[index];
}

void * nav_messages__msg__RadarFftDataMessage__rosidl_typesupport_introspection_c__get_function__RadarFftDataMessage__data(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__uint8__Sequence * member =
    (rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return &member->data[index];
}

void nav_messages__msg__RadarFftDataMessage__rosidl_typesupport_introspection_c__fetch_function__RadarFftDataMessage__data(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint8_t * item =
    ((const uint8_t *)
    nav_messages__msg__RadarFftDataMessage__rosidl_typesupport_introspection_c__get_const_function__RadarFftDataMessage__data(untyped_member, index));
  uint8_t * value =
    (uint8_t *)(untyped_value);
  *value = *item;
}

void nav_messages__msg__RadarFftDataMessage__rosidl_typesupport_introspection_c__assign_function__RadarFftDataMessage__data(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint8_t * item =
    ((uint8_t *)
    nav_messages__msg__RadarFftDataMessage__rosidl_typesupport_introspection_c__get_function__RadarFftDataMessage__data(untyped_member, index));
  const uint8_t * value =
    (const uint8_t *)(untyped_value);
  *item = *value;
}

bool nav_messages__msg__RadarFftDataMessage__rosidl_typesupport_introspection_c__resize_function__RadarFftDataMessage__data(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__uint8__Sequence * member =
    (rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  rosidl_runtime_c__uint8__Sequence__fini(member);
  return rosidl_runtime_c__uint8__Sequence__init(member, size);
}

size_t nav_messages__msg__RadarFftDataMessage__rosidl_typesupport_introspection_c__size_function__RadarFftDataMessage__data_length(
  const void * untyped_member)
{
  const rosidl_runtime_c__uint8__Sequence * member =
    (const rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return member->size;
}

const void * nav_messages__msg__RadarFftDataMessage__rosidl_typesupport_introspection_c__get_const_function__RadarFftDataMessage__data_length(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__uint8__Sequence * member =
    (const rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return &member->data[index];
}

void * nav_messages__msg__RadarFftDataMessage__rosidl_typesupport_introspection_c__get_function__RadarFftDataMessage__data_length(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__uint8__Sequence * member =
    (rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return &member->data[index];
}

void nav_messages__msg__RadarFftDataMessage__rosidl_typesupport_introspection_c__fetch_function__RadarFftDataMessage__data_length(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint8_t * item =
    ((const uint8_t *)
    nav_messages__msg__RadarFftDataMessage__rosidl_typesupport_introspection_c__get_const_function__RadarFftDataMessage__data_length(untyped_member, index));
  uint8_t * value =
    (uint8_t *)(untyped_value);
  *value = *item;
}

void nav_messages__msg__RadarFftDataMessage__rosidl_typesupport_introspection_c__assign_function__RadarFftDataMessage__data_length(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint8_t * item =
    ((uint8_t *)
    nav_messages__msg__RadarFftDataMessage__rosidl_typesupport_introspection_c__get_function__RadarFftDataMessage__data_length(untyped_member, index));
  const uint8_t * value =
    (const uint8_t *)(untyped_value);
  *item = *value;
}

bool nav_messages__msg__RadarFftDataMessage__rosidl_typesupport_introspection_c__resize_function__RadarFftDataMessage__data_length(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__uint8__Sequence * member =
    (rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  rosidl_runtime_c__uint8__Sequence__fini(member);
  return rosidl_runtime_c__uint8__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember nav_messages__msg__RadarFftDataMessage__rosidl_typesupport_introspection_c__RadarFftDataMessage_message_member_array[8] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(nav_messages__msg__RadarFftDataMessage, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "angle",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(nav_messages__msg__RadarFftDataMessage, angle),  // bytes offset in struct
    NULL,  // default value
    nav_messages__msg__RadarFftDataMessage__rosidl_typesupport_introspection_c__size_function__RadarFftDataMessage__angle,  // size() function pointer
    nav_messages__msg__RadarFftDataMessage__rosidl_typesupport_introspection_c__get_const_function__RadarFftDataMessage__angle,  // get_const(index) function pointer
    nav_messages__msg__RadarFftDataMessage__rosidl_typesupport_introspection_c__get_function__RadarFftDataMessage__angle,  // get(index) function pointer
    nav_messages__msg__RadarFftDataMessage__rosidl_typesupport_introspection_c__fetch_function__RadarFftDataMessage__angle,  // fetch(index, &value) function pointer
    nav_messages__msg__RadarFftDataMessage__rosidl_typesupport_introspection_c__assign_function__RadarFftDataMessage__angle,  // assign(index, value) function pointer
    nav_messages__msg__RadarFftDataMessage__rosidl_typesupport_introspection_c__resize_function__RadarFftDataMessage__angle  // resize(index) function pointer
  },
  {
    "azimuth",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(nav_messages__msg__RadarFftDataMessage, azimuth),  // bytes offset in struct
    NULL,  // default value
    nav_messages__msg__RadarFftDataMessage__rosidl_typesupport_introspection_c__size_function__RadarFftDataMessage__azimuth,  // size() function pointer
    nav_messages__msg__RadarFftDataMessage__rosidl_typesupport_introspection_c__get_const_function__RadarFftDataMessage__azimuth,  // get_const(index) function pointer
    nav_messages__msg__RadarFftDataMessage__rosidl_typesupport_introspection_c__get_function__RadarFftDataMessage__azimuth,  // get(index) function pointer
    nav_messages__msg__RadarFftDataMessage__rosidl_typesupport_introspection_c__fetch_function__RadarFftDataMessage__azimuth,  // fetch(index, &value) function pointer
    nav_messages__msg__RadarFftDataMessage__rosidl_typesupport_introspection_c__assign_function__RadarFftDataMessage__azimuth,  // assign(index, value) function pointer
    nav_messages__msg__RadarFftDataMessage__rosidl_typesupport_introspection_c__resize_function__RadarFftDataMessage__azimuth  // resize(index) function pointer
  },
  {
    "sweep_counter",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(nav_messages__msg__RadarFftDataMessage, sweep_counter),  // bytes offset in struct
    NULL,  // default value
    nav_messages__msg__RadarFftDataMessage__rosidl_typesupport_introspection_c__size_function__RadarFftDataMessage__sweep_counter,  // size() function pointer
    nav_messages__msg__RadarFftDataMessage__rosidl_typesupport_introspection_c__get_const_function__RadarFftDataMessage__sweep_counter,  // get_const(index) function pointer
    nav_messages__msg__RadarFftDataMessage__rosidl_typesupport_introspection_c__get_function__RadarFftDataMessage__sweep_counter,  // get(index) function pointer
    nav_messages__msg__RadarFftDataMessage__rosidl_typesupport_introspection_c__fetch_function__RadarFftDataMessage__sweep_counter,  // fetch(index, &value) function pointer
    nav_messages__msg__RadarFftDataMessage__rosidl_typesupport_introspection_c__assign_function__RadarFftDataMessage__sweep_counter,  // assign(index, value) function pointer
    nav_messages__msg__RadarFftDataMessage__rosidl_typesupport_introspection_c__resize_function__RadarFftDataMessage__sweep_counter  // resize(index) function pointer
  },
  {
    "ntp_seconds",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(nav_messages__msg__RadarFftDataMessage, ntp_seconds),  // bytes offset in struct
    NULL,  // default value
    nav_messages__msg__RadarFftDataMessage__rosidl_typesupport_introspection_c__size_function__RadarFftDataMessage__ntp_seconds,  // size() function pointer
    nav_messages__msg__RadarFftDataMessage__rosidl_typesupport_introspection_c__get_const_function__RadarFftDataMessage__ntp_seconds,  // get_const(index) function pointer
    nav_messages__msg__RadarFftDataMessage__rosidl_typesupport_introspection_c__get_function__RadarFftDataMessage__ntp_seconds,  // get(index) function pointer
    nav_messages__msg__RadarFftDataMessage__rosidl_typesupport_introspection_c__fetch_function__RadarFftDataMessage__ntp_seconds,  // fetch(index, &value) function pointer
    nav_messages__msg__RadarFftDataMessage__rosidl_typesupport_introspection_c__assign_function__RadarFftDataMessage__ntp_seconds,  // assign(index, value) function pointer
    nav_messages__msg__RadarFftDataMessage__rosidl_typesupport_introspection_c__resize_function__RadarFftDataMessage__ntp_seconds  // resize(index) function pointer
  },
  {
    "ntp_split_seconds",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(nav_messages__msg__RadarFftDataMessage, ntp_split_seconds),  // bytes offset in struct
    NULL,  // default value
    nav_messages__msg__RadarFftDataMessage__rosidl_typesupport_introspection_c__size_function__RadarFftDataMessage__ntp_split_seconds,  // size() function pointer
    nav_messages__msg__RadarFftDataMessage__rosidl_typesupport_introspection_c__get_const_function__RadarFftDataMessage__ntp_split_seconds,  // get_const(index) function pointer
    nav_messages__msg__RadarFftDataMessage__rosidl_typesupport_introspection_c__get_function__RadarFftDataMessage__ntp_split_seconds,  // get(index) function pointer
    nav_messages__msg__RadarFftDataMessage__rosidl_typesupport_introspection_c__fetch_function__RadarFftDataMessage__ntp_split_seconds,  // fetch(index, &value) function pointer
    nav_messages__msg__RadarFftDataMessage__rosidl_typesupport_introspection_c__assign_function__RadarFftDataMessage__ntp_split_seconds,  // assign(index, value) function pointer
    nav_messages__msg__RadarFftDataMessage__rosidl_typesupport_introspection_c__resize_function__RadarFftDataMessage__ntp_split_seconds  // resize(index) function pointer
  },
  {
    "data",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(nav_messages__msg__RadarFftDataMessage, data),  // bytes offset in struct
    NULL,  // default value
    nav_messages__msg__RadarFftDataMessage__rosidl_typesupport_introspection_c__size_function__RadarFftDataMessage__data,  // size() function pointer
    nav_messages__msg__RadarFftDataMessage__rosidl_typesupport_introspection_c__get_const_function__RadarFftDataMessage__data,  // get_const(index) function pointer
    nav_messages__msg__RadarFftDataMessage__rosidl_typesupport_introspection_c__get_function__RadarFftDataMessage__data,  // get(index) function pointer
    nav_messages__msg__RadarFftDataMessage__rosidl_typesupport_introspection_c__fetch_function__RadarFftDataMessage__data,  // fetch(index, &value) function pointer
    nav_messages__msg__RadarFftDataMessage__rosidl_typesupport_introspection_c__assign_function__RadarFftDataMessage__data,  // assign(index, value) function pointer
    nav_messages__msg__RadarFftDataMessage__rosidl_typesupport_introspection_c__resize_function__RadarFftDataMessage__data  // resize(index) function pointer
  },
  {
    "data_length",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(nav_messages__msg__RadarFftDataMessage, data_length),  // bytes offset in struct
    NULL,  // default value
    nav_messages__msg__RadarFftDataMessage__rosidl_typesupport_introspection_c__size_function__RadarFftDataMessage__data_length,  // size() function pointer
    nav_messages__msg__RadarFftDataMessage__rosidl_typesupport_introspection_c__get_const_function__RadarFftDataMessage__data_length,  // get_const(index) function pointer
    nav_messages__msg__RadarFftDataMessage__rosidl_typesupport_introspection_c__get_function__RadarFftDataMessage__data_length,  // get(index) function pointer
    nav_messages__msg__RadarFftDataMessage__rosidl_typesupport_introspection_c__fetch_function__RadarFftDataMessage__data_length,  // fetch(index, &value) function pointer
    nav_messages__msg__RadarFftDataMessage__rosidl_typesupport_introspection_c__assign_function__RadarFftDataMessage__data_length,  // assign(index, value) function pointer
    nav_messages__msg__RadarFftDataMessage__rosidl_typesupport_introspection_c__resize_function__RadarFftDataMessage__data_length  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers nav_messages__msg__RadarFftDataMessage__rosidl_typesupport_introspection_c__RadarFftDataMessage_message_members = {
  "nav_messages__msg",  // message namespace
  "RadarFftDataMessage",  // message name
  8,  // number of fields
  sizeof(nav_messages__msg__RadarFftDataMessage),
  nav_messages__msg__RadarFftDataMessage__rosidl_typesupport_introspection_c__RadarFftDataMessage_message_member_array,  // message members
  nav_messages__msg__RadarFftDataMessage__rosidl_typesupport_introspection_c__RadarFftDataMessage_init_function,  // function to initialize message memory (memory has to be allocated)
  nav_messages__msg__RadarFftDataMessage__rosidl_typesupport_introspection_c__RadarFftDataMessage_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t nav_messages__msg__RadarFftDataMessage__rosidl_typesupport_introspection_c__RadarFftDataMessage_message_type_support_handle = {
  0,
  &nav_messages__msg__RadarFftDataMessage__rosidl_typesupport_introspection_c__RadarFftDataMessage_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_nav_messages
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nav_messages, msg, RadarFftDataMessage)() {
  nav_messages__msg__RadarFftDataMessage__rosidl_typesupport_introspection_c__RadarFftDataMessage_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  if (!nav_messages__msg__RadarFftDataMessage__rosidl_typesupport_introspection_c__RadarFftDataMessage_message_type_support_handle.typesupport_identifier) {
    nav_messages__msg__RadarFftDataMessage__rosidl_typesupport_introspection_c__RadarFftDataMessage_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &nav_messages__msg__RadarFftDataMessage__rosidl_typesupport_introspection_c__RadarFftDataMessage_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
