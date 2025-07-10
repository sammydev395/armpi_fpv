// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from armpi_fpv_kinematics:srv/GetLink.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "armpi_fpv_kinematics/srv/detail/get_link__struct.h"
#include "armpi_fpv_kinematics/srv/detail/get_link__type_support.h"
#include "armpi_fpv_kinematics/srv/detail/get_link__functions.h"
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

typedef struct _GetLink_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GetLink_Request_type_support_ids_t;

static const _GetLink_Request_type_support_ids_t _GetLink_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _GetLink_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GetLink_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GetLink_Request_type_support_symbol_names_t _GetLink_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, armpi_fpv_kinematics, srv, GetLink_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, armpi_fpv_kinematics, srv, GetLink_Request)),
  }
};

typedef struct _GetLink_Request_type_support_data_t
{
  void * data[2];
} _GetLink_Request_type_support_data_t;

static _GetLink_Request_type_support_data_t _GetLink_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GetLink_Request_message_typesupport_map = {
  2,
  "armpi_fpv_kinematics",
  &_GetLink_Request_message_typesupport_ids.typesupport_identifier[0],
  &_GetLink_Request_message_typesupport_symbol_names.symbol_name[0],
  &_GetLink_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t GetLink_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GetLink_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &armpi_fpv_kinematics__srv__GetLink_Request__get_type_hash,
  &armpi_fpv_kinematics__srv__GetLink_Request__get_type_description,
  &armpi_fpv_kinematics__srv__GetLink_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace armpi_fpv_kinematics

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, armpi_fpv_kinematics, srv, GetLink_Request)() {
  return &::armpi_fpv_kinematics::srv::rosidl_typesupport_c::GetLink_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "armpi_fpv_kinematics/srv/detail/get_link__struct.h"
// already included above
// #include "armpi_fpv_kinematics/srv/detail/get_link__type_support.h"
// already included above
// #include "armpi_fpv_kinematics/srv/detail/get_link__functions.h"
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

typedef struct _GetLink_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GetLink_Response_type_support_ids_t;

static const _GetLink_Response_type_support_ids_t _GetLink_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _GetLink_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GetLink_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GetLink_Response_type_support_symbol_names_t _GetLink_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, armpi_fpv_kinematics, srv, GetLink_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, armpi_fpv_kinematics, srv, GetLink_Response)),
  }
};

typedef struct _GetLink_Response_type_support_data_t
{
  void * data[2];
} _GetLink_Response_type_support_data_t;

static _GetLink_Response_type_support_data_t _GetLink_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GetLink_Response_message_typesupport_map = {
  2,
  "armpi_fpv_kinematics",
  &_GetLink_Response_message_typesupport_ids.typesupport_identifier[0],
  &_GetLink_Response_message_typesupport_symbol_names.symbol_name[0],
  &_GetLink_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t GetLink_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GetLink_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &armpi_fpv_kinematics__srv__GetLink_Response__get_type_hash,
  &armpi_fpv_kinematics__srv__GetLink_Response__get_type_description,
  &armpi_fpv_kinematics__srv__GetLink_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace armpi_fpv_kinematics

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, armpi_fpv_kinematics, srv, GetLink_Response)() {
  return &::armpi_fpv_kinematics::srv::rosidl_typesupport_c::GetLink_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "armpi_fpv_kinematics/srv/detail/get_link__struct.h"
// already included above
// #include "armpi_fpv_kinematics/srv/detail/get_link__type_support.h"
// already included above
// #include "armpi_fpv_kinematics/srv/detail/get_link__functions.h"
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

typedef struct _GetLink_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GetLink_Event_type_support_ids_t;

static const _GetLink_Event_type_support_ids_t _GetLink_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _GetLink_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GetLink_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GetLink_Event_type_support_symbol_names_t _GetLink_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, armpi_fpv_kinematics, srv, GetLink_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, armpi_fpv_kinematics, srv, GetLink_Event)),
  }
};

typedef struct _GetLink_Event_type_support_data_t
{
  void * data[2];
} _GetLink_Event_type_support_data_t;

static _GetLink_Event_type_support_data_t _GetLink_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GetLink_Event_message_typesupport_map = {
  2,
  "armpi_fpv_kinematics",
  &_GetLink_Event_message_typesupport_ids.typesupport_identifier[0],
  &_GetLink_Event_message_typesupport_symbol_names.symbol_name[0],
  &_GetLink_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t GetLink_Event_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GetLink_Event_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &armpi_fpv_kinematics__srv__GetLink_Event__get_type_hash,
  &armpi_fpv_kinematics__srv__GetLink_Event__get_type_description,
  &armpi_fpv_kinematics__srv__GetLink_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace armpi_fpv_kinematics

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, armpi_fpv_kinematics, srv, GetLink_Event)() {
  return &::armpi_fpv_kinematics::srv::rosidl_typesupport_c::GetLink_Event_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "armpi_fpv_kinematics/srv/detail/get_link__type_support.h"
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
typedef struct _GetLink_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GetLink_type_support_ids_t;

static const _GetLink_type_support_ids_t _GetLink_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _GetLink_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GetLink_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GetLink_type_support_symbol_names_t _GetLink_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, armpi_fpv_kinematics, srv, GetLink)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, armpi_fpv_kinematics, srv, GetLink)),
  }
};

typedef struct _GetLink_type_support_data_t
{
  void * data[2];
} _GetLink_type_support_data_t;

static _GetLink_type_support_data_t _GetLink_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GetLink_service_typesupport_map = {
  2,
  "armpi_fpv_kinematics",
  &_GetLink_service_typesupport_ids.typesupport_identifier[0],
  &_GetLink_service_typesupport_symbol_names.symbol_name[0],
  &_GetLink_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t GetLink_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GetLink_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
  &GetLink_Request_message_type_support_handle,
  &GetLink_Response_message_type_support_handle,
  &GetLink_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    armpi_fpv_kinematics,
    srv,
    GetLink
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    armpi_fpv_kinematics,
    srv,
    GetLink
  ),
  &armpi_fpv_kinematics__srv__GetLink__get_type_hash,
  &armpi_fpv_kinematics__srv__GetLink__get_type_description,
  &armpi_fpv_kinematics__srv__GetLink__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace armpi_fpv_kinematics

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, armpi_fpv_kinematics, srv, GetLink)() {
  return &::armpi_fpv_kinematics::srv::rosidl_typesupport_c::GetLink_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif
