// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from tello_msgs:srv/TelloAction.idl
// generated code does not contain a copyright notice
#include "tello_msgs/srv/detail/tello_action__rosidl_typesupport_fastrtps_cpp.hpp"
#include "tello_msgs/srv/detail/tello_action__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace tello_msgs
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tello_msgs
cdr_serialize(
  const tello_msgs::srv::TelloAction_Request & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: cmd
  cdr << ros_message.cmd;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tello_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  tello_msgs::srv::TelloAction_Request & ros_message)
{
  // Member: cmd
  cdr >> ros_message.cmd;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tello_msgs
get_serialized_size(
  const tello_msgs::srv::TelloAction_Request & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: cmd
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.cmd.size() + 1);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tello_msgs
max_serialized_size_TelloAction_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: cmd
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

static bool _TelloAction_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const tello_msgs::srv::TelloAction_Request *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _TelloAction_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<tello_msgs::srv::TelloAction_Request *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _TelloAction_Request__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const tello_msgs::srv::TelloAction_Request *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _TelloAction_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_TelloAction_Request(full_bounded, 0);
}

static message_type_support_callbacks_t _TelloAction_Request__callbacks = {
  "tello_msgs::srv",
  "TelloAction_Request",
  _TelloAction_Request__cdr_serialize,
  _TelloAction_Request__cdr_deserialize,
  _TelloAction_Request__get_serialized_size,
  _TelloAction_Request__max_serialized_size
};

static rosidl_message_type_support_t _TelloAction_Request__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_TelloAction_Request__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace tello_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_tello_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<tello_msgs::srv::TelloAction_Request>()
{
  return &tello_msgs::srv::typesupport_fastrtps_cpp::_TelloAction_Request__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, tello_msgs, srv, TelloAction_Request)() {
  return &tello_msgs::srv::typesupport_fastrtps_cpp::_TelloAction_Request__handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include <limits>
// already included above
// #include <stdexcept>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
// already included above
// #include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace tello_msgs
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tello_msgs
cdr_serialize(
  const tello_msgs::srv::TelloAction_Response & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: rc
  cdr << ros_message.rc;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tello_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  tello_msgs::srv::TelloAction_Response & ros_message)
{
  // Member: rc
  cdr >> ros_message.rc;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tello_msgs
get_serialized_size(
  const tello_msgs::srv::TelloAction_Response & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: rc
  {
    size_t item_size = sizeof(ros_message.rc);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tello_msgs
max_serialized_size_TelloAction_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: rc
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static bool _TelloAction_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const tello_msgs::srv::TelloAction_Response *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _TelloAction_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<tello_msgs::srv::TelloAction_Response *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _TelloAction_Response__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const tello_msgs::srv::TelloAction_Response *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _TelloAction_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_TelloAction_Response(full_bounded, 0);
}

static message_type_support_callbacks_t _TelloAction_Response__callbacks = {
  "tello_msgs::srv",
  "TelloAction_Response",
  _TelloAction_Response__cdr_serialize,
  _TelloAction_Response__cdr_deserialize,
  _TelloAction_Response__get_serialized_size,
  _TelloAction_Response__max_serialized_size
};

static rosidl_message_type_support_t _TelloAction_Response__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_TelloAction_Response__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace tello_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_tello_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<tello_msgs::srv::TelloAction_Response>()
{
  return &tello_msgs::srv::typesupport_fastrtps_cpp::_TelloAction_Response__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, tello_msgs, srv, TelloAction_Response)() {
  return &tello_msgs::srv::typesupport_fastrtps_cpp::_TelloAction_Response__handle;
}

#ifdef __cplusplus
}
#endif

#include "rmw/error_handling.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support_decl.hpp"

namespace tello_msgs
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

static service_type_support_callbacks_t _TelloAction__callbacks = {
  "tello_msgs::srv",
  "TelloAction",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, tello_msgs, srv, TelloAction_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, tello_msgs, srv, TelloAction_Response)(),
};

static rosidl_service_type_support_t _TelloAction__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_TelloAction__callbacks,
  get_service_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace tello_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_tello_msgs
const rosidl_service_type_support_t *
get_service_type_support_handle<tello_msgs::srv::TelloAction>()
{
  return &tello_msgs::srv::typesupport_fastrtps_cpp::_TelloAction__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, tello_msgs, srv, TelloAction)() {
  return &tello_msgs::srv::typesupport_fastrtps_cpp::_TelloAction__handle;
}

#ifdef __cplusplus
}
#endif
