// Generated by gencpp from file autoware_can_msgs/CANInfo.msg
// DO NOT EDIT!


#ifndef AUTOWARE_CAN_MSGS_MESSAGE_CANINFO_H
#define AUTOWARE_CAN_MSGS_MESSAGE_CANINFO_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>

namespace autoware_can_msgs
{
template <class ContainerAllocator>
struct CANInfo_
{
  typedef CANInfo_<ContainerAllocator> Type;

  CANInfo_()
    : header()
    , tm()
    , devmode(0)
    , drvcontmode(0)
    , drvoverridemode(0)
    , drvservo(0)
    , drivepedal(0)
    , targetpedalstr(0)
    , inputpedalstr(0)
    , targetveloc(0.0)
    , speed(0.0)
    , driveshift(0)
    , targetshift(0)
    , inputshift(0)
    , strmode(0)
    , strcontmode(0)
    , stroverridemode(0)
    , strservo(0)
    , targettorque(0)
    , torque(0)
    , angle(0.0)
    , targetangle(0.0)
    , bbrakepress(0)
    , brakepedal(0)
    , brtargetpedalstr(0)
    , brinputpedalstr(0)
    , battery(0.0)
    , voltage(0)
    , anp(0.0)
    , battmaxtemparature(0)
    , battmintemparature(0)
    , maxchgcurrent(0.0)
    , maxdischgcurrent(0.0)
    , sideacc(0.0)
    , accellfromp(0.0)
    , anglefromp(0.0)
    , brakepedalfromp(0.0)
    , speedfr(0.0)
    , speedfl(0.0)
    , speedrr(0.0)
    , speedrl(0.0)
    , velocfromp2(0.0)
    , drvmode(0)
    , devpedalstrfromp(0)
    , rpm(0)
    , velocflfromp(0.0)
    , ev_mode(0)
    , temp(0)
    , shiftfrmprius(0)
    , light(0)
    , gaslevel(0)
    , door(0)
    , cluise(0)  {
    }
  CANInfo_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , tm(_alloc)
    , devmode(0)
    , drvcontmode(0)
    , drvoverridemode(0)
    , drvservo(0)
    , drivepedal(0)
    , targetpedalstr(0)
    , inputpedalstr(0)
    , targetveloc(0.0)
    , speed(0.0)
    , driveshift(0)
    , targetshift(0)
    , inputshift(0)
    , strmode(0)
    , strcontmode(0)
    , stroverridemode(0)
    , strservo(0)
    , targettorque(0)
    , torque(0)
    , angle(0.0)
    , targetangle(0.0)
    , bbrakepress(0)
    , brakepedal(0)
    , brtargetpedalstr(0)
    , brinputpedalstr(0)
    , battery(0.0)
    , voltage(0)
    , anp(0.0)
    , battmaxtemparature(0)
    , battmintemparature(0)
    , maxchgcurrent(0.0)
    , maxdischgcurrent(0.0)
    , sideacc(0.0)
    , accellfromp(0.0)
    , anglefromp(0.0)
    , brakepedalfromp(0.0)
    , speedfr(0.0)
    , speedfl(0.0)
    , speedrr(0.0)
    , speedrl(0.0)
    , velocfromp2(0.0)
    , drvmode(0)
    , devpedalstrfromp(0)
    , rpm(0)
    , velocflfromp(0.0)
    , ev_mode(0)
    , temp(0)
    , shiftfrmprius(0)
    , light(0)
    , gaslevel(0)
    , door(0)
    , cluise(0)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _tm_type;
  _tm_type tm;

   typedef int32_t _devmode_type;
  _devmode_type devmode;

   typedef int32_t _drvcontmode_type;
  _drvcontmode_type drvcontmode;

   typedef int32_t _drvoverridemode_type;
  _drvoverridemode_type drvoverridemode;

   typedef int32_t _drvservo_type;
  _drvservo_type drvservo;

   typedef int32_t _drivepedal_type;
  _drivepedal_type drivepedal;

   typedef int32_t _targetpedalstr_type;
  _targetpedalstr_type targetpedalstr;

   typedef int32_t _inputpedalstr_type;
  _inputpedalstr_type inputpedalstr;

   typedef double _targetveloc_type;
  _targetveloc_type targetveloc;

   typedef double _speed_type;
  _speed_type speed;

   typedef int32_t _driveshift_type;
  _driveshift_type driveshift;

   typedef int32_t _targetshift_type;
  _targetshift_type targetshift;

   typedef int32_t _inputshift_type;
  _inputshift_type inputshift;

   typedef int32_t _strmode_type;
  _strmode_type strmode;

   typedef int32_t _strcontmode_type;
  _strcontmode_type strcontmode;

   typedef int32_t _stroverridemode_type;
  _stroverridemode_type stroverridemode;

   typedef int32_t _strservo_type;
  _strservo_type strservo;

   typedef int32_t _targettorque_type;
  _targettorque_type targettorque;

   typedef int32_t _torque_type;
  _torque_type torque;

   typedef double _angle_type;
  _angle_type angle;

   typedef double _targetangle_type;
  _targetangle_type targetangle;

   typedef int32_t _bbrakepress_type;
  _bbrakepress_type bbrakepress;

   typedef int32_t _brakepedal_type;
  _brakepedal_type brakepedal;

   typedef int32_t _brtargetpedalstr_type;
  _brtargetpedalstr_type brtargetpedalstr;

   typedef int32_t _brinputpedalstr_type;
  _brinputpedalstr_type brinputpedalstr;

   typedef double _battery_type;
  _battery_type battery;

   typedef int32_t _voltage_type;
  _voltage_type voltage;

   typedef double _anp_type;
  _anp_type anp;

   typedef int32_t _battmaxtemparature_type;
  _battmaxtemparature_type battmaxtemparature;

   typedef int32_t _battmintemparature_type;
  _battmintemparature_type battmintemparature;

   typedef double _maxchgcurrent_type;
  _maxchgcurrent_type maxchgcurrent;

   typedef double _maxdischgcurrent_type;
  _maxdischgcurrent_type maxdischgcurrent;

   typedef double _sideacc_type;
  _sideacc_type sideacc;

   typedef double _accellfromp_type;
  _accellfromp_type accellfromp;

   typedef double _anglefromp_type;
  _anglefromp_type anglefromp;

   typedef double _brakepedalfromp_type;
  _brakepedalfromp_type brakepedalfromp;

   typedef double _speedfr_type;
  _speedfr_type speedfr;

   typedef double _speedfl_type;
  _speedfl_type speedfl;

   typedef double _speedrr_type;
  _speedrr_type speedrr;

   typedef double _speedrl_type;
  _speedrl_type speedrl;

   typedef double _velocfromp2_type;
  _velocfromp2_type velocfromp2;

   typedef int32_t _drvmode_type;
  _drvmode_type drvmode;

   typedef int32_t _devpedalstrfromp_type;
  _devpedalstrfromp_type devpedalstrfromp;

   typedef int32_t _rpm_type;
  _rpm_type rpm;

   typedef double _velocflfromp_type;
  _velocflfromp_type velocflfromp;

   typedef int32_t _ev_mode_type;
  _ev_mode_type ev_mode;

   typedef int32_t _temp_type;
  _temp_type temp;

   typedef int32_t _shiftfrmprius_type;
  _shiftfrmprius_type shiftfrmprius;

   typedef int32_t _light_type;
  _light_type light;

   typedef int32_t _gaslevel_type;
  _gaslevel_type gaslevel;

   typedef int32_t _door_type;
  _door_type door;

   typedef int32_t _cluise_type;
  _cluise_type cluise;





  typedef boost::shared_ptr< ::autoware_can_msgs::CANInfo_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::autoware_can_msgs::CANInfo_<ContainerAllocator> const> ConstPtr;

}; // struct CANInfo_

typedef ::autoware_can_msgs::CANInfo_<std::allocator<void> > CANInfo;

typedef boost::shared_ptr< ::autoware_can_msgs::CANInfo > CANInfoPtr;
typedef boost::shared_ptr< ::autoware_can_msgs::CANInfo const> CANInfoConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::autoware_can_msgs::CANInfo_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::autoware_can_msgs::CANInfo_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace autoware_can_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': True}
// {'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'autoware_can_msgs': ['/home/autoware/Autoware_1.11.0_sai_edit/ros/src/msgs/autoware_can_msgs/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::autoware_can_msgs::CANInfo_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::autoware_can_msgs::CANInfo_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::autoware_can_msgs::CANInfo_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::autoware_can_msgs::CANInfo_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::autoware_can_msgs::CANInfo_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::autoware_can_msgs::CANInfo_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::autoware_can_msgs::CANInfo_<ContainerAllocator> >
{
  static const char* value()
  {
    return "605f4356821f92a8fec1a756259316df";
  }

  static const char* value(const ::autoware_can_msgs::CANInfo_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x605f4356821f92a8ULL;
  static const uint64_t static_value2 = 0xfec1a756259316dfULL;
};

template<class ContainerAllocator>
struct DataType< ::autoware_can_msgs::CANInfo_<ContainerAllocator> >
{
  static const char* value()
  {
    return "autoware_can_msgs/CANInfo";
  }

  static const char* value(const ::autoware_can_msgs::CANInfo_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::autoware_can_msgs::CANInfo_<ContainerAllocator> >
{
  static const char* value()
  {
    return "Header header\n\
string tm\n\
int32 devmode\n\
int32 drvcontmode\n\
int32 drvoverridemode\n\
int32 drvservo\n\
int32 drivepedal\n\
int32 targetpedalstr\n\
int32 inputpedalstr\n\
float64 targetveloc\n\
float64 speed\n\
int32 driveshift\n\
int32 targetshift\n\
int32 inputshift\n\
int32 strmode\n\
int32 strcontmode\n\
int32 stroverridemode\n\
int32 strservo\n\
int32 targettorque\n\
int32 torque\n\
float64 angle\n\
float64 targetangle\n\
int32 bbrakepress\n\
int32 brakepedal\n\
int32 brtargetpedalstr\n\
int32 brinputpedalstr\n\
float64 battery\n\
int32 voltage\n\
float64 anp\n\
int32 battmaxtemparature\n\
int32 battmintemparature\n\
float64 maxchgcurrent\n\
float64 maxdischgcurrent\n\
float64 sideacc\n\
float64 accellfromp\n\
float64 anglefromp\n\
float64 brakepedalfromp\n\
float64 speedfr\n\
float64 speedfl\n\
float64 speedrr\n\
float64 speedrl\n\
float64 velocfromp2\n\
int32 drvmode\n\
int32 devpedalstrfromp\n\
int32 rpm\n\
float64 velocflfromp\n\
int32 ev_mode\n\
int32 temp\n\
int32 shiftfrmprius\n\
int32 light\n\
int32 gaslevel\n\
int32 door\n\
int32 cluise\n\
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
";
  }

  static const char* value(const ::autoware_can_msgs::CANInfo_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::autoware_can_msgs::CANInfo_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.tm);
      stream.next(m.devmode);
      stream.next(m.drvcontmode);
      stream.next(m.drvoverridemode);
      stream.next(m.drvservo);
      stream.next(m.drivepedal);
      stream.next(m.targetpedalstr);
      stream.next(m.inputpedalstr);
      stream.next(m.targetveloc);
      stream.next(m.speed);
      stream.next(m.driveshift);
      stream.next(m.targetshift);
      stream.next(m.inputshift);
      stream.next(m.strmode);
      stream.next(m.strcontmode);
      stream.next(m.stroverridemode);
      stream.next(m.strservo);
      stream.next(m.targettorque);
      stream.next(m.torque);
      stream.next(m.angle);
      stream.next(m.targetangle);
      stream.next(m.bbrakepress);
      stream.next(m.brakepedal);
      stream.next(m.brtargetpedalstr);
      stream.next(m.brinputpedalstr);
      stream.next(m.battery);
      stream.next(m.voltage);
      stream.next(m.anp);
      stream.next(m.battmaxtemparature);
      stream.next(m.battmintemparature);
      stream.next(m.maxchgcurrent);
      stream.next(m.maxdischgcurrent);
      stream.next(m.sideacc);
      stream.next(m.accellfromp);
      stream.next(m.anglefromp);
      stream.next(m.brakepedalfromp);
      stream.next(m.speedfr);
      stream.next(m.speedfl);
      stream.next(m.speedrr);
      stream.next(m.speedrl);
      stream.next(m.velocfromp2);
      stream.next(m.drvmode);
      stream.next(m.devpedalstrfromp);
      stream.next(m.rpm);
      stream.next(m.velocflfromp);
      stream.next(m.ev_mode);
      stream.next(m.temp);
      stream.next(m.shiftfrmprius);
      stream.next(m.light);
      stream.next(m.gaslevel);
      stream.next(m.door);
      stream.next(m.cluise);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct CANInfo_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::autoware_can_msgs::CANInfo_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::autoware_can_msgs::CANInfo_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "tm: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.tm);
    s << indent << "devmode: ";
    Printer<int32_t>::stream(s, indent + "  ", v.devmode);
    s << indent << "drvcontmode: ";
    Printer<int32_t>::stream(s, indent + "  ", v.drvcontmode);
    s << indent << "drvoverridemode: ";
    Printer<int32_t>::stream(s, indent + "  ", v.drvoverridemode);
    s << indent << "drvservo: ";
    Printer<int32_t>::stream(s, indent + "  ", v.drvservo);
    s << indent << "drivepedal: ";
    Printer<int32_t>::stream(s, indent + "  ", v.drivepedal);
    s << indent << "targetpedalstr: ";
    Printer<int32_t>::stream(s, indent + "  ", v.targetpedalstr);
    s << indent << "inputpedalstr: ";
    Printer<int32_t>::stream(s, indent + "  ", v.inputpedalstr);
    s << indent << "targetveloc: ";
    Printer<double>::stream(s, indent + "  ", v.targetveloc);
    s << indent << "speed: ";
    Printer<double>::stream(s, indent + "  ", v.speed);
    s << indent << "driveshift: ";
    Printer<int32_t>::stream(s, indent + "  ", v.driveshift);
    s << indent << "targetshift: ";
    Printer<int32_t>::stream(s, indent + "  ", v.targetshift);
    s << indent << "inputshift: ";
    Printer<int32_t>::stream(s, indent + "  ", v.inputshift);
    s << indent << "strmode: ";
    Printer<int32_t>::stream(s, indent + "  ", v.strmode);
    s << indent << "strcontmode: ";
    Printer<int32_t>::stream(s, indent + "  ", v.strcontmode);
    s << indent << "stroverridemode: ";
    Printer<int32_t>::stream(s, indent + "  ", v.stroverridemode);
    s << indent << "strservo: ";
    Printer<int32_t>::stream(s, indent + "  ", v.strservo);
    s << indent << "targettorque: ";
    Printer<int32_t>::stream(s, indent + "  ", v.targettorque);
    s << indent << "torque: ";
    Printer<int32_t>::stream(s, indent + "  ", v.torque);
    s << indent << "angle: ";
    Printer<double>::stream(s, indent + "  ", v.angle);
    s << indent << "targetangle: ";
    Printer<double>::stream(s, indent + "  ", v.targetangle);
    s << indent << "bbrakepress: ";
    Printer<int32_t>::stream(s, indent + "  ", v.bbrakepress);
    s << indent << "brakepedal: ";
    Printer<int32_t>::stream(s, indent + "  ", v.brakepedal);
    s << indent << "brtargetpedalstr: ";
    Printer<int32_t>::stream(s, indent + "  ", v.brtargetpedalstr);
    s << indent << "brinputpedalstr: ";
    Printer<int32_t>::stream(s, indent + "  ", v.brinputpedalstr);
    s << indent << "battery: ";
    Printer<double>::stream(s, indent + "  ", v.battery);
    s << indent << "voltage: ";
    Printer<int32_t>::stream(s, indent + "  ", v.voltage);
    s << indent << "anp: ";
    Printer<double>::stream(s, indent + "  ", v.anp);
    s << indent << "battmaxtemparature: ";
    Printer<int32_t>::stream(s, indent + "  ", v.battmaxtemparature);
    s << indent << "battmintemparature: ";
    Printer<int32_t>::stream(s, indent + "  ", v.battmintemparature);
    s << indent << "maxchgcurrent: ";
    Printer<double>::stream(s, indent + "  ", v.maxchgcurrent);
    s << indent << "maxdischgcurrent: ";
    Printer<double>::stream(s, indent + "  ", v.maxdischgcurrent);
    s << indent << "sideacc: ";
    Printer<double>::stream(s, indent + "  ", v.sideacc);
    s << indent << "accellfromp: ";
    Printer<double>::stream(s, indent + "  ", v.accellfromp);
    s << indent << "anglefromp: ";
    Printer<double>::stream(s, indent + "  ", v.anglefromp);
    s << indent << "brakepedalfromp: ";
    Printer<double>::stream(s, indent + "  ", v.brakepedalfromp);
    s << indent << "speedfr: ";
    Printer<double>::stream(s, indent + "  ", v.speedfr);
    s << indent << "speedfl: ";
    Printer<double>::stream(s, indent + "  ", v.speedfl);
    s << indent << "speedrr: ";
    Printer<double>::stream(s, indent + "  ", v.speedrr);
    s << indent << "speedrl: ";
    Printer<double>::stream(s, indent + "  ", v.speedrl);
    s << indent << "velocfromp2: ";
    Printer<double>::stream(s, indent + "  ", v.velocfromp2);
    s << indent << "drvmode: ";
    Printer<int32_t>::stream(s, indent + "  ", v.drvmode);
    s << indent << "devpedalstrfromp: ";
    Printer<int32_t>::stream(s, indent + "  ", v.devpedalstrfromp);
    s << indent << "rpm: ";
    Printer<int32_t>::stream(s, indent + "  ", v.rpm);
    s << indent << "velocflfromp: ";
    Printer<double>::stream(s, indent + "  ", v.velocflfromp);
    s << indent << "ev_mode: ";
    Printer<int32_t>::stream(s, indent + "  ", v.ev_mode);
    s << indent << "temp: ";
    Printer<int32_t>::stream(s, indent + "  ", v.temp);
    s << indent << "shiftfrmprius: ";
    Printer<int32_t>::stream(s, indent + "  ", v.shiftfrmprius);
    s << indent << "light: ";
    Printer<int32_t>::stream(s, indent + "  ", v.light);
    s << indent << "gaslevel: ";
    Printer<int32_t>::stream(s, indent + "  ", v.gaslevel);
    s << indent << "door: ";
    Printer<int32_t>::stream(s, indent + "  ", v.door);
    s << indent << "cluise: ";
    Printer<int32_t>::stream(s, indent + "  ", v.cluise);
  }
};

} // namespace message_operations
} // namespace ros

#endif // AUTOWARE_CAN_MSGS_MESSAGE_CANINFO_H
