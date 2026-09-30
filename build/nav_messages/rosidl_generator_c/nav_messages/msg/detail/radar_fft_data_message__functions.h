// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from nav_messages:msg/RadarFftDataMessage.idl
// generated code does not contain a copyright notice

#ifndef NAV_MESSAGES__MSG__DETAIL__RADAR_FFT_DATA_MESSAGE__FUNCTIONS_H_
#define NAV_MESSAGES__MSG__DETAIL__RADAR_FFT_DATA_MESSAGE__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "nav_messages/msg/rosidl_generator_c__visibility_control.h"

#include "nav_messages/msg/detail/radar_fft_data_message__struct.h"

/// Initialize msg/RadarFftDataMessage message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * nav_messages__msg__RadarFftDataMessage
 * )) before or use
 * nav_messages__msg__RadarFftDataMessage__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_nav_messages
bool
nav_messages__msg__RadarFftDataMessage__init(nav_messages__msg__RadarFftDataMessage * msg);

/// Finalize msg/RadarFftDataMessage message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_nav_messages
void
nav_messages__msg__RadarFftDataMessage__fini(nav_messages__msg__RadarFftDataMessage * msg);

/// Create msg/RadarFftDataMessage message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * nav_messages__msg__RadarFftDataMessage__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_nav_messages
nav_messages__msg__RadarFftDataMessage *
nav_messages__msg__RadarFftDataMessage__create();

/// Destroy msg/RadarFftDataMessage message.
/**
 * It calls
 * nav_messages__msg__RadarFftDataMessage__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_nav_messages
void
nav_messages__msg__RadarFftDataMessage__destroy(nav_messages__msg__RadarFftDataMessage * msg);

/// Check for msg/RadarFftDataMessage message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_nav_messages
bool
nav_messages__msg__RadarFftDataMessage__are_equal(const nav_messages__msg__RadarFftDataMessage * lhs, const nav_messages__msg__RadarFftDataMessage * rhs);

/// Copy a msg/RadarFftDataMessage message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_nav_messages
bool
nav_messages__msg__RadarFftDataMessage__copy(
  const nav_messages__msg__RadarFftDataMessage * input,
  nav_messages__msg__RadarFftDataMessage * output);

/// Initialize array of msg/RadarFftDataMessage messages.
/**
 * It allocates the memory for the number of elements and calls
 * nav_messages__msg__RadarFftDataMessage__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_nav_messages
bool
nav_messages__msg__RadarFftDataMessage__Sequence__init(nav_messages__msg__RadarFftDataMessage__Sequence * array, size_t size);

/// Finalize array of msg/RadarFftDataMessage messages.
/**
 * It calls
 * nav_messages__msg__RadarFftDataMessage__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_nav_messages
void
nav_messages__msg__RadarFftDataMessage__Sequence__fini(nav_messages__msg__RadarFftDataMessage__Sequence * array);

/// Create array of msg/RadarFftDataMessage messages.
/**
 * It allocates the memory for the array and calls
 * nav_messages__msg__RadarFftDataMessage__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_nav_messages
nav_messages__msg__RadarFftDataMessage__Sequence *
nav_messages__msg__RadarFftDataMessage__Sequence__create(size_t size);

/// Destroy array of msg/RadarFftDataMessage messages.
/**
 * It calls
 * nav_messages__msg__RadarFftDataMessage__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_nav_messages
void
nav_messages__msg__RadarFftDataMessage__Sequence__destroy(nav_messages__msg__RadarFftDataMessage__Sequence * array);

/// Check for msg/RadarFftDataMessage message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_nav_messages
bool
nav_messages__msg__RadarFftDataMessage__Sequence__are_equal(const nav_messages__msg__RadarFftDataMessage__Sequence * lhs, const nav_messages__msg__RadarFftDataMessage__Sequence * rhs);

/// Copy an array of msg/RadarFftDataMessage messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_nav_messages
bool
nav_messages__msg__RadarFftDataMessage__Sequence__copy(
  const nav_messages__msg__RadarFftDataMessage__Sequence * input,
  nav_messages__msg__RadarFftDataMessage__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // NAV_MESSAGES__MSG__DETAIL__RADAR_FFT_DATA_MESSAGE__FUNCTIONS_H_
