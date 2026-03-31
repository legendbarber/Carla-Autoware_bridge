# generated from rosidl_generator_py/resource/_idl.py.em
# with input from autoware_internal_planning_msgs:msg/SafetyFactor.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SafetyFactor(type):
    """Metaclass of message 'SafetyFactor'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'UNKNOWN': 0,
        'POINTCLOUD': 1,
        'OBJECT': 2,
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('autoware_internal_planning_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'autoware_internal_planning_msgs.msg.SafetyFactor')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__safety_factor
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__safety_factor
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__safety_factor
            cls._TYPE_SUPPORT = module.type_support_msg__msg__safety_factor
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__safety_factor

            from autoware_perception_msgs.msg import PredictedPath
            if PredictedPath.__class__._TYPE_SUPPORT is None:
                PredictedPath.__class__.__import_type_support__()

            from geometry_msgs.msg import Point
            if Point.__class__._TYPE_SUPPORT is None:
                Point.__class__.__import_type_support__()

            from unique_identifier_msgs.msg import UUID
            if UUID.__class__._TYPE_SUPPORT is None:
                UUID.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'UNKNOWN': cls.__constants['UNKNOWN'],
            'POINTCLOUD': cls.__constants['POINTCLOUD'],
            'OBJECT': cls.__constants['OBJECT'],
        }

    @property
    def UNKNOWN(self):
        """Message constant 'UNKNOWN'."""
        return Metaclass_SafetyFactor.__constants['UNKNOWN']

    @property
    def POINTCLOUD(self):
        """Message constant 'POINTCLOUD'."""
        return Metaclass_SafetyFactor.__constants['POINTCLOUD']

    @property
    def OBJECT(self):
        """Message constant 'OBJECT'."""
        return Metaclass_SafetyFactor.__constants['OBJECT']


class SafetyFactor(metaclass=Metaclass_SafetyFactor):
    """
    Message class 'SafetyFactor'.

    Constants:
      UNKNOWN
      POINTCLOUD
      OBJECT
    """

    __slots__ = [
        '_type',
        '_object_id',
        '_predicted_path',
        '_ttc_begin',
        '_ttc_end',
        '_points',
        '_is_safe',
    ]

    _fields_and_field_types = {
        'type': 'uint16',
        'object_id': 'unique_identifier_msgs/UUID',
        'predicted_path': 'autoware_perception_msgs/PredictedPath',
        'ttc_begin': 'float',
        'ttc_end': 'float',
        'points': 'sequence<geometry_msgs/Point>',
        'is_safe': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['unique_identifier_msgs', 'msg'], 'UUID'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['autoware_perception_msgs', 'msg'], 'PredictedPath'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Point')),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.type = kwargs.get('type', int())
        from unique_identifier_msgs.msg import UUID
        self.object_id = kwargs.get('object_id', UUID())
        from autoware_perception_msgs.msg import PredictedPath
        self.predicted_path = kwargs.get('predicted_path', PredictedPath())
        self.ttc_begin = kwargs.get('ttc_begin', float())
        self.ttc_end = kwargs.get('ttc_end', float())
        self.points = kwargs.get('points', [])
        self.is_safe = kwargs.get('is_safe', bool())

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
        if self.type != other.type:
            return False
        if self.object_id != other.object_id:
            return False
        if self.predicted_path != other.predicted_path:
            return False
        if self.ttc_begin != other.ttc_begin:
            return False
        if self.ttc_end != other.ttc_end:
            return False
        if self.points != other.points:
            return False
        if self.is_safe != other.is_safe:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property  # noqa: A003
    def type(self):  # noqa: A003
        """Message field 'type'."""
        return self._type

    @type.setter  # noqa: A003
    def type(self, value):  # noqa: A003
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'type' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'type' field must be an unsigned integer in [0, 65535]"
        self._type = value

    @builtins.property
    def object_id(self):
        """Message field 'object_id'."""
        return self._object_id

    @object_id.setter
    def object_id(self, value):
        if __debug__:
            from unique_identifier_msgs.msg import UUID
            assert \
                isinstance(value, UUID), \
                "The 'object_id' field must be a sub message of type 'UUID'"
        self._object_id = value

    @builtins.property
    def predicted_path(self):
        """Message field 'predicted_path'."""
        return self._predicted_path

    @predicted_path.setter
    def predicted_path(self, value):
        if __debug__:
            from autoware_perception_msgs.msg import PredictedPath
            assert \
                isinstance(value, PredictedPath), \
                "The 'predicted_path' field must be a sub message of type 'PredictedPath'"
        self._predicted_path = value

    @builtins.property
    def ttc_begin(self):
        """Message field 'ttc_begin'."""
        return self._ttc_begin

    @ttc_begin.setter
    def ttc_begin(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'ttc_begin' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'ttc_begin' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._ttc_begin = value

    @builtins.property
    def ttc_end(self):
        """Message field 'ttc_end'."""
        return self._ttc_end

    @ttc_end.setter
    def ttc_end(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'ttc_end' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'ttc_end' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._ttc_end = value

    @builtins.property
    def points(self):
        """Message field 'points'."""
        return self._points

    @points.setter
    def points(self, value):
        if __debug__:
            from geometry_msgs.msg import Point
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
                 all(isinstance(v, Point) for v in value) and
                 True), \
                "The 'points' field must be a set or sequence and each value of type 'Point'"
        self._points = value

    @builtins.property
    def is_safe(self):
        """Message field 'is_safe'."""
        return self._is_safe

    @is_safe.setter
    def is_safe(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'is_safe' field must be of type 'bool'"
        self._is_safe = value
