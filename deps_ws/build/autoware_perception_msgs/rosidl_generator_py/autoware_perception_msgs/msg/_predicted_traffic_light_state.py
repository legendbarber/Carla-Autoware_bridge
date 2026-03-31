# generated from rosidl_generator_py/resource/_idl.py.em
# with input from autoware_perception_msgs:msg/PredictedTrafficLightState.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_PredictedTrafficLightState(type):
    """Metaclass of message 'PredictedTrafficLightState'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'INFORMATION_SOURCE_V2N': 'V2N',
        'INFORMATION_SOURCE_V2I': 'V2I',
        'INFORMATION_SOURCE_V2V': 'V2V',
        'INFORMATION_SOURCE_LOCAL_PERCEPTION': 'LOCAL_PERCEPTION',
        'INFORMATION_SOURCE_MANUAL_OVERRIDE': 'MANUAL_OVERRIDE',
        'INFORMATION_SOURCE_SIMULATION': 'SIMULATION',
        'INFORMATION_SOURCE_INTERNAL_ESTIMATION': 'INTERNAL_ESTIMATION',
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('autoware_perception_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'autoware_perception_msgs.msg.PredictedTrafficLightState')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__predicted_traffic_light_state
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__predicted_traffic_light_state
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__predicted_traffic_light_state
            cls._TYPE_SUPPORT = module.type_support_msg__msg__predicted_traffic_light_state
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__predicted_traffic_light_state

            from autoware_perception_msgs.msg import TrafficLightElement
            if TrafficLightElement.__class__._TYPE_SUPPORT is None:
                TrafficLightElement.__class__.__import_type_support__()

            from builtin_interfaces.msg import Time
            if Time.__class__._TYPE_SUPPORT is None:
                Time.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'INFORMATION_SOURCE_V2N': cls.__constants['INFORMATION_SOURCE_V2N'],
            'INFORMATION_SOURCE_V2I': cls.__constants['INFORMATION_SOURCE_V2I'],
            'INFORMATION_SOURCE_V2V': cls.__constants['INFORMATION_SOURCE_V2V'],
            'INFORMATION_SOURCE_LOCAL_PERCEPTION': cls.__constants['INFORMATION_SOURCE_LOCAL_PERCEPTION'],
            'INFORMATION_SOURCE_MANUAL_OVERRIDE': cls.__constants['INFORMATION_SOURCE_MANUAL_OVERRIDE'],
            'INFORMATION_SOURCE_SIMULATION': cls.__constants['INFORMATION_SOURCE_SIMULATION'],
            'INFORMATION_SOURCE_INTERNAL_ESTIMATION': cls.__constants['INFORMATION_SOURCE_INTERNAL_ESTIMATION'],
        }

    @property
    def INFORMATION_SOURCE_V2N(self):
        """Message constant 'INFORMATION_SOURCE_V2N'."""
        return Metaclass_PredictedTrafficLightState.__constants['INFORMATION_SOURCE_V2N']

    @property
    def INFORMATION_SOURCE_V2I(self):
        """Message constant 'INFORMATION_SOURCE_V2I'."""
        return Metaclass_PredictedTrafficLightState.__constants['INFORMATION_SOURCE_V2I']

    @property
    def INFORMATION_SOURCE_V2V(self):
        """Message constant 'INFORMATION_SOURCE_V2V'."""
        return Metaclass_PredictedTrafficLightState.__constants['INFORMATION_SOURCE_V2V']

    @property
    def INFORMATION_SOURCE_LOCAL_PERCEPTION(self):
        """Message constant 'INFORMATION_SOURCE_LOCAL_PERCEPTION'."""
        return Metaclass_PredictedTrafficLightState.__constants['INFORMATION_SOURCE_LOCAL_PERCEPTION']

    @property
    def INFORMATION_SOURCE_MANUAL_OVERRIDE(self):
        """Message constant 'INFORMATION_SOURCE_MANUAL_OVERRIDE'."""
        return Metaclass_PredictedTrafficLightState.__constants['INFORMATION_SOURCE_MANUAL_OVERRIDE']

    @property
    def INFORMATION_SOURCE_SIMULATION(self):
        """Message constant 'INFORMATION_SOURCE_SIMULATION'."""
        return Metaclass_PredictedTrafficLightState.__constants['INFORMATION_SOURCE_SIMULATION']

    @property
    def INFORMATION_SOURCE_INTERNAL_ESTIMATION(self):
        """Message constant 'INFORMATION_SOURCE_INTERNAL_ESTIMATION'."""
        return Metaclass_PredictedTrafficLightState.__constants['INFORMATION_SOURCE_INTERNAL_ESTIMATION']


class PredictedTrafficLightState(metaclass=Metaclass_PredictedTrafficLightState):
    """
    Message class 'PredictedTrafficLightState'.

    Constants:
      INFORMATION_SOURCE_V2N
      INFORMATION_SOURCE_V2I
      INFORMATION_SOURCE_V2V
      INFORMATION_SOURCE_LOCAL_PERCEPTION
      INFORMATION_SOURCE_MANUAL_OVERRIDE
      INFORMATION_SOURCE_SIMULATION
      INFORMATION_SOURCE_INTERNAL_ESTIMATION
    """

    __slots__ = [
        '_predicted_stamp',
        '_simultaneous_elements',
        '_reliability',
        '_information_source',
    ]

    _fields_and_field_types = {
        'predicted_stamp': 'builtin_interfaces/Time',
        'simultaneous_elements': 'sequence<autoware_perception_msgs/TrafficLightElement>',
        'reliability': 'float',
        'information_source': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['builtin_interfaces', 'msg'], 'Time'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['autoware_perception_msgs', 'msg'], 'TrafficLightElement')),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from builtin_interfaces.msg import Time
        self.predicted_stamp = kwargs.get('predicted_stamp', Time())
        self.simultaneous_elements = kwargs.get('simultaneous_elements', [])
        self.reliability = kwargs.get('reliability', float())
        self.information_source = kwargs.get('information_source', str())

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
        if self.predicted_stamp != other.predicted_stamp:
            return False
        if self.simultaneous_elements != other.simultaneous_elements:
            return False
        if self.reliability != other.reliability:
            return False
        if self.information_source != other.information_source:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def predicted_stamp(self):
        """Message field 'predicted_stamp'."""
        return self._predicted_stamp

    @predicted_stamp.setter
    def predicted_stamp(self, value):
        if __debug__:
            from builtin_interfaces.msg import Time
            assert \
                isinstance(value, Time), \
                "The 'predicted_stamp' field must be a sub message of type 'Time'"
        self._predicted_stamp = value

    @builtins.property
    def simultaneous_elements(self):
        """Message field 'simultaneous_elements'."""
        return self._simultaneous_elements

    @simultaneous_elements.setter
    def simultaneous_elements(self, value):
        if __debug__:
            from autoware_perception_msgs.msg import TrafficLightElement
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
                 all(isinstance(v, TrafficLightElement) for v in value) and
                 True), \
                "The 'simultaneous_elements' field must be a set or sequence and each value of type 'TrafficLightElement'"
        self._simultaneous_elements = value

    @builtins.property
    def reliability(self):
        """Message field 'reliability'."""
        return self._reliability

    @reliability.setter
    def reliability(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'reliability' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'reliability' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._reliability = value

    @builtins.property
    def information_source(self):
        """Message field 'information_source'."""
        return self._information_source

    @information_source.setter
    def information_source(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'information_source' field must be of type 'str'"
        self._information_source = value
