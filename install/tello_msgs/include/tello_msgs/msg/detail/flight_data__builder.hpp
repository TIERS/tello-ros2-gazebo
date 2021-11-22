// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tello_msgs:msg/FlightData.idl
// generated code does not contain a copyright notice

#ifndef TELLO_MSGS__MSG__DETAIL__FLIGHT_DATA__BUILDER_HPP_
#define TELLO_MSGS__MSG__DETAIL__FLIGHT_DATA__BUILDER_HPP_

#include "tello_msgs/msg/detail/flight_data__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace tello_msgs
{

namespace msg
{

namespace builder
{

class Init_FlightData_z
{
public:
  explicit Init_FlightData_z(::tello_msgs::msg::FlightData & msg)
  : msg_(msg)
  {}
  ::tello_msgs::msg::FlightData z(::tello_msgs::msg::FlightData::_z_type arg)
  {
    msg_.z = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tello_msgs::msg::FlightData msg_;
};

class Init_FlightData_y
{
public:
  explicit Init_FlightData_y(::tello_msgs::msg::FlightData & msg)
  : msg_(msg)
  {}
  Init_FlightData_z y(::tello_msgs::msg::FlightData::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_FlightData_z(msg_);
  }

private:
  ::tello_msgs::msg::FlightData msg_;
};

class Init_FlightData_x
{
public:
  explicit Init_FlightData_x(::tello_msgs::msg::FlightData & msg)
  : msg_(msg)
  {}
  Init_FlightData_y x(::tello_msgs::msg::FlightData::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_FlightData_y(msg_);
  }

private:
  ::tello_msgs::msg::FlightData msg_;
};

class Init_FlightData_mid
{
public:
  explicit Init_FlightData_mid(::tello_msgs::msg::FlightData & msg)
  : msg_(msg)
  {}
  Init_FlightData_x mid(::tello_msgs::msg::FlightData::_mid_type arg)
  {
    msg_.mid = std::move(arg);
    return Init_FlightData_x(msg_);
  }

private:
  ::tello_msgs::msg::FlightData msg_;
};

class Init_FlightData_agz
{
public:
  explicit Init_FlightData_agz(::tello_msgs::msg::FlightData & msg)
  : msg_(msg)
  {}
  Init_FlightData_mid agz(::tello_msgs::msg::FlightData::_agz_type arg)
  {
    msg_.agz = std::move(arg);
    return Init_FlightData_mid(msg_);
  }

private:
  ::tello_msgs::msg::FlightData msg_;
};

class Init_FlightData_agy
{
public:
  explicit Init_FlightData_agy(::tello_msgs::msg::FlightData & msg)
  : msg_(msg)
  {}
  Init_FlightData_agz agy(::tello_msgs::msg::FlightData::_agy_type arg)
  {
    msg_.agy = std::move(arg);
    return Init_FlightData_agz(msg_);
  }

private:
  ::tello_msgs::msg::FlightData msg_;
};

class Init_FlightData_agx
{
public:
  explicit Init_FlightData_agx(::tello_msgs::msg::FlightData & msg)
  : msg_(msg)
  {}
  Init_FlightData_agy agx(::tello_msgs::msg::FlightData::_agx_type arg)
  {
    msg_.agx = std::move(arg);
    return Init_FlightData_agy(msg_);
  }

private:
  ::tello_msgs::msg::FlightData msg_;
};

class Init_FlightData_time
{
public:
  explicit Init_FlightData_time(::tello_msgs::msg::FlightData & msg)
  : msg_(msg)
  {}
  Init_FlightData_agx time(::tello_msgs::msg::FlightData::_time_type arg)
  {
    msg_.time = std::move(arg);
    return Init_FlightData_agx(msg_);
  }

private:
  ::tello_msgs::msg::FlightData msg_;
};

class Init_FlightData_baro
{
public:
  explicit Init_FlightData_baro(::tello_msgs::msg::FlightData & msg)
  : msg_(msg)
  {}
  Init_FlightData_time baro(::tello_msgs::msg::FlightData::_baro_type arg)
  {
    msg_.baro = std::move(arg);
    return Init_FlightData_time(msg_);
  }

private:
  ::tello_msgs::msg::FlightData msg_;
};

class Init_FlightData_bat
{
public:
  explicit Init_FlightData_bat(::tello_msgs::msg::FlightData & msg)
  : msg_(msg)
  {}
  Init_FlightData_baro bat(::tello_msgs::msg::FlightData::_bat_type arg)
  {
    msg_.bat = std::move(arg);
    return Init_FlightData_baro(msg_);
  }

private:
  ::tello_msgs::msg::FlightData msg_;
};

class Init_FlightData_h
{
public:
  explicit Init_FlightData_h(::tello_msgs::msg::FlightData & msg)
  : msg_(msg)
  {}
  Init_FlightData_bat h(::tello_msgs::msg::FlightData::_h_type arg)
  {
    msg_.h = std::move(arg);
    return Init_FlightData_bat(msg_);
  }

private:
  ::tello_msgs::msg::FlightData msg_;
};

class Init_FlightData_tof
{
public:
  explicit Init_FlightData_tof(::tello_msgs::msg::FlightData & msg)
  : msg_(msg)
  {}
  Init_FlightData_h tof(::tello_msgs::msg::FlightData::_tof_type arg)
  {
    msg_.tof = std::move(arg);
    return Init_FlightData_h(msg_);
  }

private:
  ::tello_msgs::msg::FlightData msg_;
};

class Init_FlightData_temph
{
public:
  explicit Init_FlightData_temph(::tello_msgs::msg::FlightData & msg)
  : msg_(msg)
  {}
  Init_FlightData_tof temph(::tello_msgs::msg::FlightData::_temph_type arg)
  {
    msg_.temph = std::move(arg);
    return Init_FlightData_tof(msg_);
  }

private:
  ::tello_msgs::msg::FlightData msg_;
};

class Init_FlightData_templ
{
public:
  explicit Init_FlightData_templ(::tello_msgs::msg::FlightData & msg)
  : msg_(msg)
  {}
  Init_FlightData_temph templ(::tello_msgs::msg::FlightData::_templ_type arg)
  {
    msg_.templ = std::move(arg);
    return Init_FlightData_temph(msg_);
  }

private:
  ::tello_msgs::msg::FlightData msg_;
};

class Init_FlightData_vgz
{
public:
  explicit Init_FlightData_vgz(::tello_msgs::msg::FlightData & msg)
  : msg_(msg)
  {}
  Init_FlightData_templ vgz(::tello_msgs::msg::FlightData::_vgz_type arg)
  {
    msg_.vgz = std::move(arg);
    return Init_FlightData_templ(msg_);
  }

private:
  ::tello_msgs::msg::FlightData msg_;
};

class Init_FlightData_vgy
{
public:
  explicit Init_FlightData_vgy(::tello_msgs::msg::FlightData & msg)
  : msg_(msg)
  {}
  Init_FlightData_vgz vgy(::tello_msgs::msg::FlightData::_vgy_type arg)
  {
    msg_.vgy = std::move(arg);
    return Init_FlightData_vgz(msg_);
  }

private:
  ::tello_msgs::msg::FlightData msg_;
};

class Init_FlightData_vgx
{
public:
  explicit Init_FlightData_vgx(::tello_msgs::msg::FlightData & msg)
  : msg_(msg)
  {}
  Init_FlightData_vgy vgx(::tello_msgs::msg::FlightData::_vgx_type arg)
  {
    msg_.vgx = std::move(arg);
    return Init_FlightData_vgy(msg_);
  }

private:
  ::tello_msgs::msg::FlightData msg_;
};

class Init_FlightData_yaw
{
public:
  explicit Init_FlightData_yaw(::tello_msgs::msg::FlightData & msg)
  : msg_(msg)
  {}
  Init_FlightData_vgx yaw(::tello_msgs::msg::FlightData::_yaw_type arg)
  {
    msg_.yaw = std::move(arg);
    return Init_FlightData_vgx(msg_);
  }

private:
  ::tello_msgs::msg::FlightData msg_;
};

class Init_FlightData_roll
{
public:
  explicit Init_FlightData_roll(::tello_msgs::msg::FlightData & msg)
  : msg_(msg)
  {}
  Init_FlightData_yaw roll(::tello_msgs::msg::FlightData::_roll_type arg)
  {
    msg_.roll = std::move(arg);
    return Init_FlightData_yaw(msg_);
  }

private:
  ::tello_msgs::msg::FlightData msg_;
};

class Init_FlightData_pitch
{
public:
  explicit Init_FlightData_pitch(::tello_msgs::msg::FlightData & msg)
  : msg_(msg)
  {}
  Init_FlightData_roll pitch(::tello_msgs::msg::FlightData::_pitch_type arg)
  {
    msg_.pitch = std::move(arg);
    return Init_FlightData_roll(msg_);
  }

private:
  ::tello_msgs::msg::FlightData msg_;
};

class Init_FlightData_sdk
{
public:
  explicit Init_FlightData_sdk(::tello_msgs::msg::FlightData & msg)
  : msg_(msg)
  {}
  Init_FlightData_pitch sdk(::tello_msgs::msg::FlightData::_sdk_type arg)
  {
    msg_.sdk = std::move(arg);
    return Init_FlightData_pitch(msg_);
  }

private:
  ::tello_msgs::msg::FlightData msg_;
};

class Init_FlightData_raw
{
public:
  explicit Init_FlightData_raw(::tello_msgs::msg::FlightData & msg)
  : msg_(msg)
  {}
  Init_FlightData_sdk raw(::tello_msgs::msg::FlightData::_raw_type arg)
  {
    msg_.raw = std::move(arg);
    return Init_FlightData_sdk(msg_);
  }

private:
  ::tello_msgs::msg::FlightData msg_;
};

class Init_FlightData_header
{
public:
  Init_FlightData_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_FlightData_raw header(::tello_msgs::msg::FlightData::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_FlightData_raw(msg_);
  }

private:
  ::tello_msgs::msg::FlightData msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::tello_msgs::msg::FlightData>()
{
  return tello_msgs::msg::builder::Init_FlightData_header();
}

}  // namespace tello_msgs

#endif  // TELLO_MSGS__MSG__DETAIL__FLIGHT_DATA__BUILDER_HPP_
