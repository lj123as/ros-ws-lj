// c++
// module from bilibili video 
#include <ros/ros.h>
#include <pj_morse/morse.h>
int main(int argc, char **argv) //argc-参数数量、argv-参数
{
 ros::init(argc, argv, "talker");//解析参数、命名节点'talker'
 ros::NodeHandle nh;//创建句柄-工具，实例化node
 pj_morse::morse msg1;//创建消息结构体,结构体实例化，变量msg,名称可以不是msg？
 msg1.morsecode = "---...---";
 ros::Publisher morse_pub = nh.advertise<pj_morse::morse>("morse",100);//节点名、消息类型、topic名、buffer 队列长度
 ros::Rate loop_rate(10);//循环发布，频率 10HZ/s
 //int count = 0;
 while(ros::ok())
 {
  ROS_INFO("talker:morsecode:morsecode = %s",msg1.morsecode.c_str());//输出当前msg
  morse_pub.publish(msg1);
  loop_rate.sleep();//根据定义的发布频率sleep
 //std_msgs::String msg;
 // std::stringstream ss;
 //  ss <<"hello world"<< count;
 //  msg.data = ss.str();  
 }
 return 0;//主函数返回
}