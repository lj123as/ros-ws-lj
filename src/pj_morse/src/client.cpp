#include <ros/ros.h>
#include <pj_morse/greeting.h>

int main(int argc,char** argv){
    ros::init(argc,argv,"greetings_client");
    ros::NodeHandle nh;
    ros::ServiceClient client = nh.serviceClient<pj_morse::greeting>("greetings");//service与server一致

    pj_morse::greeting srv;//作用？
    srv.request.name = "HAN";
    srv.request.age = 20;

    if(client.call(srv)){
        ROS_INFO("Feedback from server:%s",srv.response.feedback.c_str());
    }
    else{
        ROS_INFO("Failed to call service greetings");
        return 1;
    }
    return 0;
}