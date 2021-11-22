// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from tello_msgs:srv/TelloAction.idl
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
#include "tello_msgs/srv/detail/tello_action__struct.h"
#include "tello_msgs/srv/detail/tello_action__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool tello_msgs__srv__tello_action__request__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[49];
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
    assert(strncmp("tello_msgs.srv._tello_action.TelloAction_Request", full_classname_dest, 48) == 0);
  }
  tello_msgs__srv__TelloAction_Request * ros_message = _ros_message;
  {  // cmd
    PyObject * field = PyObject_GetAttrString(_pymsg, "cmd");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->cmd, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * tello_msgs__srv__tello_action__request__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of TelloAction_Request */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("tello_msgs.srv._tello_action");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "TelloAction_Request");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  tello_msgs__srv__TelloAction_Request * ros_message = (tello_msgs__srv__TelloAction_Request *)raw_ros_message;
  {  // cmd
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->cmd.data,
      strlen(ros_message->cmd.data),
      "strict");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "cmd", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}

#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
// already included above
// #include <Python.h>
// already included above
// #include <stdbool.h>
// already included above
// #include "numpy/ndarrayobject.h"
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "tello_msgs/srv/detail/tello_action__struct.h"
// already included above
// #include "tello_msgs/srv/detail/tello_action__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool tello_msgs__srv__tello_action__response__convert_from_py(PyObject * _pymsg, void * _ros_message)
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
    assert(strncmp("tello_msgs.srv._tello_action.TelloAction_Response", full_classname_dest, 49) == 0);
  }
  tello_msgs__srv__TelloAction_Response * ros_message = _ros_message;
  {  // rc
    PyObject * field = PyObject_GetAttrString(_pymsg, "rc");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->rc = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * tello_msgs__srv__tello_action__response__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of TelloAction_Response */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("tello_msgs.srv._tello_action");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "TelloAction_Response");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  tello_msgs__srv__TelloAction_Response * ros_message = (tello_msgs__srv__TelloAction_Response *)raw_ros_message;
  {  // rc
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->rc);
    {
      int rc = PyObject_SetAttrString(_pymessage, "rc", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
