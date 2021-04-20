// generated from rosidl_typesupport_opensplice_cpp/resource/idl__rosidl_typesupport_cpp.hpp.em
// generated code does not contain a copyright notice
#ifndef MESSAGE_PKG__MSG__NUM__ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_HPP_
#define MESSAGE_PKG__MSG__NUM__ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_HPP_
// generated from
// rosidl_typesupport_opensplice_cpp/resource/msg__rosidl_typesupport_opensplice_cpp.hpp.em
// generated code does not contain a copyright notice

#include "message_pkg/msg/num__struct.hpp"
#include "message_pkg/msg/dds_opensplice/ccpp_Num_.h"
#include "rosidl_generator_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "message_pkg/msg/rosidl_typesupport_opensplice_cpp__visibility_control.h"

namespace DDS
{
class DomainParticipant;
class DataReader;
class DataWriter;
}  // namespace DDS

namespace message_pkg
{
namespace msg
{
namespace typesupport_opensplice_cpp
{

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_message_pkg
extern void register_type__Num(
  DDS::DomainParticipant * participant,
  const char * type_name);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_message_pkg
extern void convert_ros_message_to_dds(
  const message_pkg::msg::Num & ros_message,
  message_pkg::msg::dds_::Num_ & dds_message);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_message_pkg
extern void publish__Num(
  DDS::DataWriter * topic_writer,
  const void * untyped_ros_message);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_message_pkg
extern void convert_dds_message_to_ros(
  const message_pkg::msg::dds_::Num_ & dds_message,
  message_pkg::msg::Num & ros_message);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_message_pkg
extern bool take__Num(
  DDS::DataReader * topic_reader,
  bool ignore_local_publications,
  void * untyped_ros_message,
  bool * taken);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_EXPORT_message_pkg
const char *
serialize__Num(
  const void * untyped_ros_message,
  void * serialized_data);

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_EXPORT_message_pkg
const char *
deserialize__Num(
  const uint8_t * buffer,
  unsigned length,
  void * untyped_ros_message);

}  // namespace typesupport_opensplice_cpp

}  // namespace msg
}  // namespace message_pkg

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_PUBLIC_message_pkg
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_opensplice_cpp,
  message_pkg, msg,
  Num)();

#ifdef __cplusplus
}
#endif
#endif  // MESSAGE_PKG__MSG__NUM__ROSIDL_TYPESUPPORT_OPENSPLICE_CPP_HPP_
