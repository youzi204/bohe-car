/*********************************************************************************************************************
* @file            HF_L9110S_2.c
* @author          Andreas HF
* @version         1.0
* @Target core     CH32V103R8T6
* @date            -2021.10.22, V1.0
********************************************************************************************************************/

#include "headfile.h"

//-------------------------------------------------------------------------------------------------------------------
// @brief        PWM初始化
// @param        object            控制对象       
// @return       void
// Sample usage:        PWM_9110_init(left); 
                        //初始化左电机PWM
//-------------------------------------------------------------------------------------------------------------------
void l9110s_init(left_or_right object)
{
    if(object == left)
    {
        pwm_init(L_PWM_F, 72, 0, TIM_OCPreload_Enable);
        pwm_init(L_PWM_B, 72, 0, TIM_OCPreload_Enable);
    }

    else if(object == right)
    {
        pwm_init(R_PWM_F, 72, 0, TIM_OCPreload_Disable);
        pwm_init(R_PWM_B, 72, 0, TIM_OCPreload_Disable);
    }
}

//-------------------------------------------------------------------------------------------------------------------
// @brief        控制电机正转
// @param        object            控制对象
// @param        value             PWM占空比(0-10000)
// @return       void 
// Sample usage:        PWM_9110_forward(right, 10000);
                        //右电机满速正转(10000/10000)
//-------------------------------------------------------------------------------------------------------------------
void l9110s_forward(left_or_right object, uint16 value)
{
    if(object == left)
    {
        pwm_duty(L_PWM_F, value);
        pwm_duty(L_PWM_B, 0);
    }

    else if(object == right)
    {
        pwm_duty(R_PWM_F, value);
        pwm_duty(R_PWM_B, 0);
    }
}

//-------------------------------------------------------------------------------------------------------------------
// @brief        控制电机反转
// @param        object            控制对象
// @param        value             PWM占空比(0-10000)
// @return       void 
// Sample usage:        PWM_9110_back(left, 10000)；
                        //左电机满速反转(10000/10000)
//-------------------------------------------------------------------------------------------------------------------
void l9110s_back(left_or_right object, uint16 value)
{
    if(object == left)
    {
        pwm_duty(L_PWM_F, 0);
        pwm_duty(L_PWM_B, value);
    }

    else if(object == right)
    {
        pwm_duty(R_PWM_F, 0);
        pwm_duty(R_PWM_B, value);
    }
}
