// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from fiducial_vlam_msgs:msg/Observation.idl
// generated code does not contain a copyright notice

#ifndef FIDUCIAL_VLAM_MSGS__MSG__DETAIL__OBSERVATION__STRUCT_H_
#define FIDUCIAL_VLAM_MSGS__MSG__DETAIL__OBSERVATION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/Observation in the package fiducial_vlam_msgs.
typedef struct fiducial_vlam_msgs__msg__Observation
{
  int32_t id;
  double x0;
  double y0;
  double x1;
  double y1;
  double x2;
  double y2;
  double x3;
  double y3;
} fiducial_vlam_msgs__msg__Observation;

// Struct for a sequence of fiducial_vlam_msgs__msg__Observation.
typedef struct fiducial_vlam_msgs__msg__Observation__Sequence
{
  fiducial_vlam_msgs__msg__Observation * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} fiducial_vlam_msgs__msg__Observation__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // FIDUCIAL_VLAM_MSGS__MSG__DETAIL__OBSERVATION__STRUCT_H_
