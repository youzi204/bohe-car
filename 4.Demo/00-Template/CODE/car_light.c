/*********************************************************************************************************************
 * @file            car_light.c
 * @brief           ���ܳ�β�ƿ���
 * @author          Andreas WH
 * @version         1.1
 * @Target core     CH32V103R8T6
 * @date            2021-10-07
 ********************************************************************************************************************/

#include "car_light.h"

//-------------------------------------------------------------------------------------------------------------------
// @brief        ���ܳ�β��ͬʱ����
// @param        color          β����ɫ
// @param        time           ��ʱʱ��(ms)
// @return       void
// Sample usage:        car_both_rgb_on(red, 1000);//β��ͬʱ��ʾ��ɫ����ʱ1s
//-------------------------------------------------------------------------------------------------------------------
void car_both_rgb_on(rgb_color color, uint16_t time)
{
    if(color == red)
    {
        ws2812b_write(rgb_red);
        ws2812b_write(rgb_red);
        Delay_Ms(time);
    }
    else if(color == yellow)
    {
        ws2812b_write(rgb_yellow);
        ws2812b_write(rgb_yellow);
        Delay_Ms(time);
    }
    else if(color == white)
    {
        ws2812b_write(rgb_white);
        ws2812b_write(rgb_white);
        Delay_Ms(time);
    }
    else if(color == blue)
    {
        ws2812b_write(rgb_blue);
        ws2812b_write(rgb_blue);
        Delay_Ms(time);
    }
    else if(color == green)
    {
        ws2812b_write(rgb_green);
        ws2812b_write(rgb_green);
        Delay_Ms(time);
    }
    else if(color == cyan)
    {
        ws2812b_write(rgb_cyan);
        ws2812b_write(rgb_cyan);
        Delay_Ms(time);
    }
    else if(color == purple)
    {
        ws2812b_write(rgb_purple);
        ws2812b_write(rgb_purple);
        Delay_Ms(time);
    }
    else
    {
        ws2812b_write(rgb_user_define);
        ws2812b_write(rgb_user_define);
        Delay_Ms(time);
    }
}

//-------------------------------------------------------------------------------------------------------------------
// @brief        ���ܳ�β��Ϩ��
// @param        void
// @return       void
// Sample usage:        car_both_rgb_off();//β��Ϩ��
//-------------------------------------------------------------------------------------------------------------------
void car_both_rgb_off()
{
    ws2812b_write(rgb_off);
    ws2812b_write(rgb_off);
    Delay_Ms(50);
}

//-------------------------------------------------------------------------------------------------------------------
// @brief        ���ܳ�β�������˸
// @param        color          β����ɫ
// @param        flash_count    ��˸����
// @param        time           ���ʱ��(ms)
// @return       void
// Sample usage:        car_left_rgb_flash(red, 3, 500);//�����˸��ɫ���Σ����0.5s
//-------------------------------------------------------------------------------------------------------------------
void car_left_rgb_flash(rgb_color color, uint16_t flash_count, uint16_t time)
{
    unsigned int i;

    if(color == red)
    {
        for(i=0; i<flash_count; i++)
        {
            ws2812b_write(rgb_red);
            ws2812b_write(rgb_off);

            Delay_Ms(time);

            ws2812b_write(rgb_off);
            ws2812b_write(rgb_off);
            Delay_Ms(time);
        }
    }
    else if(color == yellow)
    {
        for(i=0; i<flash_count; i++)
        {
            ws2812b_write(rgb_yellow);
            ws2812b_write(rgb_off);

            Delay_Ms(time);

            ws2812b_write(rgb_off);
            ws2812b_write(rgb_off);
            Delay_Ms(time);
        }
    }
    else if(color == white)
    {
        for(i=0; i<flash_count; i++)
        {
            ws2812b_write(rgb_white);
            ws2812b_write(rgb_off);

            Delay_Ms(time);

            ws2812b_write(rgb_off);
            ws2812b_write(rgb_off);
            Delay_Ms(time);
        }
    }
    else if(color == green)
    {
        for(i=0; i<flash_count; i++)
        {
            ws2812b_write(rgb_green);
            ws2812b_write(rgb_off);

            Delay_Ms(time);

            ws2812b_write(rgb_off);
            ws2812b_write(rgb_off);
            Delay_Ms(time);
        }
    }
    else if(color == blue)
    {
        for(i=0; i<flash_count; i++)
        {
            ws2812b_write(rgb_blue);
            ws2812b_write(rgb_off);

            Delay_Ms(time);

            ws2812b_write(rgb_off);
            ws2812b_write(rgb_off);
            Delay_Ms(time);
        }
    }
    else if(color == cyan)
    {
        for(i=0; i<flash_count; i++)
        {
            ws2812b_write(rgb_cyan);
            ws2812b_write(rgb_off);

            Delay_Ms(time);

            ws2812b_write(rgb_off);
            ws2812b_write(rgb_off);
            Delay_Ms(time);
        }
    }
    else if(color == purple)
    {
        for(i=0; i<flash_count; i++)
        {
            ws2812b_write(rgb_purple);
            ws2812b_write(rgb_off);

            Delay_Ms(time);

            ws2812b_write(rgb_off);
            ws2812b_write(rgb_off);
            Delay_Ms(time);
        }
    }
    else
    {
        for(i=0; i<flash_count; i++)
        {
            ws2812b_write(rgb_user_define);
            ws2812b_write(rgb_off);

            Delay_Ms(time);

            ws2812b_write(rgb_off);
            ws2812b_write(rgb_off);
            Delay_Ms(time);
        }
    }

}

//-------------------------------------------------------------------------------------------------------------------
// @brief        ���ܳ�β���ҵ���˸
// @param        color          β����ɫ
// @param        flash_count    ��˸����
// @param        time           ���ʱ��(ms)
// @return       void
// Sample usage:        car_right_rgb_flash(red, 3, 500);//�ҵ���˸��ɫ���Σ����0.5s
//-------------------------------------------------------------------------------------------------------------------
void car_right_rgb_flash(rgb_color color, uint16_t flash_count, uint16_t time)
{
    unsigned int i;

    if(color == red)
    {
        for(i=0; i<flash_count; i++)
        {
            ws2812b_write(rgb_off);
            ws2812b_write(rgb_red);

            Delay_Ms(time);
      
            ws2812b_write(rgb_off);
            ws2812b_write(rgb_off);
            Delay_Ms(time);
        }
    }
    else if(color == yellow)
    {
        for(i=0; i<flash_count; i++)
        {
            ws2812b_write(rgb_off);
            ws2812b_write(rgb_yellow);

            Delay_Ms(time);

            ws2812b_write(rgb_off);
            ws2812b_write(rgb_off);
            Delay_Ms(time);
        }
    }
    else if(color == white)
    {
        for(i=0; i<flash_count; i++)
        {
            ws2812b_write(rgb_off);
            ws2812b_write(rgb_white);

            Delay_Ms(time);
        
            ws2812b_write(rgb_off);
            ws2812b_write(rgb_off);
            Delay_Ms(time);
        }
    }
    else if(color == green)
    {
        for(i=0; i<flash_count; i++)
        {
            ws2812b_write(rgb_off);
            ws2812b_write(rgb_green);

            Delay_Ms(time);

            ws2812b_write(rgb_off);
            ws2812b_write(rgb_off);
            Delay_Ms(time);
        }
    }
    else if(color == blue)
    {
        for(i=0; i<flash_count; i++)
        {
            ws2812b_write(rgb_off);
            ws2812b_write(rgb_blue);

            Delay_Ms(time);

            ws2812b_write(rgb_off);
            ws2812b_write(rgb_off);
            Delay_Ms(time);
        }
    }
    else if(color == cyan)
    {
        for(i=0; i<flash_count; i++)
        {
            ws2812b_write(rgb_off);
            ws2812b_write(rgb_cyan);

            Delay_Ms(time);

            ws2812b_write(rgb_off);
            ws2812b_write(rgb_off);
            Delay_Ms(time);
        }
    }
    else if(color == purple)
    {
        for(i=0; i<flash_count; i++)
        {
            ws2812b_write(rgb_off);
            ws2812b_write(rgb_purple);

            Delay_Ms(time);

            ws2812b_write(rgb_off);
            ws2812b_write(rgb_off);
            Delay_Ms(time);
        }
    }
    else
    {
        for(i=0; i<flash_count; i++)
        {
            ws2812b_write(rgb_off);
            ws2812b_write(rgb_user_define);

            Delay_Ms(time);
        
            ws2812b_write(rgb_off);
            ws2812b_write(rgb_off);
            Delay_Ms(time);
        }
    }
}

//-------------------------------------------------------------------------------------------------------------------
// @brief        ���ܳ�β��ͬʱ��˸
// @param        color          β����ɫ
// @param        flash_count    ��˸����
// @param        time           ���ʱ��(ms)
// @return       void
// Sample usage:        car_both_rgb_flash(red, 3, 500);//β��ͬʱ��˸��ɫ���Σ����0.5s
//-------------------------------------------------------------------------------------------------------------------
void car_both_rgb_flash(rgb_color color, uint16_t flash_count, uint16_t time)
{
    unsigned int i;

    if(color == red)
    {
        for(i=0; i<flash_count; i++)
        {
            ws2812b_write(rgb_red);
            ws2812b_write(rgb_red);

            Delay_Ms(time);

            ws2812b_write(rgb_off);
            ws2812b_write(rgb_off);
            Delay_Ms(time);
        }
    }
    else if(color == yellow)
    {
        for(i=0; i<flash_count; i++)
        {
            ws2812b_write(rgb_yellow);
            ws2812b_write(rgb_yellow);

            Delay_Ms(time);

            ws2812b_write(rgb_off);
            ws2812b_write(rgb_off);
            Delay_Ms(time);
        }
    }
    else if(color == white)
    {
        for(i=0; i<flash_count; i++)
        {
            ws2812b_write(rgb_white);
            ws2812b_write(rgb_white);

            Delay_Ms(time);

            ws2812b_write(rgb_off);
            ws2812b_write(rgb_off);
            Delay_Ms(time);
        }
    }
    else if(color == green)
    {
        for(i=0; i<flash_count; i++)
        {
            ws2812b_write(rgb_green);
            ws2812b_write(rgb_green);

            Delay_Ms(time);

            ws2812b_write(rgb_off);
            ws2812b_write(rgb_off);
            Delay_Ms(time);
        }
    }
    else if(color == blue)
    {
        for(i=0; i<flash_count; i++)
        {
            ws2812b_write(rgb_blue);
            ws2812b_write(rgb_blue);

            Delay_Ms(time);

            ws2812b_write(rgb_off);
            ws2812b_write(rgb_off);
            Delay_Ms(time);
        }
    }
    else if(color == cyan)
    {
        for(i=0; i<flash_count; i++)
        {
            ws2812b_write(rgb_cyan);
            ws2812b_write(rgb_cyan);

            Delay_Ms(time);

            ws2812b_write(rgb_off);
            ws2812b_write(rgb_off);
            Delay_Ms(time);
        }
    }
    else if(color == purple)
    {
        for(i=0; i<flash_count; i++)
        {
            ws2812b_write(rgb_purple);
            ws2812b_write(rgb_purple);

            Delay_Ms(time);

            ws2812b_write(rgb_off);
            ws2812b_write(rgb_off);
            Delay_Ms(time);
        }
    }
    else
    {
        for(i=0; i<flash_count; i++)
        {
            ws2812b_write(rgb_user_define);
            ws2812b_write(rgb_user_define);

            Delay_Ms(time);

            ws2812b_write(rgb_off);
            ws2812b_write(rgb_off);
            Delay_Ms(time);
        }
    }
}
