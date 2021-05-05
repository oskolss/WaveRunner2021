// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from message_pkg:msg/MotorValues.idl
// generated code does not contain a copyright notice

#ifndef MESSAGE_PKG__MSG__MOTOR_VALUES__TRAITS_HPP_
#define MESSAGE_PKG__MSG__MOTOR_VALUES__TRAITS_HPP_

#include "message_pkg/msg/motor_values__struct.hpp"
#include <rosidl_generator_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<message_pkg::msg::MotorValues>()
{
  return "message_pkg::msg::MotorValues";
}

template<>
struct has_fixed_size<message_pkg::msg::MotorValues>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<message_pkg::msg::MotorValues>
  : std::integral_constant<bool, true> {};

}  // namespace rosidl_generator_traits

#endif  // MESSAGE_PKG__MSG__MOTOR_VALUES__TRAITS_HPP_
