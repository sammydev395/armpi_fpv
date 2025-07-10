// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from armpi_fpv_kinematics:srv/GetRobotPose.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "armpi_fpv_kinematics/srv/detail/get_robot_pose__struct.h"
#include "armpi_fpv_kinematics/srv/detail/get_robot_pose__type_support.h"
#include "armpi_fpv_kinematics/srv/detail/get_robot_pose__functions.h"
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

typedef struct _GetRobotPose_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GetRobotPose_Request_type_support_ids_t;

static const _GetRobotPose_Request_type_support_ids_t _GetRobotPose_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _GetRobotPose_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GetRobotPose_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GetRobotPose_Request_type_support_symbol_names_t _GetRobotPose_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, armpi_fpv_kinematics, srv, GetRobotPose_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, armpi_fpv_kinematics, srv, GetRobotPose_Request)),
  }
};

typedef struct _GetRobotPose_Request_type_support_data_t
{
  void * data[2];
} _GetRobotPose_Request_type_support_data_t;

static _GetRobotPose_Request_type_support_data_t _GetRobotPose_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GetRobotPose_Request_message_typesupport_map = {
  2,
  "armpi_fpv_kinematics",
  &_GetRobotPose_Request_message_typesupport_ids.typesupport_identifier[0],
  &_GetRobotPose_Request_message_typesupport_symbol_names.symbol_name[0],
  &_GetRobotPose_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t GetRobotPose_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GetRobotPose_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &armpi_fpv_kinematics__srv__GetRobotPose_Request__get_type_hash,
  &armpi_fpv_kinematics__srv__GetRobotPose_Request__get_type_description,
  &armpi_fpv_kinematics__srv__GetRobotPose_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace armpi_fpv_kinematics

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, armpi_fpv_kinematics, srv, GetRobotPose_Request)() {
  return &::armpi_fpv_kinematics::srv::rosidl_typesupport_c::GetRobotPose_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "armpi_fpv_kinematics/srv/detail/get_robot_pose__struct.h"
// already included above
// #include "armpi_fpv_kinematics/srv/detail/get_robot_pose__type_support.h"
// already included above
// #include "armpi_fpv_kinematics/srv/detail/get_robot_pose__functions.h"
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

typedef struct _GetRobotPose_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GetRobotPose_Response_type_support_ids_t;

static const _GetRobotPose_Response_type_support_ids_t _GetRobotPose_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _GetRobotPose_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GetRobotPose_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GetRobotPose_Response_type_support_symbol_names_t _GetRobotPose_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, armpi_fpv_kinematics, srv, GetRobotPose_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, armpi_fpv_kinematics, srv, GetRobotPose_Response)),
  }
};

typedef struct _GetRobotPose_Response_type_support_data_t
{
  void * data[2];
} _GetRobotPose_Response_type_support_data_t;

static _GetRobotPose_Response_type_support_data_t _GetRobotPose_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GetRobotPose_Response_message_typesupport_map = {
  2,
  "armpi_fpv_kinematics",
  &_GetRobotPose_Response_message_typesupport_ids.typesupport_identifier[0],
  &_GetRobotPose_Response_message_typesupport_symbol_names.symbol_name[0],
  &_GetRobotPose_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t GetRobotPose_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GetRobotPose_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &armpi_fpv_kinematics__srv__GetRobotPose_Response__get_type_hash,
  &armpi_fpv_kinematics__srv__GetRobotPose_Response__get_type_description,
  &armpi_fpv_kinematics__srv__GetRobotPose_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace armpi_fpv_kinematics

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, armpi_fpv_kinematics, srv, GetRobotPose_Response)() {
  return &::armpi_fpv_kinematics::srv::rosidl_typesupport_c::GetRobotPose_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "armpi_fpv_kinematics/srv/detail/get_robot_pose__struct.h"
// already included above
// #include "armpi_fpv_kinematics/srv/detail/get_robot_pose__type_support.h"
// already included above
// #include "armpi_fpv_kinematics/srv/detail/get_robot_pose__functions.h"
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

typedef struct _GetRobotPose_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GetRobotPose_Event_type_support_ids_t;

static const _GetRobotPose_Event_type_support_ids_t _GetRobotPose_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _GetRobotPose_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GetRobotPose_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GetRobotPose_Event_type_support_symbol_names_t _GetRobotPose_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, armpi_fpv_kinematics, srv, GetRobotPose_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, armpi_fpv_kinematics, srv, GetRobotPose_Event)),
  }
};

typedef struct _GetRobotPose_Event_type_support_data_t
{
  void * data[2];
} _GetRobotPose_Event_type_support_data_t;

static _GetRobotPose_Event_type_support_data_t _GetRobotPose_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GetRobotPose_Event_message_typesupport_map = {
  2,
  "armpi_fpv_kinematics",
  &_GetRobotPose_Event_message_typesupport_ids.typesupport_identifier[0],
  &_GetRobotPose_Event_message_typesupport_symbol_names.symbol_name[0],
  &_GetRobotPose_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t GetRobotPose_Event_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GetRobotPose_Event_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &armpi_fpv_kinematics__srv__GetRobotPose_Event__get_type_hash,
  &armpi_fpv_kinematics__srv__GetRobotPose_Event__get_type_description,
  &armpi_fpv_kinematics__srv__GetRobotPose_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace armpi_fpv_kinematics

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, armpi_fpv_kinematics, srv, GetRobotPose_Event)() {
  return &::armpi_fpv_kinematics::srv::rosidl_typesupport_c::GetRobotPose_Event_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "armpi_fpv_kinematics/srv/detail/get_robot_pose__type_support.h"
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
typedef struct _GetRobotPose_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GetRobotPose_type_support_ids_t;

static const _GetRobotPose_type_support_ids_t _GetRobotPose_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _GetRobotPose_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GetRobotPose_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GetRobotPose_type_support_symbol_names_t _GetRobotPose_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, armpi_fpv_kinematics, srv, GetRobotPose)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, armpi_fpv_kinematics, srv, GetRobotPose)),
  }
};

typedef struct _GetRobotPose_type_support_data_t
{
  void * data[2];
} _GetRobotPose_type_support_data_t;

static _GetRobotPose_type_support_data_t _GetRobotPose_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GetRobotPose_service_typesupport_map = {
  2,
  "armpi_fpv_kinematics",
  &_GetRobotPose_service_typesupport_ids.typesupport_identifier[0],
  &_GetRobotPose_service_typesupport_symbol_names.symbol_name[0],
  &_GetRobotPose_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t GetRobotPose_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GetRobotPose_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
  &GetRobotPose_Request_message_type_support_handle,
  &GetRobotPose_Response_message_type_support_handle,
  &GetRobotPose_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    armpi_fpv_kinematics,
    srv,
    GetRobotPose
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    armpi_fpv_kinematics,
    srv,
    GetRobotPose
  ),
  &armpi_fpv_kinematics__srv__GetRobotPose__get_type_hash,
  &armpi_fpv_kinematics__srv__GetRobotPose__get_type_description,
  &armpi_fpv_kinematics__srv__GetRobotPose__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace armpi_fpv_kinematics

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, armpi_fpv_kinematics, srv, GetRobotPose)() {
  return &::armpi_fpv_kinematics::srv::rosidl_typesupport_c::GetRobotPose_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif
