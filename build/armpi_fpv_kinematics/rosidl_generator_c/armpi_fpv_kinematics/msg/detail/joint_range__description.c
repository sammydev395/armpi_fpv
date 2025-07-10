// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from armpi_fpv_kinematics:msg/JointRange.idl
// generated code does not contain a copyright notice

#include "armpi_fpv_kinematics/msg/detail/joint_range__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_armpi_fpv_kinematics
const rosidl_type_hash_t *
armpi_fpv_kinematics__msg__JointRange__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xd4, 0x0c, 0x67, 0xf4, 0x91, 0xba, 0x12, 0x79,
      0xf7, 0x5d, 0x89, 0xd5, 0x7b, 0x32, 0x7d, 0xa3,
      0x9d, 0x54, 0x3e, 0xc7, 0x9a, 0x64, 0x6b, 0xbb,
      0xcb, 0xc4, 0x48, 0x52, 0x61, 0x28, 0x87, 0xf7,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char armpi_fpv_kinematics__msg__JointRange__TYPE_NAME[] = "armpi_fpv_kinematics/msg/JointRange";

// Define type names, field names, and default values
static char armpi_fpv_kinematics__msg__JointRange__FIELD_NAME__min[] = "min";
static char armpi_fpv_kinematics__msg__JointRange__FIELD_NAME__max[] = "max";

static rosidl_runtime_c__type_description__Field armpi_fpv_kinematics__msg__JointRange__FIELDS[] = {
  {
    {armpi_fpv_kinematics__msg__JointRange__FIELD_NAME__min, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {armpi_fpv_kinematics__msg__JointRange__FIELD_NAME__max, 3, 3},
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
armpi_fpv_kinematics__msg__JointRange__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {armpi_fpv_kinematics__msg__JointRange__TYPE_NAME, 35, 35},
      {armpi_fpv_kinematics__msg__JointRange__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "float64 min\n"
  "float64 max";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
armpi_fpv_kinematics__msg__JointRange__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {armpi_fpv_kinematics__msg__JointRange__TYPE_NAME, 35, 35},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 24, 24},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
armpi_fpv_kinematics__msg__JointRange__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *armpi_fpv_kinematics__msg__JointRange__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
