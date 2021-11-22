// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from fiducial_vlam_msgs:msg/Observation.idl
// generated code does not contain a copyright notice

#ifndef FIDUCIAL_VLAM_MSGS__MSG__DETAIL__OBSERVATION__TRAITS_HPP_
#define FIDUCIAL_VLAM_MSGS__MSG__DETAIL__OBSERVATION__TRAITS_HPP_

#include "fiducial_vlam_msgs/msg/detail/observation__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<fiducial_vlam_msgs::msg::Observation>()
{
  return "fiducial_vlam_msgs::msg::Observation";
}

template<>
inline const char * name<fiducial_vlam_msgs::msg::Observation>()
{
  return "fiducial_vlam_msgs/msg/Observation";
}

template<>
struct has_fixed_size<fiducial_vlam_msgs::msg::Observation>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<fiducial_vlam_msgs::msg::Observation>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<fiducial_vlam_msgs::msg::Observation>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // FIDUCIAL_VLAM_MSGS__MSG__DETAIL__OBSERVATION__TRAITS_HPP_
