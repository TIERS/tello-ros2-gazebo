// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from fiducial_vlam_msgs:msg/Observation.idl
// generated code does not contain a copyright notice
#include "fiducial_vlam_msgs/msg/detail/observation__rosidl_typesupport_fastrtps_cpp.hpp"
#include "fiducial_vlam_msgs/msg/detail/observation__struct.hpp"

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

namespace fiducial_vlam_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_fiducial_vlam_msgs
cdr_serialize(
  const fiducial_vlam_msgs::msg::Observation & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: id
  cdr << ros_message.id;
  // Member: x0
  cdr << ros_message.x0;
  // Member: y0
  cdr << ros_message.y0;
  // Member: x1
  cdr << ros_message.x1;
  // Member: y1
  cdr << ros_message.y1;
  // Member: x2
  cdr << ros_message.x2;
  // Member: y2
  cdr << ros_message.y2;
  // Member: x3
  cdr << ros_message.x3;
  // Member: y3
  cdr << ros_message.y3;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_fiducial_vlam_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  fiducial_vlam_msgs::msg::Observation & ros_message)
{
  // Member: id
  cdr >> ros_message.id;

  // Member: x0
  cdr >> ros_message.x0;

  // Member: y0
  cdr >> ros_message.y0;

  // Member: x1
  cdr >> ros_message.x1;

  // Member: y1
  cdr >> ros_message.y1;

  // Member: x2
  cdr >> ros_message.x2;

  // Member: y2
  cdr >> ros_message.y2;

  // Member: x3
  cdr >> ros_message.x3;

  // Member: y3
  cdr >> ros_message.y3;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_fiducial_vlam_msgs
get_serialized_size(
  const fiducial_vlam_msgs::msg::Observation & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: id
  {
    size_t item_size = sizeof(ros_message.id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: x0
  {
    size_t item_size = sizeof(ros_message.x0);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: y0
  {
    size_t item_size = sizeof(ros_message.y0);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: x1
  {
    size_t item_size = sizeof(ros_message.x1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: y1
  {
    size_t item_size = sizeof(ros_message.y1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: x2
  {
    size_t item_size = sizeof(ros_message.x2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: y2
  {
    size_t item_size = sizeof(ros_message.y2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: x3
  {
    size_t item_size = sizeof(ros_message.x3);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: y3
  {
    size_t item_size = sizeof(ros_message.y3);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_fiducial_vlam_msgs
max_serialized_size_Observation(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: id
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: x0
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: y0
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: x1
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: y1
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: x2
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: y2
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: x3
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: y3
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  return current_alignment - initial_alignment;
}

static bool _Observation__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const fiducial_vlam_msgs::msg::Observation *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _Observation__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<fiducial_vlam_msgs::msg::Observation *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _Observation__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const fiducial_vlam_msgs::msg::Observation *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _Observation__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_Observation(full_bounded, 0);
}

static message_type_support_callbacks_t _Observation__callbacks = {
  "fiducial_vlam_msgs::msg",
  "Observation",
  _Observation__cdr_serialize,
  _Observation__cdr_deserialize,
  _Observation__get_serialized_size,
  _Observation__max_serialized_size
};

static rosidl_message_type_support_t _Observation__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_Observation__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace fiducial_vlam_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_fiducial_vlam_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<fiducial_vlam_msgs::msg::Observation>()
{
  return &fiducial_vlam_msgs::msg::typesupport_fastrtps_cpp::_Observation__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, fiducial_vlam_msgs, msg, Observation)() {
  return &fiducial_vlam_msgs::msg::typesupport_fastrtps_cpp::_Observation__handle;
}

#ifdef __cplusplus
}
#endif
