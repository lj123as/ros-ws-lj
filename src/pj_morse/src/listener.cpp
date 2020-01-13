#include "ros/ros.h"
#include "pj_morse/morse.h"
void morseCallback(const pj_morse::morse::ConstPtr &msg1)//constptr-常指针类型 &msg-取指针
{
    //指针使用？ 定义 ST_OUT_UNION; 定义指针变量 ST_OUT_UNION *P ; 实例化ST_OUT_UNION  g_StOutUnion;
    //实例化：g_uinoswitchvalue
    std::string morse;
    morse = msg1->morsecode;
    ROS_INFO("Listener:code = %s",morse.c_str());
}
int main(int argc, char *argv[])
{
    ros::init(argc, argv, "listener");
    ros::NodeHandle nh;
    ros::Subscriber sub = nh.subscribe("morse", 100, morseCallback);//创建sub,回调函数-指针
    ros::spin();//sub结构数据放入队列，但并不是来一个就处理一个，由spin函数处理，阻塞的   
    return 0;
}