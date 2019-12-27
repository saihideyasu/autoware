// Generated by gencpp from file autoware_msgs/Lane.msg
// DO NOT EDIT!


#ifndef AUTOWARE_MSGS_MESSAGE_LANE_H
#define AUTOWARE_MSGS_MESSAGE_LANE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <autoware_msgs/Waypoint.h>

namespace autoware_msgs
{
template <class ContainerAllocator>
struct Lane_
{
  typedef Lane_<ContainerAllocator> Type;

  Lane_()
    : header()
    , increment(0)
    , lane_id(0)
    , waypoints()
    , lane_index(0)
    , cost(0.0)
    , closest_object_distance(0.0)
    , closest_object_velocity(0.0)
    , is_blocked(false)  {
    }
  Lane_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , increment(0)
    , lane_id(0)
    , waypoints(_alloc)
    , lane_index(0)
    , cost(0.0)
    , closest_object_distance(0.0)
    , closest_object_velocity(0.0)
    , is_blocked(false)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef int32_t _increment_type;
  _increment_type increment;

   typedef int32_t _lane_id_type;
  _lane_id_type lane_id;

   typedef std::vector< ::autoware_msgs::Waypoint_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::autoware_msgs::Waypoint_<ContainerAllocator> >::other >  _waypoints_type;
  _waypoints_type waypoints;

   typedef uint32_t _lane_index_type;
  _lane_index_type lane_index;

   typedef float _cost_type;
  _cost_type cost;

   typedef float _closest_object_distance_type;
  _closest_object_distance_type closest_object_distance;

   typedef float _closest_object_velocity_type;
  _closest_object_velocity_type closest_object_velocity;

   typedef uint8_t _is_blocked_type;
  _is_blocked_type is_blocked;





  typedef boost::shared_ptr< ::autoware_msgs::Lane_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::autoware_msgs::Lane_<ContainerAllocator> const> ConstPtr;

}; // struct Lane_

typedef ::autoware_msgs::Lane_<std::allocator<void> > Lane;

typedef boost::shared_ptr< ::autoware_msgs::Lane > LanePtr;
typedef boost::shared_ptr< ::autoware_msgs::Lane const> LaneConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::autoware_msgs::Lane_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::autoware_msgs::Lane_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace autoware_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': True}
// {'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'pcl_msgs': ['/opt/ros/kinetic/share/pcl_msgs/cmake/../msg'], 'sensor_msgs': ['/opt/ros/kinetic/share/sensor_msgs/cmake/../msg'], 'jsk_footstep_msgs': ['/opt/ros/kinetic/share/jsk_footstep_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg'], 'jsk_recognition_msgs': ['/opt/ros/kinetic/share/jsk_recognition_msgs/cmake/../msg'], 'actionlib_msgs': ['/opt/ros/kinetic/share/actionlib_msgs/cmake/../msg'], 'autoware_msgs': ['/home/autoware/Autoware_1.11.0_sai_edit/ros/src/msgs/autoware_msgs/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::autoware_msgs::Lane_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::autoware_msgs::Lane_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::autoware_msgs::Lane_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::autoware_msgs::Lane_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::autoware_msgs::Lane_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::autoware_msgs::Lane_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::autoware_msgs::Lane_<ContainerAllocator> >
{
  static const char* value()
  {
    return "cd216311af51a1475654f91a224bbc53";
  }

  static const char* value(const ::autoware_msgs::Lane_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xcd216311af51a147ULL;
  static const uint64_t static_value2 = 0x5654f91a224bbc53ULL;
};

template<class ContainerAllocator>
struct DataType< ::autoware_msgs::Lane_<ContainerAllocator> >
{
  static const char* value()
  {
    return "autoware_msgs/Lane";
  }

  static const char* value(const ::autoware_msgs::Lane_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::autoware_msgs::Lane_<ContainerAllocator> >
{
  static const char* value()
  {
    return "Header header\n\
int32 increment\n\
int32 lane_id\n\
Waypoint[] waypoints\n\
\n\
uint32 lane_index\n\
float32 cost\n\
float32 closest_object_distance\n\
float32 closest_object_velocity\n\
bool is_blocked\n\
\n\
================================================================================\n\
MSG: std_msgs/Header\n\
# Standard metadata for higher-level stamped data types.\n\
# This is generally used to communicate timestamped data \n\
# in a particular coordinate frame.\n\
# \n\
# sequence ID: consecutively increasing ID \n\
uint32 seq\n\
#Two-integer timestamp that is expressed as:\n\
# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n\
# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n\
# time-handling sugar is provided by the client library\n\
time stamp\n\
#Frame this data is associated with\n\
# 0: no frame\n\
# 1: global frame\n\
string frame_id\n\
\n\
================================================================================\n\
MSG: autoware_msgs/Waypoint\n\
# global id\n\
int32 gid \n\
# local id\n\
int32 lid\n\
geometry_msgs/PoseStamped pose\n\
geometry_msgs/TwistStamped twist\n\
DTLane dtlane\n\
int32 change_flag\n\
WaypointState wpstate\n\
\n\
uint32 lane_id\n\
uint32 left_lane_id\n\
uint32 right_lane_id\n\
uint32 stop_line_id\n\
float32 cost\n\
float32 time_cost\n\
\n\
# Lane Direction\n\
# FORWARD				= 0\n\
# FORWARD_LEFT	 		= 1\n\
# FORWARD_RIGHT			= 2\n\
# BACKWARD				= 3 \n\
# BACKWARD_LEFT			= 4\n\
# BACKWARD_RIGHT		= 5\n\
# STANDSTILL	 		= 6\n\
uint32 direction\n\
\n\
WaypointParam waypoint_param\n\
\n\
ExtractedPosition[] signals\n\
\n\
================================================================================\n\
MSG: geometry_msgs/PoseStamped\n\
# A Pose with reference coordinate frame and timestamp\n\
Header header\n\
Pose pose\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Pose\n\
# A representation of pose in free space, composed of position and orientation. \n\
Point position\n\
Quaternion orientation\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Point\n\
# This contains the position of a point in free space\n\
float64 x\n\
float64 y\n\
float64 z\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Quaternion\n\
# This represents an orientation in free space in quaternion form.\n\
\n\
float64 x\n\
float64 y\n\
float64 z\n\
float64 w\n\
\n\
================================================================================\n\
MSG: geometry_msgs/TwistStamped\n\
# A twist with reference coordinate frame and timestamp\n\
Header header\n\
Twist twist\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Twist\n\
# This expresses velocity in free space broken into its linear and angular parts.\n\
Vector3  linear\n\
Vector3  angular\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Vector3\n\
# This represents a vector in free space. \n\
# It is only meant to represent a direction. Therefore, it does not\n\
# make sense to apply a translation to it (e.g., when applying a \n\
# generic rigid transformation to a Vector3, tf2 will only apply the\n\
# rotation). If you want your data to be translatable too, use the\n\
# geometry_msgs/Point message instead.\n\
\n\
float64 x\n\
float64 y\n\
float64 z\n\
================================================================================\n\
MSG: autoware_msgs/DTLane\n\
float64 dist\n\
float64 dir\n\
float64 apara\n\
float64 r\n\
float64 slope\n\
float64 cant\n\
float64 lw\n\
float64 rw\n\
\n\
================================================================================\n\
MSG: autoware_msgs/WaypointState\n\
int32 aid\n\
uint8 NULLSTATE=0\n\
\n\
# lanechange\n\
uint8 lanechange_state\n\
\n\
# bilinker\n\
uint8 steering_state\n\
uint8 STR_LEFT=1\n\
uint8 STR_RIGHT=2\n\
uint8 STR_STRAIGHT=3\n\
uint8 STR_BACK=4\n\
\n\
uint8 accel_state\n\
\n\
uint8 stop_state\n\
# 1 is stopline, 2 is stop which can only be released manually.\n\
uint8 TYPE_STOPLINE=1\n\
uint8 TYPE_STOP=2\n\
\n\
uint8 event_state\n\
uint8 TYPE_EVENT_NULL = 0\n\
uint8 TYPE_EVENT_GOAL = 1\n\
uint8 TYPE_EVENT_MIDDLE_GOAL = 2\n\
uint8 TYPE_EVENT_POSITION_STOP = 3\n\
uint8 TYPE_EVENT_BUS_STOP = 4\n\
uint8 TYPE_EVENT_PARKING = 5\n\
\n\
================================================================================\n\
MSG: autoware_msgs/WaypointParam\n\
Header header\n\
uint32 id\n\
float32 weight\n\
int32 blinker\n\
int32 feat_proj_x\n\
int32 feat_proj_y\n\
int32 velocity_KPPlus\n\
int32 velocity_KPMinus\n\
int32 velocity_punchPlus\n\
int32 velocity_punchMinus\n\
int32 velocity_windowPlus\n\
int32 velocity_windowMinus\n\
float64 drive_stroke\n\
float64 brake_stroke\n\
int16 mb_pedal\n\
int32 pause\n\
int32 pauseGroup\n\
float32 vgf_leafsize\n\
float32 vgf_measurement_range\n\
ExtractedPosition[] signals\n\
int32 curve_flag\n\
int16 microbus_pedal\n\
int16 microbus_angle\n\
int8 automatic_door\n\
int8 signal_stop_line\n\
int8 temporary_stop_line\n\
int8 fusion_select\n\
float64 steer_correction\n\
float32 lookahead_ratio\n\
float32 minimum_lookahead_distance\n\
float32 lookahead_ratio_magn\n\
LiesseXZB70MParam liesse\n\
\n\
================================================================================\n\
MSG: autoware_msgs/ExtractedPosition\n\
# This message defines the information required to describe a lamp (bulb)\n\
# in a traffic signal, according to the information extracted from the ADAS Map\n\
# and the extrinsic camera calibration\n\
\n\
int32 signalId  # Traffic Signal Lamp ID\n\
int32 u         # Lamp ROI x in image coords\n\
int32 v         # Lamp ROI y in image coords\n\
int32 radius    # Lamp Radius\n\
float64 x       # X position in map coordinates\n\
float64 y       # Y position in map coordinates\n\
float64 z       # Z position in map coordinates\n\
float64 hang    # Azimuth \"Horizontal Angle\"\n\
int8 type       # Lamp Type (red, yellow, green, ...)\n\
int32 linkId    # Closest LinkID (lane) in VectorMap\n\
int32 plId      # PoleID to which this Lamp belongs to\n\
\n\
================================================================================\n\
MSG: autoware_msgs/LiesseXZB70MParam\n\
Header header\n\
int8 SHIFT_P = 0\n\
int8 SHIFT_R = 1\n\
int8 SHIFT_N = 2\n\
int8 SHIFT_D = 3\n\
int8 SHIFT_4 = 4\n\
int8 SHIFT_L = 5\n\
int8 shift\n\
";
  }

  static const char* value(const ::autoware_msgs::Lane_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::autoware_msgs::Lane_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.increment);
      stream.next(m.lane_id);
      stream.next(m.waypoints);
      stream.next(m.lane_index);
      stream.next(m.cost);
      stream.next(m.closest_object_distance);
      stream.next(m.closest_object_velocity);
      stream.next(m.is_blocked);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct Lane_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::autoware_msgs::Lane_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::autoware_msgs::Lane_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "increment: ";
    Printer<int32_t>::stream(s, indent + "  ", v.increment);
    s << indent << "lane_id: ";
    Printer<int32_t>::stream(s, indent + "  ", v.lane_id);
    s << indent << "waypoints[]" << std::endl;
    for (size_t i = 0; i < v.waypoints.size(); ++i)
    {
      s << indent << "  waypoints[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::autoware_msgs::Waypoint_<ContainerAllocator> >::stream(s, indent + "    ", v.waypoints[i]);
    }
    s << indent << "lane_index: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.lane_index);
    s << indent << "cost: ";
    Printer<float>::stream(s, indent + "  ", v.cost);
    s << indent << "closest_object_distance: ";
    Printer<float>::stream(s, indent + "  ", v.closest_object_distance);
    s << indent << "closest_object_velocity: ";
    Printer<float>::stream(s, indent + "  ", v.closest_object_velocity);
    s << indent << "is_blocked: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.is_blocked);
  }
};

} // namespace message_operations
} // namespace ros

#endif // AUTOWARE_MSGS_MESSAGE_LANE_H
