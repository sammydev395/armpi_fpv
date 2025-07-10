// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from armpi_fpv_kinematics:msg/JointsRange.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "armpi_fpv_kinematics/msg/detail/joints_range__rosidl_typesupport_introspection_c.h"
#include "armpi_fpv_kinematics/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "armpi_fpv_kinematics/msg/detail/joints_range__functions.h"
#include "armpi_fpv_kinematics/msg/detail/joints_range__struct.h"


// Include directives for member types
// Member `joint1`
// Member `joint2`
// Member `joint3`
// Member `joint4`
// Member `joint5`
#include "armpi_fpv_kinematics/msg/joint_range.h"
// Member `joint1`
// Member `joint2`
// Member `joint3`
// Member `joint4`
// Member `joint5`
#include "armpi_fpv_kinematics/msg/detail/joint_range__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void armpi_fpv_kinematics__msg__JointsRange__rosidl_typesupport_introspection_c__JointsRange_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  armpi_fpv_kinematics__msg__JointsRange__init(message_memory);
}

void armpi_fpv_kinematics__msg__JointsRange__rosidl_typesupport_introspection_c__JointsRange_fini_function(void * message_memory)
{
  armpi_fpv_kinematics__msg__JointsRange__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember armpi_fpv_kinematics__msg__JointsRange__rosidl_typesupport_introspection_c__JointsRange_message_member_array[5] = {
  {
    "joint1",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(armpi_fpv_kinematics__msg__JointsRange, joint1),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "joint2",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(armpi_fpv_kinematics__msg__JointsRange, joint2),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "joint3",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(armpi_fpv_kinematics__msg__JointsRange, joint3),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "joint4",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(armpi_fpv_kinematics__msg__JointsRange, joint4),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "joint5",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(armpi_fpv_kinematics__msg__JointsRange, joint5),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers armpi_fpv_kinematics__msg__JointsRange__rosidl_typesupport_introspection_c__JointsRange_message_members = {
  "armpi_fpv_kinematics__msg",  // message namespace
  "JointsRange",  // message name
  5,  // number of fields
  sizeof(armpi_fpv_kinematics__msg__JointsRange),
  false,  // has_any_key_member_
  armpi_fpv_kinematics__msg__JointsRange__rosidl_typesupport_introspection_c__JointsRange_message_member_array,  // message members
  armpi_fpv_kinematics__msg__JointsRange__rosidl_typesupport_introspection_c__JointsRange_init_function,  // function to initialize message memory (memory has to be allocated)
  armpi_fpv_kinematics__msg__JointsRange__rosidl_typesupport_introspection_c__JointsRange_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t armpi_fpv_kinematics__msg__JointsRange__rosidl_typesupport_introspection_c__JointsRange_message_type_support_handle = {
  0,
  &armpi_fpv_kinematics__msg__JointsRange__rosidl_typesupport_introspection_c__JointsRange_message_members,
  get_message_typesupport_handle_function,
  &armpi_fpv_kinematics__msg__JointsRange__get_type_hash,
  &armpi_fpv_kinematics__msg__JointsRange__get_type_description,
  &armpi_fpv_kinematics__msg__JointsRange__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_armpi_fpv_kinematics
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, armpi_fpv_kinematics, msg, JointsRange)() {
  armpi_fpv_kinematics__msg__JointsRange__rosidl_typesupport_introspection_c__JointsRange_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, armpi_fpv_kinematics, msg, JointRange)();
  armpi_fpv_kinematics__msg__JointsRange__rosidl_typesupport_introspection_c__JointsRange_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, armpi_fpv_kinematics, msg, JointRange)();
  armpi_fpv_kinematics__msg__JointsRange__rosidl_typesupport_introspection_c__JointsRange_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, armpi_fpv_kinematics, msg, JointRange)();
  armpi_fpv_kinematics__msg__JointsRange__rosidl_typesupport_introspection_c__JointsRange_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, armpi_fpv_kinematics, msg, JointRange)();
  armpi_fpv_kinematics__msg__JointsRange__rosidl_typesupport_introspection_c__JointsRange_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, armpi_fpv_kinematics, msg, JointRange)();
  if (!armpi_fpv_kinematics__msg__JointsRange__rosidl_typesupport_introspection_c__JointsRange_message_type_support_handle.typesupport_identifier) {
    armpi_fpv_kinematics__msg__JointsRange__rosidl_typesupport_introspection_c__JointsRange_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &armpi_fpv_kinematics__msg__JointsRange__rosidl_typesupport_introspection_c__JointsRange_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
