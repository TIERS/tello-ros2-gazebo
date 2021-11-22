// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from tello_msgs:msg/FlightData.idl
// generated code does not contain a copyright notice

#ifndef TELLO_MSGS__MSG__DETAIL__FLIGHT_DATA__FUNCTIONS_H_
#define TELLO_MSGS__MSG__DETAIL__FLIGHT_DATA__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "tello_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "tello_msgs/msg/detail/flight_data__struct.h"

/// Initialize msg/FlightData message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * tello_msgs__msg__FlightData
 * )) before or use
 * tello_msgs__msg__FlightData__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_tello_msgs
bool
tello_msgs__msg__FlightData__init(tello_msgs__msg__FlightData * msg);

/// Finalize msg/FlightData message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tello_msgs
void
tello_msgs__msg__FlightData__fini(tello_msgs__msg__FlightData * msg);

/// Create msg/FlightData message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * tello_msgs__msg__FlightData__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_tello_msgs
tello_msgs__msg__FlightData *
tello_msgs__msg__FlightData__create();

/// Destroy msg/FlightData message.
/**
 * It calls
 * tello_msgs__msg__FlightData__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tello_msgs
void
tello_msgs__msg__FlightData__destroy(tello_msgs__msg__FlightData * msg);


/// Initialize array of msg/FlightData messages.
/**
 * It allocates the memory for the number of elements and calls
 * tello_msgs__msg__FlightData__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_tello_msgs
bool
tello_msgs__msg__FlightData__Sequence__init(tello_msgs__msg__FlightData__Sequence * array, size_t size);

/// Finalize array of msg/FlightData messages.
/**
 * It calls
 * tello_msgs__msg__FlightData__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tello_msgs
void
tello_msgs__msg__FlightData__Sequence__fini(tello_msgs__msg__FlightData__Sequence * array);

/// Create array of msg/FlightData messages.
/**
 * It allocates the memory for the array and calls
 * tello_msgs__msg__FlightData__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_tello_msgs
tello_msgs__msg__FlightData__Sequence *
tello_msgs__msg__FlightData__Sequence__create(size_t size);

/// Destroy array of msg/FlightData messages.
/**
 * It calls
 * tello_msgs__msg__FlightData__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tello_msgs
void
tello_msgs__msg__FlightData__Sequence__destroy(tello_msgs__msg__FlightData__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // TELLO_MSGS__MSG__DETAIL__FLIGHT_DATA__FUNCTIONS_H_
