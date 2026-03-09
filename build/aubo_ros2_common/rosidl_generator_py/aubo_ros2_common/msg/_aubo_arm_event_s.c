// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from aubo_ros2_common:msg/AuboArmEvent.idl
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
#include "aubo_ros2_common/msg/detail/aubo_arm_event__struct.h"
#include "aubo_ros2_common/msg/detail/aubo_arm_event__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool aubo_ros2_common__msg__aubo_arm_event__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[50];
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
    assert(strncmp("aubo_ros2_common.msg._aubo_arm_event.AuboArmEvent", full_classname_dest, 49) == 0);
  }
  aubo_ros2_common__msg__AuboArmEvent * ros_message = _ros_message;
  {  // event_type
    PyObject * field = PyObject_GetAttrString(_pymsg, "event_type");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->event_type = (int16_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // event_code
    PyObject * field = PyObject_GetAttrString(_pymsg, "event_code");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->event_code = (int16_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // event_content
    PyObject * field = PyObject_GetAttrString(_pymsg, "event_content");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->event_content, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * aubo_ros2_common__msg__aubo_arm_event__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of AuboArmEvent */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("aubo_ros2_common.msg._aubo_arm_event");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "AuboArmEvent");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  aubo_ros2_common__msg__AuboArmEvent * ros_message = (aubo_ros2_common__msg__AuboArmEvent *)raw_ros_message;
  {  // event_type
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->event_type);
    {
      int rc = PyObject_SetAttrString(_pymessage, "event_type", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // event_code
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->event_code);
    {
      int rc = PyObject_SetAttrString(_pymessage, "event_code", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // event_content
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->event_content.data,
      strlen(ros_message->event_content.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "event_content", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
