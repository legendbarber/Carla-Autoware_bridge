// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from autoware_perception_msgs:msg/PredictedTrafficLightState.idl
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
#include "autoware_perception_msgs/msg/detail/predicted_traffic_light_state__struct.h"
#include "autoware_perception_msgs/msg/detail/predicted_traffic_light_state__functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"

// Nested array functions includes
#include "autoware_perception_msgs/msg/detail/traffic_light_element__functions.h"
// end nested array functions include
ROSIDL_GENERATOR_C_IMPORT
bool builtin_interfaces__msg__time__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * builtin_interfaces__msg__time__convert_to_py(void * raw_ros_message);
bool autoware_perception_msgs__msg__traffic_light_element__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * autoware_perception_msgs__msg__traffic_light_element__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool autoware_perception_msgs__msg__predicted_traffic_light_state__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[87];
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
    assert(strncmp("autoware_perception_msgs.msg._predicted_traffic_light_state.PredictedTrafficLightState", full_classname_dest, 86) == 0);
  }
  autoware_perception_msgs__msg__PredictedTrafficLightState * ros_message = _ros_message;
  {  // predicted_stamp
    PyObject * field = PyObject_GetAttrString(_pymsg, "predicted_stamp");
    if (!field) {
      return false;
    }
    if (!builtin_interfaces__msg__time__convert_from_py(field, &ros_message->predicted_stamp)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // simultaneous_elements
    PyObject * field = PyObject_GetAttrString(_pymsg, "simultaneous_elements");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'simultaneous_elements'");
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
    if (!autoware_perception_msgs__msg__TrafficLightElement__Sequence__init(&(ros_message->simultaneous_elements), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create autoware_perception_msgs__msg__TrafficLightElement__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    autoware_perception_msgs__msg__TrafficLightElement * dest = ros_message->simultaneous_elements.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!autoware_perception_msgs__msg__traffic_light_element__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // reliability
    PyObject * field = PyObject_GetAttrString(_pymsg, "reliability");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->reliability = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // information_source
    PyObject * field = PyObject_GetAttrString(_pymsg, "information_source");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->information_source, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * autoware_perception_msgs__msg__predicted_traffic_light_state__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of PredictedTrafficLightState */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("autoware_perception_msgs.msg._predicted_traffic_light_state");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "PredictedTrafficLightState");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  autoware_perception_msgs__msg__PredictedTrafficLightState * ros_message = (autoware_perception_msgs__msg__PredictedTrafficLightState *)raw_ros_message;
  {  // predicted_stamp
    PyObject * field = NULL;
    field = builtin_interfaces__msg__time__convert_to_py(&ros_message->predicted_stamp);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "predicted_stamp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // simultaneous_elements
    PyObject * field = NULL;
    size_t size = ros_message->simultaneous_elements.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    autoware_perception_msgs__msg__TrafficLightElement * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->simultaneous_elements.data[i]);
      PyObject * pyitem = autoware_perception_msgs__msg__traffic_light_element__convert_to_py(item);
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
      int rc = PyObject_SetAttrString(_pymessage, "simultaneous_elements", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // reliability
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->reliability);
    {
      int rc = PyObject_SetAttrString(_pymessage, "reliability", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // information_source
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->information_source.data,
      strlen(ros_message->information_source.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "information_source", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
