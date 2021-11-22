// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from tello_msgs:msg/TelloResponse.idl
// generated code does not contain a copyright notice
#include "tello_msgs/msg/detail/tello_response__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `str`
#include "rosidl_runtime_c/string_functions.h"

bool
tello_msgs__msg__TelloResponse__init(tello_msgs__msg__TelloResponse * msg)
{
  if (!msg) {
    return false;
  }
  // rc
  // str
  if (!rosidl_runtime_c__String__init(&msg->str)) {
    tello_msgs__msg__TelloResponse__fini(msg);
    return false;
  }
  return true;
}

void
tello_msgs__msg__TelloResponse__fini(tello_msgs__msg__TelloResponse * msg)
{
  if (!msg) {
    return;
  }
  // rc
  // str
  rosidl_runtime_c__String__fini(&msg->str);
}

tello_msgs__msg__TelloResponse *
tello_msgs__msg__TelloResponse__create()
{
  tello_msgs__msg__TelloResponse * msg = (tello_msgs__msg__TelloResponse *)malloc(sizeof(tello_msgs__msg__TelloResponse));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(tello_msgs__msg__TelloResponse));
  bool success = tello_msgs__msg__TelloResponse__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
tello_msgs__msg__TelloResponse__destroy(tello_msgs__msg__TelloResponse * msg)
{
  if (msg) {
    tello_msgs__msg__TelloResponse__fini(msg);
  }
  free(msg);
}


bool
tello_msgs__msg__TelloResponse__Sequence__init(tello_msgs__msg__TelloResponse__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  tello_msgs__msg__TelloResponse * data = NULL;
  if (size) {
    data = (tello_msgs__msg__TelloResponse *)calloc(size, sizeof(tello_msgs__msg__TelloResponse));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = tello_msgs__msg__TelloResponse__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        tello_msgs__msg__TelloResponse__fini(&data[i - 1]);
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
tello_msgs__msg__TelloResponse__Sequence__fini(tello_msgs__msg__TelloResponse__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      tello_msgs__msg__TelloResponse__fini(&array->data[i]);
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

tello_msgs__msg__TelloResponse__Sequence *
tello_msgs__msg__TelloResponse__Sequence__create(size_t size)
{
  tello_msgs__msg__TelloResponse__Sequence * array = (tello_msgs__msg__TelloResponse__Sequence *)malloc(sizeof(tello_msgs__msg__TelloResponse__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = tello_msgs__msg__TelloResponse__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
tello_msgs__msg__TelloResponse__Sequence__destroy(tello_msgs__msg__TelloResponse__Sequence * array)
{
  if (array) {
    tello_msgs__msg__TelloResponse__Sequence__fini(array);
  }
  free(array);
}
