// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from tello_msgs:srv/TelloAction.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "tello_msgs/srv/detail/tello_action__rosidl_typesupport_introspection_c.h"
#include "tello_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "tello_msgs/srv/detail/tello_action__functions.h"
#include "tello_msgs/srv/detail/tello_action__struct.h"


// Include directives for member types
// Member `cmd`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void TelloAction_Request__rosidl_typesupport_introspection_c__TelloAction_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  tello_msgs__srv__TelloAction_Request__init(message_memory);
}

void TelloAction_Request__rosidl_typesupport_introspection_c__TelloAction_Request_fini_function(void * message_memory)
{
  tello_msgs__srv__TelloAction_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember TelloAction_Request__rosidl_typesupport_introspection_c__TelloAction_Request_message_member_array[1] = {
  {
    "cmd",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tello_msgs__srv__TelloAction_Request, cmd),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers TelloAction_Request__rosidl_typesupport_introspection_c__TelloAction_Request_message_members = {
  "tello_msgs__srv",  // message namespace
  "TelloAction_Request",  // message name
  1,  // number of fields
  sizeof(tello_msgs__srv__TelloAction_Request),
  TelloAction_Request__rosidl_typesupport_introspection_c__TelloAction_Request_message_member_array,  // message members
  TelloAction_Request__rosidl_typesupport_introspection_c__TelloAction_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  TelloAction_Request__rosidl_typesupport_introspection_c__TelloAction_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t TelloAction_Request__rosidl_typesupport_introspection_c__TelloAction_Request_message_type_support_handle = {
  0,
  &TelloAction_Request__rosidl_typesupport_introspection_c__TelloAction_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_tello_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tello_msgs, srv, TelloAction_Request)() {
  if (!TelloAction_Request__rosidl_typesupport_introspection_c__TelloAction_Request_message_type_support_handle.typesupport_identifier) {
    TelloAction_Request__rosidl_typesupport_introspection_c__TelloAction_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &TelloAction_Request__rosidl_typesupport_introspection_c__TelloAction_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "tello_msgs/srv/detail/tello_action__rosidl_typesupport_introspection_c.h"
// already included above
// #include "tello_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "tello_msgs/srv/detail/tello_action__functions.h"
// already included above
// #include "tello_msgs/srv/detail/tello_action__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void TelloAction_Response__rosidl_typesupport_introspection_c__TelloAction_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  tello_msgs__srv__TelloAction_Response__init(message_memory);
}

void TelloAction_Response__rosidl_typesupport_introspection_c__TelloAction_Response_fini_function(void * message_memory)
{
  tello_msgs__srv__TelloAction_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember TelloAction_Response__rosidl_typesupport_introspection_c__TelloAction_Response_message_member_array[1] = {
  {
    "rc",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tello_msgs__srv__TelloAction_Response, rc),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers TelloAction_Response__rosidl_typesupport_introspection_c__TelloAction_Response_message_members = {
  "tello_msgs__srv",  // message namespace
  "TelloAction_Response",  // message name
  1,  // number of fields
  sizeof(tello_msgs__srv__TelloAction_Response),
  TelloAction_Response__rosidl_typesupport_introspection_c__TelloAction_Response_message_member_array,  // message members
  TelloAction_Response__rosidl_typesupport_introspection_c__TelloAction_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  TelloAction_Response__rosidl_typesupport_introspection_c__TelloAction_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t TelloAction_Response__rosidl_typesupport_introspection_c__TelloAction_Response_message_type_support_handle = {
  0,
  &TelloAction_Response__rosidl_typesupport_introspection_c__TelloAction_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_tello_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tello_msgs, srv, TelloAction_Response)() {
  if (!TelloAction_Response__rosidl_typesupport_introspection_c__TelloAction_Response_message_type_support_handle.typesupport_identifier) {
    TelloAction_Response__rosidl_typesupport_introspection_c__TelloAction_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &TelloAction_Response__rosidl_typesupport_introspection_c__TelloAction_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "tello_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "tello_msgs/srv/detail/tello_action__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers tello_msgs__srv__detail__tello_action__rosidl_typesupport_introspection_c__TelloAction_service_members = {
  "tello_msgs__srv",  // service namespace
  "TelloAction",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // tello_msgs__srv__detail__tello_action__rosidl_typesupport_introspection_c__TelloAction_Request_message_type_support_handle,
  NULL  // response message
  // tello_msgs__srv__detail__tello_action__rosidl_typesupport_introspection_c__TelloAction_Response_message_type_support_handle
};

static rosidl_service_type_support_t tello_msgs__srv__detail__tello_action__rosidl_typesupport_introspection_c__TelloAction_service_type_support_handle = {
  0,
  &tello_msgs__srv__detail__tello_action__rosidl_typesupport_introspection_c__TelloAction_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tello_msgs, srv, TelloAction_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tello_msgs, srv, TelloAction_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_tello_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tello_msgs, srv, TelloAction)() {
  if (!tello_msgs__srv__detail__tello_action__rosidl_typesupport_introspection_c__TelloAction_service_type_support_handle.typesupport_identifier) {
    tello_msgs__srv__detail__tello_action__rosidl_typesupport_introspection_c__TelloAction_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)tello_msgs__srv__detail__tello_action__rosidl_typesupport_introspection_c__TelloAction_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tello_msgs, srv, TelloAction_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tello_msgs, srv, TelloAction_Response)()->data;
  }

  return &tello_msgs__srv__detail__tello_action__rosidl_typesupport_introspection_c__TelloAction_service_type_support_handle;
}
