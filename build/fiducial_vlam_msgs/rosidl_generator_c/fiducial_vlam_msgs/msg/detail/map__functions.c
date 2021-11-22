// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from fiducial_vlam_msgs:msg/Map.idl
// generated code does not contain a copyright notice
#include "fiducial_vlam_msgs/msg/detail/map__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `fixed_flags`
// Member `ids`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `poses`
#include "geometry_msgs/msg/detail/pose_with_covariance__functions.h"

bool
fiducial_vlam_msgs__msg__Map__init(fiducial_vlam_msgs__msg__Map * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    fiducial_vlam_msgs__msg__Map__fini(msg);
    return false;
  }
  // marker_length
  // fixed_flags
  if (!rosidl_runtime_c__int32__Sequence__init(&msg->fixed_flags, 0)) {
    fiducial_vlam_msgs__msg__Map__fini(msg);
    return false;
  }
  // ids
  if (!rosidl_runtime_c__int32__Sequence__init(&msg->ids, 0)) {
    fiducial_vlam_msgs__msg__Map__fini(msg);
    return false;
  }
  // poses
  if (!geometry_msgs__msg__PoseWithCovariance__Sequence__init(&msg->poses, 0)) {
    fiducial_vlam_msgs__msg__Map__fini(msg);
    return false;
  }
  return true;
}

void
fiducial_vlam_msgs__msg__Map__fini(fiducial_vlam_msgs__msg__Map * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // marker_length
  // fixed_flags
  rosidl_runtime_c__int32__Sequence__fini(&msg->fixed_flags);
  // ids
  rosidl_runtime_c__int32__Sequence__fini(&msg->ids);
  // poses
  geometry_msgs__msg__PoseWithCovariance__Sequence__fini(&msg->poses);
}

fiducial_vlam_msgs__msg__Map *
fiducial_vlam_msgs__msg__Map__create()
{
  fiducial_vlam_msgs__msg__Map * msg = (fiducial_vlam_msgs__msg__Map *)malloc(sizeof(fiducial_vlam_msgs__msg__Map));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(fiducial_vlam_msgs__msg__Map));
  bool success = fiducial_vlam_msgs__msg__Map__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
fiducial_vlam_msgs__msg__Map__destroy(fiducial_vlam_msgs__msg__Map * msg)
{
  if (msg) {
    fiducial_vlam_msgs__msg__Map__fini(msg);
  }
  free(msg);
}


bool
fiducial_vlam_msgs__msg__Map__Sequence__init(fiducial_vlam_msgs__msg__Map__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  fiducial_vlam_msgs__msg__Map * data = NULL;
  if (size) {
    data = (fiducial_vlam_msgs__msg__Map *)calloc(size, sizeof(fiducial_vlam_msgs__msg__Map));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = fiducial_vlam_msgs__msg__Map__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        fiducial_vlam_msgs__msg__Map__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
fiducial_vlam_msgs__msg__Map__Sequence__fini(fiducial_vlam_msgs__msg__Map__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      fiducial_vlam_msgs__msg__Map__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

fiducial_vlam_msgs__msg__Map__Sequence *
fiducial_vlam_msgs__msg__Map__Sequence__create(size_t size)
{
  fiducial_vlam_msgs__msg__Map__Sequence * array = (fiducial_vlam_msgs__msg__Map__Sequence *)malloc(sizeof(fiducial_vlam_msgs__msg__Map__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = fiducial_vlam_msgs__msg__Map__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
fiducial_vlam_msgs__msg__Map__Sequence__destroy(fiducial_vlam_msgs__msg__Map__Sequence * array)
{
  if (array) {
    fiducial_vlam_msgs__msg__Map__Sequence__fini(array);
  }
  free(array);
}
