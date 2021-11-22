// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from fiducial_vlam_msgs:msg/Map.idl
// generated code does not contain a copyright notice

#ifndef FIDUCIAL_VLAM_MSGS__MSG__DETAIL__MAP__STRUCT_H_
#define FIDUCIAL_VLAM_MSGS__MSG__DETAIL__MAP__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'fixed_flags'
// Member 'ids'
#include "rosidl_runtime_c/primitives_sequence.h"
// Member 'poses'
#include "geometry_msgs/msg/detail/pose_with_covariance__struct.h"

// Struct defined in msg/Map in the package fiducial_vlam_msgs.
typedef struct fiducial_vlam_msgs__msg__Map
{
  std_msgs__msg__Header header;
  double marker_length;
  rosidl_runtime_c__int32__Sequence fixed_flags;
  rosidl_runtime_c__int32__Sequence ids;
  geometry_msgs__msg__PoseWithCovariance__Sequence poses;
} fiducial_vlam_msgs__msg__Map;

// Struct for a sequence of fiducial_vlam_msgs__msg__Map.
typedef struct fiducial_vlam_msgs__msg__Map__Sequence
{
  fiducial_vlam_msgs__msg__Map * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} fiducial_vlam_msgs__msg__Map__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // FIDUCIAL_VLAM_MSGS__MSG__DETAIL__MAP__STRUCT_H_
