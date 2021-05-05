// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from message_pkg:msg/MecanumInput.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_generator_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "message_pkg/msg/mecanum_input__struct.hpp"
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

size_t size_function__MecanumInput__inputvalue(const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * get_const_function__MecanumInput__inputvalue(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<double, 3> *>(untyped_member);
  return &member[index];
}

void * get_function__MecanumInput__inputvalue(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<double, 3> *>(untyped_member);
  return &member[index];
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember MecanumInput_message_member_array[1] = {
  {
    "inputvalue",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(message_pkg::msg::MecanumInput, inputvalue),  // bytes offset in struct
    nullptr,  // default value
    size_function__MecanumInput__inputvalue,  // size() function pointer
    get_const_function__MecanumInput__inputvalue,  // get_const(index) function pointer
    get_function__MecanumInput__inputvalue,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers MecanumInput_message_members = {
  "message_pkg::msg",  // message namespace
  "MecanumInput",  // message name
  1,  // number of fields
  sizeof(message_pkg::msg::MecanumInput),
  MecanumInput_message_member_array  // message members
};

static const rosidl_message_type_support_t MecanumInput_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &MecanumInput_message_members,
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
get_message_type_support_handle<message_pkg::msg::MecanumInput>()
{
  return &::message_pkg::msg::rosidl_typesupport_introspection_cpp::MecanumInput_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, message_pkg, msg, MecanumInput)() {
  return &::message_pkg::msg::rosidl_typesupport_introspection_cpp::MecanumInput_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
