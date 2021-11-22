// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from tello_msgs:srv/TelloAction.idl
// generated code does not contain a copyright notice

#ifndef TELLO_MSGS__SRV__DETAIL__TELLO_ACTION__STRUCT_HPP_
#define TELLO_MSGS__SRV__DETAIL__TELLO_ACTION__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__tello_msgs__srv__TelloAction_Request __attribute__((deprecated))
#else
# define DEPRECATED__tello_msgs__srv__TelloAction_Request __declspec(deprecated)
#endif

namespace tello_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct TelloAction_Request_
{
  using Type = TelloAction_Request_<ContainerAllocator>;

  explicit TelloAction_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->cmd = "";
    }
  }

  explicit TelloAction_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : cmd(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->cmd = "";
    }
  }

  // field types and members
  using _cmd_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _cmd_type cmd;

  // setters for named parameter idiom
  Type & set__cmd(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->cmd = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    tello_msgs::srv::TelloAction_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const tello_msgs::srv::TelloAction_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tello_msgs::srv::TelloAction_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tello_msgs::srv::TelloAction_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tello_msgs::srv::TelloAction_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tello_msgs::srv::TelloAction_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tello_msgs::srv::TelloAction_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tello_msgs::srv::TelloAction_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tello_msgs::srv::TelloAction_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tello_msgs::srv::TelloAction_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tello_msgs__srv__TelloAction_Request
    std::shared_ptr<tello_msgs::srv::TelloAction_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tello_msgs__srv__TelloAction_Request
    std::shared_ptr<tello_msgs::srv::TelloAction_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TelloAction_Request_ & other) const
  {
    if (this->cmd != other.cmd) {
      return false;
    }
    return true;
  }
  bool operator!=(const TelloAction_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TelloAction_Request_

// alias to use template instance with default allocator
using TelloAction_Request =
  tello_msgs::srv::TelloAction_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace tello_msgs


#ifndef _WIN32
# define DEPRECATED__tello_msgs__srv__TelloAction_Response __attribute__((deprecated))
#else
# define DEPRECATED__tello_msgs__srv__TelloAction_Response __declspec(deprecated)
#endif

namespace tello_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct TelloAction_Response_
{
  using Type = TelloAction_Response_<ContainerAllocator>;

  explicit TelloAction_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->rc = 0;
    }
  }

  explicit TelloAction_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->rc = 0;
    }
  }

  // field types and members
  using _rc_type =
    uint8_t;
  _rc_type rc;

  // setters for named parameter idiom
  Type & set__rc(
    const uint8_t & _arg)
  {
    this->rc = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t OK =
    1u;
  static constexpr uint8_t ERROR_NOT_CONNECTED =
    2u;
  static constexpr uint8_t ERROR_BUSY =
    3u;

  // pointer types
  using RawPtr =
    tello_msgs::srv::TelloAction_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const tello_msgs::srv::TelloAction_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tello_msgs::srv::TelloAction_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tello_msgs::srv::TelloAction_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tello_msgs::srv::TelloAction_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tello_msgs::srv::TelloAction_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tello_msgs::srv::TelloAction_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tello_msgs::srv::TelloAction_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tello_msgs::srv::TelloAction_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tello_msgs::srv::TelloAction_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tello_msgs__srv__TelloAction_Response
    std::shared_ptr<tello_msgs::srv::TelloAction_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tello_msgs__srv__TelloAction_Response
    std::shared_ptr<tello_msgs::srv::TelloAction_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TelloAction_Response_ & other) const
  {
    if (this->rc != other.rc) {
      return false;
    }
    return true;
  }
  bool operator!=(const TelloAction_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TelloAction_Response_

// alias to use template instance with default allocator
using TelloAction_Response =
  tello_msgs::srv::TelloAction_Response_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr uint8_t TelloAction_Response_<ContainerAllocator>::OK;
template<typename ContainerAllocator>
constexpr uint8_t TelloAction_Response_<ContainerAllocator>::ERROR_NOT_CONNECTED;
template<typename ContainerAllocator>
constexpr uint8_t TelloAction_Response_<ContainerAllocator>::ERROR_BUSY;

}  // namespace srv

}  // namespace tello_msgs

namespace tello_msgs
{

namespace srv
{

struct TelloAction
{
  using Request = tello_msgs::srv::TelloAction_Request;
  using Response = tello_msgs::srv::TelloAction_Response;
};

}  // namespace srv

}  // namespace tello_msgs

#endif  // TELLO_MSGS__SRV__DETAIL__TELLO_ACTION__STRUCT_HPP_
