// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from tello_msgs:srv/TelloAction.idl
// generated code does not contain a copyright notice
#include "tello_msgs/srv/detail/tello_action__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "tello_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "tello_msgs/srv/detail/tello_action__struct.h"
#include "tello_msgs/srv/detail/tello_action__functions.h"
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

#include "rosidl_runtime_c/string.h"  // cmd
#include "rosidl_runtime_c/string_functions.h"  // cmd

// forward declare type support functions


using _TelloAction_Request__ros_msg_type = tello_msgs__srv__TelloAction_Request;

static bool _TelloAction_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _TelloAction_Request__ros_msg_type * ros_message = static_cast<const _TelloAction_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: cmd
  {
    const rosidl_runtime_c__String * str = &ros_message->cmd;
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

static bool _TelloAction_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _TelloAction_Request__ros_msg_type * ros_message = static_cast<_TelloAction_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: cmd
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->cmd.data) {
      rosidl_runtime_c__String__init(&ros_message->cmd);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->cmd,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'cmd'\n");
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_tello_msgs
size_t get_serialized_size_tello_msgs__srv__TelloAction_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _TelloAction_Request__ros_msg_type * ros_message = static_cast<const _TelloAction_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name cmd
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->cmd.size + 1);

  return current_alignment - initial_alignment;
}

static uint32_t _TelloAction_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_tello_msgs__srv__TelloAction_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_tello_msgs
size_t max_serialized_size_tello_msgs__srv__TelloAction_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: cmd
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

static size_t _TelloAction_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_tello_msgs__srv__TelloAction_Request(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_TelloAction_Request = {
  "tello_msgs::srv",
  "TelloAction_Request",
  _TelloAction_Request__cdr_serialize,
  _TelloAction_Request__cdr_deserialize,
  _TelloAction_Request__get_serialized_size,
  _TelloAction_Request__max_serialized_size
};

static rosidl_message_type_support_t _TelloAction_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_TelloAction_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, tello_msgs, srv, TelloAction_Request)() {
  return &_TelloAction_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "tello_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "tello_msgs/srv/detail/tello_action__struct.h"
// already included above
// #include "tello_msgs/srv/detail/tello_action__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

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


using _TelloAction_Response__ros_msg_type = tello_msgs__srv__TelloAction_Response;

static bool _TelloAction_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _TelloAction_Response__ros_msg_type * ros_message = static_cast<const _TelloAction_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: rc
  {
    cdr << ros_message->rc;
  }

  return true;
}

static bool _TelloAction_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _TelloAction_Response__ros_msg_type * ros_message = static_cast<_TelloAction_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: rc
  {
    cdr >> ros_message->rc;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_tello_msgs
size_t get_serialized_size_tello_msgs__srv__TelloAction_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _TelloAction_Response__ros_msg_type * ros_message = static_cast<const _TelloAction_Response__ros_msg_type *>(untyped_ros_message);
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

  return current_alignment - initial_alignment;
}

static uint32_t _TelloAction_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_tello_msgs__srv__TelloAction_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_tello_msgs
size_t max_serialized_size_tello_msgs__srv__TelloAction_Response(
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

  return current_alignment - initial_alignment;
}

static size_t _TelloAction_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_tello_msgs__srv__TelloAction_Response(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_TelloAction_Response = {
  "tello_msgs::srv",
  "TelloAction_Response",
  _TelloAction_Response__cdr_serialize,
  _TelloAction_Response__cdr_deserialize,
  _TelloAction_Response__get_serialized_size,
  _TelloAction_Response__max_serialized_size
};

static rosidl_message_type_support_t _TelloAction_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_TelloAction_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, tello_msgs, srv, TelloAction_Response)() {
  return &_TelloAction_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "tello_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "tello_msgs/srv/tello_action.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t TelloAction__callbacks = {
  "tello_msgs::srv",
  "TelloAction",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, tello_msgs, srv, TelloAction_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, tello_msgs, srv, TelloAction_Response)(),
};

static rosidl_service_type_support_t TelloAction__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &TelloAction__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, tello_msgs, srv, TelloAction)() {
  return &TelloAction__handle;
}

#if defined(__cplusplus)
}
#endif
