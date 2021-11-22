// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from fiducial_vlam_msgs:msg/Observations.idl
// generated code does not contain a copyright notice
#include "fiducial_vlam_msgs/msg/detail/observations__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `camera_info`
#include "sensor_msgs/msg/detail/camera_info__functions.h"
// Member `observations`
#include "fiducial_vlam_msgs/msg/detail/observation__functions.h"

bool
fiducial_vlam_msgs__msg__Observations__init(fiducial_vlam_msgs__msg__Observations * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    fiducial_vlam_msgs__msg__Observations__fini(msg);
    return false;
  }
  // camera_info
  if (!sensor_msgs__msg__CameraInfo__init(&msg->camera_info)) {
    fiducial_vlam_msgs__msg__Observations__fini(msg);
    return false;
  }
  // observations
  if (!fiducial_vlam_msgs__msg__Observation__Sequence__init(&msg->observations, 0)) {
    fiducial_vlam_msgs__msg__Observations__fini(msg);
    return false;
  }
  return true;
}

void
fiducial_vlam_msgs__msg__Observations__fini(fiducial_vlam_msgs__msg__Observations * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // camera_info
  sensor_msgs__msg__CameraInfo__fini(&msg->camera_info);
  // observations
  fiducial_vlam_msgs__msg__Observation__Sequence__fini(&msg->observations);
}

fiducial_vlam_msgs__msg__Observations *
fiducial_vlam_msgs__msg__Observations__create()
{
  fiducial_vlam_msgs__msg__Observations * msg = (fiducial_vlam_msgs__msg__Observations *)malloc(sizeof(fiducial_vlam_msgs__msg__Observations));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(fiducial_vlam_msgs__msg__Observations));
  bool success = fiducial_vlam_msgs__msg__Observations__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
fiducial_vlam_msgs__msg__Observations__destroy(fiducial_vlam_msgs__msg__Observations * msg)
{
  if (msg) {
    fiducial_vlam_msgs__msg__Observations__fini(msg);
  }
  free(msg);
}


bool
fiducial_vlam_msgs__msg__Observations__Sequence__init(fiducial_vlam_msgs__msg__Observations__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  fiducial_vlam_msgs__msg__Observations * data = NULL;
  if (size) {
    data = (fiducial_vlam_msgs__msg__Observations *)calloc(size, sizeof(fiducial_vlam_msgs__msg__Observations));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = fiducial_vlam_msgs__msg__Observations__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        fiducial_vlam_msgs__msg__Observations__fini(&data[i - 1]);
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
fiducial_vlam_msgs__msg__Observations__Sequence__fini(fiducial_vlam_msgs__msg__Observations__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      fiducial_vlam_msgs__msg__Observations__fini(&array->data[i]);
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

fiducial_vlam_msgs__msg__Observations__Sequence *
fiducial_vlam_msgs__msg__Observations__Sequence__create(size_t size)
{
  fiducial_vlam_msgs__msg__Observations__Sequence * array = (fiducial_vlam_msgs__msg__Observations__Sequence *)malloc(sizeof(fiducial_vlam_msgs__msg__Observations__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = fiducial_vlam_msgs__msg__Observations__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
fiducial_vlam_msgs__msg__Observations__Sequence__destroy(fiducial_vlam_msgs__msg__Observations__Sequence * array)
{
  if (array) {
    fiducial_vlam_msgs__msg__Observations__Sequence__fini(array);
  }
  free(array);
}
