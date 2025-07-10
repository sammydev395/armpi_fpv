// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from armpi_fpv_kinematics:srv/SetRobotPose.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "armpi_fpv_kinematics/srv/set_robot_pose.h"


#ifndef ARMPI_FPV_KINEMATICS__SRV__DETAIL__SET_ROBOT_POSE__STRUCT_H_
#define ARMPI_FPV_KINEMATICS__SRV__DETAIL__SET_ROBOT_POSE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'position'
// Member 'pitch_range'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in srv/SetRobotPose in the package armpi_fpv_kinematics.
typedef struct armpi_fpv_kinematics__srv__SetRobotPose_Request
{
  rosidl_runtime_c__double__Sequence position;
  double pitch;
  rosidl_runtime_c__double__Sequence pitch_range;
  double roll;
  double resolution;
} armpi_fpv_kinematics__srv__SetRobotPose_Request;

// Struct for a sequence of armpi_fpv_kinematics__srv__SetRobotPose_Request.
typedef struct armpi_fpv_kinematics__srv__SetRobotPose_Request__Sequence
{
  armpi_fpv_kinematics__srv__SetRobotPose_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} armpi_fpv_kinematics__srv__SetRobotPose_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'pulse'
// Member 'current_pulse'
// Member 'rpy'
// already included above
// #include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in srv/SetRobotPose in the package armpi_fpv_kinematics.
typedef struct armpi_fpv_kinematics__srv__SetRobotPose_Response
{
  bool success;
  rosidl_runtime_c__double__Sequence pulse;
  rosidl_runtime_c__uint16__Sequence current_pulse;
  rosidl_runtime_c__double__Sequence rpy;
  double min_variation;
} armpi_fpv_kinematics__srv__SetRobotPose_Response;

// Struct for a sequence of armpi_fpv_kinematics__srv__SetRobotPose_Response.
typedef struct armpi_fpv_kinematics__srv__SetRobotPose_Response__Sequence
{
  armpi_fpv_kinematics__srv__SetRobotPose_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} armpi_fpv_kinematics__srv__SetRobotPose_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  armpi_fpv_kinematics__srv__SetRobotPose_Event__request__MAX_SIZE = 1
};
// response
enum
{
  armpi_fpv_kinematics__srv__SetRobotPose_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/SetRobotPose in the package armpi_fpv_kinematics.
typedef struct armpi_fpv_kinematics__srv__SetRobotPose_Event
{
  service_msgs__msg__ServiceEventInfo info;
  armpi_fpv_kinematics__srv__SetRobotPose_Request__Sequence request;
  armpi_fpv_kinematics__srv__SetRobotPose_Response__Sequence response;
} armpi_fpv_kinematics__srv__SetRobotPose_Event;

// Struct for a sequence of armpi_fpv_kinematics__srv__SetRobotPose_Event.
typedef struct armpi_fpv_kinematics__srv__SetRobotPose_Event__Sequence
{
  armpi_fpv_kinematics__srv__SetRobotPose_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} armpi_fpv_kinematics__srv__SetRobotPose_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ARMPI_FPV_KINEMATICS__SRV__DETAIL__SET_ROBOT_POSE__STRUCT_H_
