/*********************************************************************************************************************
 * @file            hf_tim.c
 * @author          TaoZhihan
 * @version         1.0
 * @Target core     CH32V103R8T6
 * @date            2021-10-06
 ********************************************************************************************************************/

#include "hf_tim.h"

/* �ڲ��������� */
const uint32 TIMERN[] = {TIM1_BASE, TIM2_BASE, TIM3_BASE, TIM4_BASE};

//-------------------------------------------------------------------------------------------------------------------
//  @brief      ʱ����ʼ��
//  @param      TIMER_x     ѡ��ʱ��(��ѡ��Χ��wh_tim.h��TIMERN_enumö��ֵȷ��)
//  @param      arr         ����ֵ
//  @param      pre         ��Ƶϵ��
//  @return     void
//  Sample usage:           timbase_init(TIMER_2, 71, 0);
//                          //ʱ����ʼ��Ϊ��ʱ��2,Ƶ��Ϊ1MHz
//-------------------------------------------------------------------------------------------------------------------
void timbase_init(TIMERN_enum TIMER_x, uint16 arr, uint16 pre)
{
    TIM_TimeBaseInitTypeDef  TIM_TimeBaseStructure;

    if(TIMER_1 == TIMER_x)
        RCC_APB2PeriphClockCmd(RCC_APB2Periph_TIM1, ENABLE);                //ʱ��ʹ��
    else if(TIMER_2 == TIMER_x)
        RCC_APB1PeriphClockCmd(RCC_APB1Periph_TIM2, ENABLE);                //ʱ��ʹ��
    else if(TIMER_3 == TIMER_x)
        RCC_APB1PeriphClockCmd(RCC_APB1Periph_TIM3, ENABLE);                //ʱ��ʹ��
    else if(TIMER_4 == TIMER_x)
        RCC_APB1PeriphClockCmd(RCC_APB1Periph_TIM4, ENABLE);                //ʱ��ʹ��


    TIM_TimeBaseStructure.TIM_Period = arr;                    //����44000
    TIM_TimeBaseStructure.TIM_Prescaler = pre;                      //����Ϊ1MHZ����һ��,Ҳ����1us����һ��
    TIM_TimeBaseStructure.TIM_ClockDivision = TIM_CKD_DIV1;                 //����ʱ�ӷָ�:TDTS = Tck_tim
    TIM_TimeBaseStructure.TIM_CounterMode = TIM_CounterMode_Up;             //TIM���ϼ���ģʽ
    TIM_TimeBaseStructure.TIM_RepetitionCounter = 0;                        //�ظ�����������Ϊ0
    TIM_TimeBaseInit((TIM_TypeDef *)TIMERN[TIMER_x], &TIM_TimeBaseStructure);//����ָ���Ĳ�����ʼ��TIMx��ʱ�������λ
}

