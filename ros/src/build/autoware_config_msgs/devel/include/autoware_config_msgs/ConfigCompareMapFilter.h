// Generated by gencpp from file autoware_config_msgs/ConfigCompareMapFilter.msg
// DO NOT EDIT!


#ifndef AUTOWARE_CONFIG_MSGS_MESSAGE_CONFIGCOMPAREMAPFILTER_H
#define AUTOWARE_CONFIG_MSGS_MESSAGE_CONFIGCOMPAREMAPFILTER_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace autoware_config_msgs
{
template <class ContainerAllocator>
struct ConfigCompareMapFilter_
{
  typedef ConfigCompareMapFilter_<ContainerAllocator> Type;

  ConfigCompareMapFilter_()
    : distance_threshold(0.0)
    , min_clipping_height(0.0)
    , max_clipping_height(0.0)  {
    }
  ConfigCompareMapFilter_(const ContainerAllocator& _alloc)
    : distance_threshold(0.0)
    , min_clipping_height(0.0)
    , max_clipping_height(0.0)  {
  (void)_alloc;
    }



   typedef float _distance_threshold_type;
  _distance_threshold_type distance_threshold;

   typedef float _min_clipping_height_type;
  _min_clipping_height_type min_clipping_height;

   typedef float _max_clipping_height_type;
  _max_clipping_height_type max_clipping_height;





  typedef boost::shared_ptr< ::autoware_config_msgs::ConfigCompareMapFilter_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::autoware_config_msgs::ConfigCompareMapFilter_<ContainerAllocator> const> ConstPtr;

}; // struct ConfigCompareMapFilter_

typedef ::autoware_config_msgs::ConfigCompareMapFilter_<std::allocator<void> > ConfigCompareMapFilter;

typedef boost::shared_ptr< ::autoware_config_msgs::ConfigCompareMapFilter > ConfigCompareMapFilterPtr;
typedef boost::shared_ptr< ::autoware_config_msgs::ConfigCompareMapFilter const> ConfigCompareMapFilterConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::autoware_config_msgs::ConfigCompareMapFilter_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::autoware_config_msgs::ConfigCompareMapFilter_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace autoware_config_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'autoware_config_msgs': ['/home/autoware/Autoware_1.11.0_sai_edit/ros/src/msgs/autoware_config_msgs/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::autoware_config_msgs::ConfigCompareMapFilter_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::autoware_config_msgs::ConfigCompareMapFilter_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::autoware_config_msgs::ConfigCompareMapFilter_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::autoware_config_msgs::ConfigCompareMapFilter_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::autoware_config_msgs::ConfigCompareMapFilter_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::autoware_config_msgs::ConfigCompareMapFilter_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::autoware_config_msgs::ConfigCompareMapFilter_<ContainerAllocator> >
{
  static const char* value()
  {
    return "09db74a6997527a611ebec850731c83b";
  }

  static const char* value(const ::autoware_config_msgs::ConfigCompareMapFilter_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x09db74a6997527a6ULL;
  static const uint64_t static_value2 = 0x11ebec850731c83bULL;
};

template<class ContainerAllocator>
struct DataType< ::autoware_config_msgs::ConfigCompareMapFilter_<ContainerAllocator> >
{
  static const char* value()
  {
    return "autoware_config_msgs/ConfigCompareMapFilter";
  }

  static const char* value(const ::autoware_config_msgs::ConfigCompareMapFilter_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::autoware_config_msgs::ConfigCompareMapFilter_<ContainerAllocator> >
{
  static const char* value()
  {
    return "float32 distance_threshold\n\
float32 min_clipping_height\n\
float32 max_clipping_height\n\
";
  }

  static const char* value(const ::autoware_config_msgs::ConfigCompareMapFilter_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::autoware_config_msgs::ConfigCompareMapFilter_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.distance_threshold);
      stream.next(m.min_clipping_height);
      stream.next(m.max_clipping_height);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ConfigCompareMapFilter_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::autoware_config_msgs::ConfigCompareMapFilter_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::autoware_config_msgs::ConfigCompareMapFilter_<ContainerAllocator>& v)
  {
    s << indent << "distance_threshold: ";
    Printer<float>::stream(s, indent + "  ", v.distance_threshold);
    s << indent << "min_clipping_height: ";
    Printer<float>::stream(s, indent + "  ", v.min_clipping_height);
    s << indent << "max_clipping_height: ";
    Printer<float>::stream(s, indent + "  ", v.max_clipping_height);
  }
};

} // namespace message_operations
} // namespace ros

#endif // AUTOWARE_CONFIG_MSGS_MESSAGE_CONFIGCOMPAREMAPFILTER_H
