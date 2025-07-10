// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from armpi_fpv_kinematics:msg/Link.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "armpi_fpv_kinematics/msg/link.h"


#ifndef ARMPI_FPV_KINEMATICS__MSG__DETAIL__LINK__FUNCTIONS_H_
#define ARMPI_FPV_KINEMATICS__MSG__DETAIL__LINK__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/action_type_support_struct.h"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_runtime_c/service_type_support_struct.h"
#include "rosidl_runtime_c/type_description/type_description__struct.h"
#include "rosidl_runtime_c/type_description/type_source__struct.h"
#include "rosidl_runtime_c/type_hash.h"
#include "rosidl_runtime_c/visibility_control.h"
#include "armpi_fpv_kinematics/msg/rosidl_generator_c__visibility_control.h"

#include "armpi_fpv_kinematics/msg/detail/link__struct.h"

/// Initialize msg/Link message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * armpi_fpv_kinematics__msg__Link
 * )) before or use
 * armpi_fpv_kinematics__msg__Link__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_armpi_fpv_kinematics
bool
armpi_fpv_kinematics__msg__Link__init(armpi_fpv_kinematics__msg__Link * msg);

/// Finalize msg/Link message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_armpi_fpv_kinematics
void
armpi_fpv_kinematics__msg__Link__fini(armpi_fpv_kinematics__msg__Link * msg);

/// Create msg/Link message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * armpi_fpv_kinematics__msg__Link__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_armpi_fpv_kinematics
armpi_fpv_kinematics__msg__Link *
armpi_fpv_kinematics__msg__Link__create(void);

/// Destroy msg/Link message.
/**
 * It calls
 * armpi_fpv_kinematics__msg__Link__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_armpi_fpv_kinematics
void
armpi_fpv_kinematics__msg__Link__destroy(armpi_fpv_kinematics__msg__Link * msg);

/// Check for msg/Link message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_armpi_fpv_kinematics
bool
armpi_fpv_kinematics__msg__Link__are_equal(const armpi_fpv_kinematics__msg__Link * lhs, const armpi_fpv_kinematics__msg__Link * rhs);

/// Copy a msg/Link message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_armpi_fpv_kinematics
bool
armpi_fpv_kinematics__msg__Link__copy(
  const armpi_fpv_kinematics__msg__Link * input,
  armpi_fpv_kinematics__msg__Link * output);

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_armpi_fpv_kinematics
const rosidl_type_hash_t *
armpi_fpv_kinematics__msg__Link__get_type_hash(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_armpi_fpv_kinematics
const rosidl_runtime_c__type_description__TypeDescription *
armpi_fpv_kinematics__msg__Link__get_type_description(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_armpi_fpv_kinematics
const rosidl_runtime_c__type_description__TypeSource *
armpi_fpv_kinematics__msg__Link__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_armpi_fpv_kinematics
const rosidl_runtime_c__type_description__TypeSource__Sequence *
armpi_fpv_kinematics__msg__Link__get_type_description_sources(
  const rosidl_message_type_support_t * type_support);

/// Initialize array of msg/Link messages.
/**
 * It allocates the memory for the number of elements and calls
 * armpi_fpv_kinematics__msg__Link__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_armpi_fpv_kinematics
bool
armpi_fpv_kinematics__msg__Link__Sequence__init(armpi_fpv_kinematics__msg__Link__Sequence * array, size_t size);

/// Finalize array of msg/Link messages.
/**
 * It calls
 * armpi_fpv_kinematics__msg__Link__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_armpi_fpv_kinematics
void
armpi_fpv_kinematics__msg__Link__Sequence__fini(armpi_fpv_kinematics__msg__Link__Sequence * array);

/// Create array of msg/Link messages.
/**
 * It allocates the memory for the array and calls
 * armpi_fpv_kinematics__msg__Link__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_armpi_fpv_kinematics
armpi_fpv_kinematics__msg__Link__Sequence *
armpi_fpv_kinematics__msg__Link__Sequence__create(size_t size);

/// Destroy array of msg/Link messages.
/**
 * It calls
 * armpi_fpv_kinematics__msg__Link__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_armpi_fpv_kinematics
void
armpi_fpv_kinematics__msg__Link__Sequence__destroy(armpi_fpv_kinematics__msg__Link__Sequence * array);

/// Check for msg/Link message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_armpi_fpv_kinematics
bool
armpi_fpv_kinematics__msg__Link__Sequence__are_equal(const armpi_fpv_kinematics__msg__Link__Sequence * lhs, const armpi_fpv_kinematics__msg__Link__Sequence * rhs);

/// Copy an array of msg/Link messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_armpi_fpv_kinematics
bool
armpi_fpv_kinematics__msg__Link__Sequence__copy(
  const armpi_fpv_kinematics__msg__Link__Sequence * input,
  armpi_fpv_kinematics__msg__Link__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // ARMPI_FPV_KINEMATICS__MSG__DETAIL__LINK__FUNCTIONS_H_
