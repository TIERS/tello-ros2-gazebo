// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tello_msgs:srv/TelloAction.idl
// generated code does not contain a copyright notice

#ifndef TELLO_MSGS__SRV__DETAIL__TELLO_ACTION__STRUCT_H_
#define TELLO_MSGS__SRV__DETAIL__TELLO_ACTION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'cmd'
#include "rosidl_runtime_c/string.h"

// Struct defined in srv/TelloAction in the package tello_msgs.
typedef struct tello_msgs__srv__TelloAction_Request
{
  rosidl_runtime_c__String cmd;
} tello_msgs__srv__TelloAction_Request;

// Struct for a sequence of tello_msgs__srv__TelloAction_Request.
typedef struct tello_msgs__srv__TelloAction_Request__Sequence
{
  tello_msgs__srv__TelloAction_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tello_msgs__srv__TelloAction_Request__Sequence;


// Constants defined in the message

/// Constant 'OK'.
enum
{
  tello_msgs__srv__TelloAction_Response__OK = 1
};

/// Constant 'ERROR_NOT_CONNECTED'.
enum
{
  tello_msgs__srv__TelloAction_Response__ERROR_NOT_CONNECTED = 2
};

/// Constant 'ERROR_BUSY'.
enum
{
  tello_msgs__srv__TelloAction_Response__ERROR_BUSY = 3
};

// Struct defined in srv/TelloAction in the package tello_msgs.
typedef struct tello_msgs__srv__TelloAction_Response
{
  uint8_t rc;
} tello_msgs__srv__TelloAction_Response;

// Struct for a sequence of tello_msgs__srv__TelloAction_Response.
typedef struct tello_msgs__srv__TelloAction_Response__Sequence
{
  tello_msgs__srv__TelloAction_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tello_msgs__srv__TelloAction_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TELLO_MSGS__SRV__DETAIL__TELLO_ACTION__STRUCT_H_
