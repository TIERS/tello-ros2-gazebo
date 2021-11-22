// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from tello_msgs:msg/FlightData.idl
// generated code does not contain a copyright notice
#include "tello_msgs/msg/detail/flight_data__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "tello_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "tello_msgs/msg/detail/flight_data__struct.h"
#include "tello_msgs/msg/detail/flight_data__functions.h"
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

#include "rosidl_runtime_c/string.h"  // raw
#include "rosidl_runtime_c/string_functions.h"  // raw
#include "std_msgs/msg/detail/header__functions.h"  // header

// forward declare type support functions
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_tello_msgs
size_t get_serialized_size_std_msgs__msg__Header(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_tello_msgs
size_t max_serialized_size_std_msgs__msg__Header(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_tello_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, std_msgs, msg, Header)();


using _FlightData__ros_msg_type = tello_msgs__msg__FlightData;

static bool _FlightData__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _FlightData__ros_msg_type * ros_message = static_cast<const _FlightData__ros_msg_type *>(untyped_ros_message);
  // Field name: header
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Header
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->header, cdr))
    {
      return false;
    }
  }

  // Field name: raw
  {
    const rosidl_runtime_c__String * str = &ros_message->raw;
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

  // Field name: sdk
  {
    cdr << ros_message->sdk;
  }

  // Field name: pitch
  {
    cdr << ros_message->pitch;
  }

  // Field name: roll
  {
    cdr << ros_message->roll;
  }

  // Field name: yaw
  {
    cdr << ros_message->yaw;
  }

  // Field name: vgx
  {
    cdr << ros_message->vgx;
  }

  // Field name: vgy
  {
    cdr << ros_message->vgy;
  }

  // Field name: vgz
  {
    cdr << ros_message->vgz;
  }

  // Field name: templ
  {
    cdr << ros_message->templ;
  }

  // Field name: temph
  {
    cdr << ros_message->temph;
  }

  // Field name: tof
  {
    cdr << ros_message->tof;
  }

  // Field name: h
  {
    cdr << ros_message->h;
  }

  // Field name: bat
  {
    cdr << ros_message->bat;
  }

  // Field name: baro
  {
    cdr << ros_message->baro;
  }

  // Field name: time
  {
    cdr << ros_message->time;
  }

  // Field name: agx
  {
    cdr << ros_message->agx;
  }

  // Field name: agy
  {
    cdr << ros_message->agy;
  }

  // Field name: agz
  {
    cdr << ros_message->agz;
  }

  // Field name: mid
  {
    cdr << ros_message->mid;
  }

  // Field name: x
  {
    cdr << ros_message->x;
  }

  // Field name: y
  {
    cdr << ros_message->y;
  }

  // Field name: z
  {
    cdr << ros_message->z;
  }

  return true;
}

static bool _FlightData__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _FlightData__ros_msg_type * ros_message = static_cast<_FlightData__ros_msg_type *>(untyped_ros_message);
  // Field name: header
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Header
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->header))
    {
      return false;
    }
  }

  // Field name: raw
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->raw.data) {
      rosidl_runtime_c__String__init(&ros_message->raw);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->raw,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'raw'\n");
      return false;
    }
  }

  // Field name: sdk
  {
    cdr >> ros_message->sdk;
  }

  // Field name: pitch
  {
    cdr >> ros_message->pitch;
  }

  // Field name: roll
  {
    cdr >> ros_message->roll;
  }

  // Field name: yaw
  {
    cdr >> ros_message->yaw;
  }

  // Field name: vgx
  {
    cdr >> ros_message->vgx;
  }

  // Field name: vgy
  {
    cdr >> ros_message->vgy;
  }

  // Field name: vgz
  {
    cdr >> ros_message->vgz;
  }

  // Field name: templ
  {
    cdr >> ros_message->templ;
  }

  // Field name: temph
  {
    cdr >> ros_message->temph;
  }

  // Field name: tof
  {
    cdr >> ros_message->tof;
  }

  // Field name: h
  {
    cdr >> ros_message->h;
  }

  // Field name: bat
  {
    cdr >> ros_message->bat;
  }

  // Field name: baro
  {
    cdr >> ros_message->baro;
  }

  // Field name: time
  {
    cdr >> ros_message->time;
  }

  // Field name: agx
  {
    cdr >> ros_message->agx;
  }

  // Field name: agy
  {
    cdr >> ros_message->agy;
  }

  // Field name: agz
  {
    cdr >> ros_message->agz;
  }

  // Field name: mid
  {
    cdr >> ros_message->mid;
  }

  // Field name: x
  {
    cdr >> ros_message->x;
  }

  // Field name: y
  {
    cdr >> ros_message->y;
  }

  // Field name: z
  {
    cdr >> ros_message->z;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_tello_msgs
size_t get_serialized_size_tello_msgs__msg__FlightData(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _FlightData__ros_msg_type * ros_message = static_cast<const _FlightData__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name header

  current_alignment += get_serialized_size_std_msgs__msg__Header(
    &(ros_message->header), current_alignment);
  // field.name raw
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->raw.size + 1);
  // field.name sdk
  {
    size_t item_size = sizeof(ros_message->sdk);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name pitch
  {
    size_t item_size = sizeof(ros_message->pitch);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name roll
  {
    size_t item_size = sizeof(ros_message->roll);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name yaw
  {
    size_t item_size = sizeof(ros_message->yaw);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name vgx
  {
    size_t item_size = sizeof(ros_message->vgx);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name vgy
  {
    size_t item_size = sizeof(ros_message->vgy);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name vgz
  {
    size_t item_size = sizeof(ros_message->vgz);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name templ
  {
    size_t item_size = sizeof(ros_message->templ);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name temph
  {
    size_t item_size = sizeof(ros_message->temph);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name tof
  {
    size_t item_size = sizeof(ros_message->tof);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name h
  {
    size_t item_size = sizeof(ros_message->h);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name bat
  {
    size_t item_size = sizeof(ros_message->bat);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name baro
  {
    size_t item_size = sizeof(ros_message->baro);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name time
  {
    size_t item_size = sizeof(ros_message->time);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name agx
  {
    size_t item_size = sizeof(ros_message->agx);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name agy
  {
    size_t item_size = sizeof(ros_message->agy);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name agz
  {
    size_t item_size = sizeof(ros_message->agz);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name mid
  {
    size_t item_size = sizeof(ros_message->mid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name x
  {
    size_t item_size = sizeof(ros_message->x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name y
  {
    size_t item_size = sizeof(ros_message->y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name z
  {
    size_t item_size = sizeof(ros_message->z);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _FlightData__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_tello_msgs__msg__FlightData(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_tello_msgs
size_t max_serialized_size_tello_msgs__msg__FlightData(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: header
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_std_msgs__msg__Header(
        full_bounded, current_alignment);
    }
  }
  // member: raw
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: sdk
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: pitch
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: roll
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: yaw
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: vgx
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: vgy
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: vgz
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: templ
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: temph
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: tof
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: h
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: bat
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: baro
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: time
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: agx
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: agy
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: agz
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: mid
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: x
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: y
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: z
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _FlightData__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_tello_msgs__msg__FlightData(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_FlightData = {
  "tello_msgs::msg",
  "FlightData",
  _FlightData__cdr_serialize,
  _FlightData__cdr_deserialize,
  _FlightData__get_serialized_size,
  _FlightData__max_serialized_size
};

static rosidl_message_type_support_t _FlightData__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_FlightData,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, tello_msgs, msg, FlightData)() {
  return &_FlightData__type_support;
}

#if defined(__cplusplus)
}
#endif
