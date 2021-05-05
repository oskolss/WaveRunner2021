// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from message_pkg:msg/MotorValues.idl
// generated code does not contain a copyright notice
#include "message_pkg/msg/motor_values__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "message_pkg/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "message_pkg/msg/motor_values__struct.h"
#include "message_pkg/msg/motor_values__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _MotorValues__ros_msg_type = message_pkg__msg__MotorValues;

static bool _MotorValues__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _MotorValues__ros_msg_type * ros_message = static_cast<const _MotorValues__ros_msg_type *>(untyped_ros_message);
  // Field name: motorvalue
  {
    size_t size = 4;
    auto array_ptr = ros_message->motorvalue;
    cdr.serializeArray(array_ptr, size);
  }

  return true;
}

static bool _MotorValues__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _MotorValues__ros_msg_type * ros_message = static_cast<_MotorValues__ros_msg_type *>(untyped_ros_message);
  // Field name: motorvalue
  {
    size_t size = 4;
    auto array_ptr = ros_message->motorvalue;
    cdr.deserializeArray(array_ptr, size);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_message_pkg
size_t get_serialized_size_message_pkg__msg__MotorValues(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _MotorValues__ros_msg_type * ros_message = static_cast<const _MotorValues__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name motorvalue
  {
    size_t array_size = 4;
    auto array_ptr = ros_message->motorvalue;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _MotorValues__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_message_pkg__msg__MotorValues(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_message_pkg
size_t max_serialized_size_message_pkg__msg__MotorValues(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: motorvalue
  {
    size_t array_size = 4;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _MotorValues__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_message_pkg__msg__MotorValues(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_MotorValues = {
  "message_pkg::msg",
  "MotorValues",
  _MotorValues__cdr_serialize,
  _MotorValues__cdr_deserialize,
  _MotorValues__get_serialized_size,
  _MotorValues__max_serialized_size
};

static rosidl_message_type_support_t _MotorValues__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_MotorValues,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, message_pkg, msg, MotorValues)() {
  return &_MotorValues__type_support;
}

#if defined(__cplusplus)
}
#endif
