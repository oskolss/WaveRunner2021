// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from message_pkg:msg/MotorValues.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "message_pkg/msg/motor_values__rosidl_typesupport_introspection_c.h"
#include "message_pkg/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "message_pkg/msg/motor_values__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

static rosidl_typesupport_introspection_c__MessageMember MotorValues__rosidl_typesupport_introspection_c__MotorValues_message_member_array[1] = {
  {
    "motorvalue",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    4,  // array size
    false,  // is upper bound
    offsetof(message_pkg__msg__MotorValues, motorvalue),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers MotorValues__rosidl_typesupport_introspection_c__MotorValues_message_members = {
  "message_pkg__msg",  // message namespace
  "MotorValues",  // message name
  1,  // number of fields
  sizeof(message_pkg__msg__MotorValues),
  MotorValues__rosidl_typesupport_introspection_c__MotorValues_message_member_array  // message members
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t MotorValues__rosidl_typesupport_introspection_c__MotorValues_message_type_support_handle = {
  0,
  &MotorValues__rosidl_typesupport_introspection_c__MotorValues_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_message_pkg
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, message_pkg, msg, MotorValues)() {
  if (!MotorValues__rosidl_typesupport_introspection_c__MotorValues_message_type_support_handle.typesupport_identifier) {
    MotorValues__rosidl_typesupport_introspection_c__MotorValues_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &MotorValues__rosidl_typesupport_introspection_c__MotorValues_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
