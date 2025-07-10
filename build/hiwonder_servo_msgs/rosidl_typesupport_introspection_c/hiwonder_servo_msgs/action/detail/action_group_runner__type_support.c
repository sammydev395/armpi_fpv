// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from hiwonder_servo_msgs:action/ActionGroupRunner.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "hiwonder_servo_msgs/action/detail/action_group_runner__rosidl_typesupport_introspection_c.h"
#include "hiwonder_servo_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "hiwonder_servo_msgs/action/detail/action_group_runner__functions.h"
#include "hiwonder_servo_msgs/action/detail/action_group_runner__struct.h"


// Include directives for member types
// Member `name`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void hiwonder_servo_msgs__action__ActionGroupRunner_Goal__rosidl_typesupport_introspection_c__ActionGroupRunner_Goal_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  hiwonder_servo_msgs__action__ActionGroupRunner_Goal__init(message_memory);
}

void hiwonder_servo_msgs__action__ActionGroupRunner_Goal__rosidl_typesupport_introspection_c__ActionGroupRunner_Goal_fini_function(void * message_memory)
{
  hiwonder_servo_msgs__action__ActionGroupRunner_Goal__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember hiwonder_servo_msgs__action__ActionGroupRunner_Goal__rosidl_typesupport_introspection_c__ActionGroupRunner_Goal_message_member_array[2] = {
  {
    "name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hiwonder_servo_msgs__action__ActionGroupRunner_Goal, name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "repeat",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hiwonder_servo_msgs__action__ActionGroupRunner_Goal, repeat),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers hiwonder_servo_msgs__action__ActionGroupRunner_Goal__rosidl_typesupport_introspection_c__ActionGroupRunner_Goal_message_members = {
  "hiwonder_servo_msgs__action",  // message namespace
  "ActionGroupRunner_Goal",  // message name
  2,  // number of fields
  sizeof(hiwonder_servo_msgs__action__ActionGroupRunner_Goal),
  false,  // has_any_key_member_
  hiwonder_servo_msgs__action__ActionGroupRunner_Goal__rosidl_typesupport_introspection_c__ActionGroupRunner_Goal_message_member_array,  // message members
  hiwonder_servo_msgs__action__ActionGroupRunner_Goal__rosidl_typesupport_introspection_c__ActionGroupRunner_Goal_init_function,  // function to initialize message memory (memory has to be allocated)
  hiwonder_servo_msgs__action__ActionGroupRunner_Goal__rosidl_typesupport_introspection_c__ActionGroupRunner_Goal_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t hiwonder_servo_msgs__action__ActionGroupRunner_Goal__rosidl_typesupport_introspection_c__ActionGroupRunner_Goal_message_type_support_handle = {
  0,
  &hiwonder_servo_msgs__action__ActionGroupRunner_Goal__rosidl_typesupport_introspection_c__ActionGroupRunner_Goal_message_members,
  get_message_typesupport_handle_function,
  &hiwonder_servo_msgs__action__ActionGroupRunner_Goal__get_type_hash,
  &hiwonder_servo_msgs__action__ActionGroupRunner_Goal__get_type_description,
  &hiwonder_servo_msgs__action__ActionGroupRunner_Goal__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_hiwonder_servo_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hiwonder_servo_msgs, action, ActionGroupRunner_Goal)() {
  if (!hiwonder_servo_msgs__action__ActionGroupRunner_Goal__rosidl_typesupport_introspection_c__ActionGroupRunner_Goal_message_type_support_handle.typesupport_identifier) {
    hiwonder_servo_msgs__action__ActionGroupRunner_Goal__rosidl_typesupport_introspection_c__ActionGroupRunner_Goal_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &hiwonder_servo_msgs__action__ActionGroupRunner_Goal__rosidl_typesupport_introspection_c__ActionGroupRunner_Goal_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "hiwonder_servo_msgs/action/detail/action_group_runner__rosidl_typesupport_introspection_c.h"
// already included above
// #include "hiwonder_servo_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "hiwonder_servo_msgs/action/detail/action_group_runner__functions.h"
// already included above
// #include "hiwonder_servo_msgs/action/detail/action_group_runner__struct.h"


// Include directives for member types
// Member `name`
// Member `result`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void hiwonder_servo_msgs__action__ActionGroupRunner_Result__rosidl_typesupport_introspection_c__ActionGroupRunner_Result_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  hiwonder_servo_msgs__action__ActionGroupRunner_Result__init(message_memory);
}

void hiwonder_servo_msgs__action__ActionGroupRunner_Result__rosidl_typesupport_introspection_c__ActionGroupRunner_Result_fini_function(void * message_memory)
{
  hiwonder_servo_msgs__action__ActionGroupRunner_Result__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember hiwonder_servo_msgs__action__ActionGroupRunner_Result__rosidl_typesupport_introspection_c__ActionGroupRunner_Result_message_member_array[2] = {
  {
    "name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hiwonder_servo_msgs__action__ActionGroupRunner_Result, name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "result",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hiwonder_servo_msgs__action__ActionGroupRunner_Result, result),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers hiwonder_servo_msgs__action__ActionGroupRunner_Result__rosidl_typesupport_introspection_c__ActionGroupRunner_Result_message_members = {
  "hiwonder_servo_msgs__action",  // message namespace
  "ActionGroupRunner_Result",  // message name
  2,  // number of fields
  sizeof(hiwonder_servo_msgs__action__ActionGroupRunner_Result),
  false,  // has_any_key_member_
  hiwonder_servo_msgs__action__ActionGroupRunner_Result__rosidl_typesupport_introspection_c__ActionGroupRunner_Result_message_member_array,  // message members
  hiwonder_servo_msgs__action__ActionGroupRunner_Result__rosidl_typesupport_introspection_c__ActionGroupRunner_Result_init_function,  // function to initialize message memory (memory has to be allocated)
  hiwonder_servo_msgs__action__ActionGroupRunner_Result__rosidl_typesupport_introspection_c__ActionGroupRunner_Result_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t hiwonder_servo_msgs__action__ActionGroupRunner_Result__rosidl_typesupport_introspection_c__ActionGroupRunner_Result_message_type_support_handle = {
  0,
  &hiwonder_servo_msgs__action__ActionGroupRunner_Result__rosidl_typesupport_introspection_c__ActionGroupRunner_Result_message_members,
  get_message_typesupport_handle_function,
  &hiwonder_servo_msgs__action__ActionGroupRunner_Result__get_type_hash,
  &hiwonder_servo_msgs__action__ActionGroupRunner_Result__get_type_description,
  &hiwonder_servo_msgs__action__ActionGroupRunner_Result__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_hiwonder_servo_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hiwonder_servo_msgs, action, ActionGroupRunner_Result)() {
  if (!hiwonder_servo_msgs__action__ActionGroupRunner_Result__rosidl_typesupport_introspection_c__ActionGroupRunner_Result_message_type_support_handle.typesupport_identifier) {
    hiwonder_servo_msgs__action__ActionGroupRunner_Result__rosidl_typesupport_introspection_c__ActionGroupRunner_Result_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &hiwonder_servo_msgs__action__ActionGroupRunner_Result__rosidl_typesupport_introspection_c__ActionGroupRunner_Result_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "hiwonder_servo_msgs/action/detail/action_group_runner__rosidl_typesupport_introspection_c.h"
// already included above
// #include "hiwonder_servo_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "hiwonder_servo_msgs/action/detail/action_group_runner__functions.h"
// already included above
// #include "hiwonder_servo_msgs/action/detail/action_group_runner__struct.h"


// Include directives for member types
// Member `name`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void hiwonder_servo_msgs__action__ActionGroupRunner_Feedback__rosidl_typesupport_introspection_c__ActionGroupRunner_Feedback_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  hiwonder_servo_msgs__action__ActionGroupRunner_Feedback__init(message_memory);
}

void hiwonder_servo_msgs__action__ActionGroupRunner_Feedback__rosidl_typesupport_introspection_c__ActionGroupRunner_Feedback_fini_function(void * message_memory)
{
  hiwonder_servo_msgs__action__ActionGroupRunner_Feedback__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember hiwonder_servo_msgs__action__ActionGroupRunner_Feedback__rosidl_typesupport_introspection_c__ActionGroupRunner_Feedback_message_member_array[2] = {
  {
    "name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hiwonder_servo_msgs__action__ActionGroupRunner_Feedback, name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "step",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hiwonder_servo_msgs__action__ActionGroupRunner_Feedback, step),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers hiwonder_servo_msgs__action__ActionGroupRunner_Feedback__rosidl_typesupport_introspection_c__ActionGroupRunner_Feedback_message_members = {
  "hiwonder_servo_msgs__action",  // message namespace
  "ActionGroupRunner_Feedback",  // message name
  2,  // number of fields
  sizeof(hiwonder_servo_msgs__action__ActionGroupRunner_Feedback),
  false,  // has_any_key_member_
  hiwonder_servo_msgs__action__ActionGroupRunner_Feedback__rosidl_typesupport_introspection_c__ActionGroupRunner_Feedback_message_member_array,  // message members
  hiwonder_servo_msgs__action__ActionGroupRunner_Feedback__rosidl_typesupport_introspection_c__ActionGroupRunner_Feedback_init_function,  // function to initialize message memory (memory has to be allocated)
  hiwonder_servo_msgs__action__ActionGroupRunner_Feedback__rosidl_typesupport_introspection_c__ActionGroupRunner_Feedback_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t hiwonder_servo_msgs__action__ActionGroupRunner_Feedback__rosidl_typesupport_introspection_c__ActionGroupRunner_Feedback_message_type_support_handle = {
  0,
  &hiwonder_servo_msgs__action__ActionGroupRunner_Feedback__rosidl_typesupport_introspection_c__ActionGroupRunner_Feedback_message_members,
  get_message_typesupport_handle_function,
  &hiwonder_servo_msgs__action__ActionGroupRunner_Feedback__get_type_hash,
  &hiwonder_servo_msgs__action__ActionGroupRunner_Feedback__get_type_description,
  &hiwonder_servo_msgs__action__ActionGroupRunner_Feedback__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_hiwonder_servo_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hiwonder_servo_msgs, action, ActionGroupRunner_Feedback)() {
  if (!hiwonder_servo_msgs__action__ActionGroupRunner_Feedback__rosidl_typesupport_introspection_c__ActionGroupRunner_Feedback_message_type_support_handle.typesupport_identifier) {
    hiwonder_servo_msgs__action__ActionGroupRunner_Feedback__rosidl_typesupport_introspection_c__ActionGroupRunner_Feedback_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &hiwonder_servo_msgs__action__ActionGroupRunner_Feedback__rosidl_typesupport_introspection_c__ActionGroupRunner_Feedback_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "hiwonder_servo_msgs/action/detail/action_group_runner__rosidl_typesupport_introspection_c.h"
// already included above
// #include "hiwonder_servo_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "hiwonder_servo_msgs/action/detail/action_group_runner__functions.h"
// already included above
// #include "hiwonder_servo_msgs/action/detail/action_group_runner__struct.h"


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"
// Member `goal`
#include "hiwonder_servo_msgs/action/action_group_runner.h"
// Member `goal`
// already included above
// #include "hiwonder_servo_msgs/action/detail/action_group_runner__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void hiwonder_servo_msgs__action__ActionGroupRunner_SendGoal_Request__rosidl_typesupport_introspection_c__ActionGroupRunner_SendGoal_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  hiwonder_servo_msgs__action__ActionGroupRunner_SendGoal_Request__init(message_memory);
}

void hiwonder_servo_msgs__action__ActionGroupRunner_SendGoal_Request__rosidl_typesupport_introspection_c__ActionGroupRunner_SendGoal_Request_fini_function(void * message_memory)
{
  hiwonder_servo_msgs__action__ActionGroupRunner_SendGoal_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember hiwonder_servo_msgs__action__ActionGroupRunner_SendGoal_Request__rosidl_typesupport_introspection_c__ActionGroupRunner_SendGoal_Request_message_member_array[2] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hiwonder_servo_msgs__action__ActionGroupRunner_SendGoal_Request, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "goal",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hiwonder_servo_msgs__action__ActionGroupRunner_SendGoal_Request, goal),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers hiwonder_servo_msgs__action__ActionGroupRunner_SendGoal_Request__rosidl_typesupport_introspection_c__ActionGroupRunner_SendGoal_Request_message_members = {
  "hiwonder_servo_msgs__action",  // message namespace
  "ActionGroupRunner_SendGoal_Request",  // message name
  2,  // number of fields
  sizeof(hiwonder_servo_msgs__action__ActionGroupRunner_SendGoal_Request),
  false,  // has_any_key_member_
  hiwonder_servo_msgs__action__ActionGroupRunner_SendGoal_Request__rosidl_typesupport_introspection_c__ActionGroupRunner_SendGoal_Request_message_member_array,  // message members
  hiwonder_servo_msgs__action__ActionGroupRunner_SendGoal_Request__rosidl_typesupport_introspection_c__ActionGroupRunner_SendGoal_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  hiwonder_servo_msgs__action__ActionGroupRunner_SendGoal_Request__rosidl_typesupport_introspection_c__ActionGroupRunner_SendGoal_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t hiwonder_servo_msgs__action__ActionGroupRunner_SendGoal_Request__rosidl_typesupport_introspection_c__ActionGroupRunner_SendGoal_Request_message_type_support_handle = {
  0,
  &hiwonder_servo_msgs__action__ActionGroupRunner_SendGoal_Request__rosidl_typesupport_introspection_c__ActionGroupRunner_SendGoal_Request_message_members,
  get_message_typesupport_handle_function,
  &hiwonder_servo_msgs__action__ActionGroupRunner_SendGoal_Request__get_type_hash,
  &hiwonder_servo_msgs__action__ActionGroupRunner_SendGoal_Request__get_type_description,
  &hiwonder_servo_msgs__action__ActionGroupRunner_SendGoal_Request__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_hiwonder_servo_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hiwonder_servo_msgs, action, ActionGroupRunner_SendGoal_Request)() {
  hiwonder_servo_msgs__action__ActionGroupRunner_SendGoal_Request__rosidl_typesupport_introspection_c__ActionGroupRunner_SendGoal_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  hiwonder_servo_msgs__action__ActionGroupRunner_SendGoal_Request__rosidl_typesupport_introspection_c__ActionGroupRunner_SendGoal_Request_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hiwonder_servo_msgs, action, ActionGroupRunner_Goal)();
  if (!hiwonder_servo_msgs__action__ActionGroupRunner_SendGoal_Request__rosidl_typesupport_introspection_c__ActionGroupRunner_SendGoal_Request_message_type_support_handle.typesupport_identifier) {
    hiwonder_servo_msgs__action__ActionGroupRunner_SendGoal_Request__rosidl_typesupport_introspection_c__ActionGroupRunner_SendGoal_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &hiwonder_servo_msgs__action__ActionGroupRunner_SendGoal_Request__rosidl_typesupport_introspection_c__ActionGroupRunner_SendGoal_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "hiwonder_servo_msgs/action/detail/action_group_runner__rosidl_typesupport_introspection_c.h"
// already included above
// #include "hiwonder_servo_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "hiwonder_servo_msgs/action/detail/action_group_runner__functions.h"
// already included above
// #include "hiwonder_servo_msgs/action/detail/action_group_runner__struct.h"


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/time.h"
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void hiwonder_servo_msgs__action__ActionGroupRunner_SendGoal_Response__rosidl_typesupport_introspection_c__ActionGroupRunner_SendGoal_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  hiwonder_servo_msgs__action__ActionGroupRunner_SendGoal_Response__init(message_memory);
}

void hiwonder_servo_msgs__action__ActionGroupRunner_SendGoal_Response__rosidl_typesupport_introspection_c__ActionGroupRunner_SendGoal_Response_fini_function(void * message_memory)
{
  hiwonder_servo_msgs__action__ActionGroupRunner_SendGoal_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember hiwonder_servo_msgs__action__ActionGroupRunner_SendGoal_Response__rosidl_typesupport_introspection_c__ActionGroupRunner_SendGoal_Response_message_member_array[2] = {
  {
    "accepted",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hiwonder_servo_msgs__action__ActionGroupRunner_SendGoal_Response, accepted),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "stamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hiwonder_servo_msgs__action__ActionGroupRunner_SendGoal_Response, stamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers hiwonder_servo_msgs__action__ActionGroupRunner_SendGoal_Response__rosidl_typesupport_introspection_c__ActionGroupRunner_SendGoal_Response_message_members = {
  "hiwonder_servo_msgs__action",  // message namespace
  "ActionGroupRunner_SendGoal_Response",  // message name
  2,  // number of fields
  sizeof(hiwonder_servo_msgs__action__ActionGroupRunner_SendGoal_Response),
  false,  // has_any_key_member_
  hiwonder_servo_msgs__action__ActionGroupRunner_SendGoal_Response__rosidl_typesupport_introspection_c__ActionGroupRunner_SendGoal_Response_message_member_array,  // message members
  hiwonder_servo_msgs__action__ActionGroupRunner_SendGoal_Response__rosidl_typesupport_introspection_c__ActionGroupRunner_SendGoal_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  hiwonder_servo_msgs__action__ActionGroupRunner_SendGoal_Response__rosidl_typesupport_introspection_c__ActionGroupRunner_SendGoal_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t hiwonder_servo_msgs__action__ActionGroupRunner_SendGoal_Response__rosidl_typesupport_introspection_c__ActionGroupRunner_SendGoal_Response_message_type_support_handle = {
  0,
  &hiwonder_servo_msgs__action__ActionGroupRunner_SendGoal_Response__rosidl_typesupport_introspection_c__ActionGroupRunner_SendGoal_Response_message_members,
  get_message_typesupport_handle_function,
  &hiwonder_servo_msgs__action__ActionGroupRunner_SendGoal_Response__get_type_hash,
  &hiwonder_servo_msgs__action__ActionGroupRunner_SendGoal_Response__get_type_description,
  &hiwonder_servo_msgs__action__ActionGroupRunner_SendGoal_Response__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_hiwonder_servo_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hiwonder_servo_msgs, action, ActionGroupRunner_SendGoal_Response)() {
  hiwonder_servo_msgs__action__ActionGroupRunner_SendGoal_Response__rosidl_typesupport_introspection_c__ActionGroupRunner_SendGoal_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  if (!hiwonder_servo_msgs__action__ActionGroupRunner_SendGoal_Response__rosidl_typesupport_introspection_c__ActionGroupRunner_SendGoal_Response_message_type_support_handle.typesupport_identifier) {
    hiwonder_servo_msgs__action__ActionGroupRunner_SendGoal_Response__rosidl_typesupport_introspection_c__ActionGroupRunner_SendGoal_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &hiwonder_servo_msgs__action__ActionGroupRunner_SendGoal_Response__rosidl_typesupport_introspection_c__ActionGroupRunner_SendGoal_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "hiwonder_servo_msgs/action/detail/action_group_runner__rosidl_typesupport_introspection_c.h"
// already included above
// #include "hiwonder_servo_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "hiwonder_servo_msgs/action/detail/action_group_runner__functions.h"
// already included above
// #include "hiwonder_servo_msgs/action/detail/action_group_runner__struct.h"


// Include directives for member types
// Member `info`
#include "service_msgs/msg/service_event_info.h"
// Member `info`
#include "service_msgs/msg/detail/service_event_info__rosidl_typesupport_introspection_c.h"
// Member `request`
// Member `response`
// already included above
// #include "hiwonder_servo_msgs/action/action_group_runner.h"
// Member `request`
// Member `response`
// already included above
// #include "hiwonder_servo_msgs/action/detail/action_group_runner__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void hiwonder_servo_msgs__action__ActionGroupRunner_SendGoal_Event__rosidl_typesupport_introspection_c__ActionGroupRunner_SendGoal_Event_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  hiwonder_servo_msgs__action__ActionGroupRunner_SendGoal_Event__init(message_memory);
}

void hiwonder_servo_msgs__action__ActionGroupRunner_SendGoal_Event__rosidl_typesupport_introspection_c__ActionGroupRunner_SendGoal_Event_fini_function(void * message_memory)
{
  hiwonder_servo_msgs__action__ActionGroupRunner_SendGoal_Event__fini(message_memory);
}

size_t hiwonder_servo_msgs__action__ActionGroupRunner_SendGoal_Event__rosidl_typesupport_introspection_c__size_function__ActionGroupRunner_SendGoal_Event__request(
  const void * untyped_member)
{
  const hiwonder_servo_msgs__action__ActionGroupRunner_SendGoal_Request__Sequence * member =
    (const hiwonder_servo_msgs__action__ActionGroupRunner_SendGoal_Request__Sequence *)(untyped_member);
  return member->size;
}

const void * hiwonder_servo_msgs__action__ActionGroupRunner_SendGoal_Event__rosidl_typesupport_introspection_c__get_const_function__ActionGroupRunner_SendGoal_Event__request(
  const void * untyped_member, size_t index)
{
  const hiwonder_servo_msgs__action__ActionGroupRunner_SendGoal_Request__Sequence * member =
    (const hiwonder_servo_msgs__action__ActionGroupRunner_SendGoal_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void * hiwonder_servo_msgs__action__ActionGroupRunner_SendGoal_Event__rosidl_typesupport_introspection_c__get_function__ActionGroupRunner_SendGoal_Event__request(
  void * untyped_member, size_t index)
{
  hiwonder_servo_msgs__action__ActionGroupRunner_SendGoal_Request__Sequence * member =
    (hiwonder_servo_msgs__action__ActionGroupRunner_SendGoal_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void hiwonder_servo_msgs__action__ActionGroupRunner_SendGoal_Event__rosidl_typesupport_introspection_c__fetch_function__ActionGroupRunner_SendGoal_Event__request(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const hiwonder_servo_msgs__action__ActionGroupRunner_SendGoal_Request * item =
    ((const hiwonder_servo_msgs__action__ActionGroupRunner_SendGoal_Request *)
    hiwonder_servo_msgs__action__ActionGroupRunner_SendGoal_Event__rosidl_typesupport_introspection_c__get_const_function__ActionGroupRunner_SendGoal_Event__request(untyped_member, index));
  hiwonder_servo_msgs__action__ActionGroupRunner_SendGoal_Request * value =
    (hiwonder_servo_msgs__action__ActionGroupRunner_SendGoal_Request *)(untyped_value);
  *value = *item;
}

void hiwonder_servo_msgs__action__ActionGroupRunner_SendGoal_Event__rosidl_typesupport_introspection_c__assign_function__ActionGroupRunner_SendGoal_Event__request(
  void * untyped_member, size_t index, const void * untyped_value)
{
  hiwonder_servo_msgs__action__ActionGroupRunner_SendGoal_Request * item =
    ((hiwonder_servo_msgs__action__ActionGroupRunner_SendGoal_Request *)
    hiwonder_servo_msgs__action__ActionGroupRunner_SendGoal_Event__rosidl_typesupport_introspection_c__get_function__ActionGroupRunner_SendGoal_Event__request(untyped_member, index));
  const hiwonder_servo_msgs__action__ActionGroupRunner_SendGoal_Request * value =
    (const hiwonder_servo_msgs__action__ActionGroupRunner_SendGoal_Request *)(untyped_value);
  *item = *value;
}

bool hiwonder_servo_msgs__action__ActionGroupRunner_SendGoal_Event__rosidl_typesupport_introspection_c__resize_function__ActionGroupRunner_SendGoal_Event__request(
  void * untyped_member, size_t size)
{
  hiwonder_servo_msgs__action__ActionGroupRunner_SendGoal_Request__Sequence * member =
    (hiwonder_servo_msgs__action__ActionGroupRunner_SendGoal_Request__Sequence *)(untyped_member);
  hiwonder_servo_msgs__action__ActionGroupRunner_SendGoal_Request__Sequence__fini(member);
  return hiwonder_servo_msgs__action__ActionGroupRunner_SendGoal_Request__Sequence__init(member, size);
}

size_t hiwonder_servo_msgs__action__ActionGroupRunner_SendGoal_Event__rosidl_typesupport_introspection_c__size_function__ActionGroupRunner_SendGoal_Event__response(
  const void * untyped_member)
{
  const hiwonder_servo_msgs__action__ActionGroupRunner_SendGoal_Response__Sequence * member =
    (const hiwonder_servo_msgs__action__ActionGroupRunner_SendGoal_Response__Sequence *)(untyped_member);
  return member->size;
}

const void * hiwonder_servo_msgs__action__ActionGroupRunner_SendGoal_Event__rosidl_typesupport_introspection_c__get_const_function__ActionGroupRunner_SendGoal_Event__response(
  const void * untyped_member, size_t index)
{
  const hiwonder_servo_msgs__action__ActionGroupRunner_SendGoal_Response__Sequence * member =
    (const hiwonder_servo_msgs__action__ActionGroupRunner_SendGoal_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void * hiwonder_servo_msgs__action__ActionGroupRunner_SendGoal_Event__rosidl_typesupport_introspection_c__get_function__ActionGroupRunner_SendGoal_Event__response(
  void * untyped_member, size_t index)
{
  hiwonder_servo_msgs__action__ActionGroupRunner_SendGoal_Response__Sequence * member =
    (hiwonder_servo_msgs__action__ActionGroupRunner_SendGoal_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void hiwonder_servo_msgs__action__ActionGroupRunner_SendGoal_Event__rosidl_typesupport_introspection_c__fetch_function__ActionGroupRunner_SendGoal_Event__response(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const hiwonder_servo_msgs__action__ActionGroupRunner_SendGoal_Response * item =
    ((const hiwonder_servo_msgs__action__ActionGroupRunner_SendGoal_Response *)
    hiwonder_servo_msgs__action__ActionGroupRunner_SendGoal_Event__rosidl_typesupport_introspection_c__get_const_function__ActionGroupRunner_SendGoal_Event__response(untyped_member, index));
  hiwonder_servo_msgs__action__ActionGroupRunner_SendGoal_Response * value =
    (hiwonder_servo_msgs__action__ActionGroupRunner_SendGoal_Response *)(untyped_value);
  *value = *item;
}

void hiwonder_servo_msgs__action__ActionGroupRunner_SendGoal_Event__rosidl_typesupport_introspection_c__assign_function__ActionGroupRunner_SendGoal_Event__response(
  void * untyped_member, size_t index, const void * untyped_value)
{
  hiwonder_servo_msgs__action__ActionGroupRunner_SendGoal_Response * item =
    ((hiwonder_servo_msgs__action__ActionGroupRunner_SendGoal_Response *)
    hiwonder_servo_msgs__action__ActionGroupRunner_SendGoal_Event__rosidl_typesupport_introspection_c__get_function__ActionGroupRunner_SendGoal_Event__response(untyped_member, index));
  const hiwonder_servo_msgs__action__ActionGroupRunner_SendGoal_Response * value =
    (const hiwonder_servo_msgs__action__ActionGroupRunner_SendGoal_Response *)(untyped_value);
  *item = *value;
}

bool hiwonder_servo_msgs__action__ActionGroupRunner_SendGoal_Event__rosidl_typesupport_introspection_c__resize_function__ActionGroupRunner_SendGoal_Event__response(
  void * untyped_member, size_t size)
{
  hiwonder_servo_msgs__action__ActionGroupRunner_SendGoal_Response__Sequence * member =
    (hiwonder_servo_msgs__action__ActionGroupRunner_SendGoal_Response__Sequence *)(untyped_member);
  hiwonder_servo_msgs__action__ActionGroupRunner_SendGoal_Response__Sequence__fini(member);
  return hiwonder_servo_msgs__action__ActionGroupRunner_SendGoal_Response__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember hiwonder_servo_msgs__action__ActionGroupRunner_SendGoal_Event__rosidl_typesupport_introspection_c__ActionGroupRunner_SendGoal_Event_message_member_array[3] = {
  {
    "info",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hiwonder_servo_msgs__action__ActionGroupRunner_SendGoal_Event, info),  // bytes offset in struct
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
    offsetof(hiwonder_servo_msgs__action__ActionGroupRunner_SendGoal_Event, request),  // bytes offset in struct
    NULL,  // default value
    hiwonder_servo_msgs__action__ActionGroupRunner_SendGoal_Event__rosidl_typesupport_introspection_c__size_function__ActionGroupRunner_SendGoal_Event__request,  // size() function pointer
    hiwonder_servo_msgs__action__ActionGroupRunner_SendGoal_Event__rosidl_typesupport_introspection_c__get_const_function__ActionGroupRunner_SendGoal_Event__request,  // get_const(index) function pointer
    hiwonder_servo_msgs__action__ActionGroupRunner_SendGoal_Event__rosidl_typesupport_introspection_c__get_function__ActionGroupRunner_SendGoal_Event__request,  // get(index) function pointer
    hiwonder_servo_msgs__action__ActionGroupRunner_SendGoal_Event__rosidl_typesupport_introspection_c__fetch_function__ActionGroupRunner_SendGoal_Event__request,  // fetch(index, &value) function pointer
    hiwonder_servo_msgs__action__ActionGroupRunner_SendGoal_Event__rosidl_typesupport_introspection_c__assign_function__ActionGroupRunner_SendGoal_Event__request,  // assign(index, value) function pointer
    hiwonder_servo_msgs__action__ActionGroupRunner_SendGoal_Event__rosidl_typesupport_introspection_c__resize_function__ActionGroupRunner_SendGoal_Event__request  // resize(index) function pointer
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
    offsetof(hiwonder_servo_msgs__action__ActionGroupRunner_SendGoal_Event, response),  // bytes offset in struct
    NULL,  // default value
    hiwonder_servo_msgs__action__ActionGroupRunner_SendGoal_Event__rosidl_typesupport_introspection_c__size_function__ActionGroupRunner_SendGoal_Event__response,  // size() function pointer
    hiwonder_servo_msgs__action__ActionGroupRunner_SendGoal_Event__rosidl_typesupport_introspection_c__get_const_function__ActionGroupRunner_SendGoal_Event__response,  // get_const(index) function pointer
    hiwonder_servo_msgs__action__ActionGroupRunner_SendGoal_Event__rosidl_typesupport_introspection_c__get_function__ActionGroupRunner_SendGoal_Event__response,  // get(index) function pointer
    hiwonder_servo_msgs__action__ActionGroupRunner_SendGoal_Event__rosidl_typesupport_introspection_c__fetch_function__ActionGroupRunner_SendGoal_Event__response,  // fetch(index, &value) function pointer
    hiwonder_servo_msgs__action__ActionGroupRunner_SendGoal_Event__rosidl_typesupport_introspection_c__assign_function__ActionGroupRunner_SendGoal_Event__response,  // assign(index, value) function pointer
    hiwonder_servo_msgs__action__ActionGroupRunner_SendGoal_Event__rosidl_typesupport_introspection_c__resize_function__ActionGroupRunner_SendGoal_Event__response  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers hiwonder_servo_msgs__action__ActionGroupRunner_SendGoal_Event__rosidl_typesupport_introspection_c__ActionGroupRunner_SendGoal_Event_message_members = {
  "hiwonder_servo_msgs__action",  // message namespace
  "ActionGroupRunner_SendGoal_Event",  // message name
  3,  // number of fields
  sizeof(hiwonder_servo_msgs__action__ActionGroupRunner_SendGoal_Event),
  false,  // has_any_key_member_
  hiwonder_servo_msgs__action__ActionGroupRunner_SendGoal_Event__rosidl_typesupport_introspection_c__ActionGroupRunner_SendGoal_Event_message_member_array,  // message members
  hiwonder_servo_msgs__action__ActionGroupRunner_SendGoal_Event__rosidl_typesupport_introspection_c__ActionGroupRunner_SendGoal_Event_init_function,  // function to initialize message memory (memory has to be allocated)
  hiwonder_servo_msgs__action__ActionGroupRunner_SendGoal_Event__rosidl_typesupport_introspection_c__ActionGroupRunner_SendGoal_Event_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t hiwonder_servo_msgs__action__ActionGroupRunner_SendGoal_Event__rosidl_typesupport_introspection_c__ActionGroupRunner_SendGoal_Event_message_type_support_handle = {
  0,
  &hiwonder_servo_msgs__action__ActionGroupRunner_SendGoal_Event__rosidl_typesupport_introspection_c__ActionGroupRunner_SendGoal_Event_message_members,
  get_message_typesupport_handle_function,
  &hiwonder_servo_msgs__action__ActionGroupRunner_SendGoal_Event__get_type_hash,
  &hiwonder_servo_msgs__action__ActionGroupRunner_SendGoal_Event__get_type_description,
  &hiwonder_servo_msgs__action__ActionGroupRunner_SendGoal_Event__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_hiwonder_servo_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hiwonder_servo_msgs, action, ActionGroupRunner_SendGoal_Event)() {
  hiwonder_servo_msgs__action__ActionGroupRunner_SendGoal_Event__rosidl_typesupport_introspection_c__ActionGroupRunner_SendGoal_Event_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, service_msgs, msg, ServiceEventInfo)();
  hiwonder_servo_msgs__action__ActionGroupRunner_SendGoal_Event__rosidl_typesupport_introspection_c__ActionGroupRunner_SendGoal_Event_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hiwonder_servo_msgs, action, ActionGroupRunner_SendGoal_Request)();
  hiwonder_servo_msgs__action__ActionGroupRunner_SendGoal_Event__rosidl_typesupport_introspection_c__ActionGroupRunner_SendGoal_Event_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hiwonder_servo_msgs, action, ActionGroupRunner_SendGoal_Response)();
  if (!hiwonder_servo_msgs__action__ActionGroupRunner_SendGoal_Event__rosidl_typesupport_introspection_c__ActionGroupRunner_SendGoal_Event_message_type_support_handle.typesupport_identifier) {
    hiwonder_servo_msgs__action__ActionGroupRunner_SendGoal_Event__rosidl_typesupport_introspection_c__ActionGroupRunner_SendGoal_Event_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &hiwonder_servo_msgs__action__ActionGroupRunner_SendGoal_Event__rosidl_typesupport_introspection_c__ActionGroupRunner_SendGoal_Event_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "hiwonder_servo_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "hiwonder_servo_msgs/action/detail/action_group_runner__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers hiwonder_servo_msgs__action__detail__action_group_runner__rosidl_typesupport_introspection_c__ActionGroupRunner_SendGoal_service_members = {
  "hiwonder_servo_msgs__action",  // service namespace
  "ActionGroupRunner_SendGoal",  // service name
  // the following fields are initialized below on first access
  NULL,  // request message
  // hiwonder_servo_msgs__action__detail__action_group_runner__rosidl_typesupport_introspection_c__ActionGroupRunner_SendGoal_Request_message_type_support_handle,
  NULL,  // response message
  // hiwonder_servo_msgs__action__detail__action_group_runner__rosidl_typesupport_introspection_c__ActionGroupRunner_SendGoal_Response_message_type_support_handle
  NULL  // event_message
  // hiwonder_servo_msgs__action__detail__action_group_runner__rosidl_typesupport_introspection_c__ActionGroupRunner_SendGoal_Response_message_type_support_handle
};


static rosidl_service_type_support_t hiwonder_servo_msgs__action__detail__action_group_runner__rosidl_typesupport_introspection_c__ActionGroupRunner_SendGoal_service_type_support_handle = {
  0,
  &hiwonder_servo_msgs__action__detail__action_group_runner__rosidl_typesupport_introspection_c__ActionGroupRunner_SendGoal_service_members,
  get_service_typesupport_handle_function,
  &hiwonder_servo_msgs__action__ActionGroupRunner_SendGoal_Request__rosidl_typesupport_introspection_c__ActionGroupRunner_SendGoal_Request_message_type_support_handle,
  &hiwonder_servo_msgs__action__ActionGroupRunner_SendGoal_Response__rosidl_typesupport_introspection_c__ActionGroupRunner_SendGoal_Response_message_type_support_handle,
  &hiwonder_servo_msgs__action__ActionGroupRunner_SendGoal_Event__rosidl_typesupport_introspection_c__ActionGroupRunner_SendGoal_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    hiwonder_servo_msgs,
    action,
    ActionGroupRunner_SendGoal
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    hiwonder_servo_msgs,
    action,
    ActionGroupRunner_SendGoal
  ),
  &hiwonder_servo_msgs__action__ActionGroupRunner_SendGoal__get_type_hash,
  &hiwonder_servo_msgs__action__ActionGroupRunner_SendGoal__get_type_description,
  &hiwonder_servo_msgs__action__ActionGroupRunner_SendGoal__get_type_description_sources,
};

// Forward declaration of message type support functions for service members
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hiwonder_servo_msgs, action, ActionGroupRunner_SendGoal_Request)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hiwonder_servo_msgs, action, ActionGroupRunner_SendGoal_Response)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hiwonder_servo_msgs, action, ActionGroupRunner_SendGoal_Event)(void);

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_hiwonder_servo_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hiwonder_servo_msgs, action, ActionGroupRunner_SendGoal)(void) {
  if (!hiwonder_servo_msgs__action__detail__action_group_runner__rosidl_typesupport_introspection_c__ActionGroupRunner_SendGoal_service_type_support_handle.typesupport_identifier) {
    hiwonder_servo_msgs__action__detail__action_group_runner__rosidl_typesupport_introspection_c__ActionGroupRunner_SendGoal_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)hiwonder_servo_msgs__action__detail__action_group_runner__rosidl_typesupport_introspection_c__ActionGroupRunner_SendGoal_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hiwonder_servo_msgs, action, ActionGroupRunner_SendGoal_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hiwonder_servo_msgs, action, ActionGroupRunner_SendGoal_Response)()->data;
  }
  if (!service_members->event_members_) {
    service_members->event_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hiwonder_servo_msgs, action, ActionGroupRunner_SendGoal_Event)()->data;
  }

  return &hiwonder_servo_msgs__action__detail__action_group_runner__rosidl_typesupport_introspection_c__ActionGroupRunner_SendGoal_service_type_support_handle;
}

// already included above
// #include <stddef.h>
// already included above
// #include "hiwonder_servo_msgs/action/detail/action_group_runner__rosidl_typesupport_introspection_c.h"
// already included above
// #include "hiwonder_servo_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "hiwonder_servo_msgs/action/detail/action_group_runner__functions.h"
// already included above
// #include "hiwonder_servo_msgs/action/detail/action_group_runner__struct.h"


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void hiwonder_servo_msgs__action__ActionGroupRunner_GetResult_Request__rosidl_typesupport_introspection_c__ActionGroupRunner_GetResult_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  hiwonder_servo_msgs__action__ActionGroupRunner_GetResult_Request__init(message_memory);
}

void hiwonder_servo_msgs__action__ActionGroupRunner_GetResult_Request__rosidl_typesupport_introspection_c__ActionGroupRunner_GetResult_Request_fini_function(void * message_memory)
{
  hiwonder_servo_msgs__action__ActionGroupRunner_GetResult_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember hiwonder_servo_msgs__action__ActionGroupRunner_GetResult_Request__rosidl_typesupport_introspection_c__ActionGroupRunner_GetResult_Request_message_member_array[1] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hiwonder_servo_msgs__action__ActionGroupRunner_GetResult_Request, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers hiwonder_servo_msgs__action__ActionGroupRunner_GetResult_Request__rosidl_typesupport_introspection_c__ActionGroupRunner_GetResult_Request_message_members = {
  "hiwonder_servo_msgs__action",  // message namespace
  "ActionGroupRunner_GetResult_Request",  // message name
  1,  // number of fields
  sizeof(hiwonder_servo_msgs__action__ActionGroupRunner_GetResult_Request),
  false,  // has_any_key_member_
  hiwonder_servo_msgs__action__ActionGroupRunner_GetResult_Request__rosidl_typesupport_introspection_c__ActionGroupRunner_GetResult_Request_message_member_array,  // message members
  hiwonder_servo_msgs__action__ActionGroupRunner_GetResult_Request__rosidl_typesupport_introspection_c__ActionGroupRunner_GetResult_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  hiwonder_servo_msgs__action__ActionGroupRunner_GetResult_Request__rosidl_typesupport_introspection_c__ActionGroupRunner_GetResult_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t hiwonder_servo_msgs__action__ActionGroupRunner_GetResult_Request__rosidl_typesupport_introspection_c__ActionGroupRunner_GetResult_Request_message_type_support_handle = {
  0,
  &hiwonder_servo_msgs__action__ActionGroupRunner_GetResult_Request__rosidl_typesupport_introspection_c__ActionGroupRunner_GetResult_Request_message_members,
  get_message_typesupport_handle_function,
  &hiwonder_servo_msgs__action__ActionGroupRunner_GetResult_Request__get_type_hash,
  &hiwonder_servo_msgs__action__ActionGroupRunner_GetResult_Request__get_type_description,
  &hiwonder_servo_msgs__action__ActionGroupRunner_GetResult_Request__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_hiwonder_servo_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hiwonder_servo_msgs, action, ActionGroupRunner_GetResult_Request)() {
  hiwonder_servo_msgs__action__ActionGroupRunner_GetResult_Request__rosidl_typesupport_introspection_c__ActionGroupRunner_GetResult_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  if (!hiwonder_servo_msgs__action__ActionGroupRunner_GetResult_Request__rosidl_typesupport_introspection_c__ActionGroupRunner_GetResult_Request_message_type_support_handle.typesupport_identifier) {
    hiwonder_servo_msgs__action__ActionGroupRunner_GetResult_Request__rosidl_typesupport_introspection_c__ActionGroupRunner_GetResult_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &hiwonder_servo_msgs__action__ActionGroupRunner_GetResult_Request__rosidl_typesupport_introspection_c__ActionGroupRunner_GetResult_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "hiwonder_servo_msgs/action/detail/action_group_runner__rosidl_typesupport_introspection_c.h"
// already included above
// #include "hiwonder_servo_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "hiwonder_servo_msgs/action/detail/action_group_runner__functions.h"
// already included above
// #include "hiwonder_servo_msgs/action/detail/action_group_runner__struct.h"


// Include directives for member types
// Member `result`
// already included above
// #include "hiwonder_servo_msgs/action/action_group_runner.h"
// Member `result`
// already included above
// #include "hiwonder_servo_msgs/action/detail/action_group_runner__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void hiwonder_servo_msgs__action__ActionGroupRunner_GetResult_Response__rosidl_typesupport_introspection_c__ActionGroupRunner_GetResult_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  hiwonder_servo_msgs__action__ActionGroupRunner_GetResult_Response__init(message_memory);
}

void hiwonder_servo_msgs__action__ActionGroupRunner_GetResult_Response__rosidl_typesupport_introspection_c__ActionGroupRunner_GetResult_Response_fini_function(void * message_memory)
{
  hiwonder_servo_msgs__action__ActionGroupRunner_GetResult_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember hiwonder_servo_msgs__action__ActionGroupRunner_GetResult_Response__rosidl_typesupport_introspection_c__ActionGroupRunner_GetResult_Response_message_member_array[2] = {
  {
    "status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hiwonder_servo_msgs__action__ActionGroupRunner_GetResult_Response, status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "result",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hiwonder_servo_msgs__action__ActionGroupRunner_GetResult_Response, result),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers hiwonder_servo_msgs__action__ActionGroupRunner_GetResult_Response__rosidl_typesupport_introspection_c__ActionGroupRunner_GetResult_Response_message_members = {
  "hiwonder_servo_msgs__action",  // message namespace
  "ActionGroupRunner_GetResult_Response",  // message name
  2,  // number of fields
  sizeof(hiwonder_servo_msgs__action__ActionGroupRunner_GetResult_Response),
  false,  // has_any_key_member_
  hiwonder_servo_msgs__action__ActionGroupRunner_GetResult_Response__rosidl_typesupport_introspection_c__ActionGroupRunner_GetResult_Response_message_member_array,  // message members
  hiwonder_servo_msgs__action__ActionGroupRunner_GetResult_Response__rosidl_typesupport_introspection_c__ActionGroupRunner_GetResult_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  hiwonder_servo_msgs__action__ActionGroupRunner_GetResult_Response__rosidl_typesupport_introspection_c__ActionGroupRunner_GetResult_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t hiwonder_servo_msgs__action__ActionGroupRunner_GetResult_Response__rosidl_typesupport_introspection_c__ActionGroupRunner_GetResult_Response_message_type_support_handle = {
  0,
  &hiwonder_servo_msgs__action__ActionGroupRunner_GetResult_Response__rosidl_typesupport_introspection_c__ActionGroupRunner_GetResult_Response_message_members,
  get_message_typesupport_handle_function,
  &hiwonder_servo_msgs__action__ActionGroupRunner_GetResult_Response__get_type_hash,
  &hiwonder_servo_msgs__action__ActionGroupRunner_GetResult_Response__get_type_description,
  &hiwonder_servo_msgs__action__ActionGroupRunner_GetResult_Response__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_hiwonder_servo_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hiwonder_servo_msgs, action, ActionGroupRunner_GetResult_Response)() {
  hiwonder_servo_msgs__action__ActionGroupRunner_GetResult_Response__rosidl_typesupport_introspection_c__ActionGroupRunner_GetResult_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hiwonder_servo_msgs, action, ActionGroupRunner_Result)();
  if (!hiwonder_servo_msgs__action__ActionGroupRunner_GetResult_Response__rosidl_typesupport_introspection_c__ActionGroupRunner_GetResult_Response_message_type_support_handle.typesupport_identifier) {
    hiwonder_servo_msgs__action__ActionGroupRunner_GetResult_Response__rosidl_typesupport_introspection_c__ActionGroupRunner_GetResult_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &hiwonder_servo_msgs__action__ActionGroupRunner_GetResult_Response__rosidl_typesupport_introspection_c__ActionGroupRunner_GetResult_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "hiwonder_servo_msgs/action/detail/action_group_runner__rosidl_typesupport_introspection_c.h"
// already included above
// #include "hiwonder_servo_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "hiwonder_servo_msgs/action/detail/action_group_runner__functions.h"
// already included above
// #include "hiwonder_servo_msgs/action/detail/action_group_runner__struct.h"


// Include directives for member types
// Member `info`
// already included above
// #include "service_msgs/msg/service_event_info.h"
// Member `info`
// already included above
// #include "service_msgs/msg/detail/service_event_info__rosidl_typesupport_introspection_c.h"
// Member `request`
// Member `response`
// already included above
// #include "hiwonder_servo_msgs/action/action_group_runner.h"
// Member `request`
// Member `response`
// already included above
// #include "hiwonder_servo_msgs/action/detail/action_group_runner__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void hiwonder_servo_msgs__action__ActionGroupRunner_GetResult_Event__rosidl_typesupport_introspection_c__ActionGroupRunner_GetResult_Event_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  hiwonder_servo_msgs__action__ActionGroupRunner_GetResult_Event__init(message_memory);
}

void hiwonder_servo_msgs__action__ActionGroupRunner_GetResult_Event__rosidl_typesupport_introspection_c__ActionGroupRunner_GetResult_Event_fini_function(void * message_memory)
{
  hiwonder_servo_msgs__action__ActionGroupRunner_GetResult_Event__fini(message_memory);
}

size_t hiwonder_servo_msgs__action__ActionGroupRunner_GetResult_Event__rosidl_typesupport_introspection_c__size_function__ActionGroupRunner_GetResult_Event__request(
  const void * untyped_member)
{
  const hiwonder_servo_msgs__action__ActionGroupRunner_GetResult_Request__Sequence * member =
    (const hiwonder_servo_msgs__action__ActionGroupRunner_GetResult_Request__Sequence *)(untyped_member);
  return member->size;
}

const void * hiwonder_servo_msgs__action__ActionGroupRunner_GetResult_Event__rosidl_typesupport_introspection_c__get_const_function__ActionGroupRunner_GetResult_Event__request(
  const void * untyped_member, size_t index)
{
  const hiwonder_servo_msgs__action__ActionGroupRunner_GetResult_Request__Sequence * member =
    (const hiwonder_servo_msgs__action__ActionGroupRunner_GetResult_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void * hiwonder_servo_msgs__action__ActionGroupRunner_GetResult_Event__rosidl_typesupport_introspection_c__get_function__ActionGroupRunner_GetResult_Event__request(
  void * untyped_member, size_t index)
{
  hiwonder_servo_msgs__action__ActionGroupRunner_GetResult_Request__Sequence * member =
    (hiwonder_servo_msgs__action__ActionGroupRunner_GetResult_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void hiwonder_servo_msgs__action__ActionGroupRunner_GetResult_Event__rosidl_typesupport_introspection_c__fetch_function__ActionGroupRunner_GetResult_Event__request(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const hiwonder_servo_msgs__action__ActionGroupRunner_GetResult_Request * item =
    ((const hiwonder_servo_msgs__action__ActionGroupRunner_GetResult_Request *)
    hiwonder_servo_msgs__action__ActionGroupRunner_GetResult_Event__rosidl_typesupport_introspection_c__get_const_function__ActionGroupRunner_GetResult_Event__request(untyped_member, index));
  hiwonder_servo_msgs__action__ActionGroupRunner_GetResult_Request * value =
    (hiwonder_servo_msgs__action__ActionGroupRunner_GetResult_Request *)(untyped_value);
  *value = *item;
}

void hiwonder_servo_msgs__action__ActionGroupRunner_GetResult_Event__rosidl_typesupport_introspection_c__assign_function__ActionGroupRunner_GetResult_Event__request(
  void * untyped_member, size_t index, const void * untyped_value)
{
  hiwonder_servo_msgs__action__ActionGroupRunner_GetResult_Request * item =
    ((hiwonder_servo_msgs__action__ActionGroupRunner_GetResult_Request *)
    hiwonder_servo_msgs__action__ActionGroupRunner_GetResult_Event__rosidl_typesupport_introspection_c__get_function__ActionGroupRunner_GetResult_Event__request(untyped_member, index));
  const hiwonder_servo_msgs__action__ActionGroupRunner_GetResult_Request * value =
    (const hiwonder_servo_msgs__action__ActionGroupRunner_GetResult_Request *)(untyped_value);
  *item = *value;
}

bool hiwonder_servo_msgs__action__ActionGroupRunner_GetResult_Event__rosidl_typesupport_introspection_c__resize_function__ActionGroupRunner_GetResult_Event__request(
  void * untyped_member, size_t size)
{
  hiwonder_servo_msgs__action__ActionGroupRunner_GetResult_Request__Sequence * member =
    (hiwonder_servo_msgs__action__ActionGroupRunner_GetResult_Request__Sequence *)(untyped_member);
  hiwonder_servo_msgs__action__ActionGroupRunner_GetResult_Request__Sequence__fini(member);
  return hiwonder_servo_msgs__action__ActionGroupRunner_GetResult_Request__Sequence__init(member, size);
}

size_t hiwonder_servo_msgs__action__ActionGroupRunner_GetResult_Event__rosidl_typesupport_introspection_c__size_function__ActionGroupRunner_GetResult_Event__response(
  const void * untyped_member)
{
  const hiwonder_servo_msgs__action__ActionGroupRunner_GetResult_Response__Sequence * member =
    (const hiwonder_servo_msgs__action__ActionGroupRunner_GetResult_Response__Sequence *)(untyped_member);
  return member->size;
}

const void * hiwonder_servo_msgs__action__ActionGroupRunner_GetResult_Event__rosidl_typesupport_introspection_c__get_const_function__ActionGroupRunner_GetResult_Event__response(
  const void * untyped_member, size_t index)
{
  const hiwonder_servo_msgs__action__ActionGroupRunner_GetResult_Response__Sequence * member =
    (const hiwonder_servo_msgs__action__ActionGroupRunner_GetResult_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void * hiwonder_servo_msgs__action__ActionGroupRunner_GetResult_Event__rosidl_typesupport_introspection_c__get_function__ActionGroupRunner_GetResult_Event__response(
  void * untyped_member, size_t index)
{
  hiwonder_servo_msgs__action__ActionGroupRunner_GetResult_Response__Sequence * member =
    (hiwonder_servo_msgs__action__ActionGroupRunner_GetResult_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void hiwonder_servo_msgs__action__ActionGroupRunner_GetResult_Event__rosidl_typesupport_introspection_c__fetch_function__ActionGroupRunner_GetResult_Event__response(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const hiwonder_servo_msgs__action__ActionGroupRunner_GetResult_Response * item =
    ((const hiwonder_servo_msgs__action__ActionGroupRunner_GetResult_Response *)
    hiwonder_servo_msgs__action__ActionGroupRunner_GetResult_Event__rosidl_typesupport_introspection_c__get_const_function__ActionGroupRunner_GetResult_Event__response(untyped_member, index));
  hiwonder_servo_msgs__action__ActionGroupRunner_GetResult_Response * value =
    (hiwonder_servo_msgs__action__ActionGroupRunner_GetResult_Response *)(untyped_value);
  *value = *item;
}

void hiwonder_servo_msgs__action__ActionGroupRunner_GetResult_Event__rosidl_typesupport_introspection_c__assign_function__ActionGroupRunner_GetResult_Event__response(
  void * untyped_member, size_t index, const void * untyped_value)
{
  hiwonder_servo_msgs__action__ActionGroupRunner_GetResult_Response * item =
    ((hiwonder_servo_msgs__action__ActionGroupRunner_GetResult_Response *)
    hiwonder_servo_msgs__action__ActionGroupRunner_GetResult_Event__rosidl_typesupport_introspection_c__get_function__ActionGroupRunner_GetResult_Event__response(untyped_member, index));
  const hiwonder_servo_msgs__action__ActionGroupRunner_GetResult_Response * value =
    (const hiwonder_servo_msgs__action__ActionGroupRunner_GetResult_Response *)(untyped_value);
  *item = *value;
}

bool hiwonder_servo_msgs__action__ActionGroupRunner_GetResult_Event__rosidl_typesupport_introspection_c__resize_function__ActionGroupRunner_GetResult_Event__response(
  void * untyped_member, size_t size)
{
  hiwonder_servo_msgs__action__ActionGroupRunner_GetResult_Response__Sequence * member =
    (hiwonder_servo_msgs__action__ActionGroupRunner_GetResult_Response__Sequence *)(untyped_member);
  hiwonder_servo_msgs__action__ActionGroupRunner_GetResult_Response__Sequence__fini(member);
  return hiwonder_servo_msgs__action__ActionGroupRunner_GetResult_Response__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember hiwonder_servo_msgs__action__ActionGroupRunner_GetResult_Event__rosidl_typesupport_introspection_c__ActionGroupRunner_GetResult_Event_message_member_array[3] = {
  {
    "info",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hiwonder_servo_msgs__action__ActionGroupRunner_GetResult_Event, info),  // bytes offset in struct
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
    offsetof(hiwonder_servo_msgs__action__ActionGroupRunner_GetResult_Event, request),  // bytes offset in struct
    NULL,  // default value
    hiwonder_servo_msgs__action__ActionGroupRunner_GetResult_Event__rosidl_typesupport_introspection_c__size_function__ActionGroupRunner_GetResult_Event__request,  // size() function pointer
    hiwonder_servo_msgs__action__ActionGroupRunner_GetResult_Event__rosidl_typesupport_introspection_c__get_const_function__ActionGroupRunner_GetResult_Event__request,  // get_const(index) function pointer
    hiwonder_servo_msgs__action__ActionGroupRunner_GetResult_Event__rosidl_typesupport_introspection_c__get_function__ActionGroupRunner_GetResult_Event__request,  // get(index) function pointer
    hiwonder_servo_msgs__action__ActionGroupRunner_GetResult_Event__rosidl_typesupport_introspection_c__fetch_function__ActionGroupRunner_GetResult_Event__request,  // fetch(index, &value) function pointer
    hiwonder_servo_msgs__action__ActionGroupRunner_GetResult_Event__rosidl_typesupport_introspection_c__assign_function__ActionGroupRunner_GetResult_Event__request,  // assign(index, value) function pointer
    hiwonder_servo_msgs__action__ActionGroupRunner_GetResult_Event__rosidl_typesupport_introspection_c__resize_function__ActionGroupRunner_GetResult_Event__request  // resize(index) function pointer
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
    offsetof(hiwonder_servo_msgs__action__ActionGroupRunner_GetResult_Event, response),  // bytes offset in struct
    NULL,  // default value
    hiwonder_servo_msgs__action__ActionGroupRunner_GetResult_Event__rosidl_typesupport_introspection_c__size_function__ActionGroupRunner_GetResult_Event__response,  // size() function pointer
    hiwonder_servo_msgs__action__ActionGroupRunner_GetResult_Event__rosidl_typesupport_introspection_c__get_const_function__ActionGroupRunner_GetResult_Event__response,  // get_const(index) function pointer
    hiwonder_servo_msgs__action__ActionGroupRunner_GetResult_Event__rosidl_typesupport_introspection_c__get_function__ActionGroupRunner_GetResult_Event__response,  // get(index) function pointer
    hiwonder_servo_msgs__action__ActionGroupRunner_GetResult_Event__rosidl_typesupport_introspection_c__fetch_function__ActionGroupRunner_GetResult_Event__response,  // fetch(index, &value) function pointer
    hiwonder_servo_msgs__action__ActionGroupRunner_GetResult_Event__rosidl_typesupport_introspection_c__assign_function__ActionGroupRunner_GetResult_Event__response,  // assign(index, value) function pointer
    hiwonder_servo_msgs__action__ActionGroupRunner_GetResult_Event__rosidl_typesupport_introspection_c__resize_function__ActionGroupRunner_GetResult_Event__response  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers hiwonder_servo_msgs__action__ActionGroupRunner_GetResult_Event__rosidl_typesupport_introspection_c__ActionGroupRunner_GetResult_Event_message_members = {
  "hiwonder_servo_msgs__action",  // message namespace
  "ActionGroupRunner_GetResult_Event",  // message name
  3,  // number of fields
  sizeof(hiwonder_servo_msgs__action__ActionGroupRunner_GetResult_Event),
  false,  // has_any_key_member_
  hiwonder_servo_msgs__action__ActionGroupRunner_GetResult_Event__rosidl_typesupport_introspection_c__ActionGroupRunner_GetResult_Event_message_member_array,  // message members
  hiwonder_servo_msgs__action__ActionGroupRunner_GetResult_Event__rosidl_typesupport_introspection_c__ActionGroupRunner_GetResult_Event_init_function,  // function to initialize message memory (memory has to be allocated)
  hiwonder_servo_msgs__action__ActionGroupRunner_GetResult_Event__rosidl_typesupport_introspection_c__ActionGroupRunner_GetResult_Event_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t hiwonder_servo_msgs__action__ActionGroupRunner_GetResult_Event__rosidl_typesupport_introspection_c__ActionGroupRunner_GetResult_Event_message_type_support_handle = {
  0,
  &hiwonder_servo_msgs__action__ActionGroupRunner_GetResult_Event__rosidl_typesupport_introspection_c__ActionGroupRunner_GetResult_Event_message_members,
  get_message_typesupport_handle_function,
  &hiwonder_servo_msgs__action__ActionGroupRunner_GetResult_Event__get_type_hash,
  &hiwonder_servo_msgs__action__ActionGroupRunner_GetResult_Event__get_type_description,
  &hiwonder_servo_msgs__action__ActionGroupRunner_GetResult_Event__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_hiwonder_servo_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hiwonder_servo_msgs, action, ActionGroupRunner_GetResult_Event)() {
  hiwonder_servo_msgs__action__ActionGroupRunner_GetResult_Event__rosidl_typesupport_introspection_c__ActionGroupRunner_GetResult_Event_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, service_msgs, msg, ServiceEventInfo)();
  hiwonder_servo_msgs__action__ActionGroupRunner_GetResult_Event__rosidl_typesupport_introspection_c__ActionGroupRunner_GetResult_Event_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hiwonder_servo_msgs, action, ActionGroupRunner_GetResult_Request)();
  hiwonder_servo_msgs__action__ActionGroupRunner_GetResult_Event__rosidl_typesupport_introspection_c__ActionGroupRunner_GetResult_Event_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hiwonder_servo_msgs, action, ActionGroupRunner_GetResult_Response)();
  if (!hiwonder_servo_msgs__action__ActionGroupRunner_GetResult_Event__rosidl_typesupport_introspection_c__ActionGroupRunner_GetResult_Event_message_type_support_handle.typesupport_identifier) {
    hiwonder_servo_msgs__action__ActionGroupRunner_GetResult_Event__rosidl_typesupport_introspection_c__ActionGroupRunner_GetResult_Event_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &hiwonder_servo_msgs__action__ActionGroupRunner_GetResult_Event__rosidl_typesupport_introspection_c__ActionGroupRunner_GetResult_Event_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "hiwonder_servo_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "hiwonder_servo_msgs/action/detail/action_group_runner__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers hiwonder_servo_msgs__action__detail__action_group_runner__rosidl_typesupport_introspection_c__ActionGroupRunner_GetResult_service_members = {
  "hiwonder_servo_msgs__action",  // service namespace
  "ActionGroupRunner_GetResult",  // service name
  // the following fields are initialized below on first access
  NULL,  // request message
  // hiwonder_servo_msgs__action__detail__action_group_runner__rosidl_typesupport_introspection_c__ActionGroupRunner_GetResult_Request_message_type_support_handle,
  NULL,  // response message
  // hiwonder_servo_msgs__action__detail__action_group_runner__rosidl_typesupport_introspection_c__ActionGroupRunner_GetResult_Response_message_type_support_handle
  NULL  // event_message
  // hiwonder_servo_msgs__action__detail__action_group_runner__rosidl_typesupport_introspection_c__ActionGroupRunner_GetResult_Response_message_type_support_handle
};


static rosidl_service_type_support_t hiwonder_servo_msgs__action__detail__action_group_runner__rosidl_typesupport_introspection_c__ActionGroupRunner_GetResult_service_type_support_handle = {
  0,
  &hiwonder_servo_msgs__action__detail__action_group_runner__rosidl_typesupport_introspection_c__ActionGroupRunner_GetResult_service_members,
  get_service_typesupport_handle_function,
  &hiwonder_servo_msgs__action__ActionGroupRunner_GetResult_Request__rosidl_typesupport_introspection_c__ActionGroupRunner_GetResult_Request_message_type_support_handle,
  &hiwonder_servo_msgs__action__ActionGroupRunner_GetResult_Response__rosidl_typesupport_introspection_c__ActionGroupRunner_GetResult_Response_message_type_support_handle,
  &hiwonder_servo_msgs__action__ActionGroupRunner_GetResult_Event__rosidl_typesupport_introspection_c__ActionGroupRunner_GetResult_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    hiwonder_servo_msgs,
    action,
    ActionGroupRunner_GetResult
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    hiwonder_servo_msgs,
    action,
    ActionGroupRunner_GetResult
  ),
  &hiwonder_servo_msgs__action__ActionGroupRunner_GetResult__get_type_hash,
  &hiwonder_servo_msgs__action__ActionGroupRunner_GetResult__get_type_description,
  &hiwonder_servo_msgs__action__ActionGroupRunner_GetResult__get_type_description_sources,
};

// Forward declaration of message type support functions for service members
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hiwonder_servo_msgs, action, ActionGroupRunner_GetResult_Request)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hiwonder_servo_msgs, action, ActionGroupRunner_GetResult_Response)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hiwonder_servo_msgs, action, ActionGroupRunner_GetResult_Event)(void);

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_hiwonder_servo_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hiwonder_servo_msgs, action, ActionGroupRunner_GetResult)(void) {
  if (!hiwonder_servo_msgs__action__detail__action_group_runner__rosidl_typesupport_introspection_c__ActionGroupRunner_GetResult_service_type_support_handle.typesupport_identifier) {
    hiwonder_servo_msgs__action__detail__action_group_runner__rosidl_typesupport_introspection_c__ActionGroupRunner_GetResult_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)hiwonder_servo_msgs__action__detail__action_group_runner__rosidl_typesupport_introspection_c__ActionGroupRunner_GetResult_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hiwonder_servo_msgs, action, ActionGroupRunner_GetResult_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hiwonder_servo_msgs, action, ActionGroupRunner_GetResult_Response)()->data;
  }
  if (!service_members->event_members_) {
    service_members->event_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hiwonder_servo_msgs, action, ActionGroupRunner_GetResult_Event)()->data;
  }

  return &hiwonder_servo_msgs__action__detail__action_group_runner__rosidl_typesupport_introspection_c__ActionGroupRunner_GetResult_service_type_support_handle;
}

// already included above
// #include <stddef.h>
// already included above
// #include "hiwonder_servo_msgs/action/detail/action_group_runner__rosidl_typesupport_introspection_c.h"
// already included above
// #include "hiwonder_servo_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "hiwonder_servo_msgs/action/detail/action_group_runner__functions.h"
// already included above
// #include "hiwonder_servo_msgs/action/detail/action_group_runner__struct.h"


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"
// Member `feedback`
// already included above
// #include "hiwonder_servo_msgs/action/action_group_runner.h"
// Member `feedback`
// already included above
// #include "hiwonder_servo_msgs/action/detail/action_group_runner__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void hiwonder_servo_msgs__action__ActionGroupRunner_FeedbackMessage__rosidl_typesupport_introspection_c__ActionGroupRunner_FeedbackMessage_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  hiwonder_servo_msgs__action__ActionGroupRunner_FeedbackMessage__init(message_memory);
}

void hiwonder_servo_msgs__action__ActionGroupRunner_FeedbackMessage__rosidl_typesupport_introspection_c__ActionGroupRunner_FeedbackMessage_fini_function(void * message_memory)
{
  hiwonder_servo_msgs__action__ActionGroupRunner_FeedbackMessage__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember hiwonder_servo_msgs__action__ActionGroupRunner_FeedbackMessage__rosidl_typesupport_introspection_c__ActionGroupRunner_FeedbackMessage_message_member_array[2] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hiwonder_servo_msgs__action__ActionGroupRunner_FeedbackMessage, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "feedback",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hiwonder_servo_msgs__action__ActionGroupRunner_FeedbackMessage, feedback),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers hiwonder_servo_msgs__action__ActionGroupRunner_FeedbackMessage__rosidl_typesupport_introspection_c__ActionGroupRunner_FeedbackMessage_message_members = {
  "hiwonder_servo_msgs__action",  // message namespace
  "ActionGroupRunner_FeedbackMessage",  // message name
  2,  // number of fields
  sizeof(hiwonder_servo_msgs__action__ActionGroupRunner_FeedbackMessage),
  false,  // has_any_key_member_
  hiwonder_servo_msgs__action__ActionGroupRunner_FeedbackMessage__rosidl_typesupport_introspection_c__ActionGroupRunner_FeedbackMessage_message_member_array,  // message members
  hiwonder_servo_msgs__action__ActionGroupRunner_FeedbackMessage__rosidl_typesupport_introspection_c__ActionGroupRunner_FeedbackMessage_init_function,  // function to initialize message memory (memory has to be allocated)
  hiwonder_servo_msgs__action__ActionGroupRunner_FeedbackMessage__rosidl_typesupport_introspection_c__ActionGroupRunner_FeedbackMessage_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t hiwonder_servo_msgs__action__ActionGroupRunner_FeedbackMessage__rosidl_typesupport_introspection_c__ActionGroupRunner_FeedbackMessage_message_type_support_handle = {
  0,
  &hiwonder_servo_msgs__action__ActionGroupRunner_FeedbackMessage__rosidl_typesupport_introspection_c__ActionGroupRunner_FeedbackMessage_message_members,
  get_message_typesupport_handle_function,
  &hiwonder_servo_msgs__action__ActionGroupRunner_FeedbackMessage__get_type_hash,
  &hiwonder_servo_msgs__action__ActionGroupRunner_FeedbackMessage__get_type_description,
  &hiwonder_servo_msgs__action__ActionGroupRunner_FeedbackMessage__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_hiwonder_servo_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hiwonder_servo_msgs, action, ActionGroupRunner_FeedbackMessage)() {
  hiwonder_servo_msgs__action__ActionGroupRunner_FeedbackMessage__rosidl_typesupport_introspection_c__ActionGroupRunner_FeedbackMessage_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  hiwonder_servo_msgs__action__ActionGroupRunner_FeedbackMessage__rosidl_typesupport_introspection_c__ActionGroupRunner_FeedbackMessage_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hiwonder_servo_msgs, action, ActionGroupRunner_Feedback)();
  if (!hiwonder_servo_msgs__action__ActionGroupRunner_FeedbackMessage__rosidl_typesupport_introspection_c__ActionGroupRunner_FeedbackMessage_message_type_support_handle.typesupport_identifier) {
    hiwonder_servo_msgs__action__ActionGroupRunner_FeedbackMessage__rosidl_typesupport_introspection_c__ActionGroupRunner_FeedbackMessage_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &hiwonder_servo_msgs__action__ActionGroupRunner_FeedbackMessage__rosidl_typesupport_introspection_c__ActionGroupRunner_FeedbackMessage_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
