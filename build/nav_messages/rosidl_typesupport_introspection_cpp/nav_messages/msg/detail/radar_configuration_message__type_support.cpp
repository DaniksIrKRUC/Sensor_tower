// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from nav_messages:msg/RadarConfigurationMessage.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "nav_messages/msg/detail/radar_configuration_message__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace nav_messages
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void RadarConfigurationMessage_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) nav_messages::msg::RadarConfigurationMessage(_init);
}

void RadarConfigurationMessage_fini_function(void * message_memory)
{
  auto typed_message = static_cast<nav_messages::msg::RadarConfigurationMessage *>(message_memory);
  typed_message->~RadarConfigurationMessage();
}

size_t size_function__RadarConfigurationMessage__azimuth_samples(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<uint8_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__RadarConfigurationMessage__azimuth_samples(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<uint8_t> *>(untyped_member);
  return &member[index];
}

void * get_function__RadarConfigurationMessage__azimuth_samples(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<uint8_t> *>(untyped_member);
  return &member[index];
}

void fetch_function__RadarConfigurationMessage__azimuth_samples(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const uint8_t *>(
    get_const_function__RadarConfigurationMessage__azimuth_samples(untyped_member, index));
  auto & value = *reinterpret_cast<uint8_t *>(untyped_value);
  value = item;
}

void assign_function__RadarConfigurationMessage__azimuth_samples(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<uint8_t *>(
    get_function__RadarConfigurationMessage__azimuth_samples(untyped_member, index));
  const auto & value = *reinterpret_cast<const uint8_t *>(untyped_value);
  item = value;
}

void resize_function__RadarConfigurationMessage__azimuth_samples(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<uint8_t> *>(untyped_member);
  member->resize(size);
}

size_t size_function__RadarConfigurationMessage__encoder_size(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<uint8_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__RadarConfigurationMessage__encoder_size(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<uint8_t> *>(untyped_member);
  return &member[index];
}

void * get_function__RadarConfigurationMessage__encoder_size(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<uint8_t> *>(untyped_member);
  return &member[index];
}

void fetch_function__RadarConfigurationMessage__encoder_size(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const uint8_t *>(
    get_const_function__RadarConfigurationMessage__encoder_size(untyped_member, index));
  auto & value = *reinterpret_cast<uint8_t *>(untyped_value);
  value = item;
}

void assign_function__RadarConfigurationMessage__encoder_size(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<uint8_t *>(
    get_function__RadarConfigurationMessage__encoder_size(untyped_member, index));
  const auto & value = *reinterpret_cast<const uint8_t *>(untyped_value);
  item = value;
}

void resize_function__RadarConfigurationMessage__encoder_size(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<uint8_t> *>(untyped_member);
  member->resize(size);
}

size_t size_function__RadarConfigurationMessage__bin_size(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<uint8_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__RadarConfigurationMessage__bin_size(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<uint8_t> *>(untyped_member);
  return &member[index];
}

void * get_function__RadarConfigurationMessage__bin_size(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<uint8_t> *>(untyped_member);
  return &member[index];
}

void fetch_function__RadarConfigurationMessage__bin_size(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const uint8_t *>(
    get_const_function__RadarConfigurationMessage__bin_size(untyped_member, index));
  auto & value = *reinterpret_cast<uint8_t *>(untyped_value);
  value = item;
}

void assign_function__RadarConfigurationMessage__bin_size(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<uint8_t *>(
    get_function__RadarConfigurationMessage__bin_size(untyped_member, index));
  const auto & value = *reinterpret_cast<const uint8_t *>(untyped_value);
  item = value;
}

void resize_function__RadarConfigurationMessage__bin_size(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<uint8_t> *>(untyped_member);
  member->resize(size);
}

size_t size_function__RadarConfigurationMessage__range_in_bins(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<uint8_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__RadarConfigurationMessage__range_in_bins(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<uint8_t> *>(untyped_member);
  return &member[index];
}

void * get_function__RadarConfigurationMessage__range_in_bins(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<uint8_t> *>(untyped_member);
  return &member[index];
}

void fetch_function__RadarConfigurationMessage__range_in_bins(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const uint8_t *>(
    get_const_function__RadarConfigurationMessage__range_in_bins(untyped_member, index));
  auto & value = *reinterpret_cast<uint8_t *>(untyped_value);
  value = item;
}

void assign_function__RadarConfigurationMessage__range_in_bins(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<uint8_t *>(
    get_function__RadarConfigurationMessage__range_in_bins(untyped_member, index));
  const auto & value = *reinterpret_cast<const uint8_t *>(untyped_value);
  item = value;
}

void resize_function__RadarConfigurationMessage__range_in_bins(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<uint8_t> *>(untyped_member);
  member->resize(size);
}

size_t size_function__RadarConfigurationMessage__expected_rotation_rate(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<uint8_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__RadarConfigurationMessage__expected_rotation_rate(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<uint8_t> *>(untyped_member);
  return &member[index];
}

void * get_function__RadarConfigurationMessage__expected_rotation_rate(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<uint8_t> *>(untyped_member);
  return &member[index];
}

void fetch_function__RadarConfigurationMessage__expected_rotation_rate(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const uint8_t *>(
    get_const_function__RadarConfigurationMessage__expected_rotation_rate(untyped_member, index));
  auto & value = *reinterpret_cast<uint8_t *>(untyped_value);
  value = item;
}

void assign_function__RadarConfigurationMessage__expected_rotation_rate(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<uint8_t *>(
    get_function__RadarConfigurationMessage__expected_rotation_rate(untyped_member, index));
  const auto & value = *reinterpret_cast<const uint8_t *>(untyped_value);
  item = value;
}

void resize_function__RadarConfigurationMessage__expected_rotation_rate(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<uint8_t> *>(untyped_member);
  member->resize(size);
}

size_t size_function__RadarConfigurationMessage__range_gain(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<uint8_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__RadarConfigurationMessage__range_gain(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<uint8_t> *>(untyped_member);
  return &member[index];
}

void * get_function__RadarConfigurationMessage__range_gain(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<uint8_t> *>(untyped_member);
  return &member[index];
}

void fetch_function__RadarConfigurationMessage__range_gain(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const uint8_t *>(
    get_const_function__RadarConfigurationMessage__range_gain(untyped_member, index));
  auto & value = *reinterpret_cast<uint8_t *>(untyped_value);
  value = item;
}

void assign_function__RadarConfigurationMessage__range_gain(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<uint8_t *>(
    get_function__RadarConfigurationMessage__range_gain(untyped_member, index));
  const auto & value = *reinterpret_cast<const uint8_t *>(untyped_value);
  item = value;
}

void resize_function__RadarConfigurationMessage__range_gain(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<uint8_t> *>(untyped_member);
  member->resize(size);
}

size_t size_function__RadarConfigurationMessage__range_offset(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<uint8_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__RadarConfigurationMessage__range_offset(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<uint8_t> *>(untyped_member);
  return &member[index];
}

void * get_function__RadarConfigurationMessage__range_offset(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<uint8_t> *>(untyped_member);
  return &member[index];
}

void fetch_function__RadarConfigurationMessage__range_offset(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const uint8_t *>(
    get_const_function__RadarConfigurationMessage__range_offset(untyped_member, index));
  auto & value = *reinterpret_cast<uint8_t *>(untyped_value);
  value = item;
}

void assign_function__RadarConfigurationMessage__range_offset(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<uint8_t *>(
    get_function__RadarConfigurationMessage__range_offset(untyped_member, index));
  const auto & value = *reinterpret_cast<const uint8_t *>(untyped_value);
  item = value;
}

void resize_function__RadarConfigurationMessage__range_offset(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<uint8_t> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember RadarConfigurationMessage_message_member_array[8] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Header>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(nav_messages::msg::RadarConfigurationMessage, header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "azimuth_samples",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(nav_messages::msg::RadarConfigurationMessage, azimuth_samples),  // bytes offset in struct
    nullptr,  // default value
    size_function__RadarConfigurationMessage__azimuth_samples,  // size() function pointer
    get_const_function__RadarConfigurationMessage__azimuth_samples,  // get_const(index) function pointer
    get_function__RadarConfigurationMessage__azimuth_samples,  // get(index) function pointer
    fetch_function__RadarConfigurationMessage__azimuth_samples,  // fetch(index, &value) function pointer
    assign_function__RadarConfigurationMessage__azimuth_samples,  // assign(index, value) function pointer
    resize_function__RadarConfigurationMessage__azimuth_samples  // resize(index) function pointer
  },
  {
    "encoder_size",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(nav_messages::msg::RadarConfigurationMessage, encoder_size),  // bytes offset in struct
    nullptr,  // default value
    size_function__RadarConfigurationMessage__encoder_size,  // size() function pointer
    get_const_function__RadarConfigurationMessage__encoder_size,  // get_const(index) function pointer
    get_function__RadarConfigurationMessage__encoder_size,  // get(index) function pointer
    fetch_function__RadarConfigurationMessage__encoder_size,  // fetch(index, &value) function pointer
    assign_function__RadarConfigurationMessage__encoder_size,  // assign(index, value) function pointer
    resize_function__RadarConfigurationMessage__encoder_size  // resize(index) function pointer
  },
  {
    "bin_size",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(nav_messages::msg::RadarConfigurationMessage, bin_size),  // bytes offset in struct
    nullptr,  // default value
    size_function__RadarConfigurationMessage__bin_size,  // size() function pointer
    get_const_function__RadarConfigurationMessage__bin_size,  // get_const(index) function pointer
    get_function__RadarConfigurationMessage__bin_size,  // get(index) function pointer
    fetch_function__RadarConfigurationMessage__bin_size,  // fetch(index, &value) function pointer
    assign_function__RadarConfigurationMessage__bin_size,  // assign(index, value) function pointer
    resize_function__RadarConfigurationMessage__bin_size  // resize(index) function pointer
  },
  {
    "range_in_bins",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(nav_messages::msg::RadarConfigurationMessage, range_in_bins),  // bytes offset in struct
    nullptr,  // default value
    size_function__RadarConfigurationMessage__range_in_bins,  // size() function pointer
    get_const_function__RadarConfigurationMessage__range_in_bins,  // get_const(index) function pointer
    get_function__RadarConfigurationMessage__range_in_bins,  // get(index) function pointer
    fetch_function__RadarConfigurationMessage__range_in_bins,  // fetch(index, &value) function pointer
    assign_function__RadarConfigurationMessage__range_in_bins,  // assign(index, value) function pointer
    resize_function__RadarConfigurationMessage__range_in_bins  // resize(index) function pointer
  },
  {
    "expected_rotation_rate",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(nav_messages::msg::RadarConfigurationMessage, expected_rotation_rate),  // bytes offset in struct
    nullptr,  // default value
    size_function__RadarConfigurationMessage__expected_rotation_rate,  // size() function pointer
    get_const_function__RadarConfigurationMessage__expected_rotation_rate,  // get_const(index) function pointer
    get_function__RadarConfigurationMessage__expected_rotation_rate,  // get(index) function pointer
    fetch_function__RadarConfigurationMessage__expected_rotation_rate,  // fetch(index, &value) function pointer
    assign_function__RadarConfigurationMessage__expected_rotation_rate,  // assign(index, value) function pointer
    resize_function__RadarConfigurationMessage__expected_rotation_rate  // resize(index) function pointer
  },
  {
    "range_gain",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(nav_messages::msg::RadarConfigurationMessage, range_gain),  // bytes offset in struct
    nullptr,  // default value
    size_function__RadarConfigurationMessage__range_gain,  // size() function pointer
    get_const_function__RadarConfigurationMessage__range_gain,  // get_const(index) function pointer
    get_function__RadarConfigurationMessage__range_gain,  // get(index) function pointer
    fetch_function__RadarConfigurationMessage__range_gain,  // fetch(index, &value) function pointer
    assign_function__RadarConfigurationMessage__range_gain,  // assign(index, value) function pointer
    resize_function__RadarConfigurationMessage__range_gain  // resize(index) function pointer
  },
  {
    "range_offset",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(nav_messages::msg::RadarConfigurationMessage, range_offset),  // bytes offset in struct
    nullptr,  // default value
    size_function__RadarConfigurationMessage__range_offset,  // size() function pointer
    get_const_function__RadarConfigurationMessage__range_offset,  // get_const(index) function pointer
    get_function__RadarConfigurationMessage__range_offset,  // get(index) function pointer
    fetch_function__RadarConfigurationMessage__range_offset,  // fetch(index, &value) function pointer
    assign_function__RadarConfigurationMessage__range_offset,  // assign(index, value) function pointer
    resize_function__RadarConfigurationMessage__range_offset  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers RadarConfigurationMessage_message_members = {
  "nav_messages::msg",  // message namespace
  "RadarConfigurationMessage",  // message name
  8,  // number of fields
  sizeof(nav_messages::msg::RadarConfigurationMessage),
  RadarConfigurationMessage_message_member_array,  // message members
  RadarConfigurationMessage_init_function,  // function to initialize message memory (memory has to be allocated)
  RadarConfigurationMessage_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t RadarConfigurationMessage_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &RadarConfigurationMessage_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace nav_messages


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<nav_messages::msg::RadarConfigurationMessage>()
{
  return &::nav_messages::msg::rosidl_typesupport_introspection_cpp::RadarConfigurationMessage_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, nav_messages, msg, RadarConfigurationMessage)() {
  return &::nav_messages::msg::rosidl_typesupport_introspection_cpp::RadarConfigurationMessage_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
