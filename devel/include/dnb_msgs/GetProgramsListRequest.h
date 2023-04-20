// Generated by gencpp from file dnb_msgs/GetProgramsListRequest.msg
// DO NOT EDIT!


#ifndef DNB_MSGS_MESSAGE_GETPROGRAMSLISTREQUEST_H
#define DNB_MSGS_MESSAGE_GETPROGRAMSLISTREQUEST_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace dnb_msgs
{
template <class ContainerAllocator>
struct GetProgramsListRequest_
{
  typedef GetProgramsListRequest_<ContainerAllocator> Type;

  GetProgramsListRequest_()
    {
    }
  GetProgramsListRequest_(const ContainerAllocator& _alloc)
    {
  (void)_alloc;
    }







  typedef boost::shared_ptr< ::dnb_msgs::GetProgramsListRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::dnb_msgs::GetProgramsListRequest_<ContainerAllocator> const> ConstPtr;

}; // struct GetProgramsListRequest_

typedef ::dnb_msgs::GetProgramsListRequest_<std::allocator<void> > GetProgramsListRequest;

typedef boost::shared_ptr< ::dnb_msgs::GetProgramsListRequest > GetProgramsListRequestPtr;
typedef boost::shared_ptr< ::dnb_msgs::GetProgramsListRequest const> GetProgramsListRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::dnb_msgs::GetProgramsListRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::dnb_msgs::GetProgramsListRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


} // namespace dnb_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::dnb_msgs::GetProgramsListRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::dnb_msgs::GetProgramsListRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::dnb_msgs::GetProgramsListRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::dnb_msgs::GetProgramsListRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dnb_msgs::GetProgramsListRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dnb_msgs::GetProgramsListRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::dnb_msgs::GetProgramsListRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "d41d8cd98f00b204e9800998ecf8427e";
  }

  static const char* value(const ::dnb_msgs::GetProgramsListRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xd41d8cd98f00b204ULL;
  static const uint64_t static_value2 = 0xe9800998ecf8427eULL;
};

template<class ContainerAllocator>
struct DataType< ::dnb_msgs::GetProgramsListRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "dnb_msgs/GetProgramsListRequest";
  }

  static const char* value(const ::dnb_msgs::GetProgramsListRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::dnb_msgs::GetProgramsListRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n"
;
  }

  static const char* value(const ::dnb_msgs::GetProgramsListRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::dnb_msgs::GetProgramsListRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream&, T)
    {}

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct GetProgramsListRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::dnb_msgs::GetProgramsListRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream&, const std::string&, const ::dnb_msgs::GetProgramsListRequest_<ContainerAllocator>&)
  {}
};

} // namespace message_operations
} // namespace ros

#endif // DNB_MSGS_MESSAGE_GETPROGRAMSLISTREQUEST_H
