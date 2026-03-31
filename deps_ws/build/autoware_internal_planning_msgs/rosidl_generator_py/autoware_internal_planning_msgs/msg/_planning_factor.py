# generated from rosidl_generator_py/resource/_idl.py.em
# with input from autoware_internal_planning_msgs:msg/PlanningFactor.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_PlanningFactor(type):
    """Metaclass of message 'PlanningFactor'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'UNKNOWN': 0,
        'NONE': 1,
        'SLOW_DOWN': 2,
        'STOP': 3,
        'SHIFT_LEFT': 4,
        'SHIFT_RIGHT': 5,
        'TURN_LEFT': 6,
        'TURN_RIGHT': 7,
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
                'autoware_internal_planning_msgs.msg.PlanningFactor')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__planning_factor
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__planning_factor
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__planning_factor
            cls._TYPE_SUPPORT = module.type_support_msg__msg__planning_factor
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__planning_factor

            from autoware_internal_planning_msgs.msg import ControlPoint
            if ControlPoint.__class__._TYPE_SUPPORT is None:
                ControlPoint.__class__.__import_type_support__()

            from autoware_internal_planning_msgs.msg import SafetyFactorArray
            if SafetyFactorArray.__class__._TYPE_SUPPORT is None:
                SafetyFactorArray.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'UNKNOWN': cls.__constants['UNKNOWN'],
            'NONE': cls.__constants['NONE'],
            'SLOW_DOWN': cls.__constants['SLOW_DOWN'],
            'STOP': cls.__constants['STOP'],
            'SHIFT_LEFT': cls.__constants['SHIFT_LEFT'],
            'SHIFT_RIGHT': cls.__constants['SHIFT_RIGHT'],
            'TURN_LEFT': cls.__constants['TURN_LEFT'],
            'TURN_RIGHT': cls.__constants['TURN_RIGHT'],
        }

    @property
    def UNKNOWN(self):
        """Message constant 'UNKNOWN'."""
        return Metaclass_PlanningFactor.__constants['UNKNOWN']

    @property
    def NONE(self):
        """Message constant 'NONE'."""
        return Metaclass_PlanningFactor.__constants['NONE']

    @property
    def SLOW_DOWN(self):
        """Message constant 'SLOW_DOWN'."""
        return Metaclass_PlanningFactor.__constants['SLOW_DOWN']

    @property
    def STOP(self):
        """Message constant 'STOP'."""
        return Metaclass_PlanningFactor.__constants['STOP']

    @property
    def SHIFT_LEFT(self):
        """Message constant 'SHIFT_LEFT'."""
        return Metaclass_PlanningFactor.__constants['SHIFT_LEFT']

    @property
    def SHIFT_RIGHT(self):
        """Message constant 'SHIFT_RIGHT'."""
        return Metaclass_PlanningFactor.__constants['SHIFT_RIGHT']

    @property
    def TURN_LEFT(self):
        """Message constant 'TURN_LEFT'."""
        return Metaclass_PlanningFactor.__constants['TURN_LEFT']

    @property
    def TURN_RIGHT(self):
        """Message constant 'TURN_RIGHT'."""
        return Metaclass_PlanningFactor.__constants['TURN_RIGHT']


class PlanningFactor(metaclass=Metaclass_PlanningFactor):
    """
    Message class 'PlanningFactor'.

    Constants:
      UNKNOWN
      NONE
      SLOW_DOWN
      STOP
      SHIFT_LEFT
      SHIFT_RIGHT
      TURN_LEFT
      TURN_RIGHT
    """

    __slots__ = [
        '_module',
        '_is_driving_forward',
        '_control_points',
        '_behavior',
        '_detail',
        '_safety_factors',
    ]

    _fields_and_field_types = {
        'module': 'string',
        'is_driving_forward': 'boolean',
        'control_points': 'sequence<autoware_internal_planning_msgs/ControlPoint>',
        'behavior': 'uint16',
        'detail': 'string',
        'safety_factors': 'autoware_internal_planning_msgs/SafetyFactorArray',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['autoware_internal_planning_msgs', 'msg'], 'ControlPoint')),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['autoware_internal_planning_msgs', 'msg'], 'SafetyFactorArray'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.module = kwargs.get('module', str())
        self.is_driving_forward = kwargs.get('is_driving_forward', bool())
        self.control_points = kwargs.get('control_points', [])
        self.behavior = kwargs.get('behavior', int())
        self.detail = kwargs.get('detail', str())
        from autoware_internal_planning_msgs.msg import SafetyFactorArray
        self.safety_factors = kwargs.get('safety_factors', SafetyFactorArray())

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
        if self.module != other.module:
            return False
        if self.is_driving_forward != other.is_driving_forward:
            return False
        if self.control_points != other.control_points:
            return False
        if self.behavior != other.behavior:
            return False
        if self.detail != other.detail:
            return False
        if self.safety_factors != other.safety_factors:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def module(self):
        """Message field 'module'."""
        return self._module

    @module.setter
    def module(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'module' field must be of type 'str'"
        self._module = value

    @builtins.property
    def is_driving_forward(self):
        """Message field 'is_driving_forward'."""
        return self._is_driving_forward

    @is_driving_forward.setter
    def is_driving_forward(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'is_driving_forward' field must be of type 'bool'"
        self._is_driving_forward = value

    @builtins.property
    def control_points(self):
        """Message field 'control_points'."""
        return self._control_points

    @control_points.setter
    def control_points(self, value):
        if __debug__:
            from autoware_internal_planning_msgs.msg import ControlPoint
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
                 all(isinstance(v, ControlPoint) for v in value) and
                 True), \
                "The 'control_points' field must be a set or sequence and each value of type 'ControlPoint'"
        self._control_points = value

    @builtins.property
    def behavior(self):
        """Message field 'behavior'."""
        return self._behavior

    @behavior.setter
    def behavior(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'behavior' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'behavior' field must be an unsigned integer in [0, 65535]"
        self._behavior = value

    @builtins.property
    def detail(self):
        """Message field 'detail'."""
        return self._detail

    @detail.setter
    def detail(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'detail' field must be of type 'str'"
        self._detail = value

    @builtins.property
    def safety_factors(self):
        """Message field 'safety_factors'."""
        return self._safety_factors

    @safety_factors.setter
    def safety_factors(self, value):
        if __debug__:
            from autoware_internal_planning_msgs.msg import SafetyFactorArray
            assert \
                isinstance(value, SafetyFactorArray), \
                "The 'safety_factors' field must be a sub message of type 'SafetyFactorArray'"
        self._safety_factors = value
