// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from fiducial_vlam_msgs:msg/Observation.idl
// generated code does not contain a copyright notice
#include "fiducial_vlam_msgs/msg/detail/observation__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "fiducial_vlam_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "fiducial_vlam_msgs/msg/detail/observation__struct.h"
#include "fiducial_vlam_msgs/msg/detail/observation__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _Observation__ros_msg_type = fiducial_vlam_msgs__msg__Observation;

static bool _Observation__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Observation__ros_msg_type * ros_message = static_cast<const _Observation__ros_msg_type *>(untyped_ros_message);
  // Field name: id
  {
    cdr << ros_message->id;
  }

  // Field name: x0
  {
    cdr << ros_message->x0;
  }

  // Field name: y0
  {
    cdr << ros_message->y0;
  }

  // Field name: x1
  {
    cdr << ros_message->x1;
  }

  // Field name: y1
  {
    cdr << ros_message->y1;
  }

  // Field name: x2
  {
    cdr << ros_message->x2;
  }

  // Field name: y2
  {
    cdr << ros_message->y2;
  }

  // Field name: x3
  {
    cdr << ros_message->x3;
  }

  // Field name: y3
  {
    cdr << ros_message->y3;
  }

  return true;
}

static bool _Observation__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Observation__ros_msg_type * ros_message = static_cast<_Observation__ros_msg_type *>(untyped_ros_message);
  // Field name: id
  {
    cdr >> ros_message->id;
  }

  // Field name: x0
  {
    cdr >> ros_message->x0;
  }

  // Field name: y0
  {
    cdr >> ros_message->y0;
  }

  // Field name: x1
  {
    cdr >> ros_message->x1;
  }

  // Field name: y1
  {
    cdr >> ros_message->y1;
  }

  // Field name: x2
  {
    cdr >> ros_message->x2;
  }

  // Field name: y2
  {
    cdr >> ros_message->y2;
  }

  // Field name: x3
  {
    cdr >> ros_message->x3;
  }

  // Field name: y3
  {
    cdr >> ros_message->y3;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_fiducial_vlam_msgs
size_t get_serialized_size_fiducial_vlam_msgs__msg__Observation(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Observation__ros_msg_type * ros_message = static_cast<const _Observation__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name id
  {
    size_t item_size = sizeof(ros_message->id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name x0
  {
    size_t item_size = sizeof(ros_message->x0);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name y0
  {
    size_t item_size = sizeof(ros_message->y0);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name x1
  {
    size_t item_size = sizeof(ros_message->x1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name y1
  {
    size_t item_size = sizeof(ros_message->y1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name x2
  {
    size_t item_size = sizeof(ros_message->x2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name y2
  {
    size_t item_size = sizeof(ros_message->y2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name x3
  {
    size_t item_size = sizeof(ros_message->x3);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name y3
  {
    size_t item_size = sizeof(ros_message->y3);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _Observation__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_fiducial_vlam_msgs__msg__Observation(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_fiducial_vlam_msgs
size_t max_serialized_size_fiducial_vlam_msgs__msg__Observation(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: id
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: x0
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: y0
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: x1
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: y1
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: x2
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: y2
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: x3
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: y3
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _Observation__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_fiducial_vlam_msgs__msg__Observation(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_Observation = {
  "fiducial_vlam_msgs::msg",
  "Observation",
  _Observation__cdr_serialize,
  _Observation__cdr_deserialize,
  _Observation__get_serialized_size,
  _Observation__max_serialized_size
};

static rosidl_message_type_support_t _Observation__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Observation,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, fiducial_vlam_msgs, msg, Observation)() {
  return &_Observation__type_support;
}

#if defined(__cplusplus)
}
#endif
