// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from tello_msgs:msg/TelloResponse.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "tello_msgs/msg/detail/tello_response__rosidl_typesupport_introspection_c.h"
#include "tello_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "tello_msgs/msg/detail/tello_response__functions.h"
#include "tello_msgs/msg/detail/tello_response__struct.h"


// Include directives for member types
// Member `str`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void TelloResponse__rosidl_typesupport_introspection_c__TelloResponse_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  tello_msgs__msg__TelloResponse__init(message_memory);
}

void TelloResponse__rosidl_typesupport_introspection_c__TelloResponse_fini_function(void * message_memory)
{
  tello_msgs__msg__TelloResponse__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember TelloResponse__rosidl_typesupport_introspection_c__TelloResponse_message_member_array[2] = {
  {
    "rc",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tello_msgs__msg__TelloResponse, rc),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "str",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tello_msgs__msg__TelloResponse, str),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers TelloResponse__rosidl_typesupport_introspection_c__TelloResponse_message_members = {
  "tello_msgs__msg",  // message namespace
  "TelloResponse",  // message name
  2,  // number of fields
  sizeof(tello_msgs__msg__TelloResponse),
  TelloResponse__rosidl_typesupport_introspection_c__TelloResponse_message_member_array,  // message members
  TelloResponse__rosidl_typesupport_introspection_c__TelloResponse_init_function,  // function to initialize message memory (memory has to be allocated)
  TelloResponse__rosidl_typesupport_introspection_c__TelloResponse_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t TelloResponse__rosidl_typesupport_introspection_c__TelloResponse_message_type_support_handle = {
  0,
  &TelloResponse__rosidl_typesupport_introspection_c__TelloResponse_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_tello_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tello_msgs, msg, TelloResponse)() {
  if (!TelloResponse__rosidl_typesupport_introspection_c__TelloResponse_message_type_support_handle.typesupport_identifier) {
    TelloResponse__rosidl_typesupport_introspection_c__TelloResponse_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &TelloResponse__rosidl_typesupport_introspection_c__TelloResponse_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
