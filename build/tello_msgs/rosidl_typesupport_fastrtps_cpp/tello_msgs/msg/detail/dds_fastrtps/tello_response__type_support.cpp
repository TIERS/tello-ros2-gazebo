// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from tello_msgs:msg/TelloResponse.idl
// generated code does not contain a copyright notice
#include "tello_msgs/msg/detail/tello_response__rosidl_typesupport_fastrtps_cpp.hpp"
#include "tello_msgs/msg/detail/tello_response__struct.hpp"

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

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tello_msgs
cdr_serialize(
  const tello_msgs::msg::TelloResponse & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: rc
  cdr << ros_message.rc;
  // Member: str
  cdr << ros_message.str;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tello_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  tello_msgs::msg::TelloResponse & ros_message)
{
  // Member: rc
  cdr >> ros_message.rc;

  // Member: str
  cdr >> ros_message.str;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tello_msgs
get_serialized_size(
  const tello_msgs::msg::TelloResponse & ros_message,
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
  // Member: str
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.str.size() + 1);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tello_msgs
max_serialized_size_TelloResponse(
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

  // Member: str
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

static bool _TelloResponse__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const tello_msgs::msg::TelloResponse *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _TelloResponse__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<tello_msgs::msg::TelloResponse *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _TelloResponse__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const tello_msgs::msg::TelloResponse *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _TelloResponse__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_TelloResponse(full_bounded, 0);
}

static message_type_support_callbacks_t _TelloResponse__callbacks = {
  "tello_msgs::msg",
  "TelloResponse",
  _TelloResponse__cdr_serialize,
  _TelloResponse__cdr_deserialize,
  _TelloResponse__get_serialized_size,
  _TelloResponse__max_serialized_size
};

static rosidl_message_type_support_t _TelloResponse__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_TelloResponse__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace tello_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_tello_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<tello_msgs::msg::TelloResponse>()
{
  return &tello_msgs::msg::typesupport_fastrtps_cpp::_TelloResponse__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, tello_msgs, msg, TelloResponse)() {
  return &tello_msgs::msg::typesupport_fastrtps_cpp::_TelloResponse__handle;
}

#ifdef __cplusplus
}
#endif
