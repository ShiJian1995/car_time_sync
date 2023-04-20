// Generated by gencpp from file dnb_msgs/ComponentStatus.msg
// DO NOT EDIT!


#ifndef DNB_MSGS_MESSAGE_COMPONENTSTATUS_H
#define DNB_MSGS_MESSAGE_COMPONENTSTATUS_H


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
struct ComponentStatus_
{
  typedef ComponentStatus_<ContainerAllocator> Type;

  ComponentStatus_()
    : status_id(0)
    , status_msg()  {
    }
  ComponentStatus_(const ContainerAllocator& _alloc)
    : status_id(0)
    , status_msg(_alloc)  {
  (void)_alloc;
    }



   typedef int8_t _status_id_type;
  _status_id_type status_id;

   typedef std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> _status_msg_type;
  _status_msg_type status_msg;



// reducing the odds to have name collisions with Windows.h 
#if defined(_WIN32) && defined(INITIALIZED)
  #undef INITIALIZED
#endif
#if defined(_WIN32) && defined(STOPPED)
  #undef STOPPED
#endif
#if defined(_WIN32) && defined(RUNNING)
  #undef RUNNING
#endif
#if defined(_WIN32) && defined(CONFIG_NEEDED)
  #undef CONFIG_NEEDED
#endif
#if defined(_WIN32) && defined(ERROR)
  #undef ERROR
#endif
#if defined(_WIN32) && defined(INTERACTION_REQUEST)
  #undef INTERACTION_REQUEST
#endif
#if defined(_WIN32) && defined(DEACTIVATED)
  #undef DEACTIVATED
#endif

  enum {
    INITIALIZED = 0,
    STOPPED = 1,
    RUNNING = 2,
    CONFIG_NEEDED = 3,
    ERROR = 4,
    INTERACTION_REQUEST = 5,
    DEACTIVATED = 6,
  };


  typedef boost::shared_ptr< ::dnb_msgs::ComponentStatus_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::dnb_msgs::ComponentStatus_<ContainerAllocator> const> ConstPtr;

}; // struct ComponentStatus_

typedef ::dnb_msgs::ComponentStatus_<std::allocator<void> > ComponentStatus;

typedef boost::shared_ptr< ::dnb_msgs::ComponentStatus > ComponentStatusPtr;
typedef boost::shared_ptr< ::dnb_msgs::ComponentStatus const> ComponentStatusConstPtr;

// constants requiring out of line definition

   

   

   

   

   

   

   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::dnb_msgs::ComponentStatus_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::dnb_msgs::ComponentStatus_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::dnb_msgs::ComponentStatus_<ContainerAllocator1> & lhs, const ::dnb_msgs::ComponentStatus_<ContainerAllocator2> & rhs)
{
  return lhs.status_id == rhs.status_id &&
    lhs.status_msg == rhs.status_msg;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::dnb_msgs::ComponentStatus_<ContainerAllocator1> & lhs, const ::dnb_msgs::ComponentStatus_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace dnb_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::dnb_msgs::ComponentStatus_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::dnb_msgs::ComponentStatus_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::dnb_msgs::ComponentStatus_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::dnb_msgs::ComponentStatus_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dnb_msgs::ComponentStatus_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dnb_msgs::ComponentStatus_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::dnb_msgs::ComponentStatus_<ContainerAllocator> >
{
  static const char* value()
  {
    return "3edf5da01aa562198fec3c468cecb80b";
  }

  static const char* value(const ::dnb_msgs::ComponentStatus_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x3edf5da01aa56219ULL;
  static const uint64_t static_value2 = 0x8fec3c468cecb80bULL;
};

template<class ContainerAllocator>
struct DataType< ::dnb_msgs::ComponentStatus_<ContainerAllocator> >
{
  static const char* value()
  {
    return "dnb_msgs/ComponentStatus";
  }

  static const char* value(const ::dnb_msgs::ComponentStatus_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::dnb_msgs::ComponentStatus_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# component id; it must be unique among all registered components\n"
"# @TODO: use on one topic and identify by id\n"
"#string component_id\n"
"\n"
"# the official status id of the component\n"
"# possible values are\n"
"int8 INITIALIZED = 0\n"
"int8 STOPPED = 1\n"
"int8 RUNNING = 2\n"
"int8 CONFIG_NEEDED = 3\n"
"int8 ERROR = 4\n"
"int8 INTERACTION_REQUEST = 5\n"
"int8 DEACTIVATED = 6\n"
"int8 status_id\n"
"\n"
"# an individual message for config or error cases\n"
"# it should describe the type of needed config or occurred error briefly\n"
"# it should be possible to extract automaticly subsequent actions/instructions from the message if this is needed\n"
"string status_msg\n"
;
  }

  static const char* value(const ::dnb_msgs::ComponentStatus_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::dnb_msgs::ComponentStatus_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.status_id);
      stream.next(m.status_msg);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ComponentStatus_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::dnb_msgs::ComponentStatus_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::dnb_msgs::ComponentStatus_<ContainerAllocator>& v)
  {
    s << indent << "status_id: ";
    Printer<int8_t>::stream(s, indent + "  ", v.status_id);
    s << indent << "status_msg: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>::stream(s, indent + "  ", v.status_msg);
  }
};

} // namespace message_operations
} // namespace ros

#endif // DNB_MSGS_MESSAGE_COMPONENTSTATUS_H
