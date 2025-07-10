// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from armpi_fpv_kinematics:srv/SetJointValue.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "armpi_fpv_kinematics/srv/set_joint_value.h"


#ifndef ARMPI_FPV_KINEMATICS__SRV__DETAIL__SET_JOINT_VALUE__STRUCT_H_
#define ARMPI_FPV_KINEMATICS__SRV__DETAIL__SET_JOINT_VALUE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'joint_value'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in srv/SetJointValue in the package armpi_fpv_kinematics.
typedef struct armpi_fpv_kinematics__srv__SetJointValue_Request
{
  rosidl_runtime_c__float__Sequence joint_value;
} armpi_fpv_kinematics__srv__SetJointValue_Request;

// Struct for a sequence of armpi_fpv_kinematics__srv__SetJointValue_Request.
typedef struct armpi_fpv_kinematics__srv__SetJointValue_Request__Sequence
{
  armpi_fpv_kinematics__srv__SetJointValue_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} armpi_fpv_kinematics__srv__SetJointValue_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'pose'
#include "geometry_msgs/msg/detail/pose__struct.h"

/// Struct defined in srv/SetJointValue in the package armpi_fpv_kinematics.
typedef struct armpi_fpv_kinematics__srv__SetJointValue_Response
{
  bool success;
  bool solution;
  geometry_msgs__msg__Pose pose;
} armpi_fpv_kinematics__srv__SetJointValue_Response;

// Struct for a sequence of armpi_fpv_kinematics__srv__SetJointValue_Response.
typedef struct armpi_fpv_kinematics__srv__SetJointValue_Response__Sequence
{
  armpi_fpv_kinematics__srv__SetJointValue_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} armpi_fpv_kinematics__srv__SetJointValue_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  armpi_fpv_kinematics__srv__SetJointValue_Event__request__MAX_SIZE = 1
};
// response
enum
{
  armpi_fpv_kinematics__srv__SetJointValue_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/SetJointValue in the package armpi_fpv_kinematics.
typedef struct armpi_fpv_kinematics__srv__SetJointValue_Event
{
  service_msgs__msg__ServiceEventInfo info;
  armpi_fpv_kinematics__srv__SetJointValue_Request__Sequence request;
  armpi_fpv_kinematics__srv__SetJointValue_Response__Sequence response;
} armpi_fpv_kinematics__srv__SetJointValue_Event;

// Struct for a sequence of armpi_fpv_kinematics__srv__SetJointValue_Event.
typedef struct armpi_fpv_kinematics__srv__SetJointValue_Event__Sequence
{
  armpi_fpv_kinematics__srv__SetJointValue_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} armpi_fpv_kinematics__srv__SetJointValue_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ARMPI_FPV_KINEMATICS__SRV__DETAIL__SET_JOINT_VALUE__STRUCT_H_
