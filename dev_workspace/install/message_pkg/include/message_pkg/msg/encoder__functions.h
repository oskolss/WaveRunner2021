// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from message_pkg:msg/Encoder.idl
// generated code does not contain a copyright notice

#ifndef MESSAGE_PKG__MSG__ENCODER__FUNCTIONS_H_
#define MESSAGE_PKG__MSG__ENCODER__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_generator_c/visibility_control.h"
#include "message_pkg/msg/rosidl_generator_c__visibility_control.h"

#include "message_pkg/msg/encoder__struct.h"

/// Initialize msg/Encoder message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * message_pkg__msg__Encoder
 * )) before or use
 * message_pkg__msg__Encoder__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_message_pkg
bool
message_pkg__msg__Encoder__init(message_pkg__msg__Encoder * msg);

/// Finalize msg/Encoder message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_message_pkg
void
message_pkg__msg__Encoder__fini(message_pkg__msg__Encoder * msg);

/// Create msg/Encoder message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * message_pkg__msg__Encoder__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_message_pkg
message_pkg__msg__Encoder *
message_pkg__msg__Encoder__create();

/// Destroy msg/Encoder message.
/**
 * It calls
 * message_pkg__msg__Encoder__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_message_pkg
void
message_pkg__msg__Encoder__destroy(message_pkg__msg__Encoder * msg);


/// Initialize array of msg/Encoder messages.
/**
 * It allocates the memory for the number of elements and calls
 * message_pkg__msg__Encoder__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_message_pkg
bool
message_pkg__msg__Encoder__Sequence__init(message_pkg__msg__Encoder__Sequence * array, size_t size);

/// Finalize array of msg/Encoder messages.
/**
 * It calls
 * message_pkg__msg__Encoder__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_message_pkg
void
message_pkg__msg__Encoder__Sequence__fini(message_pkg__msg__Encoder__Sequence * array);

/// Create array of msg/Encoder messages.
/**
 * It allocates the memory for the array and calls
 * message_pkg__msg__Encoder__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_message_pkg
message_pkg__msg__Encoder__Sequence *
message_pkg__msg__Encoder__Sequence__create(size_t size);

/// Destroy array of msg/Encoder messages.
/**
 * It calls
 * message_pkg__msg__Encoder__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_message_pkg
void
message_pkg__msg__Encoder__Sequence__destroy(message_pkg__msg__Encoder__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // MESSAGE_PKG__MSG__ENCODER__FUNCTIONS_H_
