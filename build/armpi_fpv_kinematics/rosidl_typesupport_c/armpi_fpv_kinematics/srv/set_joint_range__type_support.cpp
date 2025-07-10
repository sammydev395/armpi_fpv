// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from armpi_fpv_kinematics:srv/SetJointRange.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "armpi_fpv_kinematics/srv/detail/set_joint_range__struct.h"
#include "armpi_fpv_kinematics/srv/detail/set_joint_range__type_support.h"
#include "armpi_fpv_kinematics/srv/detail/set_joint_range__functions.h"
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

typedef struct _SetJointRange_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SetJointRange_Request_type_support_ids_t;

static const _SetJointRange_Request_type_support_ids_t _SetJointRange_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _SetJointRange_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SetJointRange_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SetJointRange_Request_type_support_symbol_names_t _SetJointRange_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, armpi_fpv_kinematics, srv, SetJointRange_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, armpi_fpv_kinematics, srv, SetJointRange_Request)),
  }
};

typedef struct _SetJointRange_Request_type_support_data_t
{
  void * data[2];
} _SetJointRange_Request_type_support_data_t;

static _SetJointRange_Request_type_support_data_t _SetJointRange_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SetJointRange_Request_message_typesupport_map = {
  2,
  "armpi_fpv_kinematics",
  &_SetJointRange_Request_message_typesupport_ids.typesupport_identifier[0],
  &_SetJointRange_Request_message_typesupport_symbol_names.symbol_name[0],
  &_SetJointRange_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SetJointRange_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SetJointRange_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &armpi_fpv_kinematics__srv__SetJointRange_Request__get_type_hash,
  &armpi_fpv_kinematics__srv__SetJointRange_Request__get_type_description,
  &armpi_fpv_kinematics__srv__SetJointRange_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace armpi_fpv_kinematics

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, armpi_fpv_kinematics, srv, SetJointRange_Request)() {
  return &::armpi_fpv_kinematics::srv::rosidl_typesupport_c::SetJointRange_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "armpi_fpv_kinematics/srv/detail/set_joint_range__struct.h"
// already included above
// #include "armpi_fpv_kinematics/srv/detail/set_joint_range__type_support.h"
// already included above
// #include "armpi_fpv_kinematics/srv/detail/set_joint_range__functions.h"
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

typedef struct _SetJointRange_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SetJointRange_Response_type_support_ids_t;

static const _SetJointRange_Response_type_support_ids_t _SetJointRange_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _SetJointRange_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SetJointRange_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SetJointRange_Response_type_support_symbol_names_t _SetJointRange_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, armpi_fpv_kinematics, srv, SetJointRange_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, armpi_fpv_kinematics, srv, SetJointRange_Response)),
  }
};

typedef struct _SetJointRange_Response_type_support_data_t
{
  void * data[2];
} _SetJointRange_Response_type_support_data_t;

static _SetJointRange_Response_type_support_data_t _SetJointRange_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SetJointRange_Response_message_typesupport_map = {
  2,
  "armpi_fpv_kinematics",
  &_SetJointRange_Response_message_typesupport_ids.typesupport_identifier[0],
  &_SetJointRange_Response_message_typesupport_symbol_names.symbol_name[0],
  &_SetJointRange_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SetJointRange_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SetJointRange_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &armpi_fpv_kinematics__srv__SetJointRange_Response__get_type_hash,
  &armpi_fpv_kinematics__srv__SetJointRange_Response__get_type_description,
  &armpi_fpv_kinematics__srv__SetJointRange_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace armpi_fpv_kinematics

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, armpi_fpv_kinematics, srv, SetJointRange_Response)() {
  return &::armpi_fpv_kinematics::srv::rosidl_typesupport_c::SetJointRange_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "armpi_fpv_kinematics/srv/detail/set_joint_range__struct.h"
// already included above
// #include "armpi_fpv_kinematics/srv/detail/set_joint_range__type_support.h"
// already included above
// #include "armpi_fpv_kinematics/srv/detail/set_joint_range__functions.h"
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

typedef struct _SetJointRange_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SetJointRange_Event_type_support_ids_t;

static const _SetJointRange_Event_type_support_ids_t _SetJointRange_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _SetJointRange_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SetJointRange_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SetJointRange_Event_type_support_symbol_names_t _SetJointRange_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, armpi_fpv_kinematics, srv, SetJointRange_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, armpi_fpv_kinematics, srv, SetJointRange_Event)),
  }
};

typedef struct _SetJointRange_Event_type_support_data_t
{
  void * data[2];
} _SetJointRange_Event_type_support_data_t;

static _SetJointRange_Event_type_support_data_t _SetJointRange_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SetJointRange_Event_message_typesupport_map = {
  2,
  "armpi_fpv_kinematics",
  &_SetJointRange_Event_message_typesupport_ids.typesupport_identifier[0],
  &_SetJointRange_Event_message_typesupport_symbol_names.symbol_name[0],
  &_SetJointRange_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SetJointRange_Event_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SetJointRange_Event_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &armpi_fpv_kinematics__srv__SetJointRange_Event__get_type_hash,
  &armpi_fpv_kinematics__srv__SetJointRange_Event__get_type_description,
  &armpi_fpv_kinematics__srv__SetJointRange_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace armpi_fpv_kinematics

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, armpi_fpv_kinematics, srv, SetJointRange_Event)() {
  return &::armpi_fpv_kinematics::srv::rosidl_typesupport_c::SetJointRange_Event_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "armpi_fpv_kinematics/srv/detail/set_joint_range__type_support.h"
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
typedef struct _SetJointRange_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SetJointRange_type_support_ids_t;

static const _SetJointRange_type_support_ids_t _SetJointRange_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _SetJointRange_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SetJointRange_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SetJointRange_type_support_symbol_names_t _SetJointRange_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, armpi_fpv_kinematics, srv, SetJointRange)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, armpi_fpv_kinematics, srv, SetJointRange)),
  }
};

typedef struct _SetJointRange_type_support_data_t
{
  void * data[2];
} _SetJointRange_type_support_data_t;

static _SetJointRange_type_support_data_t _SetJointRange_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SetJointRange_service_typesupport_map = {
  2,
  "armpi_fpv_kinematics",
  &_SetJointRange_service_typesupport_ids.typesupport_identifier[0],
  &_SetJointRange_service_typesupport_symbol_names.symbol_name[0],
  &_SetJointRange_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t SetJointRange_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SetJointRange_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
  &SetJointRange_Request_message_type_support_handle,
  &SetJointRange_Response_message_type_support_handle,
  &SetJointRange_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    armpi_fpv_kinematics,
    srv,
    SetJointRange
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    armpi_fpv_kinematics,
    srv,
    SetJointRange
  ),
  &armpi_fpv_kinematics__srv__SetJointRange__get_type_hash,
  &armpi_fpv_kinematics__srv__SetJointRange__get_type_description,
  &armpi_fpv_kinematics__srv__SetJointRange__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace armpi_fpv_kinematics

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, armpi_fpv_kinematics, srv, SetJointRange)() {
  return &::armpi_fpv_kinematics::srv::rosidl_typesupport_c::SetJointRange_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif
