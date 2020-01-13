#include "ros/ros.h"
#include "pj_morse/greeting.h"

bool handle_function(pj_morse::greeting::Request &req,pj_morse::greeting::Response &res){
    //显示请求信息
    ROS_INFO("request from %s with age %d",req.name.c_str(),req.age);
    //处理请求，结果写入response
    res.feedback = "hi" + req.name +".I'm server";
    //返回true
    return true;
}
int main(int argc, char *argv[])
{
    ros::init(argc, argv, "greeing_server");
    ros::NodeHandle nh;
    ros::ServiceServer service =nh.advertiseService("greetings",handle_function);//创建服务“greetings",""
    ros::spin();
    return 0;
}