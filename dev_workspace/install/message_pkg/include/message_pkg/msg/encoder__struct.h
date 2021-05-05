// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from message_pkg:msg/Encoder.idl
// generated code does not contain a copyright notice

#ifndef MESSAGE_PKG__MSG__ENCODER__STRUCT_H_
#define MESSAGE_PKG__MSG__ENCODER__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/Encoder in the package message_pkg.
typedef struct message_pkg__msg__Encoder
{
  int32_t encodervalue[4];
} message_pkg__msg__Encoder;

// Struct for a sequence of message_pkg__msg__Encoder.
typedef struct message_pkg__msg__Encoder__Sequence
{
  message_pkg__msg__Encoder * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} message_pkg__msg__Encoder__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MESSAGE_PKG__MSG__ENCODER__STRUCT_H_
