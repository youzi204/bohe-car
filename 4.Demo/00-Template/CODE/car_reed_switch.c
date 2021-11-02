/*********************************************************************************************************************
* @file            main.c
* @brief           干簧管检测磁场
* @author          Asuna HF
* @version         1.0
* @Target core     CH32V103C8T6
* @date            2021-10-6
********************************************************************************************************************/
#include "car_Reed_Switch.h"


//-------------------------------------------------------------------------------------------------------------------
//  @brief      led灯初始化
//  @param      void
//  @return     void
//  @since      v1.0
//  Sample usage:
//-------------------------------------------------------------------------------------------------------------------
void reed_led_init(void)
{
    gpio_init(led1, GPO, 1, SPEED_50MHZ|OUT_PP);
    gpio_init(led2, GPO, 1, SPEED_50MHZ|OUT_PP);

    for(int i=0; i<2; i++)
    {
        gpio_bit_output(led1, 0);    //PC6输出0，LED亮
        gpio_bit_output(led2, 1);    //PC7输出1，LED灭
        Delay_Ms(500);      //延时0.5s
        gpio_bit_output(led1, 1);    //PC6输出1，LED灭
        gpio_bit_output(led2, 0);    //PC7输出0，LED亮
        Delay_Ms(500);      //延时0.5s
        gpio_bit_output(led1, 0);    //PC6输出0，LED亮
        gpio_bit_output(led2, 0);    //PC7输出0，LED亮
        Delay_Ms(500);      //延时0.5s
    }
    gpio_bit_output(led1, 1);    //PC6输出1，LED灭
    gpio_bit_output(led2, 0);    //PC7输出0，LED亮
}

//-------------------------------------------------------------------------------------------------------------------
//  @brief      干簧管初始化
//  @param      void
//  @return     void
//  @since      v1.0
//  Sample usage:
//-------------------------------------------------------------------------------------------------------------------
void reed_init(void)
{
    /* 配置干簧管引脚 */
    gpio_init(reed_switch, GPI, 0, IN_FLOAT);
}


//-------------------------------------------------------------------------------------------------------------------
//  @brief      获得干簧管状态
//  @param      void
//  @return     void
//  @since      v1.0
//  Sample usage:
//-------------------------------------------------------------------------------------------------------------------
uint8 get_reed_status (void)
{
    uint8 a;
    a=gpio_get_input(B3);                                //获得干簧管状态
    return a;
}
