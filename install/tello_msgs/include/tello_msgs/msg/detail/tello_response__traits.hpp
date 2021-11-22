// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from tello_msgs:msg/TelloResponse.idl
// generated code does not contain a copyright notice

#ifndef TELLO_MSGS__MSG__DETAIL__TELLO_RESPONSE__TRAITS_HPP_
#define TELLO_MSGS__MSG__DETAIL__TELLO_RESPONSE__TRAITS_HPP_

#include "tello_msgs/msg/detail/tello_response__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<tello_msgs::msg::TelloResponse>()
{
  return "tello_msgs::msg::TelloResponse";
}

template<>
inline const char * name<tello_msgs::msg::TelloResponse>()
{
  return "tello_msgs/msg/TelloResponse";
}

template<>
struct has_fixed_size<tello_msgs::msg::TelloResponse>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<tello_msgs::msg::TelloResponse>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<tello_msgs::msg::TelloResponse>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // TELLO_MSGS__MSG__DETAIL__TELLO_RESPONSE__TRAITS_HPP_
