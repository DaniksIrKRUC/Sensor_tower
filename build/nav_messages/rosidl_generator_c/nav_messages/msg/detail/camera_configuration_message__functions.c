// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from nav_messages:msg/CameraConfigurationMessage.idl
// generated code does not contain a copyright notice
#include "nav_messages/msg/detail/camera_configuration_message__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
nav_messages__msg__CameraConfigurationMessage__init(nav_messages__msg__CameraConfigurationMessage * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    nav_messages__msg__CameraConfigurationMessage__fini(msg);
    return false;
  }
  // height
  // width
  // channels
  // fps
  return true;
}

void
nav_messages__msg__CameraConfigurationMessage__fini(nav_messages__msg__CameraConfigurationMessage * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // height
  // width
  // channels
  // fps
}

bool
nav_messages__msg__CameraConfigurationMessage__are_equal(const nav_messages__msg__CameraConfigurationMessage * lhs, const nav_messages__msg__CameraConfigurationMessage * rhs)
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
  // height
  if (lhs->height != rhs->height) {
    return false;
  }
  // width
  if (lhs->width != rhs->width) {
    return false;
  }
  // channels
  if (lhs->channels != rhs->channels) {
    return false;
  }
  // fps
  if (lhs->fps != rhs->fps) {
    return false;
  }
  return true;
}

bool
nav_messages__msg__CameraConfigurationMessage__copy(
  const nav_messages__msg__CameraConfigurationMessage * input,
  nav_messages__msg__CameraConfigurationMessage * output)
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
  // height
  output->height = input->height;
  // width
  output->width = input->width;
  // channels
  output->channels = input->channels;
  // fps
  output->fps = input->fps;
  return true;
}

nav_messages__msg__CameraConfigurationMessage *
nav_messages__msg__CameraConfigurationMessage__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  nav_messages__msg__CameraConfigurationMessage * msg = (nav_messages__msg__CameraConfigurationMessage *)allocator.allocate(sizeof(nav_messages__msg__CameraConfigurationMessage), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(nav_messages__msg__CameraConfigurationMessage));
  bool success = nav_messages__msg__CameraConfigurationMessage__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
nav_messages__msg__CameraConfigurationMessage__destroy(nav_messages__msg__CameraConfigurationMessage * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    nav_messages__msg__CameraConfigurationMessage__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
nav_messages__msg__CameraConfigurationMessage__Sequence__init(nav_messages__msg__CameraConfigurationMessage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  nav_messages__msg__CameraConfigurationMessage * data = NULL;

  if (size) {
    data = (nav_messages__msg__CameraConfigurationMessage *)allocator.zero_allocate(size, sizeof(nav_messages__msg__CameraConfigurationMessage), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = nav_messages__msg__CameraConfigurationMessage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        nav_messages__msg__CameraConfigurationMessage__fini(&data[i - 1]);
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
nav_messages__msg__CameraConfigurationMessage__Sequence__fini(nav_messages__msg__CameraConfigurationMessage__Sequence * array)
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
      nav_messages__msg__CameraConfigurationMessage__fini(&array->data[i]);
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

nav_messages__msg__CameraConfigurationMessage__Sequence *
nav_messages__msg__CameraConfigurationMessage__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  nav_messages__msg__CameraConfigurationMessage__Sequence * array = (nav_messages__msg__CameraConfigurationMessage__Sequence *)allocator.allocate(sizeof(nav_messages__msg__CameraConfigurationMessage__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = nav_messages__msg__CameraConfigurationMessage__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
nav_messages__msg__CameraConfigurationMessage__Sequence__destroy(nav_messages__msg__CameraConfigurationMessage__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    nav_messages__msg__CameraConfigurationMessage__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
nav_messages__msg__CameraConfigurationMessage__Sequence__are_equal(const nav_messages__msg__CameraConfigurationMessage__Sequence * lhs, const nav_messages__msg__CameraConfigurationMessage__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!nav_messages__msg__CameraConfigurationMessage__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
nav_messages__msg__CameraConfigurationMessage__Sequence__copy(
  const nav_messages__msg__CameraConfigurationMessage__Sequence * input,
  nav_messages__msg__CameraConfigurationMessage__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(nav_messages__msg__CameraConfigurationMessage);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    nav_messages__msg__CameraConfigurationMessage * data =
      (nav_messages__msg__CameraConfigurationMessage *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!nav_messages__msg__CameraConfigurationMessage__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          nav_messages__msg__CameraConfigurationMessage__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!nav_messages__msg__CameraConfigurationMessage__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
