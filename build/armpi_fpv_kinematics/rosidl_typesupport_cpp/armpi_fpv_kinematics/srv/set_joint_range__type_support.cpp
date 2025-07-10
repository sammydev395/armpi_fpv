// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from armpi_fpv_kinematics:srv/SetJointRange.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "armpi_fpv_kinematics/srv/detail/set_joint_range__functions.h"
#include "armpi_fpv_kinematics/srv/detail/set_joint_range__struct.hpp"
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

typedef struct _SetJointRange_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SetJointRange_Request_type_support_ids_t;

static const _SetJointRange_Request_type_support_ids_t _SetJointRange_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
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
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, armpi_fpv_kinematics, srv, SetJointRange_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, armpi_fpv_kinematics, srv, SetJointRange_Request)),
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
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SetJointRange_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &armpi_fpv_kinematics__srv__SetJointRange_Request__get_type_hash,
  &armpi_fpv_kinematics__srv__SetJointRange_Request__get_type_description,
  &armpi_fpv_kinematics__srv__SetJointRange_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace armpi_fpv_kinematics

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<armpi_fpv_kinematics::srv::SetJointRange_Request>()
{
  return &::armpi_fpv_kinematics::srv::rosidl_typesupport_cpp::SetJointRange_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, armpi_fpv_kinematics, srv, SetJointRange_Request)() {
  return get_message_type_support_handle<armpi_fpv_kinematics::srv::SetJointRange_Request>();
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
// #include "armpi_fpv_kinematics/srv/detail/set_joint_range__functions.h"
// already included above
// #include "armpi_fpv_kinematics/srv/detail/set_joint_range__struct.hpp"
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

typedef struct _SetJointRange_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SetJointRange_Response_type_support_ids_t;

static const _SetJointRange_Response_type_support_ids_t _SetJointRange_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
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
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, armpi_fpv_kinematics, srv, SetJointRange_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, armpi_fpv_kinematics, srv, SetJointRange_Response)),
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
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SetJointRange_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &armpi_fpv_kinematics__srv__SetJointRange_Response__get_type_hash,
  &armpi_fpv_kinematics__srv__SetJointRange_Response__get_type_description,
  &armpi_fpv_kinematics__srv__SetJointRange_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace armpi_fpv_kinematics

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<armpi_fpv_kinematics::srv::SetJointRange_Response>()
{
  return &::armpi_fpv_kinematics::srv::rosidl_typesupport_cpp::SetJointRange_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, armpi_fpv_kinematics, srv, SetJointRange_Response)() {
  return get_message_type_support_handle<armpi_fpv_kinematics::srv::SetJointRange_Response>();
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
// #include "armpi_fpv_kinematics/srv/detail/set_joint_range__functions.h"
// already included above
// #include "armpi_fpv_kinematics/srv/detail/set_joint_range__struct.hpp"
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

typedef struct _SetJointRange_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SetJointRange_Event_type_support_ids_t;

static const _SetJointRange_Event_type_support_ids_t _SetJointRange_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
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
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, armpi_fpv_kinematics, srv, SetJointRange_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, armpi_fpv_kinematics, srv, SetJointRange_Event)),
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
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SetJointRange_Event_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &armpi_fpv_kinematics__srv__SetJointRange_Event__get_type_hash,
  &armpi_fpv_kinematics__srv__SetJointRange_Event__get_type_description,
  &armpi_fpv_kinematics__srv__SetJointRange_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace armpi_fpv_kinematics

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<armpi_fpv_kinematics::srv::SetJointRange_Event>()
{
  return &::armpi_fpv_kinematics::srv::rosidl_typesupport_cpp::SetJointRange_Event_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, armpi_fpv_kinematics, srv, SetJointRange_Event)() {
  return get_message_type_support_handle<armpi_fpv_kinematics::srv::SetJointRange_Event>();
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
// #include "armpi_fpv_kinematics/srv/detail/set_joint_range__struct.hpp"
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

typedef struct _SetJointRange_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SetJointRange_type_support_ids_t;

static const _SetJointRange_type_support_ids_t _SetJointRange_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
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
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, armpi_fpv_kinematics, srv, SetJointRange)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, armpi_fpv_kinematics, srv, SetJointRange)),
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
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SetJointRange_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
  ::rosidl_typesupport_cpp::get_message_type_support_handle<armpi_fpv_kinematics::srv::SetJointRange_Request>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<armpi_fpv_kinematics::srv::SetJointRange_Response>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<armpi_fpv_kinematics::srv::SetJointRange_Event>(),
  &::rosidl_typesupport_cpp::service_create_event_message<armpi_fpv_kinematics::srv::SetJointRange>,
  &::rosidl_typesupport_cpp::service_destroy_event_message<armpi_fpv_kinematics::srv::SetJointRange>,
  &armpi_fpv_kinematics__srv__SetJointRange__get_type_hash,
  &armpi_fpv_kinematics__srv__SetJointRange__get_type_description,
  &armpi_fpv_kinematics__srv__SetJointRange__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace armpi_fpv_kinematics

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<armpi_fpv_kinematics::srv::SetJointRange>()
{
  return &::armpi_fpv_kinematics::srv::rosidl_typesupport_cpp::SetJointRange_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_cpp, armpi_fpv_kinematics, srv, SetJointRange)() {
  return ::rosidl_typesupport_cpp::get_service_type_support_handle<armpi_fpv_kinematics::srv::SetJointRange>();
}

#ifdef __cplusplus
}
#endif
