// Generated by gencpp from file autoware_msgs/WaypointParam.msg
// DO NOT EDIT!


#ifndef AUTOWARE_MSGS_MESSAGE_WAYPOINTPARAM_H
#define AUTOWARE_MSGS_MESSAGE_WAYPOINTPARAM_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <autoware_msgs/ExtractedPosition.h>
#include <autoware_msgs/LiesseXZB70MParam.h>

namespace autoware_msgs
{
template <class ContainerAllocator>
struct WaypointParam_
{
  typedef WaypointParam_<ContainerAllocator> Type;

  WaypointParam_()
    : header()
    , id(0)
    , weight(0.0)
    , blinker(0)
    , feat_proj_x(0)
    , feat_proj_y(0)
    , velocity_KPPlus(0)
    , velocity_KPMinus(0)
    , velocity_punchPlus(0)
    , velocity_punchMinus(0)
    , velocity_windowPlus(0)
    , velocity_windowMinus(0)
    , drive_stroke(0.0)
    , brake_stroke(0.0)
    , mb_pedal(0)
    , pause(0)
    , pauseGroup(0)
    , vgf_leafsize(0.0)
    , vgf_measurement_range(0.0)
    , signals()
    , curve_flag(0)
    , microbus_pedal(0)
    , microbus_angle(0)
    , automatic_door(0)
    , signal_stop_line(0)
    , temporary_stop_line(0)
    , fusion_select(0)
    , steer_correction(0.0)
    , lookahead_ratio(0.0)
    , minimum_lookahead_distance(0.0)
    , lookahead_ratio_magn(0.0)
    , liesse()  {
    }
  WaypointParam_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , id(0)
    , weight(0.0)
    , blinker(0)
    , feat_proj_x(0)
    , feat_proj_y(0)
    , velocity_KPPlus(0)
    , velocity_KPMinus(0)
    , velocity_punchPlus(0)
    , velocity_punchMinus(0)
    , velocity_windowPlus(0)
    , velocity_windowMinus(0)
    , drive_stroke(0.0)
    , brake_stroke(0.0)
    , mb_pedal(0)
    , pause(0)
    , pauseGroup(0)
    , vgf_leafsize(0.0)
    , vgf_measurement_range(0.0)
    , signals(_alloc)
    , curve_flag(0)
    , microbus_pedal(0)
    , microbus_angle(0)
    , automatic_door(0)
    , signal_stop_line(0)
    , temporary_stop_line(0)
    , fusion_select(0)
    , steer_correction(0.0)
    , lookahead_ratio(0.0)
    , minimum_lookahead_distance(0.0)
    , lookahead_ratio_magn(0.0)
    , liesse(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef uint32_t _id_type;
  _id_type id;

   typedef float _weight_type;
  _weight_type weight;

   typedef int32_t _blinker_type;
  _blinker_type blinker;

   typedef int32_t _feat_proj_x_type;
  _feat_proj_x_type feat_proj_x;

   typedef int32_t _feat_proj_y_type;
  _feat_proj_y_type feat_proj_y;

   typedef int32_t _velocity_KPPlus_type;
  _velocity_KPPlus_type velocity_KPPlus;

   typedef int32_t _velocity_KPMinus_type;
  _velocity_KPMinus_type velocity_KPMinus;

   typedef int32_t _velocity_punchPlus_type;
  _velocity_punchPlus_type velocity_punchPlus;

   typedef int32_t _velocity_punchMinus_type;
  _velocity_punchMinus_type velocity_punchMinus;

   typedef int32_t _velocity_windowPlus_type;
  _velocity_windowPlus_type velocity_windowPlus;

   typedef int32_t _velocity_windowMinus_type;
  _velocity_windowMinus_type velocity_windowMinus;

   typedef double _drive_stroke_type;
  _drive_stroke_type drive_stroke;

   typedef double _brake_stroke_type;
  _brake_stroke_type brake_stroke;

   typedef int16_t _mb_pedal_type;
  _mb_pedal_type mb_pedal;

   typedef int32_t _pause_type;
  _pause_type pause;

   typedef int32_t _pauseGroup_type;
  _pauseGroup_type pauseGroup;

   typedef float _vgf_leafsize_type;
  _vgf_leafsize_type vgf_leafsize;

   typedef float _vgf_measurement_range_type;
  _vgf_measurement_range_type vgf_measurement_range;

   typedef std::vector< ::autoware_msgs::ExtractedPosition_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::autoware_msgs::ExtractedPosition_<ContainerAllocator> >::other >  _signals_type;
  _signals_type signals;

   typedef int32_t _curve_flag_type;
  _curve_flag_type curve_flag;

   typedef int16_t _microbus_pedal_type;
  _microbus_pedal_type microbus_pedal;

   typedef int16_t _microbus_angle_type;
  _microbus_angle_type microbus_angle;

   typedef int8_t _automatic_door_type;
  _automatic_door_type automatic_door;

   typedef int8_t _signal_stop_line_type;
  _signal_stop_line_type signal_stop_line;

   typedef int8_t _temporary_stop_line_type;
  _temporary_stop_line_type temporary_stop_line;

   typedef int8_t _fusion_select_type;
  _fusion_select_type fusion_select;

   typedef double _steer_correction_type;
  _steer_correction_type steer_correction;

   typedef float _lookahead_ratio_type;
  _lookahead_ratio_type lookahead_ratio;

   typedef float _minimum_lookahead_distance_type;
  _minimum_lookahead_distance_type minimum_lookahead_distance;

   typedef float _lookahead_ratio_magn_type;
  _lookahead_ratio_magn_type lookahead_ratio_magn;

   typedef  ::autoware_msgs::LiesseXZB70MParam_<ContainerAllocator>  _liesse_type;
  _liesse_type liesse;





  typedef boost::shared_ptr< ::autoware_msgs::WaypointParam_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::autoware_msgs::WaypointParam_<ContainerAllocator> const> ConstPtr;

}; // struct WaypointParam_

typedef ::autoware_msgs::WaypointParam_<std::allocator<void> > WaypointParam;

typedef boost::shared_ptr< ::autoware_msgs::WaypointParam > WaypointParamPtr;
typedef boost::shared_ptr< ::autoware_msgs::WaypointParam const> WaypointParamConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::autoware_msgs::WaypointParam_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::autoware_msgs::WaypointParam_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::autoware_msgs::WaypointParam_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::autoware_msgs::WaypointParam_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::autoware_msgs::WaypointParam_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::autoware_msgs::WaypointParam_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::autoware_msgs::WaypointParam_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::autoware_msgs::WaypointParam_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::autoware_msgs::WaypointParam_<ContainerAllocator> >
{
  static const char* value()
  {
    return "3147c8953e95938db478b50912f9ec54";
  }

  static const char* value(const ::autoware_msgs::WaypointParam_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x3147c8953e95938dULL;
  static const uint64_t static_value2 = 0xb478b50912f9ec54ULL;
};

template<class ContainerAllocator>
struct DataType< ::autoware_msgs::WaypointParam_<ContainerAllocator> >
{
  static const char* value()
  {
    return "autoware_msgs/WaypointParam";
  }

  static const char* value(const ::autoware_msgs::WaypointParam_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::autoware_msgs::WaypointParam_<ContainerAllocator> >
{
  static const char* value()
  {
    return "Header header\n\
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

  static const char* value(const ::autoware_msgs::WaypointParam_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::autoware_msgs::WaypointParam_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.id);
      stream.next(m.weight);
      stream.next(m.blinker);
      stream.next(m.feat_proj_x);
      stream.next(m.feat_proj_y);
      stream.next(m.velocity_KPPlus);
      stream.next(m.velocity_KPMinus);
      stream.next(m.velocity_punchPlus);
      stream.next(m.velocity_punchMinus);
      stream.next(m.velocity_windowPlus);
      stream.next(m.velocity_windowMinus);
      stream.next(m.drive_stroke);
      stream.next(m.brake_stroke);
      stream.next(m.mb_pedal);
      stream.next(m.pause);
      stream.next(m.pauseGroup);
      stream.next(m.vgf_leafsize);
      stream.next(m.vgf_measurement_range);
      stream.next(m.signals);
      stream.next(m.curve_flag);
      stream.next(m.microbus_pedal);
      stream.next(m.microbus_angle);
      stream.next(m.automatic_door);
      stream.next(m.signal_stop_line);
      stream.next(m.temporary_stop_line);
      stream.next(m.fusion_select);
      stream.next(m.steer_correction);
      stream.next(m.lookahead_ratio);
      stream.next(m.minimum_lookahead_distance);
      stream.next(m.lookahead_ratio_magn);
      stream.next(m.liesse);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct WaypointParam_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::autoware_msgs::WaypointParam_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::autoware_msgs::WaypointParam_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "id: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.id);
    s << indent << "weight: ";
    Printer<float>::stream(s, indent + "  ", v.weight);
    s << indent << "blinker: ";
    Printer<int32_t>::stream(s, indent + "  ", v.blinker);
    s << indent << "feat_proj_x: ";
    Printer<int32_t>::stream(s, indent + "  ", v.feat_proj_x);
    s << indent << "feat_proj_y: ";
    Printer<int32_t>::stream(s, indent + "  ", v.feat_proj_y);
    s << indent << "velocity_KPPlus: ";
    Printer<int32_t>::stream(s, indent + "  ", v.velocity_KPPlus);
    s << indent << "velocity_KPMinus: ";
    Printer<int32_t>::stream(s, indent + "  ", v.velocity_KPMinus);
    s << indent << "velocity_punchPlus: ";
    Printer<int32_t>::stream(s, indent + "  ", v.velocity_punchPlus);
    s << indent << "velocity_punchMinus: ";
    Printer<int32_t>::stream(s, indent + "  ", v.velocity_punchMinus);
    s << indent << "velocity_windowPlus: ";
    Printer<int32_t>::stream(s, indent + "  ", v.velocity_windowPlus);
    s << indent << "velocity_windowMinus: ";
    Printer<int32_t>::stream(s, indent + "  ", v.velocity_windowMinus);
    s << indent << "drive_stroke: ";
    Printer<double>::stream(s, indent + "  ", v.drive_stroke);
    s << indent << "brake_stroke: ";
    Printer<double>::stream(s, indent + "  ", v.brake_stroke);
    s << indent << "mb_pedal: ";
    Printer<int16_t>::stream(s, indent + "  ", v.mb_pedal);
    s << indent << "pause: ";
    Printer<int32_t>::stream(s, indent + "  ", v.pause);
    s << indent << "pauseGroup: ";
    Printer<int32_t>::stream(s, indent + "  ", v.pauseGroup);
    s << indent << "vgf_leafsize: ";
    Printer<float>::stream(s, indent + "  ", v.vgf_leafsize);
    s << indent << "vgf_measurement_range: ";
    Printer<float>::stream(s, indent + "  ", v.vgf_measurement_range);
    s << indent << "signals[]" << std::endl;
    for (size_t i = 0; i < v.signals.size(); ++i)
    {
      s << indent << "  signals[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::autoware_msgs::ExtractedPosition_<ContainerAllocator> >::stream(s, indent + "    ", v.signals[i]);
    }
    s << indent << "curve_flag: ";
    Printer<int32_t>::stream(s, indent + "  ", v.curve_flag);
    s << indent << "microbus_pedal: ";
    Printer<int16_t>::stream(s, indent + "  ", v.microbus_pedal);
    s << indent << "microbus_angle: ";
    Printer<int16_t>::stream(s, indent + "  ", v.microbus_angle);
    s << indent << "automatic_door: ";
    Printer<int8_t>::stream(s, indent + "  ", v.automatic_door);
    s << indent << "signal_stop_line: ";
    Printer<int8_t>::stream(s, indent + "  ", v.signal_stop_line);
    s << indent << "temporary_stop_line: ";
    Printer<int8_t>::stream(s, indent + "  ", v.temporary_stop_line);
    s << indent << "fusion_select: ";
    Printer<int8_t>::stream(s, indent + "  ", v.fusion_select);
    s << indent << "steer_correction: ";
    Printer<double>::stream(s, indent + "  ", v.steer_correction);
    s << indent << "lookahead_ratio: ";
    Printer<float>::stream(s, indent + "  ", v.lookahead_ratio);
    s << indent << "minimum_lookahead_distance: ";
    Printer<float>::stream(s, indent + "  ", v.minimum_lookahead_distance);
    s << indent << "lookahead_ratio_magn: ";
    Printer<float>::stream(s, indent + "  ", v.lookahead_ratio_magn);
    s << indent << "liesse: ";
    s << std::endl;
    Printer< ::autoware_msgs::LiesseXZB70MParam_<ContainerAllocator> >::stream(s, indent + "  ", v.liesse);
  }
};

} // namespace message_operations
} // namespace ros

#endif // AUTOWARE_MSGS_MESSAGE_WAYPOINTPARAM_H
