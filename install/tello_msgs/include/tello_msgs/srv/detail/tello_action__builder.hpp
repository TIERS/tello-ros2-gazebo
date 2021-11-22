// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tello_msgs:srv/TelloAction.idl
// generated code does not contain a copyright notice

#ifndef TELLO_MSGS__SRV__DETAIL__TELLO_ACTION__BUILDER_HPP_
#define TELLO_MSGS__SRV__DETAIL__TELLO_ACTION__BUILDER_HPP_

#include "tello_msgs/srv/detail/tello_action__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace tello_msgs
{

namespace srv
{

namespace builder
{

class Init_TelloAction_Request_cmd
{
public:
  Init_TelloAction_Request_cmd()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::tello_msgs::srv::TelloAction_Request cmd(::tello_msgs::srv::TelloAction_Request::_cmd_type arg)
  {
    msg_.cmd = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tello_msgs::srv::TelloAction_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::tello_msgs::srv::TelloAction_Request>()
{
  return tello_msgs::srv::builder::Init_TelloAction_Request_cmd();
}

}  // namespace tello_msgs


namespace tello_msgs
{

namespace srv
{

namespace builder
{

class Init_TelloAction_Response_rc
{
public:
  Init_TelloAction_Response_rc()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::tello_msgs::srv::TelloAction_Response rc(::tello_msgs::srv::TelloAction_Response::_rc_type arg)
  {
    msg_.rc = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tello_msgs::srv::TelloAction_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::tello_msgs::srv::TelloAction_Response>()
{
  return tello_msgs::srv::builder::Init_TelloAction_Response_rc();
}

}  // namespace tello_msgs

#endif  // TELLO_MSGS__SRV__DETAIL__TELLO_ACTION__BUILDER_HPP_
