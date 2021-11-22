// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from fiducial_vlam_msgs:msg/Observation.idl
// generated code does not contain a copyright notice

#ifndef FIDUCIAL_VLAM_MSGS__MSG__DETAIL__OBSERVATION__FUNCTIONS_H_
#define FIDUCIAL_VLAM_MSGS__MSG__DETAIL__OBSERVATION__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "fiducial_vlam_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "fiducial_vlam_msgs/msg/detail/observation__struct.h"

/// Initialize msg/Observation message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * fiducial_vlam_msgs__msg__Observation
 * )) before or use
 * fiducial_vlam_msgs__msg__Observation__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_fiducial_vlam_msgs
bool
fiducial_vlam_msgs__msg__Observation__init(fiducial_vlam_msgs__msg__Observation * msg);

/// Finalize msg/Observation message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_fiducial_vlam_msgs
void
fiducial_vlam_msgs__msg__Observation__fini(fiducial_vlam_msgs__msg__Observation * msg);

/// Create msg/Observation message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * fiducial_vlam_msgs__msg__Observation__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_fiducial_vlam_msgs
fiducial_vlam_msgs__msg__Observation *
fiducial_vlam_msgs__msg__Observation__create();

/// Destroy msg/Observation message.
/**
 * It calls
 * fiducial_vlam_msgs__msg__Observation__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_fiducial_vlam_msgs
void
fiducial_vlam_msgs__msg__Observation__destroy(fiducial_vlam_msgs__msg__Observation * msg);


/// Initialize array of msg/Observation messages.
/**
 * It allocates the memory for the number of elements and calls
 * fiducial_vlam_msgs__msg__Observation__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_fiducial_vlam_msgs
bool
fiducial_vlam_msgs__msg__Observation__Sequence__init(fiducial_vlam_msgs__msg__Observation__Sequence * array, size_t size);

/// Finalize array of msg/Observation messages.
/**
 * It calls
 * fiducial_vlam_msgs__msg__Observation__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_fiducial_vlam_msgs
void
fiducial_vlam_msgs__msg__Observation__Sequence__fini(fiducial_vlam_msgs__msg__Observation__Sequence * array);

/// Create array of msg/Observation messages.
/**
 * It allocates the memory for the array and calls
 * fiducial_vlam_msgs__msg__Observation__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_fiducial_vlam_msgs
fiducial_vlam_msgs__msg__Observation__Sequence *
fiducial_vlam_msgs__msg__Observation__Sequence__create(size_t size);

/// Destroy array of msg/Observation messages.
/**
 * It calls
 * fiducial_vlam_msgs__msg__Observation__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_fiducial_vlam_msgs
void
fiducial_vlam_msgs__msg__Observation__Sequence__destroy(fiducial_vlam_msgs__msg__Observation__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // FIDUCIAL_VLAM_MSGS__MSG__DETAIL__OBSERVATION__FUNCTIONS_H_
