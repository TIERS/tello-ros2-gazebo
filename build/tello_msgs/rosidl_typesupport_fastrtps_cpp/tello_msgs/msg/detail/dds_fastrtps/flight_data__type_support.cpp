// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from tello_msgs:msg/FlightData.idl
// generated code does not contain a copyright notice
#include "tello_msgs/msg/detail/flight_data__rosidl_typesupport_fastrtps_cpp.hpp"
#include "tello_msgs/msg/detail/flight_data__struct.hpp"

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


namespace tello_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tello_msgs
cdr_serialize(
  const tello_msgs::msg::FlightData & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.header,
    cdr);
  // Member: raw
  cdr << ros_message.raw;
  // Member: sdk
  cdr << ros_message.sdk;
  // Member: pitch
  cdr << ros_message.pitch;
  // Member: roll
  cdr << ros_message.roll;
  // Member: yaw
  cdr << ros_message.yaw;
  // Member: vgx
  cdr << ros_message.vgx;
  // Member: vgy
  cdr << ros_message.vgy;
  // Member: vgz
  cdr << ros_message.vgz;
  // Member: templ
  cdr << ros_message.templ;
  // Member: temph
  cdr << ros_message.temph;
  // Member: tof
  cdr << ros_message.tof;
  // Member: h
  cdr << ros_message.h;
  // Member: bat
  cdr << ros_message.bat;
  // Member: baro
  cdr << ros_message.baro;
  // Member: time
  cdr << ros_message.time;
  // Member: agx
  cdr << ros_message.agx;
  // Member: agy
  cdr << ros_message.agy;
  // Member: agz
  cdr << ros_message.agz;
  // Member: mid
  cdr << ros_message.mid;
  // Member: x
  cdr << ros_message.x;
  // Member: y
  cdr << ros_message.y;
  // Member: z
  cdr << ros_message.z;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tello_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  tello_msgs::msg::FlightData & ros_message)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.header);

  // Member: raw
  cdr >> ros_message.raw;

  // Member: sdk
  cdr >> ros_message.sdk;

  // Member: pitch
  cdr >> ros_message.pitch;

  // Member: roll
  cdr >> ros_message.roll;

  // Member: yaw
  cdr >> ros_message.yaw;

  // Member: vgx
  cdr >> ros_message.vgx;

  // Member: vgy
  cdr >> ros_message.vgy;

  // Member: vgz
  cdr >> ros_message.vgz;

  // Member: templ
  cdr >> ros_message.templ;

  // Member: temph
  cdr >> ros_message.temph;

  // Member: tof
  cdr >> ros_message.tof;

  // Member: h
  cdr >> ros_message.h;

  // Member: bat
  cdr >> ros_message.bat;

  // Member: baro
  cdr >> ros_message.baro;

  // Member: time
  cdr >> ros_message.time;

  // Member: agx
  cdr >> ros_message.agx;

  // Member: agy
  cdr >> ros_message.agy;

  // Member: agz
  cdr >> ros_message.agz;

  // Member: mid
  cdr >> ros_message.mid;

  // Member: x
  cdr >> ros_message.x;

  // Member: y
  cdr >> ros_message.y;

  // Member: z
  cdr >> ros_message.z;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tello_msgs
get_serialized_size(
  const tello_msgs::msg::FlightData & ros_message,
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
  // Member: raw
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.raw.size() + 1);
  // Member: sdk
  {
    size_t item_size = sizeof(ros_message.sdk);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: pitch
  {
    size_t item_size = sizeof(ros_message.pitch);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: roll
  {
    size_t item_size = sizeof(ros_message.roll);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: yaw
  {
    size_t item_size = sizeof(ros_message.yaw);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: vgx
  {
    size_t item_size = sizeof(ros_message.vgx);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: vgy
  {
    size_t item_size = sizeof(ros_message.vgy);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: vgz
  {
    size_t item_size = sizeof(ros_message.vgz);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: templ
  {
    size_t item_size = sizeof(ros_message.templ);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: temph
  {
    size_t item_size = sizeof(ros_message.temph);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: tof
  {
    size_t item_size = sizeof(ros_message.tof);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: h
  {
    size_t item_size = sizeof(ros_message.h);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: bat
  {
    size_t item_size = sizeof(ros_message.bat);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: baro
  {
    size_t item_size = sizeof(ros_message.baro);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: time
  {
    size_t item_size = sizeof(ros_message.time);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: agx
  {
    size_t item_size = sizeof(ros_message.agx);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: agy
  {
    size_t item_size = sizeof(ros_message.agy);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: agz
  {
    size_t item_size = sizeof(ros_message.agz);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: mid
  {
    size_t item_size = sizeof(ros_message.mid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: x
  {
    size_t item_size = sizeof(ros_message.x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: y
  {
    size_t item_size = sizeof(ros_message.y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: z
  {
    size_t item_size = sizeof(ros_message.z);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tello_msgs
max_serialized_size_FlightData(
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

  // Member: raw
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: sdk
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: pitch
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: roll
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: yaw
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: vgx
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: vgy
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: vgz
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: templ
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: temph
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: tof
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: h
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: bat
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: baro
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: time
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: agx
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: agy
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: agz
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: mid
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: x
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: y
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: z
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static bool _FlightData__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const tello_msgs::msg::FlightData *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _FlightData__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<tello_msgs::msg::FlightData *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _FlightData__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const tello_msgs::msg::FlightData *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _FlightData__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_FlightData(full_bounded, 0);
}

static message_type_support_callbacks_t _FlightData__callbacks = {
  "tello_msgs::msg",
  "FlightData",
  _FlightData__cdr_serialize,
  _FlightData__cdr_deserialize,
  _FlightData__get_serialized_size,
  _FlightData__max_serialized_size
};

static rosidl_message_type_support_t _FlightData__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_FlightData__callbacks,
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
get_message_type_support_handle<tello_msgs::msg::FlightData>()
{
  return &tello_msgs::msg::typesupport_fastrtps_cpp::_FlightData__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, tello_msgs, msg, FlightData)() {
  return &tello_msgs::msg::typesupport_fastrtps_cpp::_FlightData__handle;
}

#ifdef __cplusplus
}
#endif
