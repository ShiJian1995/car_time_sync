// Generated by gencpp from file camera_control_msgs/SetBinningResponse.msg
// DO NOT EDIT!


#ifndef CAMERA_CONTROL_MSGS_MESSAGE_SETBINNINGRESPONSE_H
#define CAMERA_CONTROL_MSGS_MESSAGE_SETBINNINGRESPONSE_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace camera_control_msgs
{
template <class ContainerAllocator>
struct SetBinningResponse_
{
  typedef SetBinningResponse_<ContainerAllocator> Type;

  SetBinningResponse_()
    : reached_binning_x(0)
    , reached_binning_y(0)
    , success(false)  {
    }
  SetBinningResponse_(const ContainerAllocator& _alloc)
    : reached_binning_x(0)
    , reached_binning_y(0)
    , success(false)  {
  (void)_alloc;
    }



   typedef uint32_t _reached_binning_x_type;
  _reached_binning_x_type reached_binning_x;

   typedef uint32_t _reached_binning_y_type;
  _reached_binning_y_type reached_binning_y;

   typedef uint8_t _success_type;
  _success_type success;





  typedef boost::shared_ptr< ::camera_control_msgs::SetBinningResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::camera_control_msgs::SetBinningResponse_<ContainerAllocator> const> ConstPtr;

}; // struct SetBinningResponse_

typedef ::camera_control_msgs::SetBinningResponse_<std::allocator<void> > SetBinningResponse;

typedef boost::shared_ptr< ::camera_control_msgs::SetBinningResponse > SetBinningResponsePtr;
typedef boost::shared_ptr< ::camera_control_msgs::SetBinningResponse const> SetBinningResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::camera_control_msgs::SetBinningResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::camera_control_msgs::SetBinningResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::camera_control_msgs::SetBinningResponse_<ContainerAllocator1> & lhs, const ::camera_control_msgs::SetBinningResponse_<ContainerAllocator2> & rhs)
{
  return lhs.reached_binning_x == rhs.reached_binning_x &&
    lhs.reached_binning_y == rhs.reached_binning_y &&
    lhs.success == rhs.success;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::camera_control_msgs::SetBinningResponse_<ContainerAllocator1> & lhs, const ::camera_control_msgs::SetBinningResponse_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace camera_control_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::camera_control_msgs::SetBinningResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::camera_control_msgs::SetBinningResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::camera_control_msgs::SetBinningResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::camera_control_msgs::SetBinningResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::camera_control_msgs::SetBinningResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::camera_control_msgs::SetBinningResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::camera_control_msgs::SetBinningResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "519ec992dd33973d0740b5940161bf8e";
  }

  static const char* value(const ::camera_control_msgs::SetBinningResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x519ec992dd33973dULL;
  static const uint64_t static_value2 = 0x0740b5940161bf8eULL;
};

template<class ContainerAllocator>
struct DataType< ::camera_control_msgs::SetBinningResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "camera_control_msgs/SetBinningResponse";
  }

  static const char* value(const ::camera_control_msgs::SetBinningResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::camera_control_msgs::SetBinningResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# Exact match can not always be reached\n"
"uint32 reached_binning_x\n"
"uint32 reached_binning_y\n"
"bool success\n"
"\n"
;
  }

  static const char* value(const ::camera_control_msgs::SetBinningResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::camera_control_msgs::SetBinningResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.reached_binning_x);
      stream.next(m.reached_binning_y);
      stream.next(m.success);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SetBinningResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::camera_control_msgs::SetBinningResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::camera_control_msgs::SetBinningResponse_<ContainerAllocator>& v)
  {
    s << indent << "reached_binning_x: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.reached_binning_x);
    s << indent << "reached_binning_y: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.reached_binning_y);
    s << indent << "success: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.success);
  }
};

} // namespace message_operations
} // namespace ros

#endif // CAMERA_CONTROL_MSGS_MESSAGE_SETBINNINGRESPONSE_H
