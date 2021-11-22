// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from tello_msgs:srv/TelloAction.idl
// generated code does not contain a copyright notice

#ifndef TELLO_MSGS__SRV__DETAIL__TELLO_ACTION__FUNCTIONS_H_
#define TELLO_MSGS__SRV__DETAIL__TELLO_ACTION__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "tello_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "tello_msgs/srv/detail/tello_action__struct.h"

/// Initialize srv/TelloAction message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * tello_msgs__srv__TelloAction_Request
 * )) before or use
 * tello_msgs__srv__TelloAction_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_tello_msgs
bool
tello_msgs__srv__TelloAction_Request__init(tello_msgs__srv__TelloAction_Request * msg);

/// Finalize srv/TelloAction message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tello_msgs
void
tello_msgs__srv__TelloAction_Request__fini(tello_msgs__srv__TelloAction_Request * msg);

/// Create srv/TelloAction message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * tello_msgs__srv__TelloAction_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_tello_msgs
tello_msgs__srv__TelloAction_Request *
tello_msgs__srv__TelloAction_Request__create();

/// Destroy srv/TelloAction message.
/**
 * It calls
 * tello_msgs__srv__TelloAction_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tello_msgs
void
tello_msgs__srv__TelloAction_Request__destroy(tello_msgs__srv__TelloAction_Request * msg);


/// Initialize array of srv/TelloAction messages.
/**
 * It allocates the memory for the number of elements and calls
 * tello_msgs__srv__TelloAction_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_tello_msgs
bool
tello_msgs__srv__TelloAction_Request__Sequence__init(tello_msgs__srv__TelloAction_Request__Sequence * array, size_t size);

/// Finalize array of srv/TelloAction messages.
/**
 * It calls
 * tello_msgs__srv__TelloAction_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tello_msgs
void
tello_msgs__srv__TelloAction_Request__Sequence__fini(tello_msgs__srv__TelloAction_Request__Sequence * array);

/// Create array of srv/TelloAction messages.
/**
 * It allocates the memory for the array and calls
 * tello_msgs__srv__TelloAction_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_tello_msgs
tello_msgs__srv__TelloAction_Request__Sequence *
tello_msgs__srv__TelloAction_Request__Sequence__create(size_t size);

/// Destroy array of srv/TelloAction messages.
/**
 * It calls
 * tello_msgs__srv__TelloAction_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tello_msgs
void
tello_msgs__srv__TelloAction_Request__Sequence__destroy(tello_msgs__srv__TelloAction_Request__Sequence * array);

/// Initialize srv/TelloAction message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * tello_msgs__srv__TelloAction_Response
 * )) before or use
 * tello_msgs__srv__TelloAction_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_tello_msgs
bool
tello_msgs__srv__TelloAction_Response__init(tello_msgs__srv__TelloAction_Response * msg);

/// Finalize srv/TelloAction message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tello_msgs
void
tello_msgs__srv__TelloAction_Response__fini(tello_msgs__srv__TelloAction_Response * msg);

/// Create srv/TelloAction message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * tello_msgs__srv__TelloAction_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_tello_msgs
tello_msgs__srv__TelloAction_Response *
tello_msgs__srv__TelloAction_Response__create();

/// Destroy srv/TelloAction message.
/**
 * It calls
 * tello_msgs__srv__TelloAction_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tello_msgs
void
tello_msgs__srv__TelloAction_Response__destroy(tello_msgs__srv__TelloAction_Response * msg);


/// Initialize array of srv/TelloAction messages.
/**
 * It allocates the memory for the number of elements and calls
 * tello_msgs__srv__TelloAction_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_tello_msgs
bool
tello_msgs__srv__TelloAction_Response__Sequence__init(tello_msgs__srv__TelloAction_Response__Sequence * array, size_t size);

/// Finalize array of srv/TelloAction messages.
/**
 * It calls
 * tello_msgs__srv__TelloAction_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tello_msgs
void
tello_msgs__srv__TelloAction_Response__Sequence__fini(tello_msgs__srv__TelloAction_Response__Sequence * array);

/// Create array of srv/TelloAction messages.
/**
 * It allocates the memory for the array and calls
 * tello_msgs__srv__TelloAction_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_tello_msgs
tello_msgs__srv__TelloAction_Response__Sequence *
tello_msgs__srv__TelloAction_Response__Sequence__create(size_t size);

/// Destroy array of srv/TelloAction messages.
/**
 * It calls
 * tello_msgs__srv__TelloAction_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tello_msgs
void
tello_msgs__srv__TelloAction_Response__Sequence__destroy(tello_msgs__srv__TelloAction_Response__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // TELLO_MSGS__SRV__DETAIL__TELLO_ACTION__FUNCTIONS_H_
