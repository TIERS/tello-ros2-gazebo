// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from fiducial_vlam_msgs:msg/Observations.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "fiducial_vlam_msgs/msg/detail/observations__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace fiducial_vlam_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void Observations_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) fiducial_vlam_msgs::msg::Observations(_init);
}

void Observations_fini_function(void * message_memory)
{
  auto typed_message = static_cast<fiducial_vlam_msgs::msg::Observations *>(message_memory);
  typed_message->~Observations();
}

size_t size_function__Observations__observations(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<fiducial_vlam_msgs::msg::Observation> *>(untyped_member);
  return member->size();
}

const void * get_const_function__Observations__observations(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<fiducial_vlam_msgs::msg::Observation> *>(untyped_member);
  return &member[index];
}

void * get_function__Observations__observations(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<fiducial_vlam_msgs::msg::Observation> *>(untyped_member);
  return &member[index];
}

void resize_function__Observations__observations(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<fiducial_vlam_msgs::msg::Observation> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember Observations_message_member_array[3] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Header>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(fiducial_vlam_msgs::msg::Observations, header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "camera_info",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<sensor_msgs::msg::CameraInfo>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(fiducial_vlam_msgs::msg::Observations, camera_info),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "observations",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<fiducial_vlam_msgs::msg::Observation>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(fiducial_vlam_msgs::msg::Observations, observations),  // bytes offset in struct
    nullptr,  // default value
    size_function__Observations__observations,  // size() function pointer
    get_const_function__Observations__observations,  // get_const(index) function pointer
    get_function__Observations__observations,  // get(index) function pointer
    resize_function__Observations__observations  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers Observations_message_members = {
  "fiducial_vlam_msgs::msg",  // message namespace
  "Observations",  // message name
  3,  // number of fields
  sizeof(fiducial_vlam_msgs::msg::Observations),
  Observations_message_member_array,  // message members
  Observations_init_function,  // function to initialize message memory (memory has to be allocated)
  Observations_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t Observations_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &Observations_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace fiducial_vlam_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<fiducial_vlam_msgs::msg::Observations>()
{
  return &::fiducial_vlam_msgs::msg::rosidl_typesupport_introspection_cpp::Observations_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, fiducial_vlam_msgs, msg, Observations)() {
  return &::fiducial_vlam_msgs::msg::rosidl_typesupport_introspection_cpp::Observations_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
