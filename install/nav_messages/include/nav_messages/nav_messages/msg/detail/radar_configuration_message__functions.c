// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from nav_messages:msg/RadarConfigurationMessage.idl
// generated code does not contain a copyright notice
#include "nav_messages/msg/detail/radar_configuration_message__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `azimuth_samples`
// Member `encoder_size`
// Member `bin_size`
// Member `range_in_bins`
// Member `expected_rotation_rate`
// Member `range_gain`
// Member `range_offset`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
nav_messages__msg__RadarConfigurationMessage__init(nav_messages__msg__RadarConfigurationMessage * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    nav_messages__msg__RadarConfigurationMessage__fini(msg);
    return false;
  }
  // azimuth_samples
  if (!rosidl_runtime_c__uint8__Sequence__init(&msg->azimuth_samples, 0)) {
    nav_messages__msg__RadarConfigurationMessage__fini(msg);
    return false;
  }
  // encoder_size
  if (!rosidl_runtime_c__uint8__Sequence__init(&msg->encoder_size, 0)) {
    nav_messages__msg__RadarConfigurationMessage__fini(msg);
    return false;
  }
  // bin_size
  if (!rosidl_runtime_c__uint8__Sequence__init(&msg->bin_size, 0)) {
    nav_messages__msg__RadarConfigurationMessage__fini(msg);
    return false;
  }
  // range_in_bins
  if (!rosidl_runtime_c__uint8__Sequence__init(&msg->range_in_bins, 0)) {
    nav_messages__msg__RadarConfigurationMessage__fini(msg);
    return false;
  }
  // expected_rotation_rate
  if (!rosidl_runtime_c__uint8__Sequence__init(&msg->expected_rotation_rate, 0)) {
    nav_messages__msg__RadarConfigurationMessage__fini(msg);
    return false;
  }
  // range_gain
  if (!rosidl_runtime_c__uint8__Sequence__init(&msg->range_gain, 0)) {
    nav_messages__msg__RadarConfigurationMessage__fini(msg);
    return false;
  }
  // range_offset
  if (!rosidl_runtime_c__uint8__Sequence__init(&msg->range_offset, 0)) {
    nav_messages__msg__RadarConfigurationMessage__fini(msg);
    return false;
  }
  return true;
}

void
nav_messages__msg__RadarConfigurationMessage__fini(nav_messages__msg__RadarConfigurationMessage * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // azimuth_samples
  rosidl_runtime_c__uint8__Sequence__fini(&msg->azimuth_samples);
  // encoder_size
  rosidl_runtime_c__uint8__Sequence__fini(&msg->encoder_size);
  // bin_size
  rosidl_runtime_c__uint8__Sequence__fini(&msg->bin_size);
  // range_in_bins
  rosidl_runtime_c__uint8__Sequence__fini(&msg->range_in_bins);
  // expected_rotation_rate
  rosidl_runtime_c__uint8__Sequence__fini(&msg->expected_rotation_rate);
  // range_gain
  rosidl_runtime_c__uint8__Sequence__fini(&msg->range_gain);
  // range_offset
  rosidl_runtime_c__uint8__Sequence__fini(&msg->range_offset);
}

bool
nav_messages__msg__RadarConfigurationMessage__are_equal(const nav_messages__msg__RadarConfigurationMessage * lhs, const nav_messages__msg__RadarConfigurationMessage * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // azimuth_samples
  if (!rosidl_runtime_c__uint8__Sequence__are_equal(
      &(lhs->azimuth_samples), &(rhs->azimuth_samples)))
  {
    return false;
  }
  // encoder_size
  if (!rosidl_runtime_c__uint8__Sequence__are_equal(
      &(lhs->encoder_size), &(rhs->encoder_size)))
  {
    return false;
  }
  // bin_size
  if (!rosidl_runtime_c__uint8__Sequence__are_equal(
      &(lhs->bin_size), &(rhs->bin_size)))
  {
    return false;
  }
  // range_in_bins
  if (!rosidl_runtime_c__uint8__Sequence__are_equal(
      &(lhs->range_in_bins), &(rhs->range_in_bins)))
  {
    return false;
  }
  // expected_rotation_rate
  if (!rosidl_runtime_c__uint8__Sequence__are_equal(
      &(lhs->expected_rotation_rate), &(rhs->expected_rotation_rate)))
  {
    return false;
  }
  // range_gain
  if (!rosidl_runtime_c__uint8__Sequence__are_equal(
      &(lhs->range_gain), &(rhs->range_gain)))
  {
    return false;
  }
  // range_offset
  if (!rosidl_runtime_c__uint8__Sequence__are_equal(
      &(lhs->range_offset), &(rhs->range_offset)))
  {
    return false;
  }
  return true;
}

bool
nav_messages__msg__RadarConfigurationMessage__copy(
  const nav_messages__msg__RadarConfigurationMessage * input,
  nav_messages__msg__RadarConfigurationMessage * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // azimuth_samples
  if (!rosidl_runtime_c__uint8__Sequence__copy(
      &(input->azimuth_samples), &(output->azimuth_samples)))
  {
    return false;
  }
  // encoder_size
  if (!rosidl_runtime_c__uint8__Sequence__copy(
      &(input->encoder_size), &(output->encoder_size)))
  {
    return false;
  }
  // bin_size
  if (!rosidl_runtime_c__uint8__Sequence__copy(
      &(input->bin_size), &(output->bin_size)))
  {
    return false;
  }
  // range_in_bins
  if (!rosidl_runtime_c__uint8__Sequence__copy(
      &(input->range_in_bins), &(output->range_in_bins)))
  {
    return false;
  }
  // expected_rotation_rate
  if (!rosidl_runtime_c__uint8__Sequence__copy(
      &(input->expected_rotation_rate), &(output->expected_rotation_rate)))
  {
    return false;
  }
  // range_gain
  if (!rosidl_runtime_c__uint8__Sequence__copy(
      &(input->range_gain), &(output->range_gain)))
  {
    return false;
  }
  // range_offset
  if (!rosidl_runtime_c__uint8__Sequence__copy(
      &(input->range_offset), &(output->range_offset)))
  {
    return false;
  }
  return true;
}

nav_messages__msg__RadarConfigurationMessage *
nav_messages__msg__RadarConfigurationMessage__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  nav_messages__msg__RadarConfigurationMessage * msg = (nav_messages__msg__RadarConfigurationMessage *)allocator.allocate(sizeof(nav_messages__msg__RadarConfigurationMessage), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(nav_messages__msg__RadarConfigurationMessage));
  bool success = nav_messages__msg__RadarConfigurationMessage__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
nav_messages__msg__RadarConfigurationMessage__destroy(nav_messages__msg__RadarConfigurationMessage * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    nav_messages__msg__RadarConfigurationMessage__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
nav_messages__msg__RadarConfigurationMessage__Sequence__init(nav_messages__msg__RadarConfigurationMessage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  nav_messages__msg__RadarConfigurationMessage * data = NULL;

  if (size) {
    data = (nav_messages__msg__RadarConfigurationMessage *)allocator.zero_allocate(size, sizeof(nav_messages__msg__RadarConfigurationMessage), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = nav_messages__msg__RadarConfigurationMessage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        nav_messages__msg__RadarConfigurationMessage__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
nav_messages__msg__RadarConfigurationMessage__Sequence__fini(nav_messages__msg__RadarConfigurationMessage__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      nav_messages__msg__RadarConfigurationMessage__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

nav_messages__msg__RadarConfigurationMessage__Sequence *
nav_messages__msg__RadarConfigurationMessage__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  nav_messages__msg__RadarConfigurationMessage__Sequence * array = (nav_messages__msg__RadarConfigurationMessage__Sequence *)allocator.allocate(sizeof(nav_messages__msg__RadarConfigurationMessage__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = nav_messages__msg__RadarConfigurationMessage__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
nav_messages__msg__RadarConfigurationMessage__Sequence__destroy(nav_messages__msg__RadarConfigurationMessage__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    nav_messages__msg__RadarConfigurationMessage__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
nav_messages__msg__RadarConfigurationMessage__Sequence__are_equal(const nav_messages__msg__RadarConfigurationMessage__Sequence * lhs, const nav_messages__msg__RadarConfigurationMessage__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!nav_messages__msg__RadarConfigurationMessage__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
nav_messages__msg__RadarConfigurationMessage__Sequence__copy(
  const nav_messages__msg__RadarConfigurationMessage__Sequence * input,
  nav_messages__msg__RadarConfigurationMessage__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(nav_messages__msg__RadarConfigurationMessage);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    nav_messages__msg__RadarConfigurationMessage * data =
      (nav_messages__msg__RadarConfigurationMessage *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!nav_messages__msg__RadarConfigurationMessage__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          nav_messages__msg__RadarConfigurationMessage__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!nav_messages__msg__RadarConfigurationMessage__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
