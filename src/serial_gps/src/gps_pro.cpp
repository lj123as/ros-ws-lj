#include "serial_gps/serial_gps.h"
#include "string.h"
#define CRC32_POLYNOMIAL 0xEDB88320L
uint8_t gps_buff[500];
uint8_t heading_buff[500];
uint8_t data_frame_buf[500];
serial_gps::st_gps_data_regs st_gps_regs;
unsigned long CRC32Value(int i);
unsigned long CalculateBlockCRC32(
unsigned long ulCount, /* Number of bytes in the data block */
unsigned char *ucBuffer );
int main(int argc, char** argv)
{
    //初始化ROS节点
    int data_long = 0 ;
    std::string serial_port;
    int serial_baudrate;
	ros::init(argc, argv, "gps_pro");									
    ros::NodeHandle nh;
    ros::NodeHandle np("~");
    np.getParam("serial_port", serial_port);
    np.getParam("serial_baudrate", serial_baudrate);

    serial_gps::cls_gps  gps_hd;
    gps_hd.init(serial_port , serial_baudrate);

    sensor_msgs::NavSatFix navsatfix; 
    ros::Publisher gps_nav_pub = nh.advertise<sensor_msgs::NavSatFix>("gps_navsatifix",500);
    nav_msgs::Odometry odometry;
    ros::Publisher gps_odom_pub = nh.advertise<nav_msgs::Odometry>("gps_odometry", 500);
     
    
    

     
   // ros::Rate loop_rate(100);//50ms    单位是hz
	while (ros::ok()) 
    {
        data_long = gps_hd.read_gps_data(gps_buff,heading_buff,data_frame_buf,&st_gps_regs); 
        navsatfix.latitude = st_gps_regs.latitude;
        navsatfix.longitude = st_gps_regs.longitude;
        navsatfix.altitude = st_gps_regs.altitude;
        gps_nav_pub.publish(navsatfix);

        gps_hd.calc_utm_coord(&st_gps_regs);
        geometry_msgs::Quaternion odom_quat = tf::createQuaternionMsgFromYaw(st_gps_regs.heading);
        odometry.pose.pose.position.x = st_gps_regs.easting_coord;
        odometry.pose.pose.position.y = st_gps_regs.northing_coord;
        odometry.pose.pose.position.z = st_gps_regs.altitude;
        odometry.pose.pose.orientation= odom_quat;
        gps_odom_pub.publish(odometry);

        // uint8_t check_data[] = {"HEADINGA,COM1,0,78.0,FINE,2043,273335.150,9331620,9331629,18;INSUFFICIENT_OBS,NONE,0.0000,0.0000,0.0000,0.0000,0.0000,0.0000,"",0,0,0,0,0,00,0,0"};
    	// //unsigned long crc_32 = CalculateBlockCRC32((unsigned long)strlen(check_data),check_data);
        // unsigned long crc_32 = CalculateBlockCRC32((sizeof(check_data)-1),check_data);	
        // ROS_INFO("crc-32: %lu",crc_32);

       // loop_rate.sleep();    
	}

	return 0;
}

unsigned long CRC32Value(int i)
{
int j;
unsigned long ulCRC;
ulCRC = i;
for ( j = 8 ; j > 0; j-- )
{
if ( ulCRC & 1 )
ulCRC = ( ulCRC >> 1 ) ^ CRC32_POLYNOMIAL;
else
ulCRC >>= 1;
}
return ulCRC;
}
/* --------------------------------------------------------------------------
Calculates the CRC-32 of a block of data all at once
-------------------------------------------------------------------------- */
unsigned long CalculateBlockCRC32(
unsigned long ulCount, /* Number of bytes in the data block */
unsigned char *ucBuffer ) /* Data block */
{
unsigned long ulTemp1;
unsigned long ulTemp2;
unsigned long ulCRC = 0;
while ( ulCount-- != 0 )
{
ulTemp1 = ( ulCRC >> 8 ) & 0x00FFFFFFL;
ulTemp2 = CRC32Value( ((int) ulCRC ^ *ucBuffer++ ) & 0xff );
ulCRC = ulTemp1 ^ ulTemp2;
}
return( ulCRC );
}

