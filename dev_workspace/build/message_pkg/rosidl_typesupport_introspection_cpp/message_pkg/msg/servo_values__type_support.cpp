// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from message_pkg:msg/ServoValues.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_generator_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "message_pkg/msg/servo_values__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace message_pkg
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

size_t size_function__ServoValues__servovalue(const void * untyped_member)
{
  (void)untyped_member;
  return 6;
}

const void * get_const_function__ServoValues__servovalue(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<int32_t, 6> *>(untyped_member);
  return &member[index];
}

void * get_function__ServoValues__servovalue(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<int32_t, 6> *>(untyped_member);
  return &member[index];
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember ServoValues_message_member_array[1] = {
  {
    "servovalue",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    6,  // array size
    false,  // is upper bound
    offsetof(message_pkg::msg::ServoValues, servovalue),  // bytes offset in struct
    nullptr,  // default value
    size_function__ServoValues__servovalue,  // size() function pointer
    get_const_function__ServoValues__servovalue,  // get_const(index) function pointer
    get_function__ServoValues__servovalue,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers ServoValues_message_members = {
  "message_pkg::msg",  // message namespace
  "ServoValues",  // message name
  1,  // number of fields
  sizeof(message_pkg::msg::ServoValues),
  ServoValues_message_member_array  // message members
};

static const rosidl_message_type_support_t ServoValues_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &ServoValues_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace message_pkg


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<message_pkg::msg::ServoValues>()
{
  return &::message_pkg::msg::rosidl_typesupport_introspection_cpp::ServoValues_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, message_pkg, msg, ServoValues)() {
  return &::message_pkg::msg::rosidl_typesupport_introspection_cpp::ServoValues_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
