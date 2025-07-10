// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from armpi_fpv_kinematics:srv/GetLink.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "armpi_fpv_kinematics/srv/get_link.h"


#ifndef ARMPI_FPV_KINEMATICS__SRV__DETAIL__GET_LINK__STRUCT_H_
#define ARMPI_FPV_KINEMATICS__SRV__DETAIL__GET_LINK__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/GetLink in the package armpi_fpv_kinematics.
typedef struct armpi_fpv_kinematics__srv__GetLink_Request
{
  uint8_t structure_needs_at_least_one_member;
} armpi_fpv_kinematics__srv__GetLink_Request;

// Struct for a sequence of armpi_fpv_kinematics__srv__GetLink_Request.
typedef struct armpi_fpv_kinematics__srv__GetLink_Request__Sequence
{
  armpi_fpv_kinematics__srv__GetLink_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} armpi_fpv_kinematics__srv__GetLink_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'data'
#include "armpi_fpv_kinematics/msg/detail/link__struct.h"

/// Struct defined in srv/GetLink in the package armpi_fpv_kinematics.
typedef struct armpi_fpv_kinematics__srv__GetLink_Response
{
  bool success;
  armpi_fpv_kinematics__msg__Link data;
} armpi_fpv_kinematics__srv__GetLink_Response;

// Struct for a sequence of armpi_fpv_kinematics__srv__GetLink_Response.
typedef struct armpi_fpv_kinematics__srv__GetLink_Response__Sequence
{
  armpi_fpv_kinematics__srv__GetLink_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} armpi_fpv_kinematics__srv__GetLink_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  armpi_fpv_kinematics__srv__GetLink_Event__request__MAX_SIZE = 1
};
// response
enum
{
  armpi_fpv_kinematics__srv__GetLink_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/GetLink in the package armpi_fpv_kinematics.
typedef struct armpi_fpv_kinematics__srv__GetLink_Event
{
  service_msgs__msg__ServiceEventInfo info;
  armpi_fpv_kinematics__srv__GetLink_Request__Sequence request;
  armpi_fpv_kinematics__srv__GetLink_Response__Sequence response;
} armpi_fpv_kinematics__srv__GetLink_Event;

// Struct for a sequence of armpi_fpv_kinematics__srv__GetLink_Event.
typedef struct armpi_fpv_kinematics__srv__GetLink_Event__Sequence
{
  armpi_fpv_kinematics__srv__GetLink_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} armpi_fpv_kinematics__srv__GetLink_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ARMPI_FPV_KINEMATICS__SRV__DETAIL__GET_LINK__STRUCT_H_
