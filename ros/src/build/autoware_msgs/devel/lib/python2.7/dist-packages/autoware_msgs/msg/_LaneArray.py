# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from autoware_msgs/LaneArray.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct

import autoware_msgs.msg
import geometry_msgs.msg
import std_msgs.msg

class LaneArray(genpy.Message):
  _md5sum = "34b7a58f60637059f85bbb7f1f9939a2"
  _type = "autoware_msgs/LaneArray"
  _has_header = False #flag to mark the presence of a Header object
  _full_text = """int32 id
Lane[] lanes

================================================================================
MSG: autoware_msgs/Lane
Header header
int32 increment
int32 lane_id
Waypoint[] waypoints

uint32 lane_index
float32 cost
float32 closest_object_distance
float32 closest_object_velocity
bool is_blocked

================================================================================
MSG: std_msgs/Header
# Standard metadata for higher-level stamped data types.
# This is generally used to communicate timestamped data 
# in a particular coordinate frame.
# 
# sequence ID: consecutively increasing ID 
uint32 seq
#Two-integer timestamp that is expressed as:
# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')
# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')
# time-handling sugar is provided by the client library
time stamp
#Frame this data is associated with
# 0: no frame
# 1: global frame
string frame_id

================================================================================
MSG: autoware_msgs/Waypoint
# global id
int32 gid 
# local id
int32 lid
geometry_msgs/PoseStamped pose
geometry_msgs/TwistStamped twist
DTLane dtlane
int32 change_flag
WaypointState wpstate

uint32 lane_id
uint32 left_lane_id
uint32 right_lane_id
uint32 stop_line_id
float32 cost
float32 time_cost

# Lane Direction
# FORWARD				= 0
# FORWARD_LEFT	 		= 1
# FORWARD_RIGHT			= 2
# BACKWARD				= 3 
# BACKWARD_LEFT			= 4
# BACKWARD_RIGHT		= 5
# STANDSTILL	 		= 6
uint32 direction

WaypointParam waypoint_param

ExtractedPosition[] signals

================================================================================
MSG: geometry_msgs/PoseStamped
# A Pose with reference coordinate frame and timestamp
Header header
Pose pose

================================================================================
MSG: geometry_msgs/Pose
# A representation of pose in free space, composed of position and orientation. 
Point position
Quaternion orientation

================================================================================
MSG: geometry_msgs/Point
# This contains the position of a point in free space
float64 x
float64 y
float64 z

================================================================================
MSG: geometry_msgs/Quaternion
# This represents an orientation in free space in quaternion form.

float64 x
float64 y
float64 z
float64 w

================================================================================
MSG: geometry_msgs/TwistStamped
# A twist with reference coordinate frame and timestamp
Header header
Twist twist

================================================================================
MSG: geometry_msgs/Twist
# This expresses velocity in free space broken into its linear and angular parts.
Vector3  linear
Vector3  angular

================================================================================
MSG: geometry_msgs/Vector3
# This represents a vector in free space. 
# It is only meant to represent a direction. Therefore, it does not
# make sense to apply a translation to it (e.g., when applying a 
# generic rigid transformation to a Vector3, tf2 will only apply the
# rotation). If you want your data to be translatable too, use the
# geometry_msgs/Point message instead.

float64 x
float64 y
float64 z
================================================================================
MSG: autoware_msgs/DTLane
float64 dist
float64 dir
float64 apara
float64 r
float64 slope
float64 cant
float64 lw
float64 rw

================================================================================
MSG: autoware_msgs/WaypointState
int32 aid
uint8 NULLSTATE=0

# lanechange
uint8 lanechange_state

# bilinker
uint8 steering_state
uint8 STR_LEFT=1
uint8 STR_RIGHT=2
uint8 STR_STRAIGHT=3
uint8 STR_BACK=4

uint8 accel_state

uint8 stop_state
# 1 is stopline, 2 is stop which can only be released manually.
uint8 TYPE_STOPLINE=1
uint8 TYPE_STOP=2

uint8 event_state
uint8 TYPE_EVENT_NULL = 0
uint8 TYPE_EVENT_GOAL = 1
uint8 TYPE_EVENT_MIDDLE_GOAL = 2
uint8 TYPE_EVENT_POSITION_STOP = 3
uint8 TYPE_EVENT_BUS_STOP = 4
uint8 TYPE_EVENT_PARKING = 5

================================================================================
MSG: autoware_msgs/WaypointParam
Header header
uint32 id
float32 weight
int32 blinker
int32 feat_proj_x
int32 feat_proj_y
int32 velocity_KPPlus
int32 velocity_KPMinus
int32 velocity_punchPlus
int32 velocity_punchMinus
int32 velocity_windowPlus
int32 velocity_windowMinus
float64 drive_stroke
float64 brake_stroke
int16 mb_pedal
int32 pause
int32 pauseGroup
float32 vgf_leafsize
float32 vgf_measurement_range
ExtractedPosition[] signals
int32 curve_flag
int16 microbus_pedal
int16 microbus_angle
int8 automatic_door
int8 signal_stop_line
int8 temporary_stop_line
int8 fusion_select
float64 steer_correction
float32 lookahead_ratio
float32 minimum_lookahead_distance
float32 lookahead_ratio_magn
LiesseXZB70MParam liesse

================================================================================
MSG: autoware_msgs/ExtractedPosition
# This message defines the information required to describe a lamp (bulb)
# in a traffic signal, according to the information extracted from the ADAS Map
# and the extrinsic camera calibration

int32 signalId  # Traffic Signal Lamp ID
int32 u         # Lamp ROI x in image coords
int32 v         # Lamp ROI y in image coords
int32 radius    # Lamp Radius
float64 x       # X position in map coordinates
float64 y       # Y position in map coordinates
float64 z       # Z position in map coordinates
float64 hang    # Azimuth "Horizontal Angle"
int8 type       # Lamp Type (red, yellow, green, ...)
int32 linkId    # Closest LinkID (lane) in VectorMap
int32 plId      # PoleID to which this Lamp belongs to

================================================================================
MSG: autoware_msgs/LiesseXZB70MParam
Header header
int8 SHIFT_P = 0
int8 SHIFT_R = 1
int8 SHIFT_N = 2
int8 SHIFT_D = 3
int8 SHIFT_4 = 4
int8 SHIFT_L = 5
int8 shift
"""
  __slots__ = ['id','lanes']
  _slot_types = ['int32','autoware_msgs/Lane[]']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       id,lanes

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(LaneArray, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.id is None:
        self.id = 0
      if self.lanes is None:
        self.lanes = []
    else:
      self.id = 0
      self.lanes = []

  def _get_types(self):
    """
    internal API method
    """
    return self._slot_types

  def serialize(self, buff):
    """
    serialize message into buffer
    :param buff: buffer, ``StringIO``
    """
    try:
      buff.write(_get_struct_i().pack(self.id))
      length = len(self.lanes)
      buff.write(_struct_I.pack(length))
      for val1 in self.lanes:
        _v1 = val1.header
        buff.write(_get_struct_I().pack(_v1.seq))
        _v2 = _v1.stamp
        _x = _v2
        buff.write(_get_struct_2I().pack(_x.secs, _x.nsecs))
        _x = _v1.frame_id
        length = len(_x)
        if python3 or type(_x) == unicode:
          _x = _x.encode('utf-8')
          length = len(_x)
        buff.write(struct.pack('<I%ss'%length, length, _x))
        _x = val1
        buff.write(_get_struct_2i().pack(_x.increment, _x.lane_id))
        length = len(val1.waypoints)
        buff.write(_struct_I.pack(length))
        for val2 in val1.waypoints:
          _x = val2
          buff.write(_get_struct_2i().pack(_x.gid, _x.lid))
          _v3 = val2.pose
          _v4 = _v3.header
          buff.write(_get_struct_I().pack(_v4.seq))
          _v5 = _v4.stamp
          _x = _v5
          buff.write(_get_struct_2I().pack(_x.secs, _x.nsecs))
          _x = _v4.frame_id
          length = len(_x)
          if python3 or type(_x) == unicode:
            _x = _x.encode('utf-8')
            length = len(_x)
          buff.write(struct.pack('<I%ss'%length, length, _x))
          _v6 = _v3.pose
          _v7 = _v6.position
          _x = _v7
          buff.write(_get_struct_3d().pack(_x.x, _x.y, _x.z))
          _v8 = _v6.orientation
          _x = _v8
          buff.write(_get_struct_4d().pack(_x.x, _x.y, _x.z, _x.w))
          _v9 = val2.twist
          _v10 = _v9.header
          buff.write(_get_struct_I().pack(_v10.seq))
          _v11 = _v10.stamp
          _x = _v11
          buff.write(_get_struct_2I().pack(_x.secs, _x.nsecs))
          _x = _v10.frame_id
          length = len(_x)
          if python3 or type(_x) == unicode:
            _x = _x.encode('utf-8')
            length = len(_x)
          buff.write(struct.pack('<I%ss'%length, length, _x))
          _v12 = _v9.twist
          _v13 = _v12.linear
          _x = _v13
          buff.write(_get_struct_3d().pack(_x.x, _x.y, _x.z))
          _v14 = _v12.angular
          _x = _v14
          buff.write(_get_struct_3d().pack(_x.x, _x.y, _x.z))
          _v15 = val2.dtlane
          _x = _v15
          buff.write(_get_struct_8d().pack(_x.dist, _x.dir, _x.apara, _x.r, _x.slope, _x.cant, _x.lw, _x.rw))
          buff.write(_get_struct_i().pack(val2.change_flag))
          _v16 = val2.wpstate
          _x = _v16
          buff.write(_get_struct_i5B().pack(_x.aid, _x.lanechange_state, _x.steering_state, _x.accel_state, _x.stop_state, _x.event_state))
          _x = val2
          buff.write(_get_struct_4I2fI().pack(_x.lane_id, _x.left_lane_id, _x.right_lane_id, _x.stop_line_id, _x.cost, _x.time_cost, _x.direction))
          _v17 = val2.waypoint_param
          _v18 = _v17.header
          buff.write(_get_struct_I().pack(_v18.seq))
          _v19 = _v18.stamp
          _x = _v19
          buff.write(_get_struct_2I().pack(_x.secs, _x.nsecs))
          _x = _v18.frame_id
          length = len(_x)
          if python3 or type(_x) == unicode:
            _x = _x.encode('utf-8')
            length = len(_x)
          buff.write(struct.pack('<I%ss'%length, length, _x))
          _x = _v17
          buff.write(_get_struct_If9i2dh2i2f().pack(_x.id, _x.weight, _x.blinker, _x.feat_proj_x, _x.feat_proj_y, _x.velocity_KPPlus, _x.velocity_KPMinus, _x.velocity_punchPlus, _x.velocity_punchMinus, _x.velocity_windowPlus, _x.velocity_windowMinus, _x.drive_stroke, _x.brake_stroke, _x.mb_pedal, _x.pause, _x.pauseGroup, _x.vgf_leafsize, _x.vgf_measurement_range))
          length = len(_v17.signals)
          buff.write(_struct_I.pack(length))
          for val4 in _v17.signals:
            _x = val4
            buff.write(_get_struct_4i4db2i().pack(_x.signalId, _x.u, _x.v, _x.radius, _x.x, _x.y, _x.z, _x.hang, _x.type, _x.linkId, _x.plId))
          _x = _v17
          buff.write(_get_struct_i2h4bd3f().pack(_x.curve_flag, _x.microbus_pedal, _x.microbus_angle, _x.automatic_door, _x.signal_stop_line, _x.temporary_stop_line, _x.fusion_select, _x.steer_correction, _x.lookahead_ratio, _x.minimum_lookahead_distance, _x.lookahead_ratio_magn))
          _v20 = _v17.liesse
          _v21 = _v20.header
          buff.write(_get_struct_I().pack(_v21.seq))
          _v22 = _v21.stamp
          _x = _v22
          buff.write(_get_struct_2I().pack(_x.secs, _x.nsecs))
          _x = _v21.frame_id
          length = len(_x)
          if python3 or type(_x) == unicode:
            _x = _x.encode('utf-8')
            length = len(_x)
          buff.write(struct.pack('<I%ss'%length, length, _x))
          buff.write(_get_struct_b().pack(_v20.shift))
          length = len(val2.signals)
          buff.write(_struct_I.pack(length))
          for val3 in val2.signals:
            _x = val3
            buff.write(_get_struct_4i4db2i().pack(_x.signalId, _x.u, _x.v, _x.radius, _x.x, _x.y, _x.z, _x.hang, _x.type, _x.linkId, _x.plId))
        _x = val1
        buff.write(_get_struct_I3fB().pack(_x.lane_index, _x.cost, _x.closest_object_distance, _x.closest_object_velocity, _x.is_blocked))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    try:
      if self.lanes is None:
        self.lanes = None
      end = 0
      start = end
      end += 4
      (self.id,) = _get_struct_i().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.lanes = []
      for i in range(0, length):
        val1 = autoware_msgs.msg.Lane()
        _v23 = val1.header
        start = end
        end += 4
        (_v23.seq,) = _get_struct_I().unpack(str[start:end])
        _v24 = _v23.stamp
        _x = _v24
        start = end
        end += 8
        (_x.secs, _x.nsecs,) = _get_struct_2I().unpack(str[start:end])
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        start = end
        end += length
        if python3:
          _v23.frame_id = str[start:end].decode('utf-8')
        else:
          _v23.frame_id = str[start:end]
        _x = val1
        start = end
        end += 8
        (_x.increment, _x.lane_id,) = _get_struct_2i().unpack(str[start:end])
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        val1.waypoints = []
        for i in range(0, length):
          val2 = autoware_msgs.msg.Waypoint()
          _x = val2
          start = end
          end += 8
          (_x.gid, _x.lid,) = _get_struct_2i().unpack(str[start:end])
          _v25 = val2.pose
          _v26 = _v25.header
          start = end
          end += 4
          (_v26.seq,) = _get_struct_I().unpack(str[start:end])
          _v27 = _v26.stamp
          _x = _v27
          start = end
          end += 8
          (_x.secs, _x.nsecs,) = _get_struct_2I().unpack(str[start:end])
          start = end
          end += 4
          (length,) = _struct_I.unpack(str[start:end])
          start = end
          end += length
          if python3:
            _v26.frame_id = str[start:end].decode('utf-8')
          else:
            _v26.frame_id = str[start:end]
          _v28 = _v25.pose
          _v29 = _v28.position
          _x = _v29
          start = end
          end += 24
          (_x.x, _x.y, _x.z,) = _get_struct_3d().unpack(str[start:end])
          _v30 = _v28.orientation
          _x = _v30
          start = end
          end += 32
          (_x.x, _x.y, _x.z, _x.w,) = _get_struct_4d().unpack(str[start:end])
          _v31 = val2.twist
          _v32 = _v31.header
          start = end
          end += 4
          (_v32.seq,) = _get_struct_I().unpack(str[start:end])
          _v33 = _v32.stamp
          _x = _v33
          start = end
          end += 8
          (_x.secs, _x.nsecs,) = _get_struct_2I().unpack(str[start:end])
          start = end
          end += 4
          (length,) = _struct_I.unpack(str[start:end])
          start = end
          end += length
          if python3:
            _v32.frame_id = str[start:end].decode('utf-8')
          else:
            _v32.frame_id = str[start:end]
          _v34 = _v31.twist
          _v35 = _v34.linear
          _x = _v35
          start = end
          end += 24
          (_x.x, _x.y, _x.z,) = _get_struct_3d().unpack(str[start:end])
          _v36 = _v34.angular
          _x = _v36
          start = end
          end += 24
          (_x.x, _x.y, _x.z,) = _get_struct_3d().unpack(str[start:end])
          _v37 = val2.dtlane
          _x = _v37
          start = end
          end += 64
          (_x.dist, _x.dir, _x.apara, _x.r, _x.slope, _x.cant, _x.lw, _x.rw,) = _get_struct_8d().unpack(str[start:end])
          start = end
          end += 4
          (val2.change_flag,) = _get_struct_i().unpack(str[start:end])
          _v38 = val2.wpstate
          _x = _v38
          start = end
          end += 9
          (_x.aid, _x.lanechange_state, _x.steering_state, _x.accel_state, _x.stop_state, _x.event_state,) = _get_struct_i5B().unpack(str[start:end])
          _x = val2
          start = end
          end += 28
          (_x.lane_id, _x.left_lane_id, _x.right_lane_id, _x.stop_line_id, _x.cost, _x.time_cost, _x.direction,) = _get_struct_4I2fI().unpack(str[start:end])
          _v39 = val2.waypoint_param
          _v40 = _v39.header
          start = end
          end += 4
          (_v40.seq,) = _get_struct_I().unpack(str[start:end])
          _v41 = _v40.stamp
          _x = _v41
          start = end
          end += 8
          (_x.secs, _x.nsecs,) = _get_struct_2I().unpack(str[start:end])
          start = end
          end += 4
          (length,) = _struct_I.unpack(str[start:end])
          start = end
          end += length
          if python3:
            _v40.frame_id = str[start:end].decode('utf-8')
          else:
            _v40.frame_id = str[start:end]
          _x = _v39
          start = end
          end += 78
          (_x.id, _x.weight, _x.blinker, _x.feat_proj_x, _x.feat_proj_y, _x.velocity_KPPlus, _x.velocity_KPMinus, _x.velocity_punchPlus, _x.velocity_punchMinus, _x.velocity_windowPlus, _x.velocity_windowMinus, _x.drive_stroke, _x.brake_stroke, _x.mb_pedal, _x.pause, _x.pauseGroup, _x.vgf_leafsize, _x.vgf_measurement_range,) = _get_struct_If9i2dh2i2f().unpack(str[start:end])
          start = end
          end += 4
          (length,) = _struct_I.unpack(str[start:end])
          _v39.signals = []
          for i in range(0, length):
            val4 = autoware_msgs.msg.ExtractedPosition()
            _x = val4
            start = end
            end += 57
            (_x.signalId, _x.u, _x.v, _x.radius, _x.x, _x.y, _x.z, _x.hang, _x.type, _x.linkId, _x.plId,) = _get_struct_4i4db2i().unpack(str[start:end])
            _v39.signals.append(val4)
          _x = _v39
          start = end
          end += 32
          (_x.curve_flag, _x.microbus_pedal, _x.microbus_angle, _x.automatic_door, _x.signal_stop_line, _x.temporary_stop_line, _x.fusion_select, _x.steer_correction, _x.lookahead_ratio, _x.minimum_lookahead_distance, _x.lookahead_ratio_magn,) = _get_struct_i2h4bd3f().unpack(str[start:end])
          _v42 = _v39.liesse
          _v43 = _v42.header
          start = end
          end += 4
          (_v43.seq,) = _get_struct_I().unpack(str[start:end])
          _v44 = _v43.stamp
          _x = _v44
          start = end
          end += 8
          (_x.secs, _x.nsecs,) = _get_struct_2I().unpack(str[start:end])
          start = end
          end += 4
          (length,) = _struct_I.unpack(str[start:end])
          start = end
          end += length
          if python3:
            _v43.frame_id = str[start:end].decode('utf-8')
          else:
            _v43.frame_id = str[start:end]
          start = end
          end += 1
          (_v42.shift,) = _get_struct_b().unpack(str[start:end])
          start = end
          end += 4
          (length,) = _struct_I.unpack(str[start:end])
          val2.signals = []
          for i in range(0, length):
            val3 = autoware_msgs.msg.ExtractedPosition()
            _x = val3
            start = end
            end += 57
            (_x.signalId, _x.u, _x.v, _x.radius, _x.x, _x.y, _x.z, _x.hang, _x.type, _x.linkId, _x.plId,) = _get_struct_4i4db2i().unpack(str[start:end])
            val2.signals.append(val3)
          val1.waypoints.append(val2)
        _x = val1
        start = end
        end += 17
        (_x.lane_index, _x.cost, _x.closest_object_distance, _x.closest_object_velocity, _x.is_blocked,) = _get_struct_I3fB().unpack(str[start:end])
        val1.is_blocked = bool(val1.is_blocked)
        self.lanes.append(val1)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill


  def serialize_numpy(self, buff, numpy):
    """
    serialize message with numpy array types into buffer
    :param buff: buffer, ``StringIO``
    :param numpy: numpy python module
    """
    try:
      buff.write(_get_struct_i().pack(self.id))
      length = len(self.lanes)
      buff.write(_struct_I.pack(length))
      for val1 in self.lanes:
        _v45 = val1.header
        buff.write(_get_struct_I().pack(_v45.seq))
        _v46 = _v45.stamp
        _x = _v46
        buff.write(_get_struct_2I().pack(_x.secs, _x.nsecs))
        _x = _v45.frame_id
        length = len(_x)
        if python3 or type(_x) == unicode:
          _x = _x.encode('utf-8')
          length = len(_x)
        buff.write(struct.pack('<I%ss'%length, length, _x))
        _x = val1
        buff.write(_get_struct_2i().pack(_x.increment, _x.lane_id))
        length = len(val1.waypoints)
        buff.write(_struct_I.pack(length))
        for val2 in val1.waypoints:
          _x = val2
          buff.write(_get_struct_2i().pack(_x.gid, _x.lid))
          _v47 = val2.pose
          _v48 = _v47.header
          buff.write(_get_struct_I().pack(_v48.seq))
          _v49 = _v48.stamp
          _x = _v49
          buff.write(_get_struct_2I().pack(_x.secs, _x.nsecs))
          _x = _v48.frame_id
          length = len(_x)
          if python3 or type(_x) == unicode:
            _x = _x.encode('utf-8')
            length = len(_x)
          buff.write(struct.pack('<I%ss'%length, length, _x))
          _v50 = _v47.pose
          _v51 = _v50.position
          _x = _v51
          buff.write(_get_struct_3d().pack(_x.x, _x.y, _x.z))
          _v52 = _v50.orientation
          _x = _v52
          buff.write(_get_struct_4d().pack(_x.x, _x.y, _x.z, _x.w))
          _v53 = val2.twist
          _v54 = _v53.header
          buff.write(_get_struct_I().pack(_v54.seq))
          _v55 = _v54.stamp
          _x = _v55
          buff.write(_get_struct_2I().pack(_x.secs, _x.nsecs))
          _x = _v54.frame_id
          length = len(_x)
          if python3 or type(_x) == unicode:
            _x = _x.encode('utf-8')
            length = len(_x)
          buff.write(struct.pack('<I%ss'%length, length, _x))
          _v56 = _v53.twist
          _v57 = _v56.linear
          _x = _v57
          buff.write(_get_struct_3d().pack(_x.x, _x.y, _x.z))
          _v58 = _v56.angular
          _x = _v58
          buff.write(_get_struct_3d().pack(_x.x, _x.y, _x.z))
          _v59 = val2.dtlane
          _x = _v59
          buff.write(_get_struct_8d().pack(_x.dist, _x.dir, _x.apara, _x.r, _x.slope, _x.cant, _x.lw, _x.rw))
          buff.write(_get_struct_i().pack(val2.change_flag))
          _v60 = val2.wpstate
          _x = _v60
          buff.write(_get_struct_i5B().pack(_x.aid, _x.lanechange_state, _x.steering_state, _x.accel_state, _x.stop_state, _x.event_state))
          _x = val2
          buff.write(_get_struct_4I2fI().pack(_x.lane_id, _x.left_lane_id, _x.right_lane_id, _x.stop_line_id, _x.cost, _x.time_cost, _x.direction))
          _v61 = val2.waypoint_param
          _v62 = _v61.header
          buff.write(_get_struct_I().pack(_v62.seq))
          _v63 = _v62.stamp
          _x = _v63
          buff.write(_get_struct_2I().pack(_x.secs, _x.nsecs))
          _x = _v62.frame_id
          length = len(_x)
          if python3 or type(_x) == unicode:
            _x = _x.encode('utf-8')
            length = len(_x)
          buff.write(struct.pack('<I%ss'%length, length, _x))
          _x = _v61
          buff.write(_get_struct_If9i2dh2i2f().pack(_x.id, _x.weight, _x.blinker, _x.feat_proj_x, _x.feat_proj_y, _x.velocity_KPPlus, _x.velocity_KPMinus, _x.velocity_punchPlus, _x.velocity_punchMinus, _x.velocity_windowPlus, _x.velocity_windowMinus, _x.drive_stroke, _x.brake_stroke, _x.mb_pedal, _x.pause, _x.pauseGroup, _x.vgf_leafsize, _x.vgf_measurement_range))
          length = len(_v61.signals)
          buff.write(_struct_I.pack(length))
          for val4 in _v61.signals:
            _x = val4
            buff.write(_get_struct_4i4db2i().pack(_x.signalId, _x.u, _x.v, _x.radius, _x.x, _x.y, _x.z, _x.hang, _x.type, _x.linkId, _x.plId))
          _x = _v61
          buff.write(_get_struct_i2h4bd3f().pack(_x.curve_flag, _x.microbus_pedal, _x.microbus_angle, _x.automatic_door, _x.signal_stop_line, _x.temporary_stop_line, _x.fusion_select, _x.steer_correction, _x.lookahead_ratio, _x.minimum_lookahead_distance, _x.lookahead_ratio_magn))
          _v64 = _v61.liesse
          _v65 = _v64.header
          buff.write(_get_struct_I().pack(_v65.seq))
          _v66 = _v65.stamp
          _x = _v66
          buff.write(_get_struct_2I().pack(_x.secs, _x.nsecs))
          _x = _v65.frame_id
          length = len(_x)
          if python3 or type(_x) == unicode:
            _x = _x.encode('utf-8')
            length = len(_x)
          buff.write(struct.pack('<I%ss'%length, length, _x))
          buff.write(_get_struct_b().pack(_v64.shift))
          length = len(val2.signals)
          buff.write(_struct_I.pack(length))
          for val3 in val2.signals:
            _x = val3
            buff.write(_get_struct_4i4db2i().pack(_x.signalId, _x.u, _x.v, _x.radius, _x.x, _x.y, _x.z, _x.hang, _x.type, _x.linkId, _x.plId))
        _x = val1
        buff.write(_get_struct_I3fB().pack(_x.lane_index, _x.cost, _x.closest_object_distance, _x.closest_object_velocity, _x.is_blocked))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    try:
      if self.lanes is None:
        self.lanes = None
      end = 0
      start = end
      end += 4
      (self.id,) = _get_struct_i().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.lanes = []
      for i in range(0, length):
        val1 = autoware_msgs.msg.Lane()
        _v67 = val1.header
        start = end
        end += 4
        (_v67.seq,) = _get_struct_I().unpack(str[start:end])
        _v68 = _v67.stamp
        _x = _v68
        start = end
        end += 8
        (_x.secs, _x.nsecs,) = _get_struct_2I().unpack(str[start:end])
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        start = end
        end += length
        if python3:
          _v67.frame_id = str[start:end].decode('utf-8')
        else:
          _v67.frame_id = str[start:end]
        _x = val1
        start = end
        end += 8
        (_x.increment, _x.lane_id,) = _get_struct_2i().unpack(str[start:end])
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        val1.waypoints = []
        for i in range(0, length):
          val2 = autoware_msgs.msg.Waypoint()
          _x = val2
          start = end
          end += 8
          (_x.gid, _x.lid,) = _get_struct_2i().unpack(str[start:end])
          _v69 = val2.pose
          _v70 = _v69.header
          start = end
          end += 4
          (_v70.seq,) = _get_struct_I().unpack(str[start:end])
          _v71 = _v70.stamp
          _x = _v71
          start = end
          end += 8
          (_x.secs, _x.nsecs,) = _get_struct_2I().unpack(str[start:end])
          start = end
          end += 4
          (length,) = _struct_I.unpack(str[start:end])
          start = end
          end += length
          if python3:
            _v70.frame_id = str[start:end].decode('utf-8')
          else:
            _v70.frame_id = str[start:end]
          _v72 = _v69.pose
          _v73 = _v72.position
          _x = _v73
          start = end
          end += 24
          (_x.x, _x.y, _x.z,) = _get_struct_3d().unpack(str[start:end])
          _v74 = _v72.orientation
          _x = _v74
          start = end
          end += 32
          (_x.x, _x.y, _x.z, _x.w,) = _get_struct_4d().unpack(str[start:end])
          _v75 = val2.twist
          _v76 = _v75.header
          start = end
          end += 4
          (_v76.seq,) = _get_struct_I().unpack(str[start:end])
          _v77 = _v76.stamp
          _x = _v77
          start = end
          end += 8
          (_x.secs, _x.nsecs,) = _get_struct_2I().unpack(str[start:end])
          start = end
          end += 4
          (length,) = _struct_I.unpack(str[start:end])
          start = end
          end += length
          if python3:
            _v76.frame_id = str[start:end].decode('utf-8')
          else:
            _v76.frame_id = str[start:end]
          _v78 = _v75.twist
          _v79 = _v78.linear
          _x = _v79
          start = end
          end += 24
          (_x.x, _x.y, _x.z,) = _get_struct_3d().unpack(str[start:end])
          _v80 = _v78.angular
          _x = _v80
          start = end
          end += 24
          (_x.x, _x.y, _x.z,) = _get_struct_3d().unpack(str[start:end])
          _v81 = val2.dtlane
          _x = _v81
          start = end
          end += 64
          (_x.dist, _x.dir, _x.apara, _x.r, _x.slope, _x.cant, _x.lw, _x.rw,) = _get_struct_8d().unpack(str[start:end])
          start = end
          end += 4
          (val2.change_flag,) = _get_struct_i().unpack(str[start:end])
          _v82 = val2.wpstate
          _x = _v82
          start = end
          end += 9
          (_x.aid, _x.lanechange_state, _x.steering_state, _x.accel_state, _x.stop_state, _x.event_state,) = _get_struct_i5B().unpack(str[start:end])
          _x = val2
          start = end
          end += 28
          (_x.lane_id, _x.left_lane_id, _x.right_lane_id, _x.stop_line_id, _x.cost, _x.time_cost, _x.direction,) = _get_struct_4I2fI().unpack(str[start:end])
          _v83 = val2.waypoint_param
          _v84 = _v83.header
          start = end
          end += 4
          (_v84.seq,) = _get_struct_I().unpack(str[start:end])
          _v85 = _v84.stamp
          _x = _v85
          start = end
          end += 8
          (_x.secs, _x.nsecs,) = _get_struct_2I().unpack(str[start:end])
          start = end
          end += 4
          (length,) = _struct_I.unpack(str[start:end])
          start = end
          end += length
          if python3:
            _v84.frame_id = str[start:end].decode('utf-8')
          else:
            _v84.frame_id = str[start:end]
          _x = _v83
          start = end
          end += 78
          (_x.id, _x.weight, _x.blinker, _x.feat_proj_x, _x.feat_proj_y, _x.velocity_KPPlus, _x.velocity_KPMinus, _x.velocity_punchPlus, _x.velocity_punchMinus, _x.velocity_windowPlus, _x.velocity_windowMinus, _x.drive_stroke, _x.brake_stroke, _x.mb_pedal, _x.pause, _x.pauseGroup, _x.vgf_leafsize, _x.vgf_measurement_range,) = _get_struct_If9i2dh2i2f().unpack(str[start:end])
          start = end
          end += 4
          (length,) = _struct_I.unpack(str[start:end])
          _v83.signals = []
          for i in range(0, length):
            val4 = autoware_msgs.msg.ExtractedPosition()
            _x = val4
            start = end
            end += 57
            (_x.signalId, _x.u, _x.v, _x.radius, _x.x, _x.y, _x.z, _x.hang, _x.type, _x.linkId, _x.plId,) = _get_struct_4i4db2i().unpack(str[start:end])
            _v83.signals.append(val4)
          _x = _v83
          start = end
          end += 32
          (_x.curve_flag, _x.microbus_pedal, _x.microbus_angle, _x.automatic_door, _x.signal_stop_line, _x.temporary_stop_line, _x.fusion_select, _x.steer_correction, _x.lookahead_ratio, _x.minimum_lookahead_distance, _x.lookahead_ratio_magn,) = _get_struct_i2h4bd3f().unpack(str[start:end])
          _v86 = _v83.liesse
          _v87 = _v86.header
          start = end
          end += 4
          (_v87.seq,) = _get_struct_I().unpack(str[start:end])
          _v88 = _v87.stamp
          _x = _v88
          start = end
          end += 8
          (_x.secs, _x.nsecs,) = _get_struct_2I().unpack(str[start:end])
          start = end
          end += 4
          (length,) = _struct_I.unpack(str[start:end])
          start = end
          end += length
          if python3:
            _v87.frame_id = str[start:end].decode('utf-8')
          else:
            _v87.frame_id = str[start:end]
          start = end
          end += 1
          (_v86.shift,) = _get_struct_b().unpack(str[start:end])
          start = end
          end += 4
          (length,) = _struct_I.unpack(str[start:end])
          val2.signals = []
          for i in range(0, length):
            val3 = autoware_msgs.msg.ExtractedPosition()
            _x = val3
            start = end
            end += 57
            (_x.signalId, _x.u, _x.v, _x.radius, _x.x, _x.y, _x.z, _x.hang, _x.type, _x.linkId, _x.plId,) = _get_struct_4i4db2i().unpack(str[start:end])
            val2.signals.append(val3)
          val1.waypoints.append(val2)
        _x = val1
        start = end
        end += 17
        (_x.lane_index, _x.cost, _x.closest_object_distance, _x.closest_object_velocity, _x.is_blocked,) = _get_struct_I3fB().unpack(str[start:end])
        val1.is_blocked = bool(val1.is_blocked)
        self.lanes.append(val1)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_b = None
def _get_struct_b():
    global _struct_b
    if _struct_b is None:
        _struct_b = struct.Struct("<b")
    return _struct_b
_struct_4i4db2i = None
def _get_struct_4i4db2i():
    global _struct_4i4db2i
    if _struct_4i4db2i is None:
        _struct_4i4db2i = struct.Struct("<4i4db2i")
    return _struct_4i4db2i
_struct_i = None
def _get_struct_i():
    global _struct_i
    if _struct_i is None:
        _struct_i = struct.Struct("<i")
    return _struct_i
_struct_i5B = None
def _get_struct_i5B():
    global _struct_i5B
    if _struct_i5B is None:
        _struct_i5B = struct.Struct("<i5B")
    return _struct_i5B
_struct_8d = None
def _get_struct_8d():
    global _struct_8d
    if _struct_8d is None:
        _struct_8d = struct.Struct("<8d")
    return _struct_8d
_struct_2i = None
def _get_struct_2i():
    global _struct_2i
    if _struct_2i is None:
        _struct_2i = struct.Struct("<2i")
    return _struct_2i
_struct_If9i2dh2i2f = None
def _get_struct_If9i2dh2i2f():
    global _struct_If9i2dh2i2f
    if _struct_If9i2dh2i2f is None:
        _struct_If9i2dh2i2f = struct.Struct("<If9i2dh2i2f")
    return _struct_If9i2dh2i2f
_struct_i2h4bd3f = None
def _get_struct_i2h4bd3f():
    global _struct_i2h4bd3f
    if _struct_i2h4bd3f is None:
        _struct_i2h4bd3f = struct.Struct("<i2h4bd3f")
    return _struct_i2h4bd3f
_struct_4d = None
def _get_struct_4d():
    global _struct_4d
    if _struct_4d is None:
        _struct_4d = struct.Struct("<4d")
    return _struct_4d
_struct_4I2fI = None
def _get_struct_4I2fI():
    global _struct_4I2fI
    if _struct_4I2fI is None:
        _struct_4I2fI = struct.Struct("<4I2fI")
    return _struct_4I2fI
_struct_I3fB = None
def _get_struct_I3fB():
    global _struct_I3fB
    if _struct_I3fB is None:
        _struct_I3fB = struct.Struct("<I3fB")
    return _struct_I3fB
_struct_2I = None
def _get_struct_2I():
    global _struct_2I
    if _struct_2I is None:
        _struct_2I = struct.Struct("<2I")
    return _struct_2I
_struct_3d = None
def _get_struct_3d():
    global _struct_3d
    if _struct_3d is None:
        _struct_3d = struct.Struct("<3d")
    return _struct_3d
