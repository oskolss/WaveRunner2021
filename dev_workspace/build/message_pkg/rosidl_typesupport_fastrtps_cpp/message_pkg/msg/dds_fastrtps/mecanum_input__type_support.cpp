// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from message_pkg:msg/MecanumInput.idl
// generated code does not contain a copyright notice
#include "message_pkg/msg/mecanum_input__rosidl_typesupport_fastrtps_cpp.hpp"
#include "message_pkg/msg/mecanum_input__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace message_pkg
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_message_pkg
cdr_serialize(
  const message_pkg::msg::MecanumInput & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: inputvalue
  {
    cdr << ros_message.inputvalue;
  }
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_message_pkg
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  message_pkg::msg::MecanumInput & ros_message)
{
  // Member: inputvalue
  {
    cdr >> ros_message.inputvalue;
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_message_pkg
get_serialized_size(
  const message_pkg::msg::MecanumInput & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: inputvalue
  {
    size_t array_size = 3;
    size_t item_size = sizeof(ros_message.inputvalue[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_message_pkg
max_serialized_size_MecanumInput(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: inputvalue
  {
    size_t array_size = 3;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  return current_alignment - initial_alignment;
}

static bool _MecanumInput__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const message_pkg::msg::MecanumInput *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _MecanumInput__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<message_pkg::msg::MecanumInput *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _MecanumInput__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const message_pkg::msg::MecanumInput *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _MecanumInput__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_MecanumInput(full_bounded, 0);
}

static message_type_support_callbacks_t _MecanumInput__callbacks = {
  "message_pkg::msg",
  "MecanumInput",
  _MecanumInput__cdr_serialize,
  _MecanumInput__cdr_deserialize,
  _MecanumInput__get_serialized_size,
  _MecanumInput__max_serialized_size
};

static rosidl_message_type_support_t _MecanumInput__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_MecanumInput__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace message_pkg

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_message_pkg
const rosidl_message_type_support_t *
get_message_type_support_handle<message_pkg::msg::MecanumInput>()
{
  return &message_pkg::msg::typesupport_fastrtps_cpp::_MecanumInput__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, message_pkg, msg, MecanumInput)() {
  return &message_pkg::msg::typesupport_fastrtps_cpp::_MecanumInput__handle;
}

#ifdef __cplusplus
}
#endif
