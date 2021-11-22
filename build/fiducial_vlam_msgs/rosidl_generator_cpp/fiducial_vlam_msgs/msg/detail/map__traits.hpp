// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from fiducial_vlam_msgs:msg/Map.idl
// generated code does not contain a copyright notice

#ifndef FIDUCIAL_VLAM_MSGS__MSG__DETAIL__MAP__TRAITS_HPP_
#define FIDUCIAL_VLAM_MSGS__MSG__DETAIL__MAP__TRAITS_HPP_

#include "fiducial_vlam_msgs/msg/detail/map__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<fiducial_vlam_msgs::msg::Map>()
{
  return "fiducial_vlam_msgs::msg::Map";
}

template<>
inline const char * name<fiducial_vlam_msgs::msg::Map>()
{
  return "fiducial_vlam_msgs/msg/Map";
}

template<>
struct has_fixed_size<fiducial_vlam_msgs::msg::Map>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<fiducial_vlam_msgs::msg::Map>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<fiducial_vlam_msgs::msg::Map>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // FIDUCIAL_VLAM_MSGS__MSG__DETAIL__MAP__TRAITS_HPP_
