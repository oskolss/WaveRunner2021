// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from message_pkg:msg/Num.idl
// generated code does not contain a copyright notice

#ifndef MESSAGE_PKG__MSG__NUM__STRUCT_H_
#define MESSAGE_PKG__MSG__NUM__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/Num in the package message_pkg.
typedef struct message_pkg__msg__Num
{
  int64_t num;
} message_pkg__msg__Num;

// Struct for a sequence of message_pkg__msg__Num.
typedef struct message_pkg__msg__Num__Sequence
{
  message_pkg__msg__Num * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} message_pkg__msg__Num__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MESSAGE_PKG__MSG__NUM__STRUCT_H_
