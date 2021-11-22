// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from fiducial_vlam_msgs:msg/Observation.idl
// generated code does not contain a copyright notice
#include "fiducial_vlam_msgs/msg/detail/observation__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


bool
fiducial_vlam_msgs__msg__Observation__init(fiducial_vlam_msgs__msg__Observation * msg)
{
  if (!msg) {
    return false;
  }
  // id
  // x0
  // y0
  // x1
  // y1
  // x2
  // y2
  // x3
  // y3
  return true;
}

void
fiducial_vlam_msgs__msg__Observation__fini(fiducial_vlam_msgs__msg__Observation * msg)
{
  if (!msg) {
    return;
  }
  // id
  // x0
  // y0
  // x1
  // y1
  // x2
  // y2
  // x3
  // y3
}

fiducial_vlam_msgs__msg__Observation *
fiducial_vlam_msgs__msg__Observation__create()
{
  fiducial_vlam_msgs__msg__Observation * msg = (fiducial_vlam_msgs__msg__Observation *)malloc(sizeof(fiducial_vlam_msgs__msg__Observation));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(fiducial_vlam_msgs__msg__Observation));
  bool success = fiducial_vlam_msgs__msg__Observation__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
fiducial_vlam_msgs__msg__Observation__destroy(fiducial_vlam_msgs__msg__Observation * msg)
{
  if (msg) {
    fiducial_vlam_msgs__msg__Observation__fini(msg);
  }
  free(msg);
}


bool
fiducial_vlam_msgs__msg__Observation__Sequence__init(fiducial_vlam_msgs__msg__Observation__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  fiducial_vlam_msgs__msg__Observation * data = NULL;
  if (size) {
    data = (fiducial_vlam_msgs__msg__Observation *)calloc(size, sizeof(fiducial_vlam_msgs__msg__Observation));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = fiducial_vlam_msgs__msg__Observation__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        fiducial_vlam_msgs__msg__Observation__fini(&data[i - 1]);
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
fiducial_vlam_msgs__msg__Observation__Sequence__fini(fiducial_vlam_msgs__msg__Observation__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      fiducial_vlam_msgs__msg__Observation__fini(&array->data[i]);
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

fiducial_vlam_msgs__msg__Observation__Sequence *
fiducial_vlam_msgs__msg__Observation__Sequence__create(size_t size)
{
  fiducial_vlam_msgs__msg__Observation__Sequence * array = (fiducial_vlam_msgs__msg__Observation__Sequence *)malloc(sizeof(fiducial_vlam_msgs__msg__Observation__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = fiducial_vlam_msgs__msg__Observation__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
fiducial_vlam_msgs__msg__Observation__Sequence__destroy(fiducial_vlam_msgs__msg__Observation__Sequence * array)
{
  if (array) {
    fiducial_vlam_msgs__msg__Observation__Sequence__fini(array);
  }
  free(array);
}
