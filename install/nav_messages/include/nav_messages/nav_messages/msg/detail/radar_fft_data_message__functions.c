// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from nav_messages:msg/RadarFftDataMessage.idl
// generated code does not contain a copyright notice
#include "nav_messages/msg/detail/radar_fft_data_message__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `angle`
// Member `azimuth`
// Member `sweep_counter`
// Member `ntp_seconds`
// Member `ntp_split_seconds`
// Member `data`
// Member `data_length`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
nav_messages__msg__RadarFftDataMessage__init(nav_messages__msg__RadarFftDataMessage * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    nav_messages__msg__RadarFftDataMessage__fini(msg);
    return false;
  }
  // angle
  if (!rosidl_runtime_c__uint8__Sequence__init(&msg->angle, 0)) {
    nav_messages__msg__RadarFftDataMessage__fini(msg);
    return false;
  }
  // azimuth
  if (!rosidl_runtime_c__uint8__Sequence__init(&msg->azimuth, 0)) {
    nav_messages__msg__RadarFftDataMessage__fini(msg);
    return false;
  }
  // sweep_counter
  if (!rosidl_runtime_c__uint8__Sequence__init(&msg->sweep_counter, 0)) {
    nav_messages__msg__RadarFftDataMessage__fini(msg);
    return false;
  }
  // ntp_seconds
  if (!rosidl_runtime_c__uint8__Sequence__init(&msg->ntp_seconds, 0)) {
    nav_messages__msg__RadarFftDataMessage__fini(msg);
    return false;
  }
  // ntp_split_seconds
  if (!rosidl_runtime_c__uint8__Sequence__init(&msg->ntp_split_seconds, 0)) {
    nav_messages__msg__RadarFftDataMessage__fini(msg);
    return false;
  }
  // data
  if (!rosidl_runtime_c__uint8__Sequence__init(&msg->data, 0)) {
    nav_messages__msg__RadarFftDataMessage__fini(msg);
    return false;
  }
  // data_length
  if (!rosidl_runtime_c__uint8__Sequence__init(&msg->data_length, 0)) {
    nav_messages__msg__RadarFftDataMessage__fini(msg);
    return false;
  }
  return true;
}

void
nav_messages__msg__RadarFftDataMessage__fini(nav_messages__msg__RadarFftDataMessage * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // angle
  rosidl_runtime_c__uint8__Sequence__fini(&msg->angle);
  // azimuth
  rosidl_runtime_c__uint8__Sequence__fini(&msg->azimuth);
  // sweep_counter
  rosidl_runtime_c__uint8__Sequence__fini(&msg->sweep_counter);
  // ntp_seconds
  rosidl_runtime_c__uint8__Sequence__fini(&msg->ntp_seconds);
  // ntp_split_seconds
  rosidl_runtime_c__uint8__Sequence__fini(&msg->ntp_split_seconds);
  // data
  rosidl_runtime_c__uint8__Sequence__fini(&msg->data);
  // data_length
  rosidl_runtime_c__uint8__Sequence__fini(&msg->data_length);
}

bool
nav_messages__msg__RadarFftDataMessage__are_equal(const nav_messages__msg__RadarFftDataMessage * lhs, const nav_messages__msg__RadarFftDataMessage * rhs)
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
  // angle
  if (!rosidl_runtime_c__uint8__Sequence__are_equal(
      &(lhs->angle), &(rhs->angle)))
  {
    return false;
  }
  // azimuth
  if (!rosidl_runtime_c__uint8__Sequence__are_equal(
      &(lhs->azimuth), &(rhs->azimuth)))
  {
    return false;
  }
  // sweep_counter
  if (!rosidl_runtime_c__uint8__Sequence__are_equal(
      &(lhs->sweep_counter), &(rhs->sweep_counter)))
  {
    return false;
  }
  // ntp_seconds
  if (!rosidl_runtime_c__uint8__Sequence__are_equal(
      &(lhs->ntp_seconds), &(rhs->ntp_seconds)))
  {
    return false;
  }
  // ntp_split_seconds
  if (!rosidl_runtime_c__uint8__Sequence__are_equal(
      &(lhs->ntp_split_seconds), &(rhs->ntp_split_seconds)))
  {
    return false;
  }
  // data
  if (!rosidl_runtime_c__uint8__Sequence__are_equal(
      &(lhs->data), &(rhs->data)))
  {
    return false;
  }
  // data_length
  if (!rosidl_runtime_c__uint8__Sequence__are_equal(
      &(lhs->data_length), &(rhs->data_length)))
  {
    return false;
  }
  return true;
}

bool
nav_messages__msg__RadarFftDataMessage__copy(
  const nav_messages__msg__RadarFftDataMessage * input,
  nav_messages__msg__RadarFftDataMessage * output)
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
  // angle
  if (!rosidl_runtime_c__uint8__Sequence__copy(
      &(input->angle), &(output->angle)))
  {
    return false;
  }
  // azimuth
  if (!rosidl_runtime_c__uint8__Sequence__copy(
      &(input->azimuth), &(output->azimuth)))
  {
    return false;
  }
  // sweep_counter
  if (!rosidl_runtime_c__uint8__Sequence__copy(
      &(input->sweep_counter), &(output->sweep_counter)))
  {
    return false;
  }
  // ntp_seconds
  if (!rosidl_runtime_c__uint8__Sequence__copy(
      &(input->ntp_seconds), &(output->ntp_seconds)))
  {
    return false;
  }
  // ntp_split_seconds
  if (!rosidl_runtime_c__uint8__Sequence__copy(
      &(input->ntp_split_seconds), &(output->ntp_split_seconds)))
  {
    return false;
  }
  // data
  if (!rosidl_runtime_c__uint8__Sequence__copy(
      &(input->data), &(output->data)))
  {
    return false;
  }
  // data_length
  if (!rosidl_runtime_c__uint8__Sequence__copy(
      &(input->data_length), &(output->data_length)))
  {
    return false;
  }
  return true;
}

nav_messages__msg__RadarFftDataMessage *
nav_messages__msg__RadarFftDataMessage__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  nav_messages__msg__RadarFftDataMessage * msg = (nav_messages__msg__RadarFftDataMessage *)allocator.allocate(sizeof(nav_messages__msg__RadarFftDataMessage), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(nav_messages__msg__RadarFftDataMessage));
  bool success = nav_messages__msg__RadarFftDataMessage__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
nav_messages__msg__RadarFftDataMessage__destroy(nav_messages__msg__RadarFftDataMessage * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    nav_messages__msg__RadarFftDataMessage__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
nav_messages__msg__RadarFftDataMessage__Sequence__init(nav_messages__msg__RadarFftDataMessage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  nav_messages__msg__RadarFftDataMessage * data = NULL;

  if (size) {
    data = (nav_messages__msg__RadarFftDataMessage *)allocator.zero_allocate(size, sizeof(nav_messages__msg__RadarFftDataMessage), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = nav_messages__msg__RadarFftDataMessage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        nav_messages__msg__RadarFftDataMessage__fini(&data[i - 1]);
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
nav_messages__msg__RadarFftDataMessage__Sequence__fini(nav_messages__msg__RadarFftDataMessage__Sequence * array)
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
      nav_messages__msg__RadarFftDataMessage__fini(&array->data[i]);
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

nav_messages__msg__RadarFftDataMessage__Sequence *
nav_messages__msg__RadarFftDataMessage__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  nav_messages__msg__RadarFftDataMessage__Sequence * array = (nav_messages__msg__RadarFftDataMessage__Sequence *)allocator.allocate(sizeof(nav_messages__msg__RadarFftDataMessage__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = nav_messages__msg__RadarFftDataMessage__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
nav_messages__msg__RadarFftDataMessage__Sequence__destroy(nav_messages__msg__RadarFftDataMessage__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    nav_messages__msg__RadarFftDataMessage__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
nav_messages__msg__RadarFftDataMessage__Sequence__are_equal(const nav_messages__msg__RadarFftDataMessage__Sequence * lhs, const nav_messages__msg__RadarFftDataMessage__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!nav_messages__msg__RadarFftDataMessage__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
nav_messages__msg__RadarFftDataMessage__Sequence__copy(
  const nav_messages__msg__RadarFftDataMessage__Sequence * input,
  nav_messages__msg__RadarFftDataMessage__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(nav_messages__msg__RadarFftDataMessage);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    nav_messages__msg__RadarFftDataMessage * data =
      (nav_messages__msg__RadarFftDataMessage *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!nav_messages__msg__RadarFftDataMessage__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          nav_messages__msg__RadarFftDataMessage__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!nav_messages__msg__RadarFftDataMessage__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
