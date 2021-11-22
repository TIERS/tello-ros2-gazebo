// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from fiducial_vlam_msgs:msg/Observations.idl
// generated code does not contain a copyright notice

#ifndef FIDUCIAL_VLAM_MSGS__MSG__DETAIL__OBSERVATIONS__BUILDER_HPP_
#define FIDUCIAL_VLAM_MSGS__MSG__DETAIL__OBSERVATIONS__BUILDER_HPP_

#include "fiducial_vlam_msgs/msg/detail/observations__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace fiducial_vlam_msgs
{

namespace msg
{

namespace builder
{

class Init_Observations_observations
{
public:
  explicit Init_Observations_observations(::fiducial_vlam_msgs::msg::Observations & msg)
  : msg_(msg)
  {}
  ::fiducial_vlam_msgs::msg::Observations observations(::fiducial_vlam_msgs::msg::Observations::_observations_type arg)
  {
    msg_.observations = std::move(arg);
    return std::move(msg_);
  }

private:
  ::fiducial_vlam_msgs::msg::Observations msg_;
};

class Init_Observations_camera_info
{
public:
  explicit Init_Observations_camera_info(::fiducial_vlam_msgs::msg::Observations & msg)
  : msg_(msg)
  {}
  Init_Observations_observations camera_info(::fiducial_vlam_msgs::msg::Observations::_camera_info_type arg)
  {
    msg_.camera_info = std::move(arg);
    return Init_Observations_observations(msg_);
  }

private:
  ::fiducial_vlam_msgs::msg::Observations msg_;
};

class Init_Observations_header
{
public:
  Init_Observations_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Observations_camera_info header(::fiducial_vlam_msgs::msg::Observations::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_Observations_camera_info(msg_);
  }

private:
  ::fiducial_vlam_msgs::msg::Observations msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::fiducial_vlam_msgs::msg::Observations>()
{
  return fiducial_vlam_msgs::msg::builder::Init_Observations_header();
}

}  // namespace fiducial_vlam_msgs

#endif  // FIDUCIAL_VLAM_MSGS__MSG__DETAIL__OBSERVATIONS__BUILDER_HPP_
