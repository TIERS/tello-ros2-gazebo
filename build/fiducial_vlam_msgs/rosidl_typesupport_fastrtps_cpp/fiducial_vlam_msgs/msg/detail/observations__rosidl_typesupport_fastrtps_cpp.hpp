// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from fiducial_vlam_msgs:msg/Observations.idl
// generated code does not contain a copyright notice

#ifndef FIDUCIAL_VLAM_MSGS__MSG__DETAIL__OBSERVATIONS__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define FIDUCIAL_VLAM_MSGS__MSG__DETAIL__OBSERVATIONS__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "fiducial_vlam_msgs/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "fiducial_vlam_msgs/msg/detail/observations__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#include "fastcdr/Cdr.h"

namespace fiducial_vlam_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_fiducial_vlam_msgs
cdr_serialize(
  const fiducial_vlam_msgs::msg::Observations & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_fiducial_vlam_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  fiducial_vlam_msgs::msg::Observations & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_fiducial_vlam_msgs
get_serialized_size(
  const fiducial_vlam_msgs::msg::Observations & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_fiducial_vlam_msgs
max_serialized_size_Observations(
  bool & full_bounded,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace fiducial_vlam_msgs

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_fiducial_vlam_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, fiducial_vlam_msgs, msg, Observations)();

#ifdef __cplusplus
}
#endif

#endif  // FIDUCIAL_VLAM_MSGS__MSG__DETAIL__OBSERVATIONS__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
