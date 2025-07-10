// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from armpi_fpv_kinematics:srv/SetRobotPose.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "armpi_fpv_kinematics/srv/detail/set_robot_pose__rosidl_typesupport_introspection_c.h"
#include "armpi_fpv_kinematics/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "armpi_fpv_kinematics/srv/detail/set_robot_pose__functions.h"
#include "armpi_fpv_kinematics/srv/detail/set_robot_pose__struct.h"


// Include directives for member types
// Member `position`
// Member `pitch_range`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void armpi_fpv_kinematics__srv__SetRobotPose_Request__rosidl_typesupport_introspection_c__SetRobotPose_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  armpi_fpv_kinematics__srv__SetRobotPose_Request__init(message_memory);
}

void armpi_fpv_kinematics__srv__SetRobotPose_Request__rosidl_typesupport_introspection_c__SetRobotPose_Request_fini_function(void * message_memory)
{
  armpi_fpv_kinematics__srv__SetRobotPose_Request__fini(message_memory);
}

size_t armpi_fpv_kinematics__srv__SetRobotPose_Request__rosidl_typesupport_introspection_c__size_function__SetRobotPose_Request__position(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * armpi_fpv_kinematics__srv__SetRobotPose_Request__rosidl_typesupport_introspection_c__get_const_function__SetRobotPose_Request__position(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * armpi_fpv_kinematics__srv__SetRobotPose_Request__rosidl_typesupport_introspection_c__get_function__SetRobotPose_Request__position(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void armpi_fpv_kinematics__srv__SetRobotPose_Request__rosidl_typesupport_introspection_c__fetch_function__SetRobotPose_Request__position(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    armpi_fpv_kinematics__srv__SetRobotPose_Request__rosidl_typesupport_introspection_c__get_const_function__SetRobotPose_Request__position(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void armpi_fpv_kinematics__srv__SetRobotPose_Request__rosidl_typesupport_introspection_c__assign_function__SetRobotPose_Request__position(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    armpi_fpv_kinematics__srv__SetRobotPose_Request__rosidl_typesupport_introspection_c__get_function__SetRobotPose_Request__position(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool armpi_fpv_kinematics__srv__SetRobotPose_Request__rosidl_typesupport_introspection_c__resize_function__SetRobotPose_Request__position(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

size_t armpi_fpv_kinematics__srv__SetRobotPose_Request__rosidl_typesupport_introspection_c__size_function__SetRobotPose_Request__pitch_range(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * armpi_fpv_kinematics__srv__SetRobotPose_Request__rosidl_typesupport_introspection_c__get_const_function__SetRobotPose_Request__pitch_range(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * armpi_fpv_kinematics__srv__SetRobotPose_Request__rosidl_typesupport_introspection_c__get_function__SetRobotPose_Request__pitch_range(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void armpi_fpv_kinematics__srv__SetRobotPose_Request__rosidl_typesupport_introspection_c__fetch_function__SetRobotPose_Request__pitch_range(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    armpi_fpv_kinematics__srv__SetRobotPose_Request__rosidl_typesupport_introspection_c__get_const_function__SetRobotPose_Request__pitch_range(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void armpi_fpv_kinematics__srv__SetRobotPose_Request__rosidl_typesupport_introspection_c__assign_function__SetRobotPose_Request__pitch_range(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    armpi_fpv_kinematics__srv__SetRobotPose_Request__rosidl_typesupport_introspection_c__get_function__SetRobotPose_Request__pitch_range(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool armpi_fpv_kinematics__srv__SetRobotPose_Request__rosidl_typesupport_introspection_c__resize_function__SetRobotPose_Request__pitch_range(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember armpi_fpv_kinematics__srv__SetRobotPose_Request__rosidl_typesupport_introspection_c__SetRobotPose_Request_message_member_array[5] = {
  {
    "position",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(armpi_fpv_kinematics__srv__SetRobotPose_Request, position),  // bytes offset in struct
    NULL,  // default value
    armpi_fpv_kinematics__srv__SetRobotPose_Request__rosidl_typesupport_introspection_c__size_function__SetRobotPose_Request__position,  // size() function pointer
    armpi_fpv_kinematics__srv__SetRobotPose_Request__rosidl_typesupport_introspection_c__get_const_function__SetRobotPose_Request__position,  // get_const(index) function pointer
    armpi_fpv_kinematics__srv__SetRobotPose_Request__rosidl_typesupport_introspection_c__get_function__SetRobotPose_Request__position,  // get(index) function pointer
    armpi_fpv_kinematics__srv__SetRobotPose_Request__rosidl_typesupport_introspection_c__fetch_function__SetRobotPose_Request__position,  // fetch(index, &value) function pointer
    armpi_fpv_kinematics__srv__SetRobotPose_Request__rosidl_typesupport_introspection_c__assign_function__SetRobotPose_Request__position,  // assign(index, value) function pointer
    armpi_fpv_kinematics__srv__SetRobotPose_Request__rosidl_typesupport_introspection_c__resize_function__SetRobotPose_Request__position  // resize(index) function pointer
  },
  {
    "pitch",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(armpi_fpv_kinematics__srv__SetRobotPose_Request, pitch),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "pitch_range",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(armpi_fpv_kinematics__srv__SetRobotPose_Request, pitch_range),  // bytes offset in struct
    NULL,  // default value
    armpi_fpv_kinematics__srv__SetRobotPose_Request__rosidl_typesupport_introspection_c__size_function__SetRobotPose_Request__pitch_range,  // size() function pointer
    armpi_fpv_kinematics__srv__SetRobotPose_Request__rosidl_typesupport_introspection_c__get_const_function__SetRobotPose_Request__pitch_range,  // get_const(index) function pointer
    armpi_fpv_kinematics__srv__SetRobotPose_Request__rosidl_typesupport_introspection_c__get_function__SetRobotPose_Request__pitch_range,  // get(index) function pointer
    armpi_fpv_kinematics__srv__SetRobotPose_Request__rosidl_typesupport_introspection_c__fetch_function__SetRobotPose_Request__pitch_range,  // fetch(index, &value) function pointer
    armpi_fpv_kinematics__srv__SetRobotPose_Request__rosidl_typesupport_introspection_c__assign_function__SetRobotPose_Request__pitch_range,  // assign(index, value) function pointer
    armpi_fpv_kinematics__srv__SetRobotPose_Request__rosidl_typesupport_introspection_c__resize_function__SetRobotPose_Request__pitch_range  // resize(index) function pointer
  },
  {
    "roll",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(armpi_fpv_kinematics__srv__SetRobotPose_Request, roll),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "resolution",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(armpi_fpv_kinematics__srv__SetRobotPose_Request, resolution),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers armpi_fpv_kinematics__srv__SetRobotPose_Request__rosidl_typesupport_introspection_c__SetRobotPose_Request_message_members = {
  "armpi_fpv_kinematics__srv",  // message namespace
  "SetRobotPose_Request",  // message name
  5,  // number of fields
  sizeof(armpi_fpv_kinematics__srv__SetRobotPose_Request),
  false,  // has_any_key_member_
  armpi_fpv_kinematics__srv__SetRobotPose_Request__rosidl_typesupport_introspection_c__SetRobotPose_Request_message_member_array,  // message members
  armpi_fpv_kinematics__srv__SetRobotPose_Request__rosidl_typesupport_introspection_c__SetRobotPose_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  armpi_fpv_kinematics__srv__SetRobotPose_Request__rosidl_typesupport_introspection_c__SetRobotPose_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t armpi_fpv_kinematics__srv__SetRobotPose_Request__rosidl_typesupport_introspection_c__SetRobotPose_Request_message_type_support_handle = {
  0,
  &armpi_fpv_kinematics__srv__SetRobotPose_Request__rosidl_typesupport_introspection_c__SetRobotPose_Request_message_members,
  get_message_typesupport_handle_function,
  &armpi_fpv_kinematics__srv__SetRobotPose_Request__get_type_hash,
  &armpi_fpv_kinematics__srv__SetRobotPose_Request__get_type_description,
  &armpi_fpv_kinematics__srv__SetRobotPose_Request__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_armpi_fpv_kinematics
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, armpi_fpv_kinematics, srv, SetRobotPose_Request)() {
  if (!armpi_fpv_kinematics__srv__SetRobotPose_Request__rosidl_typesupport_introspection_c__SetRobotPose_Request_message_type_support_handle.typesupport_identifier) {
    armpi_fpv_kinematics__srv__SetRobotPose_Request__rosidl_typesupport_introspection_c__SetRobotPose_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &armpi_fpv_kinematics__srv__SetRobotPose_Request__rosidl_typesupport_introspection_c__SetRobotPose_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "armpi_fpv_kinematics/srv/detail/set_robot_pose__rosidl_typesupport_introspection_c.h"
// already included above
// #include "armpi_fpv_kinematics/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "armpi_fpv_kinematics/srv/detail/set_robot_pose__functions.h"
// already included above
// #include "armpi_fpv_kinematics/srv/detail/set_robot_pose__struct.h"


// Include directives for member types
// Member `pulse`
// Member `current_pulse`
// Member `rpy`
// already included above
// #include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void armpi_fpv_kinematics__srv__SetRobotPose_Response__rosidl_typesupport_introspection_c__SetRobotPose_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  armpi_fpv_kinematics__srv__SetRobotPose_Response__init(message_memory);
}

void armpi_fpv_kinematics__srv__SetRobotPose_Response__rosidl_typesupport_introspection_c__SetRobotPose_Response_fini_function(void * message_memory)
{
  armpi_fpv_kinematics__srv__SetRobotPose_Response__fini(message_memory);
}

size_t armpi_fpv_kinematics__srv__SetRobotPose_Response__rosidl_typesupport_introspection_c__size_function__SetRobotPose_Response__pulse(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * armpi_fpv_kinematics__srv__SetRobotPose_Response__rosidl_typesupport_introspection_c__get_const_function__SetRobotPose_Response__pulse(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * armpi_fpv_kinematics__srv__SetRobotPose_Response__rosidl_typesupport_introspection_c__get_function__SetRobotPose_Response__pulse(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void armpi_fpv_kinematics__srv__SetRobotPose_Response__rosidl_typesupport_introspection_c__fetch_function__SetRobotPose_Response__pulse(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    armpi_fpv_kinematics__srv__SetRobotPose_Response__rosidl_typesupport_introspection_c__get_const_function__SetRobotPose_Response__pulse(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void armpi_fpv_kinematics__srv__SetRobotPose_Response__rosidl_typesupport_introspection_c__assign_function__SetRobotPose_Response__pulse(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    armpi_fpv_kinematics__srv__SetRobotPose_Response__rosidl_typesupport_introspection_c__get_function__SetRobotPose_Response__pulse(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool armpi_fpv_kinematics__srv__SetRobotPose_Response__rosidl_typesupport_introspection_c__resize_function__SetRobotPose_Response__pulse(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

size_t armpi_fpv_kinematics__srv__SetRobotPose_Response__rosidl_typesupport_introspection_c__size_function__SetRobotPose_Response__current_pulse(
  const void * untyped_member)
{
  const rosidl_runtime_c__uint16__Sequence * member =
    (const rosidl_runtime_c__uint16__Sequence *)(untyped_member);
  return member->size;
}

const void * armpi_fpv_kinematics__srv__SetRobotPose_Response__rosidl_typesupport_introspection_c__get_const_function__SetRobotPose_Response__current_pulse(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__uint16__Sequence * member =
    (const rosidl_runtime_c__uint16__Sequence *)(untyped_member);
  return &member->data[index];
}

void * armpi_fpv_kinematics__srv__SetRobotPose_Response__rosidl_typesupport_introspection_c__get_function__SetRobotPose_Response__current_pulse(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__uint16__Sequence * member =
    (rosidl_runtime_c__uint16__Sequence *)(untyped_member);
  return &member->data[index];
}

void armpi_fpv_kinematics__srv__SetRobotPose_Response__rosidl_typesupport_introspection_c__fetch_function__SetRobotPose_Response__current_pulse(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint16_t * item =
    ((const uint16_t *)
    armpi_fpv_kinematics__srv__SetRobotPose_Response__rosidl_typesupport_introspection_c__get_const_function__SetRobotPose_Response__current_pulse(untyped_member, index));
  uint16_t * value =
    (uint16_t *)(untyped_value);
  *value = *item;
}

void armpi_fpv_kinematics__srv__SetRobotPose_Response__rosidl_typesupport_introspection_c__assign_function__SetRobotPose_Response__current_pulse(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint16_t * item =
    ((uint16_t *)
    armpi_fpv_kinematics__srv__SetRobotPose_Response__rosidl_typesupport_introspection_c__get_function__SetRobotPose_Response__current_pulse(untyped_member, index));
  const uint16_t * value =
    (const uint16_t *)(untyped_value);
  *item = *value;
}

bool armpi_fpv_kinematics__srv__SetRobotPose_Response__rosidl_typesupport_introspection_c__resize_function__SetRobotPose_Response__current_pulse(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__uint16__Sequence * member =
    (rosidl_runtime_c__uint16__Sequence *)(untyped_member);
  rosidl_runtime_c__uint16__Sequence__fini(member);
  return rosidl_runtime_c__uint16__Sequence__init(member, size);
}

size_t armpi_fpv_kinematics__srv__SetRobotPose_Response__rosidl_typesupport_introspection_c__size_function__SetRobotPose_Response__rpy(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * armpi_fpv_kinematics__srv__SetRobotPose_Response__rosidl_typesupport_introspection_c__get_const_function__SetRobotPose_Response__rpy(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * armpi_fpv_kinematics__srv__SetRobotPose_Response__rosidl_typesupport_introspection_c__get_function__SetRobotPose_Response__rpy(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void armpi_fpv_kinematics__srv__SetRobotPose_Response__rosidl_typesupport_introspection_c__fetch_function__SetRobotPose_Response__rpy(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    armpi_fpv_kinematics__srv__SetRobotPose_Response__rosidl_typesupport_introspection_c__get_const_function__SetRobotPose_Response__rpy(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void armpi_fpv_kinematics__srv__SetRobotPose_Response__rosidl_typesupport_introspection_c__assign_function__SetRobotPose_Response__rpy(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    armpi_fpv_kinematics__srv__SetRobotPose_Response__rosidl_typesupport_introspection_c__get_function__SetRobotPose_Response__rpy(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool armpi_fpv_kinematics__srv__SetRobotPose_Response__rosidl_typesupport_introspection_c__resize_function__SetRobotPose_Response__rpy(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember armpi_fpv_kinematics__srv__SetRobotPose_Response__rosidl_typesupport_introspection_c__SetRobotPose_Response_message_member_array[5] = {
  {
    "success",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(armpi_fpv_kinematics__srv__SetRobotPose_Response, success),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "pulse",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(armpi_fpv_kinematics__srv__SetRobotPose_Response, pulse),  // bytes offset in struct
    NULL,  // default value
    armpi_fpv_kinematics__srv__SetRobotPose_Response__rosidl_typesupport_introspection_c__size_function__SetRobotPose_Response__pulse,  // size() function pointer
    armpi_fpv_kinematics__srv__SetRobotPose_Response__rosidl_typesupport_introspection_c__get_const_function__SetRobotPose_Response__pulse,  // get_const(index) function pointer
    armpi_fpv_kinematics__srv__SetRobotPose_Response__rosidl_typesupport_introspection_c__get_function__SetRobotPose_Response__pulse,  // get(index) function pointer
    armpi_fpv_kinematics__srv__SetRobotPose_Response__rosidl_typesupport_introspection_c__fetch_function__SetRobotPose_Response__pulse,  // fetch(index, &value) function pointer
    armpi_fpv_kinematics__srv__SetRobotPose_Response__rosidl_typesupport_introspection_c__assign_function__SetRobotPose_Response__pulse,  // assign(index, value) function pointer
    armpi_fpv_kinematics__srv__SetRobotPose_Response__rosidl_typesupport_introspection_c__resize_function__SetRobotPose_Response__pulse  // resize(index) function pointer
  },
  {
    "current_pulse",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(armpi_fpv_kinematics__srv__SetRobotPose_Response, current_pulse),  // bytes offset in struct
    NULL,  // default value
    armpi_fpv_kinematics__srv__SetRobotPose_Response__rosidl_typesupport_introspection_c__size_function__SetRobotPose_Response__current_pulse,  // size() function pointer
    armpi_fpv_kinematics__srv__SetRobotPose_Response__rosidl_typesupport_introspection_c__get_const_function__SetRobotPose_Response__current_pulse,  // get_const(index) function pointer
    armpi_fpv_kinematics__srv__SetRobotPose_Response__rosidl_typesupport_introspection_c__get_function__SetRobotPose_Response__current_pulse,  // get(index) function pointer
    armpi_fpv_kinematics__srv__SetRobotPose_Response__rosidl_typesupport_introspection_c__fetch_function__SetRobotPose_Response__current_pulse,  // fetch(index, &value) function pointer
    armpi_fpv_kinematics__srv__SetRobotPose_Response__rosidl_typesupport_introspection_c__assign_function__SetRobotPose_Response__current_pulse,  // assign(index, value) function pointer
    armpi_fpv_kinematics__srv__SetRobotPose_Response__rosidl_typesupport_introspection_c__resize_function__SetRobotPose_Response__current_pulse  // resize(index) function pointer
  },
  {
    "rpy",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(armpi_fpv_kinematics__srv__SetRobotPose_Response, rpy),  // bytes offset in struct
    NULL,  // default value
    armpi_fpv_kinematics__srv__SetRobotPose_Response__rosidl_typesupport_introspection_c__size_function__SetRobotPose_Response__rpy,  // size() function pointer
    armpi_fpv_kinematics__srv__SetRobotPose_Response__rosidl_typesupport_introspection_c__get_const_function__SetRobotPose_Response__rpy,  // get_const(index) function pointer
    armpi_fpv_kinematics__srv__SetRobotPose_Response__rosidl_typesupport_introspection_c__get_function__SetRobotPose_Response__rpy,  // get(index) function pointer
    armpi_fpv_kinematics__srv__SetRobotPose_Response__rosidl_typesupport_introspection_c__fetch_function__SetRobotPose_Response__rpy,  // fetch(index, &value) function pointer
    armpi_fpv_kinematics__srv__SetRobotPose_Response__rosidl_typesupport_introspection_c__assign_function__SetRobotPose_Response__rpy,  // assign(index, value) function pointer
    armpi_fpv_kinematics__srv__SetRobotPose_Response__rosidl_typesupport_introspection_c__resize_function__SetRobotPose_Response__rpy  // resize(index) function pointer
  },
  {
    "min_variation",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(armpi_fpv_kinematics__srv__SetRobotPose_Response, min_variation),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers armpi_fpv_kinematics__srv__SetRobotPose_Response__rosidl_typesupport_introspection_c__SetRobotPose_Response_message_members = {
  "armpi_fpv_kinematics__srv",  // message namespace
  "SetRobotPose_Response",  // message name
  5,  // number of fields
  sizeof(armpi_fpv_kinematics__srv__SetRobotPose_Response),
  false,  // has_any_key_member_
  armpi_fpv_kinematics__srv__SetRobotPose_Response__rosidl_typesupport_introspection_c__SetRobotPose_Response_message_member_array,  // message members
  armpi_fpv_kinematics__srv__SetRobotPose_Response__rosidl_typesupport_introspection_c__SetRobotPose_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  armpi_fpv_kinematics__srv__SetRobotPose_Response__rosidl_typesupport_introspection_c__SetRobotPose_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t armpi_fpv_kinematics__srv__SetRobotPose_Response__rosidl_typesupport_introspection_c__SetRobotPose_Response_message_type_support_handle = {
  0,
  &armpi_fpv_kinematics__srv__SetRobotPose_Response__rosidl_typesupport_introspection_c__SetRobotPose_Response_message_members,
  get_message_typesupport_handle_function,
  &armpi_fpv_kinematics__srv__SetRobotPose_Response__get_type_hash,
  &armpi_fpv_kinematics__srv__SetRobotPose_Response__get_type_description,
  &armpi_fpv_kinematics__srv__SetRobotPose_Response__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_armpi_fpv_kinematics
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, armpi_fpv_kinematics, srv, SetRobotPose_Response)() {
  if (!armpi_fpv_kinematics__srv__SetRobotPose_Response__rosidl_typesupport_introspection_c__SetRobotPose_Response_message_type_support_handle.typesupport_identifier) {
    armpi_fpv_kinematics__srv__SetRobotPose_Response__rosidl_typesupport_introspection_c__SetRobotPose_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &armpi_fpv_kinematics__srv__SetRobotPose_Response__rosidl_typesupport_introspection_c__SetRobotPose_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "armpi_fpv_kinematics/srv/detail/set_robot_pose__rosidl_typesupport_introspection_c.h"
// already included above
// #include "armpi_fpv_kinematics/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "armpi_fpv_kinematics/srv/detail/set_robot_pose__functions.h"
// already included above
// #include "armpi_fpv_kinematics/srv/detail/set_robot_pose__struct.h"


// Include directives for member types
// Member `info`
#include "service_msgs/msg/service_event_info.h"
// Member `info`
#include "service_msgs/msg/detail/service_event_info__rosidl_typesupport_introspection_c.h"
// Member `request`
// Member `response`
#include "armpi_fpv_kinematics/srv/set_robot_pose.h"
// Member `request`
// Member `response`
// already included above
// #include "armpi_fpv_kinematics/srv/detail/set_robot_pose__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void armpi_fpv_kinematics__srv__SetRobotPose_Event__rosidl_typesupport_introspection_c__SetRobotPose_Event_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  armpi_fpv_kinematics__srv__SetRobotPose_Event__init(message_memory);
}

void armpi_fpv_kinematics__srv__SetRobotPose_Event__rosidl_typesupport_introspection_c__SetRobotPose_Event_fini_function(void * message_memory)
{
  armpi_fpv_kinematics__srv__SetRobotPose_Event__fini(message_memory);
}

size_t armpi_fpv_kinematics__srv__SetRobotPose_Event__rosidl_typesupport_introspection_c__size_function__SetRobotPose_Event__request(
  const void * untyped_member)
{
  const armpi_fpv_kinematics__srv__SetRobotPose_Request__Sequence * member =
    (const armpi_fpv_kinematics__srv__SetRobotPose_Request__Sequence *)(untyped_member);
  return member->size;
}

const void * armpi_fpv_kinematics__srv__SetRobotPose_Event__rosidl_typesupport_introspection_c__get_const_function__SetRobotPose_Event__request(
  const void * untyped_member, size_t index)
{
  const armpi_fpv_kinematics__srv__SetRobotPose_Request__Sequence * member =
    (const armpi_fpv_kinematics__srv__SetRobotPose_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void * armpi_fpv_kinematics__srv__SetRobotPose_Event__rosidl_typesupport_introspection_c__get_function__SetRobotPose_Event__request(
  void * untyped_member, size_t index)
{
  armpi_fpv_kinematics__srv__SetRobotPose_Request__Sequence * member =
    (armpi_fpv_kinematics__srv__SetRobotPose_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void armpi_fpv_kinematics__srv__SetRobotPose_Event__rosidl_typesupport_introspection_c__fetch_function__SetRobotPose_Event__request(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const armpi_fpv_kinematics__srv__SetRobotPose_Request * item =
    ((const armpi_fpv_kinematics__srv__SetRobotPose_Request *)
    armpi_fpv_kinematics__srv__SetRobotPose_Event__rosidl_typesupport_introspection_c__get_const_function__SetRobotPose_Event__request(untyped_member, index));
  armpi_fpv_kinematics__srv__SetRobotPose_Request * value =
    (armpi_fpv_kinematics__srv__SetRobotPose_Request *)(untyped_value);
  *value = *item;
}

void armpi_fpv_kinematics__srv__SetRobotPose_Event__rosidl_typesupport_introspection_c__assign_function__SetRobotPose_Event__request(
  void * untyped_member, size_t index, const void * untyped_value)
{
  armpi_fpv_kinematics__srv__SetRobotPose_Request * item =
    ((armpi_fpv_kinematics__srv__SetRobotPose_Request *)
    armpi_fpv_kinematics__srv__SetRobotPose_Event__rosidl_typesupport_introspection_c__get_function__SetRobotPose_Event__request(untyped_member, index));
  const armpi_fpv_kinematics__srv__SetRobotPose_Request * value =
    (const armpi_fpv_kinematics__srv__SetRobotPose_Request *)(untyped_value);
  *item = *value;
}

bool armpi_fpv_kinematics__srv__SetRobotPose_Event__rosidl_typesupport_introspection_c__resize_function__SetRobotPose_Event__request(
  void * untyped_member, size_t size)
{
  armpi_fpv_kinematics__srv__SetRobotPose_Request__Sequence * member =
    (armpi_fpv_kinematics__srv__SetRobotPose_Request__Sequence *)(untyped_member);
  armpi_fpv_kinematics__srv__SetRobotPose_Request__Sequence__fini(member);
  return armpi_fpv_kinematics__srv__SetRobotPose_Request__Sequence__init(member, size);
}

size_t armpi_fpv_kinematics__srv__SetRobotPose_Event__rosidl_typesupport_introspection_c__size_function__SetRobotPose_Event__response(
  const void * untyped_member)
{
  const armpi_fpv_kinematics__srv__SetRobotPose_Response__Sequence * member =
    (const armpi_fpv_kinematics__srv__SetRobotPose_Response__Sequence *)(untyped_member);
  return member->size;
}

const void * armpi_fpv_kinematics__srv__SetRobotPose_Event__rosidl_typesupport_introspection_c__get_const_function__SetRobotPose_Event__response(
  const void * untyped_member, size_t index)
{
  const armpi_fpv_kinematics__srv__SetRobotPose_Response__Sequence * member =
    (const armpi_fpv_kinematics__srv__SetRobotPose_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void * armpi_fpv_kinematics__srv__SetRobotPose_Event__rosidl_typesupport_introspection_c__get_function__SetRobotPose_Event__response(
  void * untyped_member, size_t index)
{
  armpi_fpv_kinematics__srv__SetRobotPose_Response__Sequence * member =
    (armpi_fpv_kinematics__srv__SetRobotPose_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void armpi_fpv_kinematics__srv__SetRobotPose_Event__rosidl_typesupport_introspection_c__fetch_function__SetRobotPose_Event__response(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const armpi_fpv_kinematics__srv__SetRobotPose_Response * item =
    ((const armpi_fpv_kinematics__srv__SetRobotPose_Response *)
    armpi_fpv_kinematics__srv__SetRobotPose_Event__rosidl_typesupport_introspection_c__get_const_function__SetRobotPose_Event__response(untyped_member, index));
  armpi_fpv_kinematics__srv__SetRobotPose_Response * value =
    (armpi_fpv_kinematics__srv__SetRobotPose_Response *)(untyped_value);
  *value = *item;
}

void armpi_fpv_kinematics__srv__SetRobotPose_Event__rosidl_typesupport_introspection_c__assign_function__SetRobotPose_Event__response(
  void * untyped_member, size_t index, const void * untyped_value)
{
  armpi_fpv_kinematics__srv__SetRobotPose_Response * item =
    ((armpi_fpv_kinematics__srv__SetRobotPose_Response *)
    armpi_fpv_kinematics__srv__SetRobotPose_Event__rosidl_typesupport_introspection_c__get_function__SetRobotPose_Event__response(untyped_member, index));
  const armpi_fpv_kinematics__srv__SetRobotPose_Response * value =
    (const armpi_fpv_kinematics__srv__SetRobotPose_Response *)(untyped_value);
  *item = *value;
}

bool armpi_fpv_kinematics__srv__SetRobotPose_Event__rosidl_typesupport_introspection_c__resize_function__SetRobotPose_Event__response(
  void * untyped_member, size_t size)
{
  armpi_fpv_kinematics__srv__SetRobotPose_Response__Sequence * member =
    (armpi_fpv_kinematics__srv__SetRobotPose_Response__Sequence *)(untyped_member);
  armpi_fpv_kinematics__srv__SetRobotPose_Response__Sequence__fini(member);
  return armpi_fpv_kinematics__srv__SetRobotPose_Response__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember armpi_fpv_kinematics__srv__SetRobotPose_Event__rosidl_typesupport_introspection_c__SetRobotPose_Event_message_member_array[3] = {
  {
    "info",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(armpi_fpv_kinematics__srv__SetRobotPose_Event, info),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "request",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(armpi_fpv_kinematics__srv__SetRobotPose_Event, request),  // bytes offset in struct
    NULL,  // default value
    armpi_fpv_kinematics__srv__SetRobotPose_Event__rosidl_typesupport_introspection_c__size_function__SetRobotPose_Event__request,  // size() function pointer
    armpi_fpv_kinematics__srv__SetRobotPose_Event__rosidl_typesupport_introspection_c__get_const_function__SetRobotPose_Event__request,  // get_const(index) function pointer
    armpi_fpv_kinematics__srv__SetRobotPose_Event__rosidl_typesupport_introspection_c__get_function__SetRobotPose_Event__request,  // get(index) function pointer
    armpi_fpv_kinematics__srv__SetRobotPose_Event__rosidl_typesupport_introspection_c__fetch_function__SetRobotPose_Event__request,  // fetch(index, &value) function pointer
    armpi_fpv_kinematics__srv__SetRobotPose_Event__rosidl_typesupport_introspection_c__assign_function__SetRobotPose_Event__request,  // assign(index, value) function pointer
    armpi_fpv_kinematics__srv__SetRobotPose_Event__rosidl_typesupport_introspection_c__resize_function__SetRobotPose_Event__request  // resize(index) function pointer
  },
  {
    "response",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(armpi_fpv_kinematics__srv__SetRobotPose_Event, response),  // bytes offset in struct
    NULL,  // default value
    armpi_fpv_kinematics__srv__SetRobotPose_Event__rosidl_typesupport_introspection_c__size_function__SetRobotPose_Event__response,  // size() function pointer
    armpi_fpv_kinematics__srv__SetRobotPose_Event__rosidl_typesupport_introspection_c__get_const_function__SetRobotPose_Event__response,  // get_const(index) function pointer
    armpi_fpv_kinematics__srv__SetRobotPose_Event__rosidl_typesupport_introspection_c__get_function__SetRobotPose_Event__response,  // get(index) function pointer
    armpi_fpv_kinematics__srv__SetRobotPose_Event__rosidl_typesupport_introspection_c__fetch_function__SetRobotPose_Event__response,  // fetch(index, &value) function pointer
    armpi_fpv_kinematics__srv__SetRobotPose_Event__rosidl_typesupport_introspection_c__assign_function__SetRobotPose_Event__response,  // assign(index, value) function pointer
    armpi_fpv_kinematics__srv__SetRobotPose_Event__rosidl_typesupport_introspection_c__resize_function__SetRobotPose_Event__response  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers armpi_fpv_kinematics__srv__SetRobotPose_Event__rosidl_typesupport_introspection_c__SetRobotPose_Event_message_members = {
  "armpi_fpv_kinematics__srv",  // message namespace
  "SetRobotPose_Event",  // message name
  3,  // number of fields
  sizeof(armpi_fpv_kinematics__srv__SetRobotPose_Event),
  false,  // has_any_key_member_
  armpi_fpv_kinematics__srv__SetRobotPose_Event__rosidl_typesupport_introspection_c__SetRobotPose_Event_message_member_array,  // message members
  armpi_fpv_kinematics__srv__SetRobotPose_Event__rosidl_typesupport_introspection_c__SetRobotPose_Event_init_function,  // function to initialize message memory (memory has to be allocated)
  armpi_fpv_kinematics__srv__SetRobotPose_Event__rosidl_typesupport_introspection_c__SetRobotPose_Event_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t armpi_fpv_kinematics__srv__SetRobotPose_Event__rosidl_typesupport_introspection_c__SetRobotPose_Event_message_type_support_handle = {
  0,
  &armpi_fpv_kinematics__srv__SetRobotPose_Event__rosidl_typesupport_introspection_c__SetRobotPose_Event_message_members,
  get_message_typesupport_handle_function,
  &armpi_fpv_kinematics__srv__SetRobotPose_Event__get_type_hash,
  &armpi_fpv_kinematics__srv__SetRobotPose_Event__get_type_description,
  &armpi_fpv_kinematics__srv__SetRobotPose_Event__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_armpi_fpv_kinematics
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, armpi_fpv_kinematics, srv, SetRobotPose_Event)() {
  armpi_fpv_kinematics__srv__SetRobotPose_Event__rosidl_typesupport_introspection_c__SetRobotPose_Event_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, service_msgs, msg, ServiceEventInfo)();
  armpi_fpv_kinematics__srv__SetRobotPose_Event__rosidl_typesupport_introspection_c__SetRobotPose_Event_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, armpi_fpv_kinematics, srv, SetRobotPose_Request)();
  armpi_fpv_kinematics__srv__SetRobotPose_Event__rosidl_typesupport_introspection_c__SetRobotPose_Event_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, armpi_fpv_kinematics, srv, SetRobotPose_Response)();
  if (!armpi_fpv_kinematics__srv__SetRobotPose_Event__rosidl_typesupport_introspection_c__SetRobotPose_Event_message_type_support_handle.typesupport_identifier) {
    armpi_fpv_kinematics__srv__SetRobotPose_Event__rosidl_typesupport_introspection_c__SetRobotPose_Event_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &armpi_fpv_kinematics__srv__SetRobotPose_Event__rosidl_typesupport_introspection_c__SetRobotPose_Event_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "armpi_fpv_kinematics/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "armpi_fpv_kinematics/srv/detail/set_robot_pose__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers armpi_fpv_kinematics__srv__detail__set_robot_pose__rosidl_typesupport_introspection_c__SetRobotPose_service_members = {
  "armpi_fpv_kinematics__srv",  // service namespace
  "SetRobotPose",  // service name
  // the following fields are initialized below on first access
  NULL,  // request message
  // armpi_fpv_kinematics__srv__detail__set_robot_pose__rosidl_typesupport_introspection_c__SetRobotPose_Request_message_type_support_handle,
  NULL,  // response message
  // armpi_fpv_kinematics__srv__detail__set_robot_pose__rosidl_typesupport_introspection_c__SetRobotPose_Response_message_type_support_handle
  NULL  // event_message
  // armpi_fpv_kinematics__srv__detail__set_robot_pose__rosidl_typesupport_introspection_c__SetRobotPose_Response_message_type_support_handle
};


static rosidl_service_type_support_t armpi_fpv_kinematics__srv__detail__set_robot_pose__rosidl_typesupport_introspection_c__SetRobotPose_service_type_support_handle = {
  0,
  &armpi_fpv_kinematics__srv__detail__set_robot_pose__rosidl_typesupport_introspection_c__SetRobotPose_service_members,
  get_service_typesupport_handle_function,
  &armpi_fpv_kinematics__srv__SetRobotPose_Request__rosidl_typesupport_introspection_c__SetRobotPose_Request_message_type_support_handle,
  &armpi_fpv_kinematics__srv__SetRobotPose_Response__rosidl_typesupport_introspection_c__SetRobotPose_Response_message_type_support_handle,
  &armpi_fpv_kinematics__srv__SetRobotPose_Event__rosidl_typesupport_introspection_c__SetRobotPose_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    armpi_fpv_kinematics,
    srv,
    SetRobotPose
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    armpi_fpv_kinematics,
    srv,
    SetRobotPose
  ),
  &armpi_fpv_kinematics__srv__SetRobotPose__get_type_hash,
  &armpi_fpv_kinematics__srv__SetRobotPose__get_type_description,
  &armpi_fpv_kinematics__srv__SetRobotPose__get_type_description_sources,
};

// Forward declaration of message type support functions for service members
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, armpi_fpv_kinematics, srv, SetRobotPose_Request)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, armpi_fpv_kinematics, srv, SetRobotPose_Response)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, armpi_fpv_kinematics, srv, SetRobotPose_Event)(void);

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_armpi_fpv_kinematics
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, armpi_fpv_kinematics, srv, SetRobotPose)(void) {
  if (!armpi_fpv_kinematics__srv__detail__set_robot_pose__rosidl_typesupport_introspection_c__SetRobotPose_service_type_support_handle.typesupport_identifier) {
    armpi_fpv_kinematics__srv__detail__set_robot_pose__rosidl_typesupport_introspection_c__SetRobotPose_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)armpi_fpv_kinematics__srv__detail__set_robot_pose__rosidl_typesupport_introspection_c__SetRobotPose_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, armpi_fpv_kinematics, srv, SetRobotPose_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, armpi_fpv_kinematics, srv, SetRobotPose_Response)()->data;
  }
  if (!service_members->event_members_) {
    service_members->event_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, armpi_fpv_kinematics, srv, SetRobotPose_Event)()->data;
  }

  return &armpi_fpv_kinematics__srv__detail__set_robot_pose__rosidl_typesupport_introspection_c__SetRobotPose_service_type_support_handle;
}
