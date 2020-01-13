#include "serial_gps/serial_gps.h"
#define PI 3.141592654
namespace serial_gps
{ 
    uint8_t  gpgga_rec_buf[500],heading_rec_buf[500],xor_buf,temp_buff[1];
    int      int_data_cnt = 0,int_data_cnt2 = 0,in_data_cnt = 0;
    int      m_index = 0,w_index = 0,h_index =0;
    bool     b_divide_heading_flag ,b_divide_gpgga_flag,b_cpy_frame_flag ,b_cpy_heading_flag = false;
    cls_gps::cls_gps()
    {
        u32_timeout_cnt = 100;  
        st_timeout = serial::Timeout::simpleTimeout(25);
    }
    cls_gps::~cls_gps(){}
    bool cls_gps::init(std::string serial_port ,int serial_baudrate)
    {
        //后续换成可修改
        ros_time.init();
        sp.setPort(serial_port);             
        sp.setBaudrate(serial_baudrate);                     
        sp.setParity(serial::parity_none);
        sp.setStopbits(serial::stopbits_one);
        sp.setFlowcontrol(serial::flowcontrol_none);
        sp.setBytesize(serial::eightbits);
        sp.setTimeout(st_timeout);
        try
        {
            sp.open();
        }
        catch(serial::IOException& e)
        {
            ROS_ERROR_STREAM("Unable to open port.");
            return -1;
        }
        if(sp.isOpen())
        {
            ROS_INFO_STREAM("/dev/ttyUSB0 is opened.");
        }
        else
        {
            return -1;
        }

    }
    int cls_gps::read_gps_data(uint8_t *gpgga_buf,uint8_t *heading_buf,uint8_t *data_frame_buf,st_gps_data_regs *p)
    { 
        unsigned long n_size =  sp.read(temp_buff,1);                     
        if(n_size == 1)
        {
            if(temp_buff[0] == '$')
            {		
                memcpy(data_frame_buf,gpgga_rec_buf,m_index);
                memset(gpgga_rec_buf,0,sizeof(gpgga_rec_buf));
                //@ w_index 接收到总数
                w_index = m_index;
                m_index = 0;
                b_cpy_frame_flag = true;
                b_cpy_heading_flag = false;
                b_divide_gpgga_flag = false;
                b_divide_heading_flag = true;
            }
            
            
            gpgga_rec_buf[m_index] = temp_buff[0];
            //@接收gpgga数据
            if(temp_buff[0] == '#')
            {
                memcpy(gpgga_buf,gpgga_rec_buf,m_index);
                 //@校验gpgga数据

                xor_buf = xor_checksum(gpgga_buf,m_index);
                uint8_t  xor_buf_decade = (int)xor_buf / 16 ;
                if(xor_buf_decade > 9)
                {
                    xor_buf_decade += 0x37;
                }
                else
                {
                    xor_buf_decade += 0x30;
                }
                uint8_t  xor_buf_unit   = (int)xor_buf % 16 ;
                if(xor_buf_unit > 9)
                {
                    xor_buf_unit += 0x37;
                }
                else
                {
                    xor_buf_unit += 0x30;
                }
                
                if((xor_buf_decade == gpgga_buf[m_index - 4]) && (xor_buf_unit == gpgga_buf[m_index - 3]))
                {
                    ROS_INFO("gpgga receive is correct!");
                }


                h_index = m_index;
                b_cpy_heading_flag = true;
                b_divide_gpgga_flag = true;
            }
            m_index++;
            //@接受heading数据
            if(b_cpy_heading_flag == true)
            {
                heading_buf[m_index - h_index -1] = temp_buff[0];
            }
            
        }
        //@进行gpgga数据分类
        if(b_divide_gpgga_flag == true)
        {
            b_divide_gpgga_flag = false;
            if(h_index != 0)
            {
                gpgga_data_divide(gpgga_buf,p,h_index);
            }
            
        }
        //@进行heading数据进行分类
        if(b_divide_heading_flag == true)
        {
            b_divide_heading_flag = false;
            if(w_index != 0)
            {
                heading_data_divide(heading_buf,p,(w_index - h_index));
            }
            
        }
        //@一帧数据接收完成
        if(b_cpy_frame_flag == true)
        {
            ;
        }

        return 0;
     }
     uint8_t cls_gps::xor_checksum(uint8_t *des_buff,int int_data_cnt)
     {
         uint8_t u8_temp_buff = 0x00;
         u8_temp_buff = *(des_buff + 1);
         for(int i = 2; i < (int_data_cnt - 5); i++)
         {
            u8_temp_buff = *(des_buff + i) xor u8_temp_buff;
         }
         return u8_temp_buff;
     }
     double cls_gps::gpgga_data_divide(uint8_t *buff,st_gps_data_regs *p,int data_long)
     {
         uint8_t u8_temp_buff[100] = {0x00};
         uint8_t u8_data_index = 0;
         uint8_t u8_temp_buff_cnt = 0;
         bool b_into_case = false;
         for(int i = 0; i < data_long ;i++)
         {
             if(*(buff + i) == ',')
             {  
                 u8_data_index++;
                 b_into_case = true;
             }
             else
             {
                u8_temp_buff [i - u8_temp_buff_cnt ] = *(buff + i);   
                           
             }
             if(b_into_case == true)
             {
                 b_into_case = false;
                 
                switch(u8_data_index)
                {
                    case 3 :           //纬度
                        p->latitude = strings_to_double(u8_temp_buff,(i - u8_temp_buff_cnt));
                        break;
                    case 5 :           //经度
                        p->longitude = strings_to_double(u8_temp_buff,(i - u8_temp_buff_cnt));
                        break;
                    case 10 :           //海拔
                        p->altitude = strings_to_double(u8_temp_buff,(i - u8_temp_buff_cnt));
                        break;
                    default :
                        break;
                }
                u8_temp_buff_cnt = i + 1; 
                memset(u8_temp_buff,0,sizeof(u8_temp_buff));
             }
         }
         return 0;
     }

     double cls_gps::heading_data_divide(uint8_t *buff,st_gps_data_regs *p,int data_long)
     {
         uint8_t u8_temp_buff[100] = {0x00};
         uint8_t u8_data_index = 0;
         uint8_t u8_temp_buff_cnt = 0;
         bool b_into_case = false;
         double temp_heading = 0; 
         
         for(int i = 0; i < data_long ;i++)
         {
             if(*(buff + i) == ',')
             {  
                 u8_data_index++;
                 b_into_case = true;
             }
             else
             {
                u8_temp_buff [i - u8_temp_buff_cnt ] = *(buff + i);   
                           
             }
             if(b_into_case == true)
             {
                 b_into_case = false;
                 
                switch(u8_data_index)
                {
                    case 13 :           //航向角
                        
                        temp_heading = strings_to_double(u8_temp_buff,(i - u8_temp_buff_cnt));
                        if(temp_heading < 180)
                        {
                            p->heading  = - (temp_heading * PI )/180;
                        }
                        else
                        {
                            p->heading  =  ((360 -temp_heading) * PI )/180;
                        }

                        ROS_INFO("heading: %f",p->heading);
                        break;
                    case 14 :           //俯仰角
                        p->pitch = strings_to_double(u8_temp_buff,(i - u8_temp_buff_cnt));
                        break;
                    default :
                        break;
                }
                u8_temp_buff_cnt = i + 1; 
                memset(u8_temp_buff,0,sizeof(u8_temp_buff));
             }
         }
         return 0;
     }

     double cls_gps::strings_to_double(uint8_t *buff,int data_long)
     {
        double d64_return;
        char temp_buff[128] = {0x00};
        memcpy(temp_buff,buff,data_long);
        temp_buff[data_long]= '\0';
        d64_return = atof(temp_buff);
        return d64_return;
     }
     void cls_gps::calc_utm_coord(st_gps_data_regs *p)
     {
         std::string zone;
         gps_common::LLtoUTM(p->latitude,p->longitude,p->northing_coord,p->easting_coord, zone);
     }
}
