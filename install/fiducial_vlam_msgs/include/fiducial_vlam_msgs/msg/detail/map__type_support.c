// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from fiducial_vlam_msgs:msg/Map.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "fiducial_vlam_msgs/msg/detail/map__rosidl_typesupport_introspection_c.h"
#include "fiducial_vlam_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "fiducial_vlam_msgs/msg/detail/map__functions.h"
#include "fiducial_vlam_msgs/msg/detail/map__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `fixed_flags`
// Member `ids`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `poses`
#include "geometry_msgs/msg/pose_with_covariance.h"
// Member `poses`
#include "geometry_msgs/msg/detail/pose_with_covariance__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void Map__rosidl_typesupport_introspection_c__Map_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  fiducial_vlam_msgs__msg__Map__init(message_memory);
}

void Map__rosidl_typesupport_introspection_c__Map_fini_function(void * message_memory)
{
  fiducial_vlam_msgs__msg__Map__fini(message_memory);
}

size_t Map__rosidl_typesupport_introspection_c__size_function__PoseWithCovariance__poses(
  const void * untyped_member)
{
  const geometry_msgs__msg__PoseWithCovariance__Sequence * member =
    (const geometry_msgs__msg__PoseWithCovariance__Sequence *)(untyped_member);
  return member->size;
}

const void * Map__rosidl_typesupport_introspection_c__get_const_function__PoseWithCovariance__poses(
  const void * untyped_member, size_t index)
{
  const geometry_msgs__msg__PoseWithCovariance__Sequence * member =
    (const geometry_msgs__msg__PoseWithCovariance__Sequence *)(untyped_member);
  return &member->data[index];
}

void * Map__rosidl_typesupport_introspection_c__get_function__PoseWithCovariance__poses(
  void * untyped_member, size_t index)
{
  geometry_msgs__msg__PoseWithCovariance__Sequence * member =
    (geometry_msgs__msg__PoseWithCovariance__Sequence *)(untyped_member);
  return &member->data[index];
}

bool Map__rosidl_typesupport_introspection_c__resize_function__PoseWithCovariance__poses(
  void * untyped_member, size_t size)
{
  geometry_msgs__msg__PoseWithCovariance__Sequence * member =
    (geometry_msgs__msg__PoseWithCovariance__Sequence *)(untyped_member);
  geometry_msgs__msg__PoseWithCovariance__Sequence__fini(member);
  return geometry_msgs__msg__PoseWithCovariance__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember Map__rosidl_typesupport_introspection_c__Map_message_member_array[5] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(fiducial_vlam_msgs__msg__Map, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "marker_length",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(fiducial_vlam_msgs__msg__Map, marker_length),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "fixed_flags",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(fiducial_vlam_msgs__msg__Map, fixed_flags),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "ids",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(fiducial_vlam_msgs__msg__Map, ids),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "poses",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(fiducial_vlam_msgs__msg__Map, poses),  // bytes offset in struct
    NULL,  // default value
    Map__rosidl_typesupport_introspection_c__size_function__PoseWithCovariance__poses,  // size() function pointer
    Map__rosidl_typesupport_introspection_c__get_const_function__PoseWithCovariance__poses,  // get_const(index) function pointer
    Map__rosidl_typesupport_introspection_c__get_function__PoseWithCovariance__poses,  // get(index) function pointer
    Map__rosidl_typesupport_introspection_c__resize_function__PoseWithCovariance__poses  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Map__rosidl_typesupport_introspection_c__Map_message_members = {
  "fiducial_vlam_msgs__msg",  // message namespace
  "Map",  // message name
  5,  // number of fields
  sizeof(fiducial_vlam_msgs__msg__Map),
  Map__rosidl_typesupport_introspection_c__Map_message_member_array,  // message members
  Map__rosidl_typesupport_introspection_c__Map_init_function,  // function to initialize message memory (memory has to be allocated)
  Map__rosidl_typesupport_introspection_c__Map_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Map__rosidl_typesupport_introspection_c__Map_message_type_support_handle = {
  0,
  &Map__rosidl_typesupport_introspection_c__Map_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_fiducial_vlam_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, fiducial_vlam_msgs, msg, Map)() {
  Map__rosidl_typesupport_introspection_c__Map_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  Map__rosidl_typesupport_introspection_c__Map_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, PoseWithCovariance)();
  if (!Map__rosidl_typesupport_introspection_c__Map_message_type_support_handle.typesupport_identifier) {
    Map__rosidl_typesupport_introspection_c__Map_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Map__rosidl_typesupport_introspection_c__Map_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
