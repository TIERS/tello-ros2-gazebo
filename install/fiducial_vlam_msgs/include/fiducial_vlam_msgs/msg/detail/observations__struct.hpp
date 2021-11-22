// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from fiducial_vlam_msgs:msg/Observations.idl
// generated code does not contain a copyright notice

#ifndef FIDUCIAL_VLAM_MSGS__MSG__DETAIL__OBSERVATIONS__STRUCT_HPP_
#define FIDUCIAL_VLAM_MSGS__MSG__DETAIL__OBSERVATIONS__STRUCT_HPP_

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
// Member 'camera_info'
#include "sensor_msgs/msg/detail/camera_info__struct.hpp"
// Member 'observations'
#include "fiducial_vlam_msgs/msg/detail/observation__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__fiducial_vlam_msgs__msg__Observations __attribute__((deprecated))
#else
# define DEPRECATED__fiducial_vlam_msgs__msg__Observations __declspec(deprecated)
#endif

namespace fiducial_vlam_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Observations_
{
  using Type = Observations_<ContainerAllocator>;

  explicit Observations_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    camera_info(_init)
  {
    (void)_init;
  }

  explicit Observations_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    camera_info(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _camera_info_type =
    sensor_msgs::msg::CameraInfo_<ContainerAllocator>;
  _camera_info_type camera_info;
  using _observations_type =
    std::vector<fiducial_vlam_msgs::msg::Observation_<ContainerAllocator>, typename ContainerAllocator::template rebind<fiducial_vlam_msgs::msg::Observation_<ContainerAllocator>>::other>;
  _observations_type observations;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__camera_info(
    const sensor_msgs::msg::CameraInfo_<ContainerAllocator> & _arg)
  {
    this->camera_info = _arg;
    return *this;
  }
  Type & set__observations(
    const std::vector<fiducial_vlam_msgs::msg::Observation_<ContainerAllocator>, typename ContainerAllocator::template rebind<fiducial_vlam_msgs::msg::Observation_<ContainerAllocator>>::other> & _arg)
  {
    this->observations = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    fiducial_vlam_msgs::msg::Observations_<ContainerAllocator> *;
  using ConstRawPtr =
    const fiducial_vlam_msgs::msg::Observations_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<fiducial_vlam_msgs::msg::Observations_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<fiducial_vlam_msgs::msg::Observations_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      fiducial_vlam_msgs::msg::Observations_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<fiducial_vlam_msgs::msg::Observations_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      fiducial_vlam_msgs::msg::Observations_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<fiducial_vlam_msgs::msg::Observations_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<fiducial_vlam_msgs::msg::Observations_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<fiducial_vlam_msgs::msg::Observations_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__fiducial_vlam_msgs__msg__Observations
    std::shared_ptr<fiducial_vlam_msgs::msg::Observations_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__fiducial_vlam_msgs__msg__Observations
    std::shared_ptr<fiducial_vlam_msgs::msg::Observations_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Observations_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->camera_info != other.camera_info) {
      return false;
    }
    if (this->observations != other.observations) {
      return false;
    }
    return true;
  }
  bool operator!=(const Observations_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Observations_

// alias to use template instance with default allocator
using Observations =
  fiducial_vlam_msgs::msg::Observations_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace fiducial_vlam_msgs

#endif  // FIDUCIAL_VLAM_MSGS__MSG__DETAIL__OBSERVATIONS__STRUCT_HPP_
