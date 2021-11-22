// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from fiducial_vlam_msgs:msg/Observation.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "fiducial_vlam_msgs/msg/detail/observation__rosidl_typesupport_introspection_c.h"
#include "fiducial_vlam_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "fiducial_vlam_msgs/msg/detail/observation__functions.h"
#include "fiducial_vlam_msgs/msg/detail/observation__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void Observation__rosidl_typesupport_introspection_c__Observation_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  fiducial_vlam_msgs__msg__Observation__init(message_memory);
}

void Observation__rosidl_typesupport_introspection_c__Observation_fini_function(void * message_memory)
{
  fiducial_vlam_msgs__msg__Observation__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Observation__rosidl_typesupport_introspection_c__Observation_message_member_array[9] = {
  {
    "id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(fiducial_vlam_msgs__msg__Observation, id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "x0",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(fiducial_vlam_msgs__msg__Observation, x0),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "y0",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(fiducial_vlam_msgs__msg__Observation, y0),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "x1",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(fiducial_vlam_msgs__msg__Observation, x1),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "y1",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(fiducial_vlam_msgs__msg__Observation, y1),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "x2",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(fiducial_vlam_msgs__msg__Observation, x2),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "y2",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(fiducial_vlam_msgs__msg__Observation, y2),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "x3",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(fiducial_vlam_msgs__msg__Observation, x3),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "y3",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(fiducial_vlam_msgs__msg__Observation, y3),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Observation__rosidl_typesupport_introspection_c__Observation_message_members = {
  "fiducial_vlam_msgs__msg",  // message namespace
  "Observation",  // message name
  9,  // number of fields
  sizeof(fiducial_vlam_msgs__msg__Observation),
  Observation__rosidl_typesupport_introspection_c__Observation_message_member_array,  // message members
  Observation__rosidl_typesupport_introspection_c__Observation_init_function,  // function to initialize message memory (memory has to be allocated)
  Observation__rosidl_typesupport_introspection_c__Observation_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Observation__rosidl_typesupport_introspection_c__Observation_message_type_support_handle = {
  0,
  &Observation__rosidl_typesupport_introspection_c__Observation_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_fiducial_vlam_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, fiducial_vlam_msgs, msg, Observation)() {
  if (!Observation__rosidl_typesupport_introspection_c__Observation_message_type_support_handle.typesupport_identifier) {
    Observation__rosidl_typesupport_introspection_c__Observation_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Observation__rosidl_typesupport_introspection_c__Observation_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
