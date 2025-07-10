// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from armpi_fpv_kinematics:srv/SetLink.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "armpi_fpv_kinematics/srv/detail/set_link__functions.h"
#include "armpi_fpv_kinematics/srv/detail/set_link__struct.hpp"
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

typedef struct _SetLink_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SetLink_Request_type_support_ids_t;

static const _SetLink_Request_type_support_ids_t _SetLink_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _SetLink_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SetLink_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SetLink_Request_type_support_symbol_names_t _SetLink_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, armpi_fpv_kinematics, srv, SetLink_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, armpi_fpv_kinematics, srv, SetLink_Request)),
  }
};

typedef struct _SetLink_Request_type_support_data_t
{
  void * data[2];
} _SetLink_Request_type_support_data_t;

static _SetLink_Request_type_support_data_t _SetLink_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SetLink_Request_message_typesupport_map = {
  2,
  "armpi_fpv_kinematics",
  &_SetLink_Request_message_typesupport_ids.typesupport_identifier[0],
  &_SetLink_Request_message_typesupport_symbol_names.symbol_name[0],
  &_SetLink_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SetLink_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SetLink_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &armpi_fpv_kinematics__srv__SetLink_Request__get_type_hash,
  &armpi_fpv_kinematics__srv__SetLink_Request__get_type_description,
  &armpi_fpv_kinematics__srv__SetLink_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace armpi_fpv_kinematics

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<armpi_fpv_kinematics::srv::SetLink_Request>()
{
  return &::armpi_fpv_kinematics::srv::rosidl_typesupport_cpp::SetLink_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, armpi_fpv_kinematics, srv, SetLink_Request)() {
  return get_message_type_support_handle<armpi_fpv_kinematics::srv::SetLink_Request>();
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
// #include "armpi_fpv_kinematics/srv/detail/set_link__functions.h"
// already included above
// #include "armpi_fpv_kinematics/srv/detail/set_link__struct.hpp"
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

typedef struct _SetLink_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SetLink_Response_type_support_ids_t;

static const _SetLink_Response_type_support_ids_t _SetLink_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _SetLink_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SetLink_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SetLink_Response_type_support_symbol_names_t _SetLink_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, armpi_fpv_kinematics, srv, SetLink_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, armpi_fpv_kinematics, srv, SetLink_Response)),
  }
};

typedef struct _SetLink_Response_type_support_data_t
{
  void * data[2];
} _SetLink_Response_type_support_data_t;

static _SetLink_Response_type_support_data_t _SetLink_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SetLink_Response_message_typesupport_map = {
  2,
  "armpi_fpv_kinematics",
  &_SetLink_Response_message_typesupport_ids.typesupport_identifier[0],
  &_SetLink_Response_message_typesupport_symbol_names.symbol_name[0],
  &_SetLink_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SetLink_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SetLink_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &armpi_fpv_kinematics__srv__SetLink_Response__get_type_hash,
  &armpi_fpv_kinematics__srv__SetLink_Response__get_type_description,
  &armpi_fpv_kinematics__srv__SetLink_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace armpi_fpv_kinematics

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<armpi_fpv_kinematics::srv::SetLink_Response>()
{
  return &::armpi_fpv_kinematics::srv::rosidl_typesupport_cpp::SetLink_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, armpi_fpv_kinematics, srv, SetLink_Response)() {
  return get_message_type_support_handle<armpi_fpv_kinematics::srv::SetLink_Response>();
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
// #include "armpi_fpv_kinematics/srv/detail/set_link__functions.h"
// already included above
// #include "armpi_fpv_kinematics/srv/detail/set_link__struct.hpp"
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

typedef struct _SetLink_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SetLink_Event_type_support_ids_t;

static const _SetLink_Event_type_support_ids_t _SetLink_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _SetLink_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SetLink_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SetLink_Event_type_support_symbol_names_t _SetLink_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, armpi_fpv_kinematics, srv, SetLink_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, armpi_fpv_kinematics, srv, SetLink_Event)),
  }
};

typedef struct _SetLink_Event_type_support_data_t
{
  void * data[2];
} _SetLink_Event_type_support_data_t;

static _SetLink_Event_type_support_data_t _SetLink_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SetLink_Event_message_typesupport_map = {
  2,
  "armpi_fpv_kinematics",
  &_SetLink_Event_message_typesupport_ids.typesupport_identifier[0],
  &_SetLink_Event_message_typesupport_symbol_names.symbol_name[0],
  &_SetLink_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SetLink_Event_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SetLink_Event_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &armpi_fpv_kinematics__srv__SetLink_Event__get_type_hash,
  &armpi_fpv_kinematics__srv__SetLink_Event__get_type_description,
  &armpi_fpv_kinematics__srv__SetLink_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace armpi_fpv_kinematics

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<armpi_fpv_kinematics::srv::SetLink_Event>()
{
  return &::armpi_fpv_kinematics::srv::rosidl_typesupport_cpp::SetLink_Event_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, armpi_fpv_kinematics, srv, SetLink_Event)() {
  return get_message_type_support_handle<armpi_fpv_kinematics::srv::SetLink_Event>();
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
// #include "armpi_fpv_kinematics/srv/detail/set_link__struct.hpp"
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

typedef struct _SetLink_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SetLink_type_support_ids_t;

static const _SetLink_type_support_ids_t _SetLink_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _SetLink_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SetLink_type_support_symbol_names_t;
#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SetLink_type_support_symbol_names_t _SetLink_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, armpi_fpv_kinematics, srv, SetLink)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, armpi_fpv_kinematics, srv, SetLink)),
  }
};

typedef struct _SetLink_type_support_data_t
{
  void * data[2];
} _SetLink_type_support_data_t;

static _SetLink_type_support_data_t _SetLink_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SetLink_service_typesupport_map = {
  2,
  "armpi_fpv_kinematics",
  &_SetLink_service_typesupport_ids.typesupport_identifier[0],
  &_SetLink_service_typesupport_symbol_names.symbol_name[0],
  &_SetLink_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t SetLink_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SetLink_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
  ::rosidl_typesupport_cpp::get_message_type_support_handle<armpi_fpv_kinematics::srv::SetLink_Request>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<armpi_fpv_kinematics::srv::SetLink_Response>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<armpi_fpv_kinematics::srv::SetLink_Event>(),
  &::rosidl_typesupport_cpp::service_create_event_message<armpi_fpv_kinematics::srv::SetLink>,
  &::rosidl_typesupport_cpp::service_destroy_event_message<armpi_fpv_kinematics::srv::SetLink>,
  &armpi_fpv_kinematics__srv__SetLink__get_type_hash,
  &armpi_fpv_kinematics__srv__SetLink__get_type_description,
  &armpi_fpv_kinematics__srv__SetLink__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace armpi_fpv_kinematics

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<armpi_fpv_kinematics::srv::SetLink>()
{
  return &::armpi_fpv_kinematics::srv::rosidl_typesupport_cpp::SetLink_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_cpp, armpi_fpv_kinematics, srv, SetLink)() {
  return ::rosidl_typesupport_cpp::get_service_type_support_handle<armpi_fpv_kinematics::srv::SetLink>();
}

#ifdef __cplusplus
}
#endif
