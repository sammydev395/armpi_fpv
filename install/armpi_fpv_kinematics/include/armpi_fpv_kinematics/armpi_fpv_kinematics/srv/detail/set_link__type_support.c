// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from armpi_fpv_kinematics:srv/SetLink.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "armpi_fpv_kinematics/srv/detail/set_link__rosidl_typesupport_introspection_c.h"
#include "armpi_fpv_kinematics/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "armpi_fpv_kinematics/srv/detail/set_link__functions.h"
#include "armpi_fpv_kinematics/srv/detail/set_link__struct.h"


// Include directives for member types
// Member `data`
#include "armpi_fpv_kinematics/msg/link.h"
// Member `data`
#include "armpi_fpv_kinematics/msg/detail/link__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void armpi_fpv_kinematics__srv__SetLink_Request__rosidl_typesupport_introspection_c__SetLink_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  armpi_fpv_kinematics__srv__SetLink_Request__init(message_memory);
}

void armpi_fpv_kinematics__srv__SetLink_Request__rosidl_typesupport_introspection_c__SetLink_Request_fini_function(void * message_memory)
{
  armpi_fpv_kinematics__srv__SetLink_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember armpi_fpv_kinematics__srv__SetLink_Request__rosidl_typesupport_introspection_c__SetLink_Request_message_member_array[1] = {
  {
    "data",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(armpi_fpv_kinematics__srv__SetLink_Request, data),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers armpi_fpv_kinematics__srv__SetLink_Request__rosidl_typesupport_introspection_c__SetLink_Request_message_members = {
  "armpi_fpv_kinematics__srv",  // message namespace
  "SetLink_Request",  // message name
  1,  // number of fields
  sizeof(armpi_fpv_kinematics__srv__SetLink_Request),
  false,  // has_any_key_member_
  armpi_fpv_kinematics__srv__SetLink_Request__rosidl_typesupport_introspection_c__SetLink_Request_message_member_array,  // message members
  armpi_fpv_kinematics__srv__SetLink_Request__rosidl_typesupport_introspection_c__SetLink_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  armpi_fpv_kinematics__srv__SetLink_Request__rosidl_typesupport_introspection_c__SetLink_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t armpi_fpv_kinematics__srv__SetLink_Request__rosidl_typesupport_introspection_c__SetLink_Request_message_type_support_handle = {
  0,
  &armpi_fpv_kinematics__srv__SetLink_Request__rosidl_typesupport_introspection_c__SetLink_Request_message_members,
  get_message_typesupport_handle_function,
  &armpi_fpv_kinematics__srv__SetLink_Request__get_type_hash,
  &armpi_fpv_kinematics__srv__SetLink_Request__get_type_description,
  &armpi_fpv_kinematics__srv__SetLink_Request__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_armpi_fpv_kinematics
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, armpi_fpv_kinematics, srv, SetLink_Request)() {
  armpi_fpv_kinematics__srv__SetLink_Request__rosidl_typesupport_introspection_c__SetLink_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, armpi_fpv_kinematics, msg, Link)();
  if (!armpi_fpv_kinematics__srv__SetLink_Request__rosidl_typesupport_introspection_c__SetLink_Request_message_type_support_handle.typesupport_identifier) {
    armpi_fpv_kinematics__srv__SetLink_Request__rosidl_typesupport_introspection_c__SetLink_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &armpi_fpv_kinematics__srv__SetLink_Request__rosidl_typesupport_introspection_c__SetLink_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "armpi_fpv_kinematics/srv/detail/set_link__rosidl_typesupport_introspection_c.h"
// already included above
// #include "armpi_fpv_kinematics/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "armpi_fpv_kinematics/srv/detail/set_link__functions.h"
// already included above
// #include "armpi_fpv_kinematics/srv/detail/set_link__struct.h"


// Include directives for member types
// Member `message`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void armpi_fpv_kinematics__srv__SetLink_Response__rosidl_typesupport_introspection_c__SetLink_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  armpi_fpv_kinematics__srv__SetLink_Response__init(message_memory);
}

void armpi_fpv_kinematics__srv__SetLink_Response__rosidl_typesupport_introspection_c__SetLink_Response_fini_function(void * message_memory)
{
  armpi_fpv_kinematics__srv__SetLink_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember armpi_fpv_kinematics__srv__SetLink_Response__rosidl_typesupport_introspection_c__SetLink_Response_message_member_array[2] = {
  {
    "success",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(armpi_fpv_kinematics__srv__SetLink_Response, success),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "message",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(armpi_fpv_kinematics__srv__SetLink_Response, message),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers armpi_fpv_kinematics__srv__SetLink_Response__rosidl_typesupport_introspection_c__SetLink_Response_message_members = {
  "armpi_fpv_kinematics__srv",  // message namespace
  "SetLink_Response",  // message name
  2,  // number of fields
  sizeof(armpi_fpv_kinematics__srv__SetLink_Response),
  false,  // has_any_key_member_
  armpi_fpv_kinematics__srv__SetLink_Response__rosidl_typesupport_introspection_c__SetLink_Response_message_member_array,  // message members
  armpi_fpv_kinematics__srv__SetLink_Response__rosidl_typesupport_introspection_c__SetLink_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  armpi_fpv_kinematics__srv__SetLink_Response__rosidl_typesupport_introspection_c__SetLink_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t armpi_fpv_kinematics__srv__SetLink_Response__rosidl_typesupport_introspection_c__SetLink_Response_message_type_support_handle = {
  0,
  &armpi_fpv_kinematics__srv__SetLink_Response__rosidl_typesupport_introspection_c__SetLink_Response_message_members,
  get_message_typesupport_handle_function,
  &armpi_fpv_kinematics__srv__SetLink_Response__get_type_hash,
  &armpi_fpv_kinematics__srv__SetLink_Response__get_type_description,
  &armpi_fpv_kinematics__srv__SetLink_Response__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_armpi_fpv_kinematics
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, armpi_fpv_kinematics, srv, SetLink_Response)() {
  if (!armpi_fpv_kinematics__srv__SetLink_Response__rosidl_typesupport_introspection_c__SetLink_Response_message_type_support_handle.typesupport_identifier) {
    armpi_fpv_kinematics__srv__SetLink_Response__rosidl_typesupport_introspection_c__SetLink_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &armpi_fpv_kinematics__srv__SetLink_Response__rosidl_typesupport_introspection_c__SetLink_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "armpi_fpv_kinematics/srv/detail/set_link__rosidl_typesupport_introspection_c.h"
// already included above
// #include "armpi_fpv_kinematics/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "armpi_fpv_kinematics/srv/detail/set_link__functions.h"
// already included above
// #include "armpi_fpv_kinematics/srv/detail/set_link__struct.h"


// Include directives for member types
// Member `info`
#include "service_msgs/msg/service_event_info.h"
// Member `info`
#include "service_msgs/msg/detail/service_event_info__rosidl_typesupport_introspection_c.h"
// Member `request`
// Member `response`
#include "armpi_fpv_kinematics/srv/set_link.h"
// Member `request`
// Member `response`
// already included above
// #include "armpi_fpv_kinematics/srv/detail/set_link__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void armpi_fpv_kinematics__srv__SetLink_Event__rosidl_typesupport_introspection_c__SetLink_Event_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  armpi_fpv_kinematics__srv__SetLink_Event__init(message_memory);
}

void armpi_fpv_kinematics__srv__SetLink_Event__rosidl_typesupport_introspection_c__SetLink_Event_fini_function(void * message_memory)
{
  armpi_fpv_kinematics__srv__SetLink_Event__fini(message_memory);
}

size_t armpi_fpv_kinematics__srv__SetLink_Event__rosidl_typesupport_introspection_c__size_function__SetLink_Event__request(
  const void * untyped_member)
{
  const armpi_fpv_kinematics__srv__SetLink_Request__Sequence * member =
    (const armpi_fpv_kinematics__srv__SetLink_Request__Sequence *)(untyped_member);
  return member->size;
}

const void * armpi_fpv_kinematics__srv__SetLink_Event__rosidl_typesupport_introspection_c__get_const_function__SetLink_Event__request(
  const void * untyped_member, size_t index)
{
  const armpi_fpv_kinematics__srv__SetLink_Request__Sequence * member =
    (const armpi_fpv_kinematics__srv__SetLink_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void * armpi_fpv_kinematics__srv__SetLink_Event__rosidl_typesupport_introspection_c__get_function__SetLink_Event__request(
  void * untyped_member, size_t index)
{
  armpi_fpv_kinematics__srv__SetLink_Request__Sequence * member =
    (armpi_fpv_kinematics__srv__SetLink_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void armpi_fpv_kinematics__srv__SetLink_Event__rosidl_typesupport_introspection_c__fetch_function__SetLink_Event__request(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const armpi_fpv_kinematics__srv__SetLink_Request * item =
    ((const armpi_fpv_kinematics__srv__SetLink_Request *)
    armpi_fpv_kinematics__srv__SetLink_Event__rosidl_typesupport_introspection_c__get_const_function__SetLink_Event__request(untyped_member, index));
  armpi_fpv_kinematics__srv__SetLink_Request * value =
    (armpi_fpv_kinematics__srv__SetLink_Request *)(untyped_value);
  *value = *item;
}

void armpi_fpv_kinematics__srv__SetLink_Event__rosidl_typesupport_introspection_c__assign_function__SetLink_Event__request(
  void * untyped_member, size_t index, const void * untyped_value)
{
  armpi_fpv_kinematics__srv__SetLink_Request * item =
    ((armpi_fpv_kinematics__srv__SetLink_Request *)
    armpi_fpv_kinematics__srv__SetLink_Event__rosidl_typesupport_introspection_c__get_function__SetLink_Event__request(untyped_member, index));
  const armpi_fpv_kinematics__srv__SetLink_Request * value =
    (const armpi_fpv_kinematics__srv__SetLink_Request *)(untyped_value);
  *item = *value;
}

bool armpi_fpv_kinematics__srv__SetLink_Event__rosidl_typesupport_introspection_c__resize_function__SetLink_Event__request(
  void * untyped_member, size_t size)
{
  armpi_fpv_kinematics__srv__SetLink_Request__Sequence * member =
    (armpi_fpv_kinematics__srv__SetLink_Request__Sequence *)(untyped_member);
  armpi_fpv_kinematics__srv__SetLink_Request__Sequence__fini(member);
  return armpi_fpv_kinematics__srv__SetLink_Request__Sequence__init(member, size);
}

size_t armpi_fpv_kinematics__srv__SetLink_Event__rosidl_typesupport_introspection_c__size_function__SetLink_Event__response(
  const void * untyped_member)
{
  const armpi_fpv_kinematics__srv__SetLink_Response__Sequence * member =
    (const armpi_fpv_kinematics__srv__SetLink_Response__Sequence *)(untyped_member);
  return member->size;
}

const void * armpi_fpv_kinematics__srv__SetLink_Event__rosidl_typesupport_introspection_c__get_const_function__SetLink_Event__response(
  const void * untyped_member, size_t index)
{
  const armpi_fpv_kinematics__srv__SetLink_Response__Sequence * member =
    (const armpi_fpv_kinematics__srv__SetLink_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void * armpi_fpv_kinematics__srv__SetLink_Event__rosidl_typesupport_introspection_c__get_function__SetLink_Event__response(
  void * untyped_member, size_t index)
{
  armpi_fpv_kinematics__srv__SetLink_Response__Sequence * member =
    (armpi_fpv_kinematics__srv__SetLink_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void armpi_fpv_kinematics__srv__SetLink_Event__rosidl_typesupport_introspection_c__fetch_function__SetLink_Event__response(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const armpi_fpv_kinematics__srv__SetLink_Response * item =
    ((const armpi_fpv_kinematics__srv__SetLink_Response *)
    armpi_fpv_kinematics__srv__SetLink_Event__rosidl_typesupport_introspection_c__get_const_function__SetLink_Event__response(untyped_member, index));
  armpi_fpv_kinematics__srv__SetLink_Response * value =
    (armpi_fpv_kinematics__srv__SetLink_Response *)(untyped_value);
  *value = *item;
}

void armpi_fpv_kinematics__srv__SetLink_Event__rosidl_typesupport_introspection_c__assign_function__SetLink_Event__response(
  void * untyped_member, size_t index, const void * untyped_value)
{
  armpi_fpv_kinematics__srv__SetLink_Response * item =
    ((armpi_fpv_kinematics__srv__SetLink_Response *)
    armpi_fpv_kinematics__srv__SetLink_Event__rosidl_typesupport_introspection_c__get_function__SetLink_Event__response(untyped_member, index));
  const armpi_fpv_kinematics__srv__SetLink_Response * value =
    (const armpi_fpv_kinematics__srv__SetLink_Response *)(untyped_value);
  *item = *value;
}

bool armpi_fpv_kinematics__srv__SetLink_Event__rosidl_typesupport_introspection_c__resize_function__SetLink_Event__response(
  void * untyped_member, size_t size)
{
  armpi_fpv_kinematics__srv__SetLink_Response__Sequence * member =
    (armpi_fpv_kinematics__srv__SetLink_Response__Sequence *)(untyped_member);
  armpi_fpv_kinematics__srv__SetLink_Response__Sequence__fini(member);
  return armpi_fpv_kinematics__srv__SetLink_Response__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember armpi_fpv_kinematics__srv__SetLink_Event__rosidl_typesupport_introspection_c__SetLink_Event_message_member_array[3] = {
  {
    "info",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(armpi_fpv_kinematics__srv__SetLink_Event, info),  // bytes offset in struct
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
    offsetof(armpi_fpv_kinematics__srv__SetLink_Event, request),  // bytes offset in struct
    NULL,  // default value
    armpi_fpv_kinematics__srv__SetLink_Event__rosidl_typesupport_introspection_c__size_function__SetLink_Event__request,  // size() function pointer
    armpi_fpv_kinematics__srv__SetLink_Event__rosidl_typesupport_introspection_c__get_const_function__SetLink_Event__request,  // get_const(index) function pointer
    armpi_fpv_kinematics__srv__SetLink_Event__rosidl_typesupport_introspection_c__get_function__SetLink_Event__request,  // get(index) function pointer
    armpi_fpv_kinematics__srv__SetLink_Event__rosidl_typesupport_introspection_c__fetch_function__SetLink_Event__request,  // fetch(index, &value) function pointer
    armpi_fpv_kinematics__srv__SetLink_Event__rosidl_typesupport_introspection_c__assign_function__SetLink_Event__request,  // assign(index, value) function pointer
    armpi_fpv_kinematics__srv__SetLink_Event__rosidl_typesupport_introspection_c__resize_function__SetLink_Event__request  // resize(index) function pointer
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
    offsetof(armpi_fpv_kinematics__srv__SetLink_Event, response),  // bytes offset in struct
    NULL,  // default value
    armpi_fpv_kinematics__srv__SetLink_Event__rosidl_typesupport_introspection_c__size_function__SetLink_Event__response,  // size() function pointer
    armpi_fpv_kinematics__srv__SetLink_Event__rosidl_typesupport_introspection_c__get_const_function__SetLink_Event__response,  // get_const(index) function pointer
    armpi_fpv_kinematics__srv__SetLink_Event__rosidl_typesupport_introspection_c__get_function__SetLink_Event__response,  // get(index) function pointer
    armpi_fpv_kinematics__srv__SetLink_Event__rosidl_typesupport_introspection_c__fetch_function__SetLink_Event__response,  // fetch(index, &value) function pointer
    armpi_fpv_kinematics__srv__SetLink_Event__rosidl_typesupport_introspection_c__assign_function__SetLink_Event__response,  // assign(index, value) function pointer
    armpi_fpv_kinematics__srv__SetLink_Event__rosidl_typesupport_introspection_c__resize_function__SetLink_Event__response  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers armpi_fpv_kinematics__srv__SetLink_Event__rosidl_typesupport_introspection_c__SetLink_Event_message_members = {
  "armpi_fpv_kinematics__srv",  // message namespace
  "SetLink_Event",  // message name
  3,  // number of fields
  sizeof(armpi_fpv_kinematics__srv__SetLink_Event),
  false,  // has_any_key_member_
  armpi_fpv_kinematics__srv__SetLink_Event__rosidl_typesupport_introspection_c__SetLink_Event_message_member_array,  // message members
  armpi_fpv_kinematics__srv__SetLink_Event__rosidl_typesupport_introspection_c__SetLink_Event_init_function,  // function to initialize message memory (memory has to be allocated)
  armpi_fpv_kinematics__srv__SetLink_Event__rosidl_typesupport_introspection_c__SetLink_Event_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t armpi_fpv_kinematics__srv__SetLink_Event__rosidl_typesupport_introspection_c__SetLink_Event_message_type_support_handle = {
  0,
  &armpi_fpv_kinematics__srv__SetLink_Event__rosidl_typesupport_introspection_c__SetLink_Event_message_members,
  get_message_typesupport_handle_function,
  &armpi_fpv_kinematics__srv__SetLink_Event__get_type_hash,
  &armpi_fpv_kinematics__srv__SetLink_Event__get_type_description,
  &armpi_fpv_kinematics__srv__SetLink_Event__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_armpi_fpv_kinematics
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, armpi_fpv_kinematics, srv, SetLink_Event)() {
  armpi_fpv_kinematics__srv__SetLink_Event__rosidl_typesupport_introspection_c__SetLink_Event_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, service_msgs, msg, ServiceEventInfo)();
  armpi_fpv_kinematics__srv__SetLink_Event__rosidl_typesupport_introspection_c__SetLink_Event_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, armpi_fpv_kinematics, srv, SetLink_Request)();
  armpi_fpv_kinematics__srv__SetLink_Event__rosidl_typesupport_introspection_c__SetLink_Event_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, armpi_fpv_kinematics, srv, SetLink_Response)();
  if (!armpi_fpv_kinematics__srv__SetLink_Event__rosidl_typesupport_introspection_c__SetLink_Event_message_type_support_handle.typesupport_identifier) {
    armpi_fpv_kinematics__srv__SetLink_Event__rosidl_typesupport_introspection_c__SetLink_Event_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &armpi_fpv_kinematics__srv__SetLink_Event__rosidl_typesupport_introspection_c__SetLink_Event_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "armpi_fpv_kinematics/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "armpi_fpv_kinematics/srv/detail/set_link__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers armpi_fpv_kinematics__srv__detail__set_link__rosidl_typesupport_introspection_c__SetLink_service_members = {
  "armpi_fpv_kinematics__srv",  // service namespace
  "SetLink",  // service name
  // the following fields are initialized below on first access
  NULL,  // request message
  // armpi_fpv_kinematics__srv__detail__set_link__rosidl_typesupport_introspection_c__SetLink_Request_message_type_support_handle,
  NULL,  // response message
  // armpi_fpv_kinematics__srv__detail__set_link__rosidl_typesupport_introspection_c__SetLink_Response_message_type_support_handle
  NULL  // event_message
  // armpi_fpv_kinematics__srv__detail__set_link__rosidl_typesupport_introspection_c__SetLink_Response_message_type_support_handle
};


static rosidl_service_type_support_t armpi_fpv_kinematics__srv__detail__set_link__rosidl_typesupport_introspection_c__SetLink_service_type_support_handle = {
  0,
  &armpi_fpv_kinematics__srv__detail__set_link__rosidl_typesupport_introspection_c__SetLink_service_members,
  get_service_typesupport_handle_function,
  &armpi_fpv_kinematics__srv__SetLink_Request__rosidl_typesupport_introspection_c__SetLink_Request_message_type_support_handle,
  &armpi_fpv_kinematics__srv__SetLink_Response__rosidl_typesupport_introspection_c__SetLink_Response_message_type_support_handle,
  &armpi_fpv_kinematics__srv__SetLink_Event__rosidl_typesupport_introspection_c__SetLink_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    armpi_fpv_kinematics,
    srv,
    SetLink
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    armpi_fpv_kinematics,
    srv,
    SetLink
  ),
  &armpi_fpv_kinematics__srv__SetLink__get_type_hash,
  &armpi_fpv_kinematics__srv__SetLink__get_type_description,
  &armpi_fpv_kinematics__srv__SetLink__get_type_description_sources,
};

// Forward declaration of message type support functions for service members
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, armpi_fpv_kinematics, srv, SetLink_Request)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, armpi_fpv_kinematics, srv, SetLink_Response)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, armpi_fpv_kinematics, srv, SetLink_Event)(void);

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_armpi_fpv_kinematics
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, armpi_fpv_kinematics, srv, SetLink)(void) {
  if (!armpi_fpv_kinematics__srv__detail__set_link__rosidl_typesupport_introspection_c__SetLink_service_type_support_handle.typesupport_identifier) {
    armpi_fpv_kinematics__srv__detail__set_link__rosidl_typesupport_introspection_c__SetLink_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)armpi_fpv_kinematics__srv__detail__set_link__rosidl_typesupport_introspection_c__SetLink_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, armpi_fpv_kinematics, srv, SetLink_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, armpi_fpv_kinematics, srv, SetLink_Response)()->data;
  }
  if (!service_members->event_members_) {
    service_members->event_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, armpi_fpv_kinematics, srv, SetLink_Event)()->data;
  }

  return &armpi_fpv_kinematics__srv__detail__set_link__rosidl_typesupport_introspection_c__SetLink_service_type_support_handle;
}
