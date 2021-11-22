// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from tello_msgs:srv/TelloAction.idl
// generated code does not contain a copyright notice

#ifndef TELLO_MSGS__SRV__DETAIL__TELLO_ACTION__TRAITS_HPP_
#define TELLO_MSGS__SRV__DETAIL__TELLO_ACTION__TRAITS_HPP_

#include "tello_msgs/srv/detail/tello_action__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<tello_msgs::srv::TelloAction_Request>()
{
  return "tello_msgs::srv::TelloAction_Request";
}

template<>
inline const char * name<tello_msgs::srv::TelloAction_Request>()
{
  return "tello_msgs/srv/TelloAction_Request";
}

template<>
struct has_fixed_size<tello_msgs::srv::TelloAction_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<tello_msgs::srv::TelloAction_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<tello_msgs::srv::TelloAction_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<tello_msgs::srv::TelloAction_Response>()
{
  return "tello_msgs::srv::TelloAction_Response";
}

template<>
inline const char * name<tello_msgs::srv::TelloAction_Response>()
{
  return "tello_msgs/srv/TelloAction_Response";
}

template<>
struct has_fixed_size<tello_msgs::srv::TelloAction_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<tello_msgs::srv::TelloAction_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<tello_msgs::srv::TelloAction_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<tello_msgs::srv::TelloAction>()
{
  return "tello_msgs::srv::TelloAction";
}

template<>
inline const char * name<tello_msgs::srv::TelloAction>()
{
  return "tello_msgs/srv/TelloAction";
}

template<>
struct has_fixed_size<tello_msgs::srv::TelloAction>
  : std::integral_constant<
    bool,
    has_fixed_size<tello_msgs::srv::TelloAction_Request>::value &&
    has_fixed_size<tello_msgs::srv::TelloAction_Response>::value
  >
{
};

template<>
struct has_bounded_size<tello_msgs::srv::TelloAction>
  : std::integral_constant<
    bool,
    has_bounded_size<tello_msgs::srv::TelloAction_Request>::value &&
    has_bounded_size<tello_msgs::srv::TelloAction_Response>::value
  >
{
};

template<>
struct is_service<tello_msgs::srv::TelloAction>
  : std::true_type
{
};

template<>
struct is_service_request<tello_msgs::srv::TelloAction_Request>
  : std::true_type
{
};

template<>
struct is_service_response<tello_msgs::srv::TelloAction_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // TELLO_MSGS__SRV__DETAIL__TELLO_ACTION__TRAITS_HPP_
