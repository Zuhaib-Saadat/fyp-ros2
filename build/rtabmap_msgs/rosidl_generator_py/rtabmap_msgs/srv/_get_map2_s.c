// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from rtabmap_msgs:srv/GetMap2.idl
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
#include "rtabmap_msgs/srv/detail/get_map2__struct.h"
#include "rtabmap_msgs/srv/detail/get_map2__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool rtabmap_msgs__srv__get_map2__request__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[43];
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
    assert(strncmp("rtabmap_msgs.srv._get_map2.GetMap2_Request", full_classname_dest, 42) == 0);
  }
  rtabmap_msgs__srv__GetMap2_Request * ros_message = _ros_message;
  {  // global_map
    PyObject * field = PyObject_GetAttrString(_pymsg, "global_map");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->global_map = (Py_True == field);
    Py_DECREF(field);
  }
  {  // optimized
    PyObject * field = PyObject_GetAttrString(_pymsg, "optimized");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->optimized = (Py_True == field);
    Py_DECREF(field);
  }
  {  // with_images
    PyObject * field = PyObject_GetAttrString(_pymsg, "with_images");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->with_images = (Py_True == field);
    Py_DECREF(field);
  }
  {  // with_scans
    PyObject * field = PyObject_GetAttrString(_pymsg, "with_scans");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->with_scans = (Py_True == field);
    Py_DECREF(field);
  }
  {  // with_user_data
    PyObject * field = PyObject_GetAttrString(_pymsg, "with_user_data");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->with_user_data = (Py_True == field);
    Py_DECREF(field);
  }
  {  // with_grids
    PyObject * field = PyObject_GetAttrString(_pymsg, "with_grids");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->with_grids = (Py_True == field);
    Py_DECREF(field);
  }
  {  // with_words
    PyObject * field = PyObject_GetAttrString(_pymsg, "with_words");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->with_words = (Py_True == field);
    Py_DECREF(field);
  }
  {  // with_global_descriptors
    PyObject * field = PyObject_GetAttrString(_pymsg, "with_global_descriptors");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->with_global_descriptors = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * rtabmap_msgs__srv__get_map2__request__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of GetMap2_Request */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("rtabmap_msgs.srv._get_map2");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "GetMap2_Request");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  rtabmap_msgs__srv__GetMap2_Request * ros_message = (rtabmap_msgs__srv__GetMap2_Request *)raw_ros_message;
  {  // global_map
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->global_map ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "global_map", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // optimized
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->optimized ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "optimized", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // with_images
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->with_images ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "with_images", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // with_scans
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->with_scans ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "with_scans", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // with_user_data
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->with_user_data ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "with_user_data", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // with_grids
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->with_grids ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "with_grids", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // with_words
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->with_words ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "with_words", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // with_global_descriptors
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->with_global_descriptors ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "with_global_descriptors", field);
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
// #include "rtabmap_msgs/srv/detail/get_map2__struct.h"
// already included above
// #include "rtabmap_msgs/srv/detail/get_map2__functions.h"

bool rtabmap_msgs__msg__map_data__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * rtabmap_msgs__msg__map_data__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool rtabmap_msgs__srv__get_map2__response__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[44];
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
    assert(strncmp("rtabmap_msgs.srv._get_map2.GetMap2_Response", full_classname_dest, 43) == 0);
  }
  rtabmap_msgs__srv__GetMap2_Response * ros_message = _ros_message;
  {  // data
    PyObject * field = PyObject_GetAttrString(_pymsg, "data");
    if (!field) {
      return false;
    }
    if (!rtabmap_msgs__msg__map_data__convert_from_py(field, &ros_message->data)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * rtabmap_msgs__srv__get_map2__response__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of GetMap2_Response */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("rtabmap_msgs.srv._get_map2");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "GetMap2_Response");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  rtabmap_msgs__srv__GetMap2_Response * ros_message = (rtabmap_msgs__srv__GetMap2_Response *)raw_ros_message;
  {  // data
    PyObject * field = NULL;
    field = rtabmap_msgs__msg__map_data__convert_to_py(&ros_message->data);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "data", field);
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
// #include "rtabmap_msgs/srv/detail/get_map2__struct.h"
// already included above
// #include "rtabmap_msgs/srv/detail/get_map2__functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

// Nested array functions includes


// end nested array functions include
ROSIDL_GENERATOR_C_IMPORT
bool service_msgs__msg__service_event_info__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * service_msgs__msg__service_event_info__convert_to_py(void * raw_ros_message);
bool rtabmap_msgs__srv__get_map2__request__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * rtabmap_msgs__srv__get_map2__request__convert_to_py(void * raw_ros_message);
bool rtabmap_msgs__srv__get_map2__response__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * rtabmap_msgs__srv__get_map2__response__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool rtabmap_msgs__srv__get_map2__event__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[41];
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
    assert(strncmp("rtabmap_msgs.srv._get_map2.GetMap2_Event", full_classname_dest, 40) == 0);
  }
  rtabmap_msgs__srv__GetMap2_Event * ros_message = _ros_message;
  {  // info
    PyObject * field = PyObject_GetAttrString(_pymsg, "info");
    if (!field) {
      return false;
    }
    if (!service_msgs__msg__service_event_info__convert_from_py(field, &ros_message->info)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // request
    PyObject * field = PyObject_GetAttrString(_pymsg, "request");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'request'");
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
    if (!rtabmap_msgs__srv__GetMap2_Request__Sequence__init(&(ros_message->request), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create rtabmap_msgs__srv__GetMap2_Request__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    rtabmap_msgs__srv__GetMap2_Request * dest = ros_message->request.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!rtabmap_msgs__srv__get_map2__request__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // response
    PyObject * field = PyObject_GetAttrString(_pymsg, "response");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'response'");
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
    if (!rtabmap_msgs__srv__GetMap2_Response__Sequence__init(&(ros_message->response), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create rtabmap_msgs__srv__GetMap2_Response__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    rtabmap_msgs__srv__GetMap2_Response * dest = ros_message->response.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!rtabmap_msgs__srv__get_map2__response__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * rtabmap_msgs__srv__get_map2__event__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of GetMap2_Event */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("rtabmap_msgs.srv._get_map2");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "GetMap2_Event");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  rtabmap_msgs__srv__GetMap2_Event * ros_message = (rtabmap_msgs__srv__GetMap2_Event *)raw_ros_message;
  {  // info
    PyObject * field = NULL;
    field = service_msgs__msg__service_event_info__convert_to_py(&ros_message->info);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "info", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // request
    PyObject * field = NULL;
    size_t size = ros_message->request.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    rtabmap_msgs__srv__GetMap2_Request * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->request.data[i]);
      PyObject * pyitem = rtabmap_msgs__srv__get_map2__request__convert_to_py(item);
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
      int rc = PyObject_SetAttrString(_pymessage, "request", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // response
    PyObject * field = NULL;
    size_t size = ros_message->response.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    rtabmap_msgs__srv__GetMap2_Response * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->response.data[i]);
      PyObject * pyitem = rtabmap_msgs__srv__get_map2__response__convert_to_py(item);
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
      int rc = PyObject_SetAttrString(_pymessage, "response", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
