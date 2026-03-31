// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from autoware_internal_planning_msgs:msg/SafetyFactorArray.idl
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
#include "autoware_internal_planning_msgs/msg/detail/safety_factor_array__struct.h"
#include "autoware_internal_planning_msgs/msg/detail/safety_factor_array__functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"

// Nested array functions includes
#include "autoware_internal_planning_msgs/msg/detail/safety_factor__functions.h"
// end nested array functions include
ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);
bool autoware_internal_planning_msgs__msg__safety_factor__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * autoware_internal_planning_msgs__msg__safety_factor__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool autoware_internal_planning_msgs__msg__safety_factor_array__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[75];
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
    assert(strncmp("autoware_internal_planning_msgs.msg._safety_factor_array.SafetyFactorArray", full_classname_dest, 74) == 0);
  }
  autoware_internal_planning_msgs__msg__SafetyFactorArray * ros_message = _ros_message;
  {  // header
    PyObject * field = PyObject_GetAttrString(_pymsg, "header");
    if (!field) {
      return false;
    }
    if (!std_msgs__msg__header__convert_from_py(field, &ros_message->header)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // factors
    PyObject * field = PyObject_GetAttrString(_pymsg, "factors");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'factors'");
    if (!seq_field) {
      Py_DECREF(field);
      return false;
    }
    Py_ssize_t size = PySequence_Size(field);
    if (-1 == size) {
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    if (!autoware_internal_planning_msgs__msg__SafetyFactor__Sequence__init(&(ros_message->factors), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create autoware_internal_planning_msgs__msg__SafetyFactor__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    autoware_internal_planning_msgs__msg__SafetyFactor * dest = ros_message->factors.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!autoware_internal_planning_msgs__msg__safety_factor__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // is_safe
    PyObject * field = PyObject_GetAttrString(_pymsg, "is_safe");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->is_safe = (Py_True == field);
    Py_DECREF(field);
  }
  {  // detail
    PyObject * field = PyObject_GetAttrString(_pymsg, "detail");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->detail, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * autoware_internal_planning_msgs__msg__safety_factor_array__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of SafetyFactorArray */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("autoware_internal_planning_msgs.msg._safety_factor_array");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "SafetyFactorArray");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  autoware_internal_planning_msgs__msg__SafetyFactorArray * ros_message = (autoware_internal_planning_msgs__msg__SafetyFactorArray *)raw_ros_message;
  {  // header
    PyObject * field = NULL;
    field = std_msgs__msg__header__convert_to_py(&ros_message->header);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "header", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // factors
    PyObject * field = NULL;
    size_t size = ros_message->factors.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    autoware_internal_planning_msgs__msg__SafetyFactor * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->factors.data[i]);
      PyObject * pyitem = autoware_internal_planning_msgs__msg__safety_factor__convert_to_py(item);
      if (!pyitem) {
        Py_DECREF(field);
        return NULL;
      }
      int rc = PyList_SetItem(field, i, pyitem);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "factors", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // is_safe
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->is_safe ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "is_safe", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // detail
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->detail.data,
      strlen(ros_message->detail.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "detail", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
