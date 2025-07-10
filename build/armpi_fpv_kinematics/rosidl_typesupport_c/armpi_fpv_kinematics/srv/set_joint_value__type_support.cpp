// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from armpi_fpv_kinematics:srv/SetJointValue.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "armpi_fpv_kinematics/srv/detail/set_joint_value__struct.h"
#include "armpi_fpv_kinematics/srv/detail/set_joint_value__type_support.h"
#include "armpi_fpv_kinematics/srv/detail/set_joint_value__functions.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace armpi_fpv_kinematics
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _SetJointValue_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SetJointValue_Request_type_support_ids_t;

static const _SetJointValue_Request_type_support_ids_t _SetJointValue_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _SetJointValue_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SetJointValue_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SetJointValue_Request_type_support_symbol_names_t _SetJointValue_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, armpi_fpv_kinematics, srv, SetJointValue_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, armpi_fpv_kinematics, srv, SetJointValue_Request)),
  }
};

typedef struct _SetJointValue_Request_type_support_data_t
{
  void * data[2];
} _SetJointValue_Request_type_support_data_t;

static _SetJointValue_Request_type_support_data_t _SetJointValue_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SetJointValue_Request_message_typesupport_map = {
  2,
  "armpi_fpv_kinematics",
  &_SetJointValue_Request_message_typesupport_ids.typesupport_identifier[0],
  &_SetJointValue_Request_message_typesupport_symbol_names.symbol_name[0],
  &_SetJointValue_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SetJointValue_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SetJointValue_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &armpi_fpv_kinematics__srv__SetJointValue_Request__get_type_hash,
  &armpi_fpv_kinematics__srv__SetJointValue_Request__get_type_description,
  &armpi_fpv_kinematics__srv__SetJointValue_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace armpi_fpv_kinematics

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, armpi_fpv_kinematics, srv, SetJointValue_Request)() {
  return &::armpi_fpv_kinematics::srv::rosidl_typesupport_c::SetJointValue_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "armpi_fpv_kinematics/srv/detail/set_joint_value__struct.h"
// already included above
// #include "armpi_fpv_kinematics/srv/detail/set_joint_value__type_support.h"
// already included above
// #include "armpi_fpv_kinematics/srv/detail/set_joint_value__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace armpi_fpv_kinematics
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _SetJointValue_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SetJointValue_Response_type_support_ids_t;

static const _SetJointValue_Response_type_support_ids_t _SetJointValue_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _SetJointValue_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SetJointValue_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SetJointValue_Response_type_support_symbol_names_t _SetJointValue_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, armpi_fpv_kinematics, srv, SetJointValue_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, armpi_fpv_kinematics, srv, SetJointValue_Response)),
  }
};

typedef struct _SetJointValue_Response_type_support_data_t
{
  void * data[2];
} _SetJointValue_Response_type_support_data_t;

static _SetJointValue_Response_type_support_data_t _SetJointValue_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SetJointValue_Response_message_typesupport_map = {
  2,
  "armpi_fpv_kinematics",
  &_SetJointValue_Response_message_typesupport_ids.typesupport_identifier[0],
  &_SetJointValue_Response_message_typesupport_symbol_names.symbol_name[0],
  &_SetJointValue_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SetJointValue_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SetJointValue_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &armpi_fpv_kinematics__srv__SetJointValue_Response__get_type_hash,
  &armpi_fpv_kinematics__srv__SetJointValue_Response__get_type_description,
  &armpi_fpv_kinematics__srv__SetJointValue_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace armpi_fpv_kinematics

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, armpi_fpv_kinematics, srv, SetJointValue_Response)() {
  return &::armpi_fpv_kinematics::srv::rosidl_typesupport_c::SetJointValue_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "armpi_fpv_kinematics/srv/detail/set_joint_value__struct.h"
// already included above
// #include "armpi_fpv_kinematics/srv/detail/set_joint_value__type_support.h"
// already included above
// #include "armpi_fpv_kinematics/srv/detail/set_joint_value__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace armpi_fpv_kinematics
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _SetJointValue_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SetJointValue_Event_type_support_ids_t;

static const _SetJointValue_Event_type_support_ids_t _SetJointValue_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _SetJointValue_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SetJointValue_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SetJointValue_Event_type_support_symbol_names_t _SetJointValue_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, armpi_fpv_kinematics, srv, SetJointValue_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, armpi_fpv_kinematics, srv, SetJointValue_Event)),
  }
};

typedef struct _SetJointValue_Event_type_support_data_t
{
  void * data[2];
} _SetJointValue_Event_type_support_data_t;

static _SetJointValue_Event_type_support_data_t _SetJointValue_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SetJointValue_Event_message_typesupport_map = {
  2,
  "armpi_fpv_kinematics",
  &_SetJointValue_Event_message_typesupport_ids.typesupport_identifier[0],
  &_SetJointValue_Event_message_typesupport_symbol_names.symbol_name[0],
  &_SetJointValue_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SetJointValue_Event_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SetJointValue_Event_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &armpi_fpv_kinematics__srv__SetJointValue_Event__get_type_hash,
  &armpi_fpv_kinematics__srv__SetJointValue_Event__get_type_description,
  &armpi_fpv_kinematics__srv__SetJointValue_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace armpi_fpv_kinematics

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, armpi_fpv_kinematics, srv, SetJointValue_Event)() {
  return &::armpi_fpv_kinematics::srv::rosidl_typesupport_c::SetJointValue_Event_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "armpi_fpv_kinematics/srv/detail/set_joint_value__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
#include "service_msgs/msg/service_event_info.h"
#include "builtin_interfaces/msg/time.h"

namespace armpi_fpv_kinematics
{

namespace srv
{

namespace rosidl_typesupport_c
{
typedef struct _SetJointValue_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SetJointValue_type_support_ids_t;

static const _SetJointValue_type_support_ids_t _SetJointValue_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _SetJointValue_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SetJointValue_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SetJointValue_type_support_symbol_names_t _SetJointValue_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, armpi_fpv_kinematics, srv, SetJointValue)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, armpi_fpv_kinematics, srv, SetJointValue)),
  }
};

typedef struct _SetJointValue_type_support_data_t
{
  void * data[2];
} _SetJointValue_type_support_data_t;

static _SetJointValue_type_support_data_t _SetJointValue_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SetJointValue_service_typesupport_map = {
  2,
  "armpi_fpv_kinematics",
  &_SetJointValue_service_typesupport_ids.typesupport_identifier[0],
  &_SetJointValue_service_typesupport_symbol_names.symbol_name[0],
  &_SetJointValue_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t SetJointValue_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SetJointValue_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
  &SetJointValue_Request_message_type_support_handle,
  &SetJointValue_Response_message_type_support_handle,
  &SetJointValue_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    armpi_fpv_kinematics,
    srv,
    SetJointValue
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    armpi_fpv_kinematics,
    srv,
    SetJointValue
  ),
  &armpi_fpv_kinematics__srv__SetJointValue__get_type_hash,
  &armpi_fpv_kinematics__srv__SetJointValue__get_type_description,
  &armpi_fpv_kinematics__srv__SetJointValue__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace armpi_fpv_kinematics

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, armpi_fpv_kinematics, srv, SetJointValue)() {
  return &::armpi_fpv_kinematics::srv::rosidl_typesupport_c::SetJointValue_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif
