// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from fiducial_vlam_msgs:msg/Map.idl
// generated code does not contain a copyright notice

#ifndef FIDUCIAL_VLAM_MSGS__MSG__DETAIL__MAP__STRUCT_HPP_
#define FIDUCIAL_VLAM_MSGS__MSG__DETAIL__MAP__STRUCT_HPP_

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
// Member 'poses'
#include "geometry_msgs/msg/detail/pose_with_covariance__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__fiducial_vlam_msgs__msg__Map __attribute__((deprecated))
#else
# define DEPRECATED__fiducial_vlam_msgs__msg__Map __declspec(deprecated)
#endif

namespace fiducial_vlam_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Map_
{
  using Type = Map_<ContainerAllocator>;

  explicit Map_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->marker_length = 0.0;
    }
  }

  explicit Map_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->marker_length = 0.0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _marker_length_type =
    double;
  _marker_length_type marker_length;
  using _fixed_flags_type =
    std::vector<int32_t, typename ContainerAllocator::template rebind<int32_t>::other>;
  _fixed_flags_type fixed_flags;
  using _ids_type =
    std::vector<int32_t, typename ContainerAllocator::template rebind<int32_t>::other>;
  _ids_type ids;
  using _poses_type =
    std::vector<geometry_msgs::msg::PoseWithCovariance_<ContainerAllocator>, typename ContainerAllocator::template rebind<geometry_msgs::msg::PoseWithCovariance_<ContainerAllocator>>::other>;
  _poses_type poses;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__marker_length(
    const double & _arg)
  {
    this->marker_length = _arg;
    return *this;
  }
  Type & set__fixed_flags(
    const std::vector<int32_t, typename ContainerAllocator::template rebind<int32_t>::other> & _arg)
  {
    this->fixed_flags = _arg;
    return *this;
  }
  Type & set__ids(
    const std::vector<int32_t, typename ContainerAllocator::template rebind<int32_t>::other> & _arg)
  {
    this->ids = _arg;
    return *this;
  }
  Type & set__poses(
    const std::vector<geometry_msgs::msg::PoseWithCovariance_<ContainerAllocator>, typename ContainerAllocator::template rebind<geometry_msgs::msg::PoseWithCovariance_<ContainerAllocator>>::other> & _arg)
  {
    this->poses = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    fiducial_vlam_msgs::msg::Map_<ContainerAllocator> *;
  using ConstRawPtr =
    const fiducial_vlam_msgs::msg::Map_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<fiducial_vlam_msgs::msg::Map_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<fiducial_vlam_msgs::msg::Map_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      fiducial_vlam_msgs::msg::Map_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<fiducial_vlam_msgs::msg::Map_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      fiducial_vlam_msgs::msg::Map_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<fiducial_vlam_msgs::msg::Map_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<fiducial_vlam_msgs::msg::Map_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<fiducial_vlam_msgs::msg::Map_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__fiducial_vlam_msgs__msg__Map
    std::shared_ptr<fiducial_vlam_msgs::msg::Map_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__fiducial_vlam_msgs__msg__Map
    std::shared_ptr<fiducial_vlam_msgs::msg::Map_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Map_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->marker_length != other.marker_length) {
      return false;
    }
    if (this->fixed_flags != other.fixed_flags) {
      return false;
    }
    if (this->ids != other.ids) {
      return false;
    }
    if (this->poses != other.poses) {
      return false;
    }
    return true;
  }
  bool operator!=(const Map_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Map_

// alias to use template instance with default allocator
using Map =
  fiducial_vlam_msgs::msg::Map_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace fiducial_vlam_msgs

#endif  // FIDUCIAL_VLAM_MSGS__MSG__DETAIL__MAP__STRUCT_HPP_
