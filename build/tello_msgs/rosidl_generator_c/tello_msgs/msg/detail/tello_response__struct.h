// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tello_msgs:msg/TelloResponse.idl
// generated code does not contain a copyright notice

#ifndef TELLO_MSGS__MSG__DETAIL__TELLO_RESPONSE__STRUCT_H_
#define TELLO_MSGS__MSG__DETAIL__TELLO_RESPONSE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'OK'.
enum
{
  tello_msgs__msg__TelloResponse__OK = 1
};

/// Constant 'ERROR'.
enum
{
  tello_msgs__msg__TelloResponse__ERROR = 2
};

/// Constant 'TIMEOUT'.
enum
{
  tello_msgs__msg__TelloResponse__TIMEOUT = 3
};

// Include directives for member types
// Member 'str'
#include "rosidl_runtime_c/string.h"

// Struct defined in msg/TelloResponse in the package tello_msgs.
typedef struct tello_msgs__msg__TelloResponse
{
  uint8_t rc;
  rosidl_runtime_c__String str;
} tello_msgs__msg__TelloResponse;

// Struct for a sequence of tello_msgs__msg__TelloResponse.
typedef struct tello_msgs__msg__TelloResponse__Sequence
{
  tello_msgs__msg__TelloResponse * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tello_msgs__msg__TelloResponse__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TELLO_MSGS__MSG__DETAIL__TELLO_RESPONSE__STRUCT_H_
