// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from tello_msgs:msg/TelloResponse.idl
// generated code does not contain a copyright notice
#include "tello_msgs/msg/detail/tello_response__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "tello_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "tello_msgs/msg/detail/tello_response__struct.h"
#include "tello_msgs/msg/detail/tello_response__functions.h"
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

#include "rosidl_runtime_c/string.h"  // str
#include "rosidl_runtime_c/string_functions.h"  // str

// forward declare type support functions


using _TelloResponse__ros_msg_type = tello_msgs__msg__TelloResponse;

static bool _TelloResponse__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _TelloResponse__ros_msg_type * ros_message = static_cast<const _TelloResponse__ros_msg_type *>(untyped_ros_message);
  // Field name: rc
  {
    cdr << ros_message->rc;
  }

  // Field name: str
  {
    const rosidl_runtime_c__String * str = &ros_message->str;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  return true;
}

static bool _TelloResponse__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _TelloResponse__ros_msg_type * ros_message = static_cast<_TelloResponse__ros_msg_type *>(untyped_ros_message);
  // Field name: rc
  {
    cdr >> ros_message->rc;
  }

  // Field name: str
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->str.data) {
      rosidl_runtime_c__String__init(&ros_message->str);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->str,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'str'\n");
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_tello_msgs
size_t get_serialized_size_tello_msgs__msg__TelloResponse(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _TelloResponse__ros_msg_type * ros_message = static_cast<const _TelloResponse__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name rc
  {
    size_t item_size = sizeof(ros_message->rc);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name str
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->str.size + 1);

  return current_alignment - initial_alignment;
}

static uint32_t _TelloResponse__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_tello_msgs__msg__TelloResponse(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_tello_msgs
size_t max_serialized_size_tello_msgs__msg__TelloResponse(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: rc
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: str
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _TelloResponse__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_tello_msgs__msg__TelloResponse(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_TelloResponse = {
  "tello_msgs::msg",
  "TelloResponse",
  _TelloResponse__cdr_serialize,
  _TelloResponse__cdr_deserialize,
  _TelloResponse__get_serialized_size,
  _TelloResponse__max_serialized_size
};

static rosidl_message_type_support_t _TelloResponse__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_TelloResponse,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, tello_msgs, msg, TelloResponse)() {
  return &_TelloResponse__type_support;
}

#if defined(__cplusplus)
}
#endif
