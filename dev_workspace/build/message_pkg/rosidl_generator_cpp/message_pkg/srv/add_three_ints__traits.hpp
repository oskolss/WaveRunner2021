// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from message_pkg:srv/AddThreeInts.idl
// generated code does not contain a copyright notice

#ifndef MESSAGE_PKG__SRV__ADD_THREE_INTS__TRAITS_HPP_
#define MESSAGE_PKG__SRV__ADD_THREE_INTS__TRAITS_HPP_

#include "message_pkg/srv/add_three_ints__struct.hpp"
#include <rosidl_generator_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<message_pkg::srv::AddThreeInts_Request>()
{
  return "message_pkg::srv::AddThreeInts_Request";
}

template<>
struct has_fixed_size<message_pkg::srv::AddThreeInts_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<message_pkg::srv::AddThreeInts_Request>
  : std::integral_constant<bool, true> {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<message_pkg::srv::AddThreeInts_Response>()
{
  return "message_pkg::srv::AddThreeInts_Response";
}

template<>
struct has_fixed_size<message_pkg::srv::AddThreeInts_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<message_pkg::srv::AddThreeInts_Response>
  : std::integral_constant<bool, true> {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<message_pkg::srv::AddThreeInts>()
{
  return "message_pkg::srv::AddThreeInts";
}

template<>
struct has_fixed_size<message_pkg::srv::AddThreeInts>
  : std::integral_constant<
    bool,
    has_fixed_size<message_pkg::srv::AddThreeInts_Request>::value &&
    has_fixed_size<message_pkg::srv::AddThreeInts_Response>::value
  >
{
};

template<>
struct has_bounded_size<message_pkg::srv::AddThreeInts>
  : std::integral_constant<
    bool,
    has_bounded_size<message_pkg::srv::AddThreeInts_Request>::value &&
    has_bounded_size<message_pkg::srv::AddThreeInts_Response>::value
  >
{
};

}  // namespace rosidl_generator_traits

#endif  // MESSAGE_PKG__SRV__ADD_THREE_INTS__TRAITS_HPP_
