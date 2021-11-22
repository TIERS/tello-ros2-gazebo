// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from tello_msgs:msg/FlightData.idl
// generated code does not contain a copyright notice

#ifndef TELLO_MSGS__MSG__DETAIL__FLIGHT_DATA__STRUCT_HPP_
#define TELLO_MSGS__MSG__DETAIL__FLIGHT_DATA__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__tello_msgs__msg__FlightData __attribute__((deprecated))
#else
# define DEPRECATED__tello_msgs__msg__FlightData __declspec(deprecated)
#endif

namespace tello_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct FlightData_
{
  using Type = FlightData_<ContainerAllocator>;

  explicit FlightData_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->raw = "";
      this->sdk = 0;
      this->pitch = 0l;
      this->roll = 0l;
      this->yaw = 0l;
      this->vgx = 0l;
      this->vgy = 0l;
      this->vgz = 0l;
      this->templ = 0l;
      this->temph = 0l;
      this->tof = 0l;
      this->h = 0l;
      this->bat = 0l;
      this->baro = 0.0f;
      this->time = 0l;
      this->agx = 0.0f;
      this->agy = 0.0f;
      this->agz = 0.0f;
      this->mid = 0l;
      this->x = 0l;
      this->y = 0l;
      this->z = 0l;
    }
  }

  explicit FlightData_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    raw(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->raw = "";
      this->sdk = 0;
      this->pitch = 0l;
      this->roll = 0l;
      this->yaw = 0l;
      this->vgx = 0l;
      this->vgy = 0l;
      this->vgz = 0l;
      this->templ = 0l;
      this->temph = 0l;
      this->tof = 0l;
      this->h = 0l;
      this->bat = 0l;
      this->baro = 0.0f;
      this->time = 0l;
      this->agx = 0.0f;
      this->agy = 0.0f;
      this->agz = 0.0f;
      this->mid = 0l;
      this->x = 0l;
      this->y = 0l;
      this->z = 0l;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _raw_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _raw_type raw;
  using _sdk_type =
    uint8_t;
  _sdk_type sdk;
  using _pitch_type =
    int32_t;
  _pitch_type pitch;
  using _roll_type =
    int32_t;
  _roll_type roll;
  using _yaw_type =
    int32_t;
  _yaw_type yaw;
  using _vgx_type =
    int32_t;
  _vgx_type vgx;
  using _vgy_type =
    int32_t;
  _vgy_type vgy;
  using _vgz_type =
    int32_t;
  _vgz_type vgz;
  using _templ_type =
    int32_t;
  _templ_type templ;
  using _temph_type =
    int32_t;
  _temph_type temph;
  using _tof_type =
    int32_t;
  _tof_type tof;
  using _h_type =
    int32_t;
  _h_type h;
  using _bat_type =
    int32_t;
  _bat_type bat;
  using _baro_type =
    float;
  _baro_type baro;
  using _time_type =
    int32_t;
  _time_type time;
  using _agx_type =
    float;
  _agx_type agx;
  using _agy_type =
    float;
  _agy_type agy;
  using _agz_type =
    float;
  _agz_type agz;
  using _mid_type =
    int32_t;
  _mid_type mid;
  using _x_type =
    int32_t;
  _x_type x;
  using _y_type =
    int32_t;
  _y_type y;
  using _z_type =
    int32_t;
  _z_type z;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__raw(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->raw = _arg;
    return *this;
  }
  Type & set__sdk(
    const uint8_t & _arg)
  {
    this->sdk = _arg;
    return *this;
  }
  Type & set__pitch(
    const int32_t & _arg)
  {
    this->pitch = _arg;
    return *this;
  }
  Type & set__roll(
    const int32_t & _arg)
  {
    this->roll = _arg;
    return *this;
  }
  Type & set__yaw(
    const int32_t & _arg)
  {
    this->yaw = _arg;
    return *this;
  }
  Type & set__vgx(
    const int32_t & _arg)
  {
    this->vgx = _arg;
    return *this;
  }
  Type & set__vgy(
    const int32_t & _arg)
  {
    this->vgy = _arg;
    return *this;
  }
  Type & set__vgz(
    const int32_t & _arg)
  {
    this->vgz = _arg;
    return *this;
  }
  Type & set__templ(
    const int32_t & _arg)
  {
    this->templ = _arg;
    return *this;
  }
  Type & set__temph(
    const int32_t & _arg)
  {
    this->temph = _arg;
    return *this;
  }
  Type & set__tof(
    const int32_t & _arg)
  {
    this->tof = _arg;
    return *this;
  }
  Type & set__h(
    const int32_t & _arg)
  {
    this->h = _arg;
    return *this;
  }
  Type & set__bat(
    const int32_t & _arg)
  {
    this->bat = _arg;
    return *this;
  }
  Type & set__baro(
    const float & _arg)
  {
    this->baro = _arg;
    return *this;
  }
  Type & set__time(
    const int32_t & _arg)
  {
    this->time = _arg;
    return *this;
  }
  Type & set__agx(
    const float & _arg)
  {
    this->agx = _arg;
    return *this;
  }
  Type & set__agy(
    const float & _arg)
  {
    this->agy = _arg;
    return *this;
  }
  Type & set__agz(
    const float & _arg)
  {
    this->agz = _arg;
    return *this;
  }
  Type & set__mid(
    const int32_t & _arg)
  {
    this->mid = _arg;
    return *this;
  }
  Type & set__x(
    const int32_t & _arg)
  {
    this->x = _arg;
    return *this;
  }
  Type & set__y(
    const int32_t & _arg)
  {
    this->y = _arg;
    return *this;
  }
  Type & set__z(
    const int32_t & _arg)
  {
    this->z = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t SDK_UNKNOWN =
    0u;
  static constexpr uint8_t SDK_1_3 =
    1u;
  static constexpr uint8_t SDK_2_0 =
    2u;

  // pointer types
  using RawPtr =
    tello_msgs::msg::FlightData_<ContainerAllocator> *;
  using ConstRawPtr =
    const tello_msgs::msg::FlightData_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tello_msgs::msg::FlightData_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tello_msgs::msg::FlightData_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tello_msgs::msg::FlightData_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tello_msgs::msg::FlightData_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tello_msgs::msg::FlightData_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tello_msgs::msg::FlightData_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tello_msgs::msg::FlightData_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tello_msgs::msg::FlightData_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tello_msgs__msg__FlightData
    std::shared_ptr<tello_msgs::msg::FlightData_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tello_msgs__msg__FlightData
    std::shared_ptr<tello_msgs::msg::FlightData_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const FlightData_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->raw != other.raw) {
      return false;
    }
    if (this->sdk != other.sdk) {
      return false;
    }
    if (this->pitch != other.pitch) {
      return false;
    }
    if (this->roll != other.roll) {
      return false;
    }
    if (this->yaw != other.yaw) {
      return false;
    }
    if (this->vgx != other.vgx) {
      return false;
    }
    if (this->vgy != other.vgy) {
      return false;
    }
    if (this->vgz != other.vgz) {
      return false;
    }
    if (this->templ != other.templ) {
      return false;
    }
    if (this->temph != other.temph) {
      return false;
    }
    if (this->tof != other.tof) {
      return false;
    }
    if (this->h != other.h) {
      return false;
    }
    if (this->bat != other.bat) {
      return false;
    }
    if (this->baro != other.baro) {
      return false;
    }
    if (this->time != other.time) {
      return false;
    }
    if (this->agx != other.agx) {
      return false;
    }
    if (this->agy != other.agy) {
      return false;
    }
    if (this->agz != other.agz) {
      return false;
    }
    if (this->mid != other.mid) {
      return false;
    }
    if (this->x != other.x) {
      return false;
    }
    if (this->y != other.y) {
      return false;
    }
    if (this->z != other.z) {
      return false;
    }
    return true;
  }
  bool operator!=(const FlightData_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct FlightData_

// alias to use template instance with default allocator
using FlightData =
  tello_msgs::msg::FlightData_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr uint8_t FlightData_<ContainerAllocator>::SDK_UNKNOWN;
template<typename ContainerAllocator>
constexpr uint8_t FlightData_<ContainerAllocator>::SDK_1_3;
template<typename ContainerAllocator>
constexpr uint8_t FlightData_<ContainerAllocator>::SDK_2_0;

}  // namespace msg

}  // namespace tello_msgs

#endif  // TELLO_MSGS__MSG__DETAIL__FLIGHT_DATA__STRUCT_HPP_
