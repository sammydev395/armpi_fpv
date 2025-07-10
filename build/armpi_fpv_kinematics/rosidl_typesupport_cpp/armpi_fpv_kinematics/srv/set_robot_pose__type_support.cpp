// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from armpi_fpv_kinematics:srv/SetRobotPose.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "armpi_fpv_kinematics/srv/detail/set_robot_pose__functions.h"
#include "armpi_fpv_kinematics/srv/detail/set_robot_pose__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace armpi_fpv_kinematics
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _SetRobotPose_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SetRobotPose_Request_type_support_ids_t;

static const _SetRobotPose_Request_type_support_ids_t _SetRobotPose_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _SetRobotPose_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SetRobotPose_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SetRobotPose_Request_type_support_symbol_names_t _SetRobotPose_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, armpi_fpv_kinematics, srv, SetRobotPose_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, armpi_fpv_kinematics, srv, SetRobotPose_Request)),
  }
};

typedef struct _SetRobotPose_Request_type_support_data_t
{
  void * data[2];
} _SetRobotPose_Request_type_support_data_t;

static _SetRobotPose_Request_type_support_data_t _SetRobotPose_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SetRobotPose_Request_message_typesupport_map = {
  2,
  "armpi_fpv_kinematics",
  &_SetRobotPose_Request_message_typesupport_ids.typesupport_identifier[0],
  &_SetRobotPose_Request_message_typesupport_symbol_names.symbol_name[0],
  &_SetRobotPose_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SetRobotPose_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SetRobotPose_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &armpi_fpv_kinematics__srv__SetRobotPose_Request__get_type_hash,
  &armpi_fpv_kinematics__srv__SetRobotPose_Request__get_type_description,
  &armpi_fpv_kinematics__srv__SetRobotPose_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace armpi_fpv_kinematics

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<armpi_fpv_kinematics::srv::SetRobotPose_Request>()
{
  return &::armpi_fpv_kinematics::srv::rosidl_typesupport_cpp::SetRobotPose_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, armpi_fpv_kinematics, srv, SetRobotPose_Request)() {
  return get_message_type_support_handle<armpi_fpv_kinematics::srv::SetRobotPose_Request>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "armpi_fpv_kinematics/srv/detail/set_robot_pose__functions.h"
// already included above
// #include "armpi_fpv_kinematics/srv/detail/set_robot_pose__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace armpi_fpv_kinematics
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _SetRobotPose_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SetRobotPose_Response_type_support_ids_t;

static const _SetRobotPose_Response_type_support_ids_t _SetRobotPose_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _SetRobotPose_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SetRobotPose_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SetRobotPose_Response_type_support_symbol_names_t _SetRobotPose_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, armpi_fpv_kinematics, srv, SetRobotPose_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, armpi_fpv_kinematics, srv, SetRobotPose_Response)),
  }
};

typedef struct _SetRobotPose_Response_type_support_data_t
{
  void * data[2];
} _SetRobotPose_Response_type_support_data_t;

static _SetRobotPose_Response_type_support_data_t _SetRobotPose_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SetRobotPose_Response_message_typesupport_map = {
  2,
  "armpi_fpv_kinematics",
  &_SetRobotPose_Response_message_typesupport_ids.typesupport_identifier[0],
  &_SetRobotPose_Response_message_typesupport_symbol_names.symbol_name[0],
  &_SetRobotPose_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SetRobotPose_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SetRobotPose_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &armpi_fpv_kinematics__srv__SetRobotPose_Response__get_type_hash,
  &armpi_fpv_kinematics__srv__SetRobotPose_Response__get_type_description,
  &armpi_fpv_kinematics__srv__SetRobotPose_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace armpi_fpv_kinematics

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<armpi_fpv_kinematics::srv::SetRobotPose_Response>()
{
  return &::armpi_fpv_kinematics::srv::rosidl_typesupport_cpp::SetRobotPose_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, armpi_fpv_kinematics, srv, SetRobotPose_Response)() {
  return get_message_type_support_handle<armpi_fpv_kinematics::srv::SetRobotPose_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "armpi_fpv_kinematics/srv/detail/set_robot_pose__functions.h"
// already included above
// #include "armpi_fpv_kinematics/srv/detail/set_robot_pose__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace armpi_fpv_kinematics
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _SetRobotPose_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SetRobotPose_Event_type_support_ids_t;

static const _SetRobotPose_Event_type_support_ids_t _SetRobotPose_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _SetRobotPose_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SetRobotPose_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SetRobotPose_Event_type_support_symbol_names_t _SetRobotPose_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, armpi_fpv_kinematics, srv, SetRobotPose_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, armpi_fpv_kinematics, srv, SetRobotPose_Event)),
  }
};

typedef struct _SetRobotPose_Event_type_support_data_t
{
  void * data[2];
} _SetRobotPose_Event_type_support_data_t;

static _SetRobotPose_Event_type_support_data_t _SetRobotPose_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SetRobotPose_Event_message_typesupport_map = {
  2,
  "armpi_fpv_kinematics",
  &_SetRobotPose_Event_message_typesupport_ids.typesupport_identifier[0],
  &_SetRobotPose_Event_message_typesupport_symbol_names.symbol_name[0],
  &_SetRobotPose_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SetRobotPose_Event_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SetRobotPose_Event_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &armpi_fpv_kinematics__srv__SetRobotPose_Event__get_type_hash,
  &armpi_fpv_kinematics__srv__SetRobotPose_Event__get_type_description,
  &armpi_fpv_kinematics__srv__SetRobotPose_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace armpi_fpv_kinematics

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<armpi_fpv_kinematics::srv::SetRobotPose_Event>()
{
  return &::armpi_fpv_kinematics::srv::rosidl_typesupport_cpp::SetRobotPose_Event_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, armpi_fpv_kinematics, srv, SetRobotPose_Event)() {
  return get_message_type_support_handle<armpi_fpv_kinematics::srv::SetRobotPose_Event>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "armpi_fpv_kinematics/srv/detail/set_robot_pose__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace armpi_fpv_kinematics
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _SetRobotPose_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SetRobotPose_type_support_ids_t;

static const _SetRobotPose_type_support_ids_t _SetRobotPose_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _SetRobotPose_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SetRobotPose_type_support_symbol_names_t;
#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SetRobotPose_type_support_symbol_names_t _SetRobotPose_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, armpi_fpv_kinematics, srv, SetRobotPose)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, armpi_fpv_kinematics, srv, SetRobotPose)),
  }
};

typedef struct _SetRobotPose_type_support_data_t
{
  void * data[2];
} _SetRobotPose_type_support_data_t;

static _SetRobotPose_type_support_data_t _SetRobotPose_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SetRobotPose_service_typesupport_map = {
  2,
  "armpi_fpv_kinematics",
  &_SetRobotPose_service_typesupport_ids.typesupport_identifier[0],
  &_SetRobotPose_service_typesupport_symbol_names.symbol_name[0],
  &_SetRobotPose_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t SetRobotPose_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SetRobotPose_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
  ::rosidl_typesupport_cpp::get_message_type_support_handle<armpi_fpv_kinematics::srv::SetRobotPose_Request>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<armpi_fpv_kinematics::srv::SetRobotPose_Response>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<armpi_fpv_kinematics::srv::SetRobotPose_Event>(),
  &::rosidl_typesupport_cpp::service_create_event_message<armpi_fpv_kinematics::srv::SetRobotPose>,
  &::rosidl_typesupport_cpp::service_destroy_event_message<armpi_fpv_kinematics::srv::SetRobotPose>,
  &armpi_fpv_kinematics__srv__SetRobotPose__get_type_hash,
  &armpi_fpv_kinematics__srv__SetRobotPose__get_type_description,
  &armpi_fpv_kinematics__srv__SetRobotPose__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace armpi_fpv_kinematics

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<armpi_fpv_kinematics::srv::SetRobotPose>()
{
  return &::armpi_fpv_kinematics::srv::rosidl_typesupport_cpp::SetRobotPose_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_cpp, armpi_fpv_kinematics, srv, SetRobotPose)() {
  return ::rosidl_typesupport_cpp::get_service_type_support_handle<armpi_fpv_kinematics::srv::SetRobotPose>();
}

#ifdef __cplusplus
}
#endif
