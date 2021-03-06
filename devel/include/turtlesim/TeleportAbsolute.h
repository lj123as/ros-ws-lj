// Generated by gencpp from file turtlesim/TeleportAbsolute.msg
// DO NOT EDIT!


#ifndef TURTLESIM_MESSAGE_TELEPORTABSOLUTE_H
#define TURTLESIM_MESSAGE_TELEPORTABSOLUTE_H

#include <ros/service_traits.h>


#include <turtlesim/TeleportAbsoluteRequest.h>
#include <turtlesim/TeleportAbsoluteResponse.h>


namespace turtlesim
{

struct TeleportAbsolute
{

typedef TeleportAbsoluteRequest Request;
typedef TeleportAbsoluteResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct TeleportAbsolute
} // namespace turtlesim


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::turtlesim::TeleportAbsolute > {
  static const char* value()
  {
    return "a130bc60ee6513855dc62ea83fcc5b20";
  }

  static const char* value(const ::turtlesim::TeleportAbsolute&) { return value(); }
};

template<>
struct DataType< ::turtlesim::TeleportAbsolute > {
  static const char* value()
  {
    return "turtlesim/TeleportAbsolute";
  }

  static const char* value(const ::turtlesim::TeleportAbsolute&) { return value(); }
};


// service_traits::MD5Sum< ::turtlesim::TeleportAbsoluteRequest> should match 
// service_traits::MD5Sum< ::turtlesim::TeleportAbsolute > 
template<>
struct MD5Sum< ::turtlesim::TeleportAbsoluteRequest>
{
  static const char* value()
  {
    return MD5Sum< ::turtlesim::TeleportAbsolute >::value();
  }
  static const char* value(const ::turtlesim::TeleportAbsoluteRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::turtlesim::TeleportAbsoluteRequest> should match 
// service_traits::DataType< ::turtlesim::TeleportAbsolute > 
template<>
struct DataType< ::turtlesim::TeleportAbsoluteRequest>
{
  static const char* value()
  {
    return DataType< ::turtlesim::TeleportAbsolute >::value();
  }
  static const char* value(const ::turtlesim::TeleportAbsoluteRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::turtlesim::TeleportAbsoluteResponse> should match 
// service_traits::MD5Sum< ::turtlesim::TeleportAbsolute > 
template<>
struct MD5Sum< ::turtlesim::TeleportAbsoluteResponse>
{
  static const char* value()
  {
    return MD5Sum< ::turtlesim::TeleportAbsolute >::value();
  }
  static const char* value(const ::turtlesim::TeleportAbsoluteResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::turtlesim::TeleportAbsoluteResponse> should match 
// service_traits::DataType< ::turtlesim::TeleportAbsolute > 
template<>
struct DataType< ::turtlesim::TeleportAbsoluteResponse>
{
  static const char* value()
  {
    return DataType< ::turtlesim::TeleportAbsolute >::value();
  }
  static const char* value(const ::turtlesim::TeleportAbsoluteResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // TURTLESIM_MESSAGE_TELEPORTABSOLUTE_H
