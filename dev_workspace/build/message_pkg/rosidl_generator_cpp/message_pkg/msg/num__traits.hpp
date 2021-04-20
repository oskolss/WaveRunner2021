// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from message_pkg:msg/Num.idl
// generated code does not contain a copyright notice

#ifndef MESSAGE_PKG__MSG__NUM__TRAITS_HPP_
#define MESSAGE_PKG__MSG__NUM__TRAITS_HPP_

#include "message_pkg/msg/num__struct.hpp"
#include <rosidl_generator_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<message_pkg::msg::Num>()
{
  return "message_pkg::msg::Num";
}

template<>
struct has_fixed_size<message_pkg::msg::Num>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<message_pkg::msg::Num>
  : std::integral_constant<bool, true> {};

}  // namespace rosidl_generator_traits

#endif  // MESSAGE_PKG__MSG__NUM__TRAITS_HPP_
