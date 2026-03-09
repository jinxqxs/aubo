# generated from rosidl_generator_py/resource/_idl.py.em
# with input from aubo_ros2_common:msg/AuboArmStates.idl
# generated code does not contain a copyright notice

# This is being done at the module level and not on the instance level to avoid looking
# for the same variable multiple times on each instance. This variable is not supposed to
# change during runtime so it makes sense to only look for it once.
from os import getenv

ros_python_check_fields = getenv('ROS_PYTHON_CHECK_FIELDS', default='')


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_AuboArmStates(type):
    """Metaclass of message 'AuboArmStates'."""

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
            module = import_type_support('aubo_ros2_common')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'aubo_ros2_common.msg.AuboArmStates')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__aubo_arm_states
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__aubo_arm_states
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__aubo_arm_states
            cls._TYPE_SUPPORT = module.type_support_msg__msg__aubo_arm_states
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__aubo_arm_states

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class AuboArmStates(metaclass=Metaclass_AuboArmStates):
    """Message class 'AuboArmStates'."""

    __slots__ = [
        '_move_type',
        '_collision_level',
        '_arm_power_status',
        '_collision_stopped',
        '_emergency_stopped',
        '_singularity_stopped',
        '_protective_stopped',
        '_in_motion',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'move_type': 'int16',
        'collision_level': 'int16',
        'arm_power_status': 'boolean',
        'collision_stopped': 'boolean',
        'emergency_stopped': 'boolean',
        'singularity_stopped': 'boolean',
        'protective_stopped': 'boolean',
        'in_motion': 'boolean',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
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
        self.move_type = kwargs.get('move_type', int())
        self.collision_level = kwargs.get('collision_level', int())
        self.arm_power_status = kwargs.get('arm_power_status', bool())
        self.collision_stopped = kwargs.get('collision_stopped', bool())
        self.emergency_stopped = kwargs.get('emergency_stopped', bool())
        self.singularity_stopped = kwargs.get('singularity_stopped', bool())
        self.protective_stopped = kwargs.get('protective_stopped', bool())
        self.in_motion = kwargs.get('in_motion', bool())

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
        if self.move_type != other.move_type:
            return False
        if self.collision_level != other.collision_level:
            return False
        if self.arm_power_status != other.arm_power_status:
            return False
        if self.collision_stopped != other.collision_stopped:
            return False
        if self.emergency_stopped != other.emergency_stopped:
            return False
        if self.singularity_stopped != other.singularity_stopped:
            return False
        if self.protective_stopped != other.protective_stopped:
            return False
        if self.in_motion != other.in_motion:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def move_type(self):
        """Message field 'move_type'."""
        return self._move_type

    @move_type.setter
    def move_type(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'move_type' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'move_type' field must be an integer in [-32768, 32767]"
        self._move_type = value

    @builtins.property
    def collision_level(self):
        """Message field 'collision_level'."""
        return self._collision_level

    @collision_level.setter
    def collision_level(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'collision_level' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'collision_level' field must be an integer in [-32768, 32767]"
        self._collision_level = value

    @builtins.property
    def arm_power_status(self):
        """Message field 'arm_power_status'."""
        return self._arm_power_status

    @arm_power_status.setter
    def arm_power_status(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'arm_power_status' field must be of type 'bool'"
        self._arm_power_status = value

    @builtins.property
    def collision_stopped(self):
        """Message field 'collision_stopped'."""
        return self._collision_stopped

    @collision_stopped.setter
    def collision_stopped(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'collision_stopped' field must be of type 'bool'"
        self._collision_stopped = value

    @builtins.property
    def emergency_stopped(self):
        """Message field 'emergency_stopped'."""
        return self._emergency_stopped

    @emergency_stopped.setter
    def emergency_stopped(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'emergency_stopped' field must be of type 'bool'"
        self._emergency_stopped = value

    @builtins.property
    def singularity_stopped(self):
        """Message field 'singularity_stopped'."""
        return self._singularity_stopped

    @singularity_stopped.setter
    def singularity_stopped(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'singularity_stopped' field must be of type 'bool'"
        self._singularity_stopped = value

    @builtins.property
    def protective_stopped(self):
        """Message field 'protective_stopped'."""
        return self._protective_stopped

    @protective_stopped.setter
    def protective_stopped(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'protective_stopped' field must be of type 'bool'"
        self._protective_stopped = value

    @builtins.property
    def in_motion(self):
        """Message field 'in_motion'."""
        return self._in_motion

    @in_motion.setter
    def in_motion(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'in_motion' field must be of type 'bool'"
        self._in_motion = value
