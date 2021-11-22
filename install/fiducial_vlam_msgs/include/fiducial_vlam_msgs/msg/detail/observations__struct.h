// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from fiducial_vlam_msgs:msg/Observations.idl
// generated code does not contain a copyright notice

#ifndef FIDUCIAL_VLAM_MSGS__MSG__DETAIL__OBSERVATIONS__STRUCT_H_
#define FIDUCIAL_VLAM_MSGS__MSG__DETAIL__OBSERVATIONS__STRUCT_H_

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
// Member 'camera_info'
#include "sensor_msgs/msg/detail/camera_info__struct.h"
// Member 'observations'
#include "fiducial_vlam_msgs/msg/detail/observation__struct.h"

// Struct defined in msg/Observations in the package fiducial_vlam_msgs.
typedef struct fiducial_vlam_msgs__msg__Observations
{
  std_msgs__msg__Header header;
  sensor_msgs__msg__CameraInfo camera_info;
  fiducial_vlam_msgs__msg__Observation__Sequence observations;
} fiducial_vlam_msgs__msg__Observations;

// Struct for a sequence of fiducial_vlam_msgs__msg__Observations.
typedef struct fiducial_vlam_msgs__msg__Observations__Sequence
{
  fiducial_vlam_msgs__msg__Observations * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} fiducial_vlam_msgs__msg__Observations__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // FIDUCIAL_VLAM_MSGS__MSG__DETAIL__OBSERVATIONS__STRUCT_H_
