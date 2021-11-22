// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from fiducial_vlam_msgs:msg/Observations.idl
// generated code does not contain a copyright notice
#include "fiducial_vlam_msgs/msg/detail/observations__rosidl_typesupport_fastrtps_cpp.hpp"
#include "fiducial_vlam_msgs/msg/detail/observations__struct.hpp"

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
namespace std_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const std_msgs::msg::Header &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  std_msgs::msg::Header &);
size_t get_serialized_size(
  const std_msgs::msg::Header &,
  size_t current_alignment);
size_t
max_serialized_size_Header(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace std_msgs

namespace sensor_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const sensor_msgs::msg::CameraInfo &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  sensor_msgs::msg::CameraInfo &);
size_t get_serialized_size(
  const sensor_msgs::msg::CameraInfo &,
  size_t current_alignment);
size_t
max_serialized_size_CameraInfo(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace sensor_msgs

namespace fiducial_vlam_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const fiducial_vlam_msgs::msg::Observation &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  fiducial_vlam_msgs::msg::Observation &);
size_t get_serialized_size(
  const fiducial_vlam_msgs::msg::Observation &,
  size_t current_alignment);
size_t
max_serialized_size_Observation(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace fiducial_vlam_msgs


namespace fiducial_vlam_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_fiducial_vlam_msgs
cdr_serialize(
  const fiducial_vlam_msgs::msg::Observations & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.header,
    cdr);
  // Member: camera_info
  sensor_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.camera_info,
    cdr);
  // Member: observations
  {
    size_t size = ros_message.observations.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      fiducial_vlam_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.observations[i],
        cdr);
    }
  }
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_fiducial_vlam_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  fiducial_vlam_msgs::msg::Observations & ros_message)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.header);

  // Member: camera_info
  sensor_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.camera_info);

  // Member: observations
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    ros_message.observations.resize(size);
    for (size_t i = 0; i < size; i++) {
      fiducial_vlam_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.observations[i]);
    }
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_fiducial_vlam_msgs
get_serialized_size(
  const fiducial_vlam_msgs::msg::Observations & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: header

  current_alignment +=
    std_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.header, current_alignment);
  // Member: camera_info

  current_alignment +=
    sensor_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.camera_info, current_alignment);
  // Member: observations
  {
    size_t array_size = ros_message.observations.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        fiducial_vlam_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.observations[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_fiducial_vlam_msgs
max_serialized_size_Observations(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: header
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        std_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Header(
        full_bounded, current_alignment);
    }
  }

  // Member: camera_info
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        sensor_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_CameraInfo(
        full_bounded, current_alignment);
    }
  }

  // Member: observations
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        fiducial_vlam_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Observation(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static bool _Observations__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const fiducial_vlam_msgs::msg::Observations *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _Observations__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<fiducial_vlam_msgs::msg::Observations *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _Observations__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const fiducial_vlam_msgs::msg::Observations *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _Observations__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_Observations(full_bounded, 0);
}

static message_type_support_callbacks_t _Observations__callbacks = {
  "fiducial_vlam_msgs::msg",
  "Observations",
  _Observations__cdr_serialize,
  _Observations__cdr_deserialize,
  _Observations__get_serialized_size,
  _Observations__max_serialized_size
};

static rosidl_message_type_support_t _Observations__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_Observations__callbacks,
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
get_message_type_support_handle<fiducial_vlam_msgs::msg::Observations>()
{
  return &fiducial_vlam_msgs::msg::typesupport_fastrtps_cpp::_Observations__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, fiducial_vlam_msgs, msg, Observations)() {
  return &fiducial_vlam_msgs::msg::typesupport_fastrtps_cpp::_Observations__handle;
}

#ifdef __cplusplus
}
#endif
