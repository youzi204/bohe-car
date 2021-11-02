/********************************************************************************************************************
* @file            HF_WS2812b.c
* @author          Andreas HF
* @version         1.0
* @Target core     CH32V103R8T6
* @date            -2021.10.22, V1.0
********************************************************************************************************************/

#include "HF_WS2812b.h"

//-------------------------------------------------------------------------------------------------------------------
//  @brief      RGB��ʼ��
//  @param      void
//  @return     void
//  @since      v1.0
//  Sample usage:           ws2812b_init();
//                          //��ʼ��RGB��
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
// @brief        RGBд��
// @param        GRB             д�������
// @return       void
// Sample usage:        uint8_t RGB[3] = {0xff,0x00,0x00};  ws2812b_write(RGB);
                        //��RGBд�����飬��ʾ��ɫ
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
                //������ֵ(�Ƚ�ֵ,����ռ�ձȵ�ʱ��������ֵ)
                pwm_duty(PWM2_CH2_A1, 8500);/*��1*/
            }
            else
            {
                pwm_duty(PWM2_CH2_A1, 9500);/*��0*/
            }
            TIM_Cmd(((TIM_TypeDef *)TIM2_BASE), ENABLE);
            while(!TIM_GetFlagStatus(((TIM_TypeDef *)TIM2_BASE), TIM_FLAG_Update));
            TIM_Cmd(((TIM_TypeDef *)TIM2_BASE), DISABLE);
            TIM_ClearFlag(((TIM_TypeDef *)TIM2_BASE), TIM_FLAG_Update);
            TIM_SetCounter(((TIM_TypeDef *)TIM2_BASE), 0);
        }
    }
}
