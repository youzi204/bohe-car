/*********************************************************************************************************************
* @file            HF_L9110S_2.c
* @author          Andreas HF
* @version         1.0
* @Target core     CH32V103R8T6
* @date            -2021.10.22, V1.0
********************************************************************************************************************/

#include "headfile.h"

//-------------------------------------------------------------------------------------------------------------------
// @brief        PWM��ʼ��
// @param        object            ���ƶ���       
// @return       void
// Sample usage:        PWM_9110_init(left); 
                        //��ʼ������PWM
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
// @brief        ���Ƶ����ת
// @param        object            ���ƶ���
// @param        value             PWMռ�ձ�(0-10000)
// @return       void 
// Sample usage:        PWM_9110_forward(right, 10000);
                        //�ҵ��������ת(10000/10000)
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
// @brief        ���Ƶ����ת
// @param        object            ���ƶ���
// @param        value             PWMռ�ձ�(0-10000)
// @return       void 
// Sample usage:        PWM_9110_back(left, 10000)��
                        //�������ٷ�ת(10000/10000)
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
