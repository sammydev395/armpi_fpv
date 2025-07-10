// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from armpi_fpv_kinematics:msg/Link.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "armpi_fpv_kinematics/msg/detail/link__struct.h"
#include "armpi_fpv_kinematics/msg/detail/link__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool armpi_fpv_kinematics__msg__link__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[36];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("armpi_fpv_kinematics.msg._link.Link", full_classname_dest, 35) == 0);
  }
  armpi_fpv_kinematics__msg__Link * ros_message = _ros_message;
  {  // base_link
    PyObject * field = PyObject_GetAttrString(_pymsg, "base_link");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->base_link = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // link1
    PyObject * field = PyObject_GetAttrString(_pymsg, "link1");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->link1 = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // link2
    PyObject * field = PyObject_GetAttrString(_pymsg, "link2");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->link2 = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // link3
    PyObject * field = PyObject_GetAttrString(_pymsg, "link3");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->link3 = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // end_effector_link
    PyObject * field = PyObject_GetAttrString(_pymsg, "end_effector_link");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->end_effector_link = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * armpi_fpv_kinematics__msg__link__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Link */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("armpi_fpv_kinematics.msg._link");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Link");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  armpi_fpv_kinematics__msg__Link * ros_message = (armpi_fpv_kinematics__msg__Link *)raw_ros_message;
  {  // base_link
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->base_link);
    {
      int rc = PyObject_SetAttrString(_pymessage, "base_link", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // link1
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->link1);
    {
      int rc = PyObject_SetAttrString(_pymessage, "link1", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // link2
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->link2);
    {
      int rc = PyObject_SetAttrString(_pymessage, "link2", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // link3
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->link3);
    {
      int rc = PyObject_SetAttrString(_pymessage, "link3", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // end_effector_link
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->end_effector_link);
    {
      int rc = PyObject_SetAttrString(_pymessage, "end_effector_link", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
