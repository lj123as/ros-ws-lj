// Generated by gencpp from file pj_morse/greetingRequest.msg
// DO NOT EDIT!


#ifndef PJ_MORSE_MESSAGE_GREETINGREQUEST_H
#define PJ_MORSE_MESSAGE_GREETINGREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace pj_morse
{
template <class ContainerAllocator>
struct greetingRequest_
{
  typedef greetingRequest_<ContainerAllocator> Type;

  greetingRequest_()
    : name()
    , age(0)  {
    }
  greetingRequest_(const ContainerAllocator& _alloc)
    : name(_alloc)
    , age(0)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _name_type;
  _name_type name;

   typedef int32_t _age_type;
  _age_type age;





  typedef boost::shared_ptr< ::pj_morse::greetingRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::pj_morse::greetingRequest_<ContainerAllocator> const> ConstPtr;

}; // struct greetingRequest_

typedef ::pj_morse::greetingRequest_<std::allocator<void> > greetingRequest;

typedef boost::shared_ptr< ::pj_morse::greetingRequest > greetingRequestPtr;
typedef boost::shared_ptr< ::pj_morse::greetingRequest const> greetingRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::pj_morse::greetingRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::pj_morse::greetingRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace pj_morse

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'pj_morse': ['/home/lj/catkin_ws/src/pj_morse/msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::pj_morse::greetingRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::pj_morse::greetingRequest_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::pj_morse::greetingRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::pj_morse::greetingRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::pj_morse::greetingRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::pj_morse::greetingRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::pj_morse::greetingRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "83da5ca00b8e049b0559653a472c88a5";
  }

  static const char* value(const ::pj_morse::greetingRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x83da5ca00b8e049bULL;
  static const uint64_t static_value2 = 0x0559653a472c88a5ULL;
};

template<class ContainerAllocator>
struct DataType< ::pj_morse::greetingRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "pj_morse/greetingRequest";
  }

  static const char* value(const ::pj_morse::greetingRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::pj_morse::greetingRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "string name\n\
int32 age\n\
";
  }

  static const char* value(const ::pj_morse::greetingRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::pj_morse::greetingRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.name);
      stream.next(m.age);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct greetingRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::pj_morse::greetingRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::pj_morse::greetingRequest_<ContainerAllocator>& v)
  {
    s << indent << "name: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.name);
    s << indent << "age: ";
    Printer<int32_t>::stream(s, indent + "  ", v.age);
  }
};

} // namespace message_operations
} // namespace ros

#endif // PJ_MORSE_MESSAGE_GREETINGREQUEST_H
