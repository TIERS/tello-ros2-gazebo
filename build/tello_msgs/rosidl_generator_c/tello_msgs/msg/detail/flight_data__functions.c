// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from tello_msgs:msg/FlightData.idl
// generated code does not contain a copyright notice
#include "tello_msgs/msg/detail/flight_data__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `raw`
#include "rosidl_runtime_c/string_functions.h"

bool
tello_msgs__msg__FlightData__init(tello_msgs__msg__FlightData * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    tello_msgs__msg__FlightData__fini(msg);
    return false;
  }
  // raw
  if (!rosidl_runtime_c__String__init(&msg->raw)) {
    tello_msgs__msg__FlightData__fini(msg);
    return false;
  }
  // sdk
  // pitch
  // roll
  // yaw
  // vgx
  // vgy
  // vgz
  // templ
  // temph
  // tof
  // h
  // bat
  // baro
  // time
  // agx
  // agy
  // agz
  // mid
  // x
  // y
  // z
  return true;
}

void
tello_msgs__msg__FlightData__fini(tello_msgs__msg__FlightData * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // raw
  rosidl_runtime_c__String__fini(&msg->raw);
  // sdk
  // pitch
  // roll
  // yaw
  // vgx
  // vgy
  // vgz
  // templ
  // temph
  // tof
  // h
  // bat
  // baro
  // time
  // agx
  // agy
  // agz
  // mid
  // x
  // y
  // z
}

tello_msgs__msg__FlightData *
tello_msgs__msg__FlightData__create()
{
  tello_msgs__msg__FlightData * msg = (tello_msgs__msg__FlightData *)malloc(sizeof(tello_msgs__msg__FlightData));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(tello_msgs__msg__FlightData));
  bool success = tello_msgs__msg__FlightData__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
tello_msgs__msg__FlightData__destroy(tello_msgs__msg__FlightData * msg)
{
  if (msg) {
    tello_msgs__msg__FlightData__fini(msg);
  }
  free(msg);
}


bool
tello_msgs__msg__FlightData__Sequence__init(tello_msgs__msg__FlightData__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  tello_msgs__msg__FlightData * data = NULL;
  if (size) {
    data = (tello_msgs__msg__FlightData *)calloc(size, sizeof(tello_msgs__msg__FlightData));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = tello_msgs__msg__FlightData__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        tello_msgs__msg__FlightData__fini(&data[i - 1]);
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
tello_msgs__msg__FlightData__Sequence__fini(tello_msgs__msg__FlightData__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      tello_msgs__msg__FlightData__fini(&array->data[i]);
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

tello_msgs__msg__FlightData__Sequence *
tello_msgs__msg__FlightData__Sequence__create(size_t size)
{
  tello_msgs__msg__FlightData__Sequence * array = (tello_msgs__msg__FlightData__Sequence *)malloc(sizeof(tello_msgs__msg__FlightData__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = tello_msgs__msg__FlightData__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
tello_msgs__msg__FlightData__Sequence__destroy(tello_msgs__msg__FlightData__Sequence * array)
{
  if (array) {
    tello_msgs__msg__FlightData__Sequence__fini(array);
  }
  free(array);
}
