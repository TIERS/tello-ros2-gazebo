// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tello_msgs:msg/FlightData.idl
// generated code does not contain a copyright notice

#ifndef TELLO_MSGS__MSG__DETAIL__FLIGHT_DATA__STRUCT_H_
#define TELLO_MSGS__MSG__DETAIL__FLIGHT_DATA__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'SDK_UNKNOWN'.
enum
{
  tello_msgs__msg__FlightData__SDK_UNKNOWN = 0
};

/// Constant 'SDK_1_3'.
enum
{
  tello_msgs__msg__FlightData__SDK_1_3 = 1
};

/// Constant 'SDK_2_0'.
enum
{
  tello_msgs__msg__FlightData__SDK_2_0 = 2
};

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'raw'
#include "rosidl_runtime_c/string.h"

// Struct defined in msg/FlightData in the package tello_msgs.
typedef struct tello_msgs__msg__FlightData
{
  std_msgs__msg__Header header;
  rosidl_runtime_c__String raw;
  uint8_t sdk;
  int32_t pitch;
  int32_t roll;
  int32_t yaw;
  int32_t vgx;
  int32_t vgy;
  int32_t vgz;
  int32_t templ;
  int32_t temph;
  int32_t tof;
  int32_t h;
  int32_t bat;
  float baro;
  int32_t time;
  float agx;
  float agy;
  float agz;
  int32_t mid;
  int32_t x;
  int32_t y;
  int32_t z;
} tello_msgs__msg__FlightData;

// Struct for a sequence of tello_msgs__msg__FlightData.
typedef struct tello_msgs__msg__FlightData__Sequence
{
  tello_msgs__msg__FlightData * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tello_msgs__msg__FlightData__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TELLO_MSGS__MSG__DETAIL__FLIGHT_DATA__STRUCT_H_
