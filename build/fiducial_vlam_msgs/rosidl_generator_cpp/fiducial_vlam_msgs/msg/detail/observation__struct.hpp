// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from fiducial_vlam_msgs:msg/Observation.idl
// generated code does not contain a copyright notice

#ifndef FIDUCIAL_VLAM_MSGS__MSG__DETAIL__OBSERVATION__STRUCT_HPP_
#define FIDUCIAL_VLAM_MSGS__MSG__DETAIL__OBSERVATION__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__fiducial_vlam_msgs__msg__Observation __attribute__((deprecated))
#else
# define DEPRECATED__fiducial_vlam_msgs__msg__Observation __declspec(deprecated)
#endif

namespace fiducial_vlam_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Observation_
{
  using Type = Observation_<ContainerAllocator>;

  explicit Observation_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0l;
      this->x0 = 0.0;
      this->y0 = 0.0;
      this->x1 = 0.0;
      this->y1 = 0.0;
      this->x2 = 0.0;
      this->y2 = 0.0;
      this->x3 = 0.0;
      this->y3 = 0.0;
    }
  }

  explicit Observation_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0l;
      this->x0 = 0.0;
      this->y0 = 0.0;
      this->x1 = 0.0;
      this->y1 = 0.0;
      this->x2 = 0.0;
      this->y2 = 0.0;
      this->x3 = 0.0;
      this->y3 = 0.0;
    }
  }

  // field types and members
  using _id_type =
    int32_t;
  _id_type id;
  using _x0_type =
    double;
  _x0_type x0;
  using _y0_type =
    double;
  _y0_type y0;
  using _x1_type =
    double;
  _x1_type x1;
  using _y1_type =
    double;
  _y1_type y1;
  using _x2_type =
    double;
  _x2_type x2;
  using _y2_type =
    double;
  _y2_type y2;
  using _x3_type =
    double;
  _x3_type x3;
  using _y3_type =
    double;
  _y3_type y3;

  // setters for named parameter idiom
  Type & set__id(
    const int32_t & _arg)
  {
    this->id = _arg;
    return *this;
  }
  Type & set__x0(
    const double & _arg)
  {
    this->x0 = _arg;
    return *this;
  }
  Type & set__y0(
    const double & _arg)
  {
    this->y0 = _arg;
    return *this;
  }
  Type & set__x1(
    const double & _arg)
  {
    this->x1 = _arg;
    return *this;
  }
  Type & set__y1(
    const double & _arg)
  {
    this->y1 = _arg;
    return *this;
  }
  Type & set__x2(
    const double & _arg)
  {
    this->x2 = _arg;
    return *this;
  }
  Type & set__y2(
    const double & _arg)
  {
    this->y2 = _arg;
    return *this;
  }
  Type & set__x3(
    const double & _arg)
  {
    this->x3 = _arg;
    return *this;
  }
  Type & set__y3(
    const double & _arg)
  {
    this->y3 = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    fiducial_vlam_msgs::msg::Observation_<ContainerAllocator> *;
  using ConstRawPtr =
    const fiducial_vlam_msgs::msg::Observation_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<fiducial_vlam_msgs::msg::Observation_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<fiducial_vlam_msgs::msg::Observation_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      fiducial_vlam_msgs::msg::Observation_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<fiducial_vlam_msgs::msg::Observation_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      fiducial_vlam_msgs::msg::Observation_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<fiducial_vlam_msgs::msg::Observation_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<fiducial_vlam_msgs::msg::Observation_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<fiducial_vlam_msgs::msg::Observation_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__fiducial_vlam_msgs__msg__Observation
    std::shared_ptr<fiducial_vlam_msgs::msg::Observation_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__fiducial_vlam_msgs__msg__Observation
    std::shared_ptr<fiducial_vlam_msgs::msg::Observation_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Observation_ & other) const
  {
    if (this->id != other.id) {
      return false;
    }
    if (this->x0 != other.x0) {
      return false;
    }
    if (this->y0 != other.y0) {
      return false;
    }
    if (this->x1 != other.x1) {
      return false;
    }
    if (this->y1 != other.y1) {
      return false;
    }
    if (this->x2 != other.x2) {
      return false;
    }
    if (this->y2 != other.y2) {
      return false;
    }
    if (this->x3 != other.x3) {
      return false;
    }
    if (this->y3 != other.y3) {
      return false;
    }
    return true;
  }
  bool operator!=(const Observation_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Observation_

// alias to use template instance with default allocator
using Observation =
  fiducial_vlam_msgs::msg::Observation_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace fiducial_vlam_msgs

#endif  // FIDUCIAL_VLAM_MSGS__MSG__DETAIL__OBSERVATION__STRUCT_HPP_
