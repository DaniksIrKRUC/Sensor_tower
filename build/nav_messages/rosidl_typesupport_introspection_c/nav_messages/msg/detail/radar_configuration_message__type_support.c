// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from nav_messages:msg/RadarConfigurationMessage.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "nav_messages/msg/detail/radar_configuration_message__rosidl_typesupport_introspection_c.h"
#include "nav_messages/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "nav_messages/msg/detail/radar_configuration_message__functions.h"
#include "nav_messages/msg/detail/radar_configuration_message__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `azimuth_samples`
// Member `encoder_size`
// Member `bin_size`
// Member `range_in_bins`
// Member `expected_rotation_rate`
// Member `range_gain`
// Member `range_offset`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void nav_messages__msg__RadarConfigurationMessage__rosidl_typesupport_introspection_c__RadarConfigurationMessage_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  nav_messages__msg__RadarConfigurationMessage__init(message_memory);
}

void nav_messages__msg__RadarConfigurationMessage__rosidl_typesupport_introspection_c__RadarConfigurationMessage_fini_function(void * message_memory)
{
  nav_messages__msg__RadarConfigurationMessage__fini(message_memory);
}

size_t nav_messages__msg__RadarConfigurationMessage__rosidl_typesupport_introspection_c__size_function__RadarConfigurationMessage__azimuth_samples(
  const void * untyped_member)
{
  const rosidl_runtime_c__uint8__Sequence * member =
    (const rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return member->size;
}

const void * nav_messages__msg__RadarConfigurationMessage__rosidl_typesupport_introspection_c__get_const_function__RadarConfigurationMessage__azimuth_samples(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__uint8__Sequence * member =
    (const rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return &member->data[index];
}

void * nav_messages__msg__RadarConfigurationMessage__rosidl_typesupport_introspection_c__get_function__RadarConfigurationMessage__azimuth_samples(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__uint8__Sequence * member =
    (rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return &member->data[index];
}

void nav_messages__msg__RadarConfigurationMessage__rosidl_typesupport_introspection_c__fetch_function__RadarConfigurationMessage__azimuth_samples(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint8_t * item =
    ((const uint8_t *)
    nav_messages__msg__RadarConfigurationMessage__rosidl_typesupport_introspection_c__get_const_function__RadarConfigurationMessage__azimuth_samples(untyped_member, index));
  uint8_t * value =
    (uint8_t *)(untyped_value);
  *value = *item;
}

void nav_messages__msg__RadarConfigurationMessage__rosidl_typesupport_introspection_c__assign_function__RadarConfigurationMessage__azimuth_samples(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint8_t * item =
    ((uint8_t *)
    nav_messages__msg__RadarConfigurationMessage__rosidl_typesupport_introspection_c__get_function__RadarConfigurationMessage__azimuth_samples(untyped_member, index));
  const uint8_t * value =
    (const uint8_t *)(untyped_value);
  *item = *value;
}

bool nav_messages__msg__RadarConfigurationMessage__rosidl_typesupport_introspection_c__resize_function__RadarConfigurationMessage__azimuth_samples(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__uint8__Sequence * member =
    (rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  rosidl_runtime_c__uint8__Sequence__fini(member);
  return rosidl_runtime_c__uint8__Sequence__init(member, size);
}

size_t nav_messages__msg__RadarConfigurationMessage__rosidl_typesupport_introspection_c__size_function__RadarConfigurationMessage__encoder_size(
  const void * untyped_member)
{
  const rosidl_runtime_c__uint8__Sequence * member =
    (const rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return member->size;
}

const void * nav_messages__msg__RadarConfigurationMessage__rosidl_typesupport_introspection_c__get_const_function__RadarConfigurationMessage__encoder_size(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__uint8__Sequence * member =
    (const rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return &member->data[index];
}

void * nav_messages__msg__RadarConfigurationMessage__rosidl_typesupport_introspection_c__get_function__RadarConfigurationMessage__encoder_size(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__uint8__Sequence * member =
    (rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return &member->data[index];
}

void nav_messages__msg__RadarConfigurationMessage__rosidl_typesupport_introspection_c__fetch_function__RadarConfigurationMessage__encoder_size(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint8_t * item =
    ((const uint8_t *)
    nav_messages__msg__RadarConfigurationMessage__rosidl_typesupport_introspection_c__get_const_function__RadarConfigurationMessage__encoder_size(untyped_member, index));
  uint8_t * value =
    (uint8_t *)(untyped_value);
  *value = *item;
}

void nav_messages__msg__RadarConfigurationMessage__rosidl_typesupport_introspection_c__assign_function__RadarConfigurationMessage__encoder_size(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint8_t * item =
    ((uint8_t *)
    nav_messages__msg__RadarConfigurationMessage__rosidl_typesupport_introspection_c__get_function__RadarConfigurationMessage__encoder_size(untyped_member, index));
  const uint8_t * value =
    (const uint8_t *)(untyped_value);
  *item = *value;
}

bool nav_messages__msg__RadarConfigurationMessage__rosidl_typesupport_introspection_c__resize_function__RadarConfigurationMessage__encoder_size(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__uint8__Sequence * member =
    (rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  rosidl_runtime_c__uint8__Sequence__fini(member);
  return rosidl_runtime_c__uint8__Sequence__init(member, size);
}

size_t nav_messages__msg__RadarConfigurationMessage__rosidl_typesupport_introspection_c__size_function__RadarConfigurationMessage__bin_size(
  const void * untyped_member)
{
  const rosidl_runtime_c__uint8__Sequence * member =
    (const rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return member->size;
}

const void * nav_messages__msg__RadarConfigurationMessage__rosidl_typesupport_introspection_c__get_const_function__RadarConfigurationMessage__bin_size(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__uint8__Sequence * member =
    (const rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return &member->data[index];
}

void * nav_messages__msg__RadarConfigurationMessage__rosidl_typesupport_introspection_c__get_function__RadarConfigurationMessage__bin_size(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__uint8__Sequence * member =
    (rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return &member->data[index];
}

void nav_messages__msg__RadarConfigurationMessage__rosidl_typesupport_introspection_c__fetch_function__RadarConfigurationMessage__bin_size(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint8_t * item =
    ((const uint8_t *)
    nav_messages__msg__RadarConfigurationMessage__rosidl_typesupport_introspection_c__get_const_function__RadarConfigurationMessage__bin_size(untyped_member, index));
  uint8_t * value =
    (uint8_t *)(untyped_value);
  *value = *item;
}

void nav_messages__msg__RadarConfigurationMessage__rosidl_typesupport_introspection_c__assign_function__RadarConfigurationMessage__bin_size(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint8_t * item =
    ((uint8_t *)
    nav_messages__msg__RadarConfigurationMessage__rosidl_typesupport_introspection_c__get_function__RadarConfigurationMessage__bin_size(untyped_member, index));
  const uint8_t * value =
    (const uint8_t *)(untyped_value);
  *item = *value;
}

bool nav_messages__msg__RadarConfigurationMessage__rosidl_typesupport_introspection_c__resize_function__RadarConfigurationMessage__bin_size(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__uint8__Sequence * member =
    (rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  rosidl_runtime_c__uint8__Sequence__fini(member);
  return rosidl_runtime_c__uint8__Sequence__init(member, size);
}

size_t nav_messages__msg__RadarConfigurationMessage__rosidl_typesupport_introspection_c__size_function__RadarConfigurationMessage__range_in_bins(
  const void * untyped_member)
{
  const rosidl_runtime_c__uint8__Sequence * member =
    (const rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return member->size;
}

const void * nav_messages__msg__RadarConfigurationMessage__rosidl_typesupport_introspection_c__get_const_function__RadarConfigurationMessage__range_in_bins(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__uint8__Sequence * member =
    (const rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return &member->data[index];
}

void * nav_messages__msg__RadarConfigurationMessage__rosidl_typesupport_introspection_c__get_function__RadarConfigurationMessage__range_in_bins(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__uint8__Sequence * member =
    (rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return &member->data[index];
}

void nav_messages__msg__RadarConfigurationMessage__rosidl_typesupport_introspection_c__fetch_function__RadarConfigurationMessage__range_in_bins(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint8_t * item =
    ((const uint8_t *)
    nav_messages__msg__RadarConfigurationMessage__rosidl_typesupport_introspection_c__get_const_function__RadarConfigurationMessage__range_in_bins(untyped_member, index));
  uint8_t * value =
    (uint8_t *)(untyped_value);
  *value = *item;
}

void nav_messages__msg__RadarConfigurationMessage__rosidl_typesupport_introspection_c__assign_function__RadarConfigurationMessage__range_in_bins(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint8_t * item =
    ((uint8_t *)
    nav_messages__msg__RadarConfigurationMessage__rosidl_typesupport_introspection_c__get_function__RadarConfigurationMessage__range_in_bins(untyped_member, index));
  const uint8_t * value =
    (const uint8_t *)(untyped_value);
  *item = *value;
}

bool nav_messages__msg__RadarConfigurationMessage__rosidl_typesupport_introspection_c__resize_function__RadarConfigurationMessage__range_in_bins(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__uint8__Sequence * member =
    (rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  rosidl_runtime_c__uint8__Sequence__fini(member);
  return rosidl_runtime_c__uint8__Sequence__init(member, size);
}

size_t nav_messages__msg__RadarConfigurationMessage__rosidl_typesupport_introspection_c__size_function__RadarConfigurationMessage__expected_rotation_rate(
  const void * untyped_member)
{
  const rosidl_runtime_c__uint8__Sequence * member =
    (const rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return member->size;
}

const void * nav_messages__msg__RadarConfigurationMessage__rosidl_typesupport_introspection_c__get_const_function__RadarConfigurationMessage__expected_rotation_rate(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__uint8__Sequence * member =
    (const rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return &member->data[index];
}

void * nav_messages__msg__RadarConfigurationMessage__rosidl_typesupport_introspection_c__get_function__RadarConfigurationMessage__expected_rotation_rate(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__uint8__Sequence * member =
    (rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return &member->data[index];
}

void nav_messages__msg__RadarConfigurationMessage__rosidl_typesupport_introspection_c__fetch_function__RadarConfigurationMessage__expected_rotation_rate(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint8_t * item =
    ((const uint8_t *)
    nav_messages__msg__RadarConfigurationMessage__rosidl_typesupport_introspection_c__get_const_function__RadarConfigurationMessage__expected_rotation_rate(untyped_member, index));
  uint8_t * value =
    (uint8_t *)(untyped_value);
  *value = *item;
}

void nav_messages__msg__RadarConfigurationMessage__rosidl_typesupport_introspection_c__assign_function__RadarConfigurationMessage__expected_rotation_rate(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint8_t * item =
    ((uint8_t *)
    nav_messages__msg__RadarConfigurationMessage__rosidl_typesupport_introspection_c__get_function__RadarConfigurationMessage__expected_rotation_rate(untyped_member, index));
  const uint8_t * value =
    (const uint8_t *)(untyped_value);
  *item = *value;
}

bool nav_messages__msg__RadarConfigurationMessage__rosidl_typesupport_introspection_c__resize_function__RadarConfigurationMessage__expected_rotation_rate(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__uint8__Sequence * member =
    (rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  rosidl_runtime_c__uint8__Sequence__fini(member);
  return rosidl_runtime_c__uint8__Sequence__init(member, size);
}

size_t nav_messages__msg__RadarConfigurationMessage__rosidl_typesupport_introspection_c__size_function__RadarConfigurationMessage__range_gain(
  const void * untyped_member)
{
  const rosidl_runtime_c__uint8__Sequence * member =
    (const rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return member->size;
}

const void * nav_messages__msg__RadarConfigurationMessage__rosidl_typesupport_introspection_c__get_const_function__RadarConfigurationMessage__range_gain(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__uint8__Sequence * member =
    (const rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return &member->data[index];
}

void * nav_messages__msg__RadarConfigurationMessage__rosidl_typesupport_introspection_c__get_function__RadarConfigurationMessage__range_gain(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__uint8__Sequence * member =
    (rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return &member->data[index];
}

void nav_messages__msg__RadarConfigurationMessage__rosidl_typesupport_introspection_c__fetch_function__RadarConfigurationMessage__range_gain(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint8_t * item =
    ((const uint8_t *)
    nav_messages__msg__RadarConfigurationMessage__rosidl_typesupport_introspection_c__get_const_function__RadarConfigurationMessage__range_gain(untyped_member, index));
  uint8_t * value =
    (uint8_t *)(untyped_value);
  *value = *item;
}

void nav_messages__msg__RadarConfigurationMessage__rosidl_typesupport_introspection_c__assign_function__RadarConfigurationMessage__range_gain(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint8_t * item =
    ((uint8_t *)
    nav_messages__msg__RadarConfigurationMessage__rosidl_typesupport_introspection_c__get_function__RadarConfigurationMessage__range_gain(untyped_member, index));
  const uint8_t * value =
    (const uint8_t *)(untyped_value);
  *item = *value;
}

bool nav_messages__msg__RadarConfigurationMessage__rosidl_typesupport_introspection_c__resize_function__RadarConfigurationMessage__range_gain(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__uint8__Sequence * member =
    (rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  rosidl_runtime_c__uint8__Sequence__fini(member);
  return rosidl_runtime_c__uint8__Sequence__init(member, size);
}

size_t nav_messages__msg__RadarConfigurationMessage__rosidl_typesupport_introspection_c__size_function__RadarConfigurationMessage__range_offset(
  const void * untyped_member)
{
  const rosidl_runtime_c__uint8__Sequence * member =
    (const rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return member->size;
}

const void * nav_messages__msg__RadarConfigurationMessage__rosidl_typesupport_introspection_c__get_const_function__RadarConfigurationMessage__range_offset(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__uint8__Sequence * member =
    (const rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return &member->data[index];
}

void * nav_messages__msg__RadarConfigurationMessage__rosidl_typesupport_introspection_c__get_function__RadarConfigurationMessage__range_offset(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__uint8__Sequence * member =
    (rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return &member->data[index];
}

void nav_messages__msg__RadarConfigurationMessage__rosidl_typesupport_introspection_c__fetch_function__RadarConfigurationMessage__range_offset(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint8_t * item =
    ((const uint8_t *)
    nav_messages__msg__RadarConfigurationMessage__rosidl_typesupport_introspection_c__get_const_function__RadarConfigurationMessage__range_offset(untyped_member, index));
  uint8_t * value =
    (uint8_t *)(untyped_value);
  *value = *item;
}

void nav_messages__msg__RadarConfigurationMessage__rosidl_typesupport_introspection_c__assign_function__RadarConfigurationMessage__range_offset(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint8_t * item =
    ((uint8_t *)
    nav_messages__msg__RadarConfigurationMessage__rosidl_typesupport_introspection_c__get_function__RadarConfigurationMessage__range_offset(untyped_member, index));
  const uint8_t * value =
    (const uint8_t *)(untyped_value);
  *item = *value;
}

bool nav_messages__msg__RadarConfigurationMessage__rosidl_typesupport_introspection_c__resize_function__RadarConfigurationMessage__range_offset(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__uint8__Sequence * member =
    (rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  rosidl_runtime_c__uint8__Sequence__fini(member);
  return rosidl_runtime_c__uint8__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember nav_messages__msg__RadarConfigurationMessage__rosidl_typesupport_introspection_c__RadarConfigurationMessage_message_member_array[8] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(nav_messages__msg__RadarConfigurationMessage, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "azimuth_samples",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(nav_messages__msg__RadarConfigurationMessage, azimuth_samples),  // bytes offset in struct
    NULL,  // default value
    nav_messages__msg__RadarConfigurationMessage__rosidl_typesupport_introspection_c__size_function__RadarConfigurationMessage__azimuth_samples,  // size() function pointer
    nav_messages__msg__RadarConfigurationMessage__rosidl_typesupport_introspection_c__get_const_function__RadarConfigurationMessage__azimuth_samples,  // get_const(index) function pointer
    nav_messages__msg__RadarConfigurationMessage__rosidl_typesupport_introspection_c__get_function__RadarConfigurationMessage__azimuth_samples,  // get(index) function pointer
    nav_messages__msg__RadarConfigurationMessage__rosidl_typesupport_introspection_c__fetch_function__RadarConfigurationMessage__azimuth_samples,  // fetch(index, &value) function pointer
    nav_messages__msg__RadarConfigurationMessage__rosidl_typesupport_introspection_c__assign_function__RadarConfigurationMessage__azimuth_samples,  // assign(index, value) function pointer
    nav_messages__msg__RadarConfigurationMessage__rosidl_typesupport_introspection_c__resize_function__RadarConfigurationMessage__azimuth_samples  // resize(index) function pointer
  },
  {
    "encoder_size",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(nav_messages__msg__RadarConfigurationMessage, encoder_size),  // bytes offset in struct
    NULL,  // default value
    nav_messages__msg__RadarConfigurationMessage__rosidl_typesupport_introspection_c__size_function__RadarConfigurationMessage__encoder_size,  // size() function pointer
    nav_messages__msg__RadarConfigurationMessage__rosidl_typesupport_introspection_c__get_const_function__RadarConfigurationMessage__encoder_size,  // get_const(index) function pointer
    nav_messages__msg__RadarConfigurationMessage__rosidl_typesupport_introspection_c__get_function__RadarConfigurationMessage__encoder_size,  // get(index) function pointer
    nav_messages__msg__RadarConfigurationMessage__rosidl_typesupport_introspection_c__fetch_function__RadarConfigurationMessage__encoder_size,  // fetch(index, &value) function pointer
    nav_messages__msg__RadarConfigurationMessage__rosidl_typesupport_introspection_c__assign_function__RadarConfigurationMessage__encoder_size,  // assign(index, value) function pointer
    nav_messages__msg__RadarConfigurationMessage__rosidl_typesupport_introspection_c__resize_function__RadarConfigurationMessage__encoder_size  // resize(index) function pointer
  },
  {
    "bin_size",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(nav_messages__msg__RadarConfigurationMessage, bin_size),  // bytes offset in struct
    NULL,  // default value
    nav_messages__msg__RadarConfigurationMessage__rosidl_typesupport_introspection_c__size_function__RadarConfigurationMessage__bin_size,  // size() function pointer
    nav_messages__msg__RadarConfigurationMessage__rosidl_typesupport_introspection_c__get_const_function__RadarConfigurationMessage__bin_size,  // get_const(index) function pointer
    nav_messages__msg__RadarConfigurationMessage__rosidl_typesupport_introspection_c__get_function__RadarConfigurationMessage__bin_size,  // get(index) function pointer
    nav_messages__msg__RadarConfigurationMessage__rosidl_typesupport_introspection_c__fetch_function__RadarConfigurationMessage__bin_size,  // fetch(index, &value) function pointer
    nav_messages__msg__RadarConfigurationMessage__rosidl_typesupport_introspection_c__assign_function__RadarConfigurationMessage__bin_size,  // assign(index, value) function pointer
    nav_messages__msg__RadarConfigurationMessage__rosidl_typesupport_introspection_c__resize_function__RadarConfigurationMessage__bin_size  // resize(index) function pointer
  },
  {
    "range_in_bins",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(nav_messages__msg__RadarConfigurationMessage, range_in_bins),  // bytes offset in struct
    NULL,  // default value
    nav_messages__msg__RadarConfigurationMessage__rosidl_typesupport_introspection_c__size_function__RadarConfigurationMessage__range_in_bins,  // size() function pointer
    nav_messages__msg__RadarConfigurationMessage__rosidl_typesupport_introspection_c__get_const_function__RadarConfigurationMessage__range_in_bins,  // get_const(index) function pointer
    nav_messages__msg__RadarConfigurationMessage__rosidl_typesupport_introspection_c__get_function__RadarConfigurationMessage__range_in_bins,  // get(index) function pointer
    nav_messages__msg__RadarConfigurationMessage__rosidl_typesupport_introspection_c__fetch_function__RadarConfigurationMessage__range_in_bins,  // fetch(index, &value) function pointer
    nav_messages__msg__RadarConfigurationMessage__rosidl_typesupport_introspection_c__assign_function__RadarConfigurationMessage__range_in_bins,  // assign(index, value) function pointer
    nav_messages__msg__RadarConfigurationMessage__rosidl_typesupport_introspection_c__resize_function__RadarConfigurationMessage__range_in_bins  // resize(index) function pointer
  },
  {
    "expected_rotation_rate",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(nav_messages__msg__RadarConfigurationMessage, expected_rotation_rate),  // bytes offset in struct
    NULL,  // default value
    nav_messages__msg__RadarConfigurationMessage__rosidl_typesupport_introspection_c__size_function__RadarConfigurationMessage__expected_rotation_rate,  // size() function pointer
    nav_messages__msg__RadarConfigurationMessage__rosidl_typesupport_introspection_c__get_const_function__RadarConfigurationMessage__expected_rotation_rate,  // get_const(index) function pointer
    nav_messages__msg__RadarConfigurationMessage__rosidl_typesupport_introspection_c__get_function__RadarConfigurationMessage__expected_rotation_rate,  // get(index) function pointer
    nav_messages__msg__RadarConfigurationMessage__rosidl_typesupport_introspection_c__fetch_function__RadarConfigurationMessage__expected_rotation_rate,  // fetch(index, &value) function pointer
    nav_messages__msg__RadarConfigurationMessage__rosidl_typesupport_introspection_c__assign_function__RadarConfigurationMessage__expected_rotation_rate,  // assign(index, value) function pointer
    nav_messages__msg__RadarConfigurationMessage__rosidl_typesupport_introspection_c__resize_function__RadarConfigurationMessage__expected_rotation_rate  // resize(index) function pointer
  },
  {
    "range_gain",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(nav_messages__msg__RadarConfigurationMessage, range_gain),  // bytes offset in struct
    NULL,  // default value
    nav_messages__msg__RadarConfigurationMessage__rosidl_typesupport_introspection_c__size_function__RadarConfigurationMessage__range_gain,  // size() function pointer
    nav_messages__msg__RadarConfigurationMessage__rosidl_typesupport_introspection_c__get_const_function__RadarConfigurationMessage__range_gain,  // get_const(index) function pointer
    nav_messages__msg__RadarConfigurationMessage__rosidl_typesupport_introspection_c__get_function__RadarConfigurationMessage__range_gain,  // get(index) function pointer
    nav_messages__msg__RadarConfigurationMessage__rosidl_typesupport_introspection_c__fetch_function__RadarConfigurationMessage__range_gain,  // fetch(index, &value) function pointer
    nav_messages__msg__RadarConfigurationMessage__rosidl_typesupport_introspection_c__assign_function__RadarConfigurationMessage__range_gain,  // assign(index, value) function pointer
    nav_messages__msg__RadarConfigurationMessage__rosidl_typesupport_introspection_c__resize_function__RadarConfigurationMessage__range_gain  // resize(index) function pointer
  },
  {
    "range_offset",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(nav_messages__msg__RadarConfigurationMessage, range_offset),  // bytes offset in struct
    NULL,  // default value
    nav_messages__msg__RadarConfigurationMessage__rosidl_typesupport_introspection_c__size_function__RadarConfigurationMessage__range_offset,  // size() function pointer
    nav_messages__msg__RadarConfigurationMessage__rosidl_typesupport_introspection_c__get_const_function__RadarConfigurationMessage__range_offset,  // get_const(index) function pointer
    nav_messages__msg__RadarConfigurationMessage__rosidl_typesupport_introspection_c__get_function__RadarConfigurationMessage__range_offset,  // get(index) function pointer
    nav_messages__msg__RadarConfigurationMessage__rosidl_typesupport_introspection_c__fetch_function__RadarConfigurationMessage__range_offset,  // fetch(index, &value) function pointer
    nav_messages__msg__RadarConfigurationMessage__rosidl_typesupport_introspection_c__assign_function__RadarConfigurationMessage__range_offset,  // assign(index, value) function pointer
    nav_messages__msg__RadarConfigurationMessage__rosidl_typesupport_introspection_c__resize_function__RadarConfigurationMessage__range_offset  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers nav_messages__msg__RadarConfigurationMessage__rosidl_typesupport_introspection_c__RadarConfigurationMessage_message_members = {
  "nav_messages__msg",  // message namespace
  "RadarConfigurationMessage",  // message name
  8,  // number of fields
  sizeof(nav_messages__msg__RadarConfigurationMessage),
  nav_messages__msg__RadarConfigurationMessage__rosidl_typesupport_introspection_c__RadarConfigurationMessage_message_member_array,  // message members
  nav_messages__msg__RadarConfigurationMessage__rosidl_typesupport_introspection_c__RadarConfigurationMessage_init_function,  // function to initialize message memory (memory has to be allocated)
  nav_messages__msg__RadarConfigurationMessage__rosidl_typesupport_introspection_c__RadarConfigurationMessage_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t nav_messages__msg__RadarConfigurationMessage__rosidl_typesupport_introspection_c__RadarConfigurationMessage_message_type_support_handle = {
  0,
  &nav_messages__msg__RadarConfigurationMessage__rosidl_typesupport_introspection_c__RadarConfigurationMessage_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_nav_messages
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nav_messages, msg, RadarConfigurationMessage)() {
  nav_messages__msg__RadarConfigurationMessage__rosidl_typesupport_introspection_c__RadarConfigurationMessage_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  if (!nav_messages__msg__RadarConfigurationMessage__rosidl_typesupport_introspection_c__RadarConfigurationMessage_message_type_support_handle.typesupport_identifier) {
    nav_messages__msg__RadarConfigurationMessage__rosidl_typesupport_introspection_c__RadarConfigurationMessage_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &nav_messages__msg__RadarConfigurationMessage__rosidl_typesupport_introspection_c__RadarConfigurationMessage_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
