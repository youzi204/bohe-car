/********************************************************************************************************************
* @file            HF_WS2812b.c
* @author          Andreas HF
* @version         1.0
* @Target core     CH32V103R8T6
* @date            -2021.10.22, V1.0
********************************************************************************************************************/

#include "HF_WS2812b.h"

//-------------------------------------------------------------------------------------------------------------------
//  @brief      RGB初始化
//  @param      void
//  @return     void
//  @since      v1.0
//  Sample usage:           ws2812b_init();
//                          //初始化RGB等
//-------------------------------------------------------------------------------------------------------------------
void ws2812b_init()
{
    pwm_init(PWM2_CH2_A1, 180000, 0, TIM_OCPreload_Disable);
    TIM_OC2PolarityConfig(TIM2, TIM_OCPolarity_Low);

    uint8_t RGB[3] = {0x00,0x00,0x00};
    ws2812b_write(RGB);
    Delay_Us(100);
    ws2812b_write(RGB);
}

//-------------------------------------------------------------------------------------------------------------------
// @brief        RGB写入
// @param        GRB             写入的数组
// @return       void
// Sample usage:        uint8_t RGB[3] = {0xff,0x00,0x00};  ws2812b_write(RGB);
                        //向RGB写入数组，显示红色
//-------------------------------------------------------------------------------------------------------------------
void ws2812b_write(uint8_t* RGB)
{
    unsigned int num, i;
    unsigned char GRB[3] = {0,};

    GRB[0] = RGB[1];
    GRB[1] = RGB[0];
    GRB[2] = RGB[2];
    TIM_SetCounter(((TIM_TypeDef *)TIM2_BASE), 0);

    for(num = 0; num<3; num++)
    {
        for(i = 8; i!=0; i--)
        {
            if((*(GRB+num)>>(i-1))&0x01)
            {
                //设置阈值(比较值,调节占空比的时候调节这个值)
                pwm_duty(PWM2_CH2_A1, 8500);/*发1*/
            }
            else
            {
                pwm_duty(PWM2_CH2_A1, 9500);/*发0*/
            }
            TIM_Cmd(((TIM_TypeDef *)TIM2_BASE), ENABLE);
            while(!TIM_GetFlagStatus(((TIM_TypeDef *)TIM2_BASE), TIM_FLAG_Update));
            TIM_Cmd(((TIM_TypeDef *)TIM2_BASE), DISABLE);
            TIM_ClearFlag(((TIM_TypeDef *)TIM2_BASE), TIM_FLAG_Update);
            TIM_SetCounter(((TIM_TypeDef *)TIM2_BASE), 0);
        }
    }
}
