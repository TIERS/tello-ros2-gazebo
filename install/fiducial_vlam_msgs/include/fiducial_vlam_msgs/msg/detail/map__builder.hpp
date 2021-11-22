// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from fiducial_vlam_msgs:msg/Map.idl
// generated code does not contain a copyright notice

#ifndef FIDUCIAL_VLAM_MSGS__MSG__DETAIL__MAP__BUILDER_HPP_
#define FIDUCIAL_VLAM_MSGS__MSG__DETAIL__MAP__BUILDER_HPP_

#include "fiducial_vlam_msgs/msg/detail/map__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace fiducial_vlam_msgs
{

namespace msg
{

namespace builder
{

class Init_Map_poses
{
public:
  explicit Init_Map_poses(::fiducial_vlam_msgs::msg::Map & msg)
  : msg_(msg)
  {}
  ::fiducial_vlam_msgs::msg::Map poses(::fiducial_vlam_msgs::msg::Map::_poses_type arg)
  {
    msg_.poses = std::move(arg);
    return std::move(msg_);
  }

private:
  ::fiducial_vlam_msgs::msg::Map msg_;
};

class Init_Map_ids
{
public:
  explicit Init_Map_ids(::fiducial_vlam_msgs::msg::Map & msg)
  : msg_(msg)
  {}
  Init_Map_poses ids(::fiducial_vlam_msgs::msg::Map::_ids_type arg)
  {
    msg_.ids = std::move(arg);
    return Init_Map_poses(msg_);
  }

private:
  ::fiducial_vlam_msgs::msg::Map msg_;
};

class Init_Map_fixed_flags
{
public:
  explicit Init_Map_fixed_flags(::fiducial_vlam_msgs::msg::Map & msg)
  : msg_(msg)
  {}
  Init_Map_ids fixed_flags(::fiducial_vlam_msgs::msg::Map::_fixed_flags_type arg)
  {
    msg_.fixed_flags = std::move(arg);
    return Init_Map_ids(msg_);
  }

private:
  ::fiducial_vlam_msgs::msg::Map msg_;
};

class Init_Map_marker_length
{
public:
  explicit Init_Map_marker_length(::fiducial_vlam_msgs::msg::Map & msg)
  : msg_(msg)
  {}
  Init_Map_fixed_flags marker_length(::fiducial_vlam_msgs::msg::Map::_marker_length_type arg)
  {
    msg_.marker_length = std::move(arg);
    return Init_Map_fixed_flags(msg_);
  }

private:
  ::fiducial_vlam_msgs::msg::Map msg_;
};

class Init_Map_header
{
public:
  Init_Map_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Map_marker_length header(::fiducial_vlam_msgs::msg::Map::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_Map_marker_length(msg_);
  }

private:
  ::fiducial_vlam_msgs::msg::Map msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::fiducial_vlam_msgs::msg::Map>()
{
  return fiducial_vlam_msgs::msg::builder::Init_Map_header();
}

}  // namespace fiducial_vlam_msgs

#endif  // FIDUCIAL_VLAM_MSGS__MSG__DETAIL__MAP__BUILDER_HPP_
