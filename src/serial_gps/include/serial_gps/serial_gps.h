#ifndef SERIAL_GPS_H
#define SERIAL_GPS_H

#include <ros/ros.h>
#include <ros/time.h>
#include <std_msgs/String.h>
#include <serial/serial.h>
#include <iostream>
#include <string>
#include "serial_gps/conversions.h" 
#include "sensor_msgs/NavSatFix.h"
#include "nav_msgs/Odometry.h"
#include <tf/transform_broadcaster.h>

namespace serial_gps
{ 

    
    struct  st_gps_data_regs
    {
        double heading;
        double pitch;
        double latitude;
        double longitude;
        double altitude;
        double easting_coord;
        double northing_coord;
    };
    class cls_gps
    {
        public:
            cls_gps();
            ~cls_gps();
            bool init(std::string serial_port ,int serial_baudrate);
            int read_gps_data(uint8_t *gpgga_buf,uint8_t *heading_buf,uint8_t *data_frame_buf,st_gps_data_regs *p);
            uint8_t xor_checksum(uint8_t *des_buff,int int_data_cnt);
            double gpgga_data_divide(uint8_t *buff,st_gps_data_regs *p,int data_long);
            double heading_data_divide(uint8_t *buff,st_gps_data_regs *p,int data_long);
            double strings_to_double(uint8_t *buff,int data_long);
            void calc_utm_coord(st_gps_data_regs *p);
    
        private:
        uint32_t u32_timeout_cnt;
        ros::NodeHandle nh;
        ros::Publisher pub_;
        ros::Time ros_time;
        serial::Serial sp;
        serial::Timeout st_timeout ;
        serial_gps::st_gps_data_regs st_gps_data;   
    };
    
    
}
#endif
