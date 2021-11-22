// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tello_msgs:msg/TelloResponse.idl
// generated code does not contain a copyright notice

#ifndef TELLO_MSGS__MSG__DETAIL__TELLO_RESPONSE__BUILDER_HPP_
#define TELLO_MSGS__MSG__DETAIL__TELLO_RESPONSE__BUILDER_HPP_

#include "tello_msgs/msg/detail/tello_response__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace tello_msgs
{

namespace msg
{

namespace builder
{

class Init_TelloResponse_str
{
public:
  explicit Init_TelloResponse_str(::tello_msgs::msg::TelloResponse & msg)
  : msg_(msg)
  {}
  ::tello_msgs::msg::TelloResponse str(::tello_msgs::msg::TelloResponse::_str_type arg)
  {
    msg_.str = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tello_msgs::msg::TelloResponse msg_;
};

class Init_TelloResponse_rc
{
public:
  Init_TelloResponse_rc()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TelloResponse_str rc(::tello_msgs::msg::TelloResponse::_rc_type arg)
  {
    msg_.rc = std::move(arg);
    return Init_TelloResponse_str(msg_);
  }

private:
  ::tello_msgs::msg::TelloResponse msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::tello_msgs::msg::TelloResponse>()
{
  return tello_msgs::msg::builder::Init_TelloResponse_rc();
}

}  // namespace tello_msgs

#endif  // TELLO_MSGS__MSG__DETAIL__TELLO_RESPONSE__BUILDER_HPP_
