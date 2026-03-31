# generated from rosidl_generator_py/resource/_idl.py.em
# with input from autoware_internal_msgs:msg/ResourceUsageReport.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ResourceUsageReport(type):
    """Metaclass of message 'ResourceUsageReport'."""

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
            module = import_type_support('autoware_internal_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'autoware_internal_msgs.msg.ResourceUsageReport')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__resource_usage_report
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__resource_usage_report
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__resource_usage_report
            cls._TYPE_SUPPORT = module.type_support_msg__msg__resource_usage_report
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__resource_usage_report

            from std_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ResourceUsageReport(metaclass=Metaclass_ResourceUsageReport):
    """Message class 'ResourceUsageReport'."""

    __slots__ = [
        '_header',
        '_pid',
        '_cpu_cores_utilized',
        '_total_memory_bytes',
        '_free_memory_bytes',
        '_process_memory_bytes',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'pid': 'uint32',
        'cpu_cores_utilized': 'float',
        'total_memory_bytes': 'uint64',
        'free_memory_bytes': 'uint64',
        'process_memory_bytes': 'uint64',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.pid = kwargs.get('pid', int())
        self.cpu_cores_utilized = kwargs.get('cpu_cores_utilized', float())
        self.total_memory_bytes = kwargs.get('total_memory_bytes', int())
        self.free_memory_bytes = kwargs.get('free_memory_bytes', int())
        self.process_memory_bytes = kwargs.get('process_memory_bytes', int())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
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
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.header != other.header:
            return False
        if self.pid != other.pid:
            return False
        if self.cpu_cores_utilized != other.cpu_cores_utilized:
            return False
        if self.total_memory_bytes != other.total_memory_bytes:
            return False
        if self.free_memory_bytes != other.free_memory_bytes:
            return False
        if self.process_memory_bytes != other.process_memory_bytes:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def header(self):
        """Message field 'header'."""
        return self._header

    @header.setter
    def header(self, value):
        if __debug__:
            from std_msgs.msg import Header
            assert \
                isinstance(value, Header), \
                "The 'header' field must be a sub message of type 'Header'"
        self._header = value

    @builtins.property
    def pid(self):
        """Message field 'pid'."""
        return self._pid

    @pid.setter
    def pid(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'pid' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'pid' field must be an unsigned integer in [0, 4294967295]"
        self._pid = value

    @builtins.property
    def cpu_cores_utilized(self):
        """Message field 'cpu_cores_utilized'."""
        return self._cpu_cores_utilized

    @cpu_cores_utilized.setter
    def cpu_cores_utilized(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'cpu_cores_utilized' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'cpu_cores_utilized' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._cpu_cores_utilized = value

    @builtins.property
    def total_memory_bytes(self):
        """Message field 'total_memory_bytes'."""
        return self._total_memory_bytes

    @total_memory_bytes.setter
    def total_memory_bytes(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'total_memory_bytes' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 'total_memory_bytes' field must be an unsigned integer in [0, 18446744073709551615]"
        self._total_memory_bytes = value

    @builtins.property
    def free_memory_bytes(self):
        """Message field 'free_memory_bytes'."""
        return self._free_memory_bytes

    @free_memory_bytes.setter
    def free_memory_bytes(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'free_memory_bytes' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 'free_memory_bytes' field must be an unsigned integer in [0, 18446744073709551615]"
        self._free_memory_bytes = value

    @builtins.property
    def process_memory_bytes(self):
        """Message field 'process_memory_bytes'."""
        return self._process_memory_bytes

    @process_memory_bytes.setter
    def process_memory_bytes(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'process_memory_bytes' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 'process_memory_bytes' field must be an unsigned integer in [0, 18446744073709551615]"
        self._process_memory_bytes = value
