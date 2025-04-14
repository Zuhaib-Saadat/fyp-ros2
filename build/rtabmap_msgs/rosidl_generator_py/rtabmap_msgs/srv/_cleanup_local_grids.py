# generated from rosidl_generator_py/resource/_idl.py.em
# with input from rtabmap_msgs:srv/CleanupLocalGrids.idl
# generated code does not contain a copyright notice

# This is being done at the module level and not on the instance level to avoid looking
# for the same variable multiple times on each instance. This variable is not supposed to
# change during runtime so it makes sense to only look for it once.
from os import getenv

ros_python_check_fields = getenv('ROS_PYTHON_CHECK_FIELDS', default='')


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_CleanupLocalGrids_Request(type):
    """Metaclass of message 'CleanupLocalGrids_Request'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('rtabmap_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'rtabmap_msgs.srv.CleanupLocalGrids_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__cleanup_local_grids__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__cleanup_local_grids__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__cleanup_local_grids__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__cleanup_local_grids__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__cleanup_local_grids__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class CleanupLocalGrids_Request(metaclass=Metaclass_CleanupLocalGrids_Request):
    """Message class 'CleanupLocalGrids_Request'."""

    __slots__ = [
        '_radius',
        '_filter_scans',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'radius': 'int32',
        'filter_scans': 'boolean',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        if 'check_fields' in kwargs:
            self._check_fields = kwargs['check_fields']
        else:
            self._check_fields = ros_python_check_fields == '1'
        if self._check_fields:
            assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
                'Invalid arguments passed to constructor: %s' % \
                ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.radius = kwargs.get('radius', int())
        self.filter_scans = kwargs.get('filter_scans', bool())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.get_fields_and_field_types().keys(), self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    if self._check_fields:
                        assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.radius != other.radius:
            return False
        if self.filter_scans != other.filter_scans:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def radius(self):
        """Message field 'radius'."""
        return self._radius

    @radius.setter
    def radius(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'radius' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'radius' field must be an integer in [-2147483648, 2147483647]"
        self._radius = value

    @builtins.property
    def filter_scans(self):
        """Message field 'filter_scans'."""
        return self._filter_scans

    @filter_scans.setter
    def filter_scans(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'filter_scans' field must be of type 'bool'"
        self._filter_scans = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_CleanupLocalGrids_Response(type):
    """Metaclass of message 'CleanupLocalGrids_Response'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('rtabmap_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'rtabmap_msgs.srv.CleanupLocalGrids_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__cleanup_local_grids__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__cleanup_local_grids__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__cleanup_local_grids__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__cleanup_local_grids__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__cleanup_local_grids__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class CleanupLocalGrids_Response(metaclass=Metaclass_CleanupLocalGrids_Response):
    """Message class 'CleanupLocalGrids_Response'."""

    __slots__ = [
        '_modified',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'modified': 'int32',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        if 'check_fields' in kwargs:
            self._check_fields = kwargs['check_fields']
        else:
            self._check_fields = ros_python_check_fields == '1'
        if self._check_fields:
            assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
                'Invalid arguments passed to constructor: %s' % \
                ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.modified = kwargs.get('modified', int())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.get_fields_and_field_types().keys(), self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    if self._check_fields:
                        assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.modified != other.modified:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def modified(self):
        """Message field 'modified'."""
        return self._modified

    @modified.setter
    def modified(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'modified' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'modified' field must be an integer in [-2147483648, 2147483647]"
        self._modified = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_CleanupLocalGrids_Event(type):
    """Metaclass of message 'CleanupLocalGrids_Event'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('rtabmap_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'rtabmap_msgs.srv.CleanupLocalGrids_Event')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__cleanup_local_grids__event
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__cleanup_local_grids__event
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__cleanup_local_grids__event
            cls._TYPE_SUPPORT = module.type_support_msg__srv__cleanup_local_grids__event
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__cleanup_local_grids__event

            from service_msgs.msg import ServiceEventInfo
            if ServiceEventInfo.__class__._TYPE_SUPPORT is None:
                ServiceEventInfo.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class CleanupLocalGrids_Event(metaclass=Metaclass_CleanupLocalGrids_Event):
    """Message class 'CleanupLocalGrids_Event'."""

    __slots__ = [
        '_info',
        '_request',
        '_response',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'info': 'service_msgs/ServiceEventInfo',
        'request': 'sequence<rtabmap_msgs/CleanupLocalGrids_Request, 1>',
        'response': 'sequence<rtabmap_msgs/CleanupLocalGrids_Response, 1>',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['service_msgs', 'msg'], 'ServiceEventInfo'),  # noqa: E501
        rosidl_parser.definition.BoundedSequence(rosidl_parser.definition.NamespacedType(['rtabmap_msgs', 'srv'], 'CleanupLocalGrids_Request'), 1),  # noqa: E501
        rosidl_parser.definition.BoundedSequence(rosidl_parser.definition.NamespacedType(['rtabmap_msgs', 'srv'], 'CleanupLocalGrids_Response'), 1),  # noqa: E501
    )

    def __init__(self, **kwargs):
        if 'check_fields' in kwargs:
            self._check_fields = kwargs['check_fields']
        else:
            self._check_fields = ros_python_check_fields == '1'
        if self._check_fields:
            assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
                'Invalid arguments passed to constructor: %s' % \
                ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from service_msgs.msg import ServiceEventInfo
        self.info = kwargs.get('info', ServiceEventInfo())
        self.request = kwargs.get('request', [])
        self.response = kwargs.get('response', [])

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.get_fields_and_field_types().keys(), self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    if self._check_fields:
                        assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.info != other.info:
            return False
        if self.request != other.request:
            return False
        if self.response != other.response:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def info(self):
        """Message field 'info'."""
        return self._info

    @info.setter
    def info(self, value):
        if self._check_fields:
            from service_msgs.msg import ServiceEventInfo
            assert \
                isinstance(value, ServiceEventInfo), \
                "The 'info' field must be a sub message of type 'ServiceEventInfo'"
        self._info = value

    @builtins.property
    def request(self):
        """Message field 'request'."""
        return self._request

    @request.setter
    def request(self, value):
        if self._check_fields:
            from rtabmap_msgs.srv import CleanupLocalGrids_Request
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) <= 1 and
                 all(isinstance(v, CleanupLocalGrids_Request) for v in value) and
                 True), \
                "The 'request' field must be a set or sequence with length <= 1 and each value of type 'CleanupLocalGrids_Request'"
        self._request = value

    @builtins.property
    def response(self):
        """Message field 'response'."""
        return self._response

    @response.setter
    def response(self, value):
        if self._check_fields:
            from rtabmap_msgs.srv import CleanupLocalGrids_Response
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) <= 1 and
                 all(isinstance(v, CleanupLocalGrids_Response) for v in value) and
                 True), \
                "The 'response' field must be a set or sequence with length <= 1 and each value of type 'CleanupLocalGrids_Response'"
        self._response = value


class Metaclass_CleanupLocalGrids(type):
    """Metaclass of service 'CleanupLocalGrids'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('rtabmap_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'rtabmap_msgs.srv.CleanupLocalGrids')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__cleanup_local_grids

            from rtabmap_msgs.srv import _cleanup_local_grids
            if _cleanup_local_grids.Metaclass_CleanupLocalGrids_Request._TYPE_SUPPORT is None:
                _cleanup_local_grids.Metaclass_CleanupLocalGrids_Request.__import_type_support__()
            if _cleanup_local_grids.Metaclass_CleanupLocalGrids_Response._TYPE_SUPPORT is None:
                _cleanup_local_grids.Metaclass_CleanupLocalGrids_Response.__import_type_support__()
            if _cleanup_local_grids.Metaclass_CleanupLocalGrids_Event._TYPE_SUPPORT is None:
                _cleanup_local_grids.Metaclass_CleanupLocalGrids_Event.__import_type_support__()


class CleanupLocalGrids(metaclass=Metaclass_CleanupLocalGrids):
    from rtabmap_msgs.srv._cleanup_local_grids import CleanupLocalGrids_Request as Request
    from rtabmap_msgs.srv._cleanup_local_grids import CleanupLocalGrids_Response as Response
    from rtabmap_msgs.srv._cleanup_local_grids import CleanupLocalGrids_Event as Event

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
