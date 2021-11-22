// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from fiducial_vlam_msgs:msg/Observation.idl
// generated code does not contain a copyright notice

#ifndef FIDUCIAL_VLAM_MSGS__MSG__DETAIL__OBSERVATION__BUILDER_HPP_
#define FIDUCIAL_VLAM_MSGS__MSG__DETAIL__OBSERVATION__BUILDER_HPP_

#include "fiducial_vlam_msgs/msg/detail/observation__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace fiducial_vlam_msgs
{

namespace msg
{

namespace builder
{

class Init_Observation_y3
{
public:
  explicit Init_Observation_y3(::fiducial_vlam_msgs::msg::Observation & msg)
  : msg_(msg)
  {}
  ::fiducial_vlam_msgs::msg::Observation y3(::fiducial_vlam_msgs::msg::Observation::_y3_type arg)
  {
    msg_.y3 = std::move(arg);
    return std::move(msg_);
  }

private:
  ::fiducial_vlam_msgs::msg::Observation msg_;
};

class Init_Observation_x3
{
public:
  explicit Init_Observation_x3(::fiducial_vlam_msgs::msg::Observation & msg)
  : msg_(msg)
  {}
  Init_Observation_y3 x3(::fiducial_vlam_msgs::msg::Observation::_x3_type arg)
  {
    msg_.x3 = std::move(arg);
    return Init_Observation_y3(msg_);
  }

private:
  ::fiducial_vlam_msgs::msg::Observation msg_;
};

class Init_Observation_y2
{
public:
  explicit Init_Observation_y2(::fiducial_vlam_msgs::msg::Observation & msg)
  : msg_(msg)
  {}
  Init_Observation_x3 y2(::fiducial_vlam_msgs::msg::Observation::_y2_type arg)
  {
    msg_.y2 = std::move(arg);
    return Init_Observation_x3(msg_);
  }

private:
  ::fiducial_vlam_msgs::msg::Observation msg_;
};

class Init_Observation_x2
{
public:
  explicit Init_Observation_x2(::fiducial_vlam_msgs::msg::Observation & msg)
  : msg_(msg)
  {}
  Init_Observation_y2 x2(::fiducial_vlam_msgs::msg::Observation::_x2_type arg)
  {
    msg_.x2 = std::move(arg);
    return Init_Observation_y2(msg_);
  }

private:
  ::fiducial_vlam_msgs::msg::Observation msg_;
};

class Init_Observation_y1
{
public:
  explicit Init_Observation_y1(::fiducial_vlam_msgs::msg::Observation & msg)
  : msg_(msg)
  {}
  Init_Observation_x2 y1(::fiducial_vlam_msgs::msg::Observation::_y1_type arg)
  {
    msg_.y1 = std::move(arg);
    return Init_Observation_x2(msg_);
  }

private:
  ::fiducial_vlam_msgs::msg::Observation msg_;
};

class Init_Observation_x1
{
public:
  explicit Init_Observation_x1(::fiducial_vlam_msgs::msg::Observation & msg)
  : msg_(msg)
  {}
  Init_Observation_y1 x1(::fiducial_vlam_msgs::msg::Observation::_x1_type arg)
  {
    msg_.x1 = std::move(arg);
    return Init_Observation_y1(msg_);
  }

private:
  ::fiducial_vlam_msgs::msg::Observation msg_;
};

class Init_Observation_y0
{
public:
  explicit Init_Observation_y0(::fiducial_vlam_msgs::msg::Observation & msg)
  : msg_(msg)
  {}
  Init_Observation_x1 y0(::fiducial_vlam_msgs::msg::Observation::_y0_type arg)
  {
    msg_.y0 = std::move(arg);
    return Init_Observation_x1(msg_);
  }

private:
  ::fiducial_vlam_msgs::msg::Observation msg_;
};

class Init_Observation_x0
{
public:
  explicit Init_Observation_x0(::fiducial_vlam_msgs::msg::Observation & msg)
  : msg_(msg)
  {}
  Init_Observation_y0 x0(::fiducial_vlam_msgs::msg::Observation::_x0_type arg)
  {
    msg_.x0 = std::move(arg);
    return Init_Observation_y0(msg_);
  }

private:
  ::fiducial_vlam_msgs::msg::Observation msg_;
};

class Init_Observation_id
{
public:
  Init_Observation_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Observation_x0 id(::fiducial_vlam_msgs::msg::Observation::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_Observation_x0(msg_);
  }

private:
  ::fiducial_vlam_msgs::msg::Observation msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::fiducial_vlam_msgs::msg::Observation>()
{
  return fiducial_vlam_msgs::msg::builder::Init_Observation_id();
}

}  // namespace fiducial_vlam_msgs

#endif  // FIDUCIAL_VLAM_MSGS__MSG__DETAIL__OBSERVATION__BUILDER_HPP_
