// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from armpi_fpv_kinematics:msg/Link.idl
// generated code does not contain a copyright notice

#include "armpi_fpv_kinematics/msg/detail/link__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_armpi_fpv_kinematics
const rosidl_type_hash_t *
armpi_fpv_kinematics__msg__Link__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xd0, 0xaf, 0x1d, 0x8e, 0xc0, 0x8e, 0x6d, 0x07,
      0x16, 0x9a, 0x18, 0x36, 0xac, 0x5e, 0x65, 0x25,
      0xb5, 0x47, 0x63, 0x93, 0x72, 0xc2, 0x89, 0x73,
      0x47, 0xfe, 0xab, 0x7f, 0xc2, 0x6f, 0x74, 0xe1,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char armpi_fpv_kinematics__msg__Link__TYPE_NAME[] = "armpi_fpv_kinematics/msg/Link";

// Define type names, field names, and default values
static char armpi_fpv_kinematics__msg__Link__FIELD_NAME__base_link[] = "base_link";
static char armpi_fpv_kinematics__msg__Link__FIELD_NAME__link1[] = "link1";
static char armpi_fpv_kinematics__msg__Link__FIELD_NAME__link2[] = "link2";
static char armpi_fpv_kinematics__msg__Link__FIELD_NAME__link3[] = "link3";
static char armpi_fpv_kinematics__msg__Link__FIELD_NAME__end_effector_link[] = "end_effector_link";

static rosidl_runtime_c__type_description__Field armpi_fpv_kinematics__msg__Link__FIELDS[] = {
  {
    {armpi_fpv_kinematics__msg__Link__FIELD_NAME__base_link, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {armpi_fpv_kinematics__msg__Link__FIELD_NAME__link1, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {armpi_fpv_kinematics__msg__Link__FIELD_NAME__link2, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {armpi_fpv_kinematics__msg__Link__FIELD_NAME__link3, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {armpi_fpv_kinematics__msg__Link__FIELD_NAME__end_effector_link, 17, 17},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
armpi_fpv_kinematics__msg__Link__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {armpi_fpv_kinematics__msg__Link__TYPE_NAME, 29, 29},
      {armpi_fpv_kinematics__msg__Link__FIELDS, 5, 5},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "float64 base_link\n"
  "float64 link1\n"
  "float64 link2\n"
  "float64 link3\n"
  "float64 end_effector_link";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
armpi_fpv_kinematics__msg__Link__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {armpi_fpv_kinematics__msg__Link__TYPE_NAME, 29, 29},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 86, 86},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
armpi_fpv_kinematics__msg__Link__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *armpi_fpv_kinematics__msg__Link__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
