// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from tello_msgs:srv/TelloAction.idl
// generated code does not contain a copyright notice
#include "tello_msgs/srv/detail/tello_action__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// Include directives for member types
// Member `cmd`
#include "rosidl_runtime_c/string_functions.h"

bool
tello_msgs__srv__TelloAction_Request__init(tello_msgs__srv__TelloAction_Request * msg)
{
  if (!msg) {
    return false;
  }
  // cmd
  if (!rosidl_runtime_c__String__init(&msg->cmd)) {
    tello_msgs__srv__TelloAction_Request__fini(msg);
    return false;
  }
  return true;
}

void
tello_msgs__srv__TelloAction_Request__fini(tello_msgs__srv__TelloAction_Request * msg)
{
  if (!msg) {
    return;
  }
  // cmd
  rosidl_runtime_c__String__fini(&msg->cmd);
}

tello_msgs__srv__TelloAction_Request *
tello_msgs__srv__TelloAction_Request__create()
{
  tello_msgs__srv__TelloAction_Request * msg = (tello_msgs__srv__TelloAction_Request *)malloc(sizeof(tello_msgs__srv__TelloAction_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(tello_msgs__srv__TelloAction_Request));
  bool success = tello_msgs__srv__TelloAction_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
tello_msgs__srv__TelloAction_Request__destroy(tello_msgs__srv__TelloAction_Request * msg)
{
  if (msg) {
    tello_msgs__srv__TelloAction_Request__fini(msg);
  }
  free(msg);
}


bool
tello_msgs__srv__TelloAction_Request__Sequence__init(tello_msgs__srv__TelloAction_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  tello_msgs__srv__TelloAction_Request * data = NULL;
  if (size) {
    data = (tello_msgs__srv__TelloAction_Request *)calloc(size, sizeof(tello_msgs__srv__TelloAction_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = tello_msgs__srv__TelloAction_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        tello_msgs__srv__TelloAction_Request__fini(&data[i - 1]);
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
tello_msgs__srv__TelloAction_Request__Sequence__fini(tello_msgs__srv__TelloAction_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      tello_msgs__srv__TelloAction_Request__fini(&array->data[i]);
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

tello_msgs__srv__TelloAction_Request__Sequence *
tello_msgs__srv__TelloAction_Request__Sequence__create(size_t size)
{
  tello_msgs__srv__TelloAction_Request__Sequence * array = (tello_msgs__srv__TelloAction_Request__Sequence *)malloc(sizeof(tello_msgs__srv__TelloAction_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = tello_msgs__srv__TelloAction_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
tello_msgs__srv__TelloAction_Request__Sequence__destroy(tello_msgs__srv__TelloAction_Request__Sequence * array)
{
  if (array) {
    tello_msgs__srv__TelloAction_Request__Sequence__fini(array);
  }
  free(array);
}


bool
tello_msgs__srv__TelloAction_Response__init(tello_msgs__srv__TelloAction_Response * msg)
{
  if (!msg) {
    return false;
  }
  // rc
  return true;
}

void
tello_msgs__srv__TelloAction_Response__fini(tello_msgs__srv__TelloAction_Response * msg)
{
  if (!msg) {
    return;
  }
  // rc
}

tello_msgs__srv__TelloAction_Response *
tello_msgs__srv__TelloAction_Response__create()
{
  tello_msgs__srv__TelloAction_Response * msg = (tello_msgs__srv__TelloAction_Response *)malloc(sizeof(tello_msgs__srv__TelloAction_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(tello_msgs__srv__TelloAction_Response));
  bool success = tello_msgs__srv__TelloAction_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
tello_msgs__srv__TelloAction_Response__destroy(tello_msgs__srv__TelloAction_Response * msg)
{
  if (msg) {
    tello_msgs__srv__TelloAction_Response__fini(msg);
  }
  free(msg);
}


bool
tello_msgs__srv__TelloAction_Response__Sequence__init(tello_msgs__srv__TelloAction_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  tello_msgs__srv__TelloAction_Response * data = NULL;
  if (size) {
    data = (tello_msgs__srv__TelloAction_Response *)calloc(size, sizeof(tello_msgs__srv__TelloAction_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = tello_msgs__srv__TelloAction_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        tello_msgs__srv__TelloAction_Response__fini(&data[i - 1]);
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
tello_msgs__srv__TelloAction_Response__Sequence__fini(tello_msgs__srv__TelloAction_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      tello_msgs__srv__TelloAction_Response__fini(&array->data[i]);
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

tello_msgs__srv__TelloAction_Response__Sequence *
tello_msgs__srv__TelloAction_Response__Sequence__create(size_t size)
{
  tello_msgs__srv__TelloAction_Response__Sequence * array = (tello_msgs__srv__TelloAction_Response__Sequence *)malloc(sizeof(tello_msgs__srv__TelloAction_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = tello_msgs__srv__TelloAction_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
tello_msgs__srv__TelloAction_Response__Sequence__destroy(tello_msgs__srv__TelloAction_Response__Sequence * array)
{
  if (array) {
    tello_msgs__srv__TelloAction_Response__Sequence__fini(array);
  }
  free(array);
}
