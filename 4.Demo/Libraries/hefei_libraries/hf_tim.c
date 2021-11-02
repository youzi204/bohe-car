/*********************************************************************************************************************
 * @file            hf_tim.c
 * @author          TaoZhihan
 * @version         1.0
 * @Target core     CH32V103R8T6
 * @date            2021-10-06
 ********************************************************************************************************************/

#include "hf_tim.h"

/* 内部变量定义 */
const uint32 TIMERN[] = {TIM1_BASE, TIM2_BASE, TIM3_BASE, TIM4_BASE};

//-------------------------------------------------------------------------------------------------------------------
//  @brief      时基初始化
//  @param      TIMER_x     选择定时器(可选择范围由wh_tim.h内TIMERN_enum枚举值确定)
//  @param      arr         周期值
//  @param      pre         分频系数
//  @return     void
//  Sample usage:           timbase_init(TIMER_2, 71, 0);
//                          //时基初始化为定时器2,频率为1MHz
//-------------------------------------------------------------------------------------------------------------------
void timbase_init(TIMERN_enum TIMER_x, uint16 arr, uint16 pre)
{
    TIM_TimeBaseInitTypeDef  TIM_TimeBaseStructure;

    if(TIMER_1 == TIMER_x)
        RCC_APB2PeriphClockCmd(RCC_APB2Periph_TIM1, ENABLE);                //时钟使能
    else if(TIMER_2 == TIMER_x)
        RCC_APB1PeriphClockCmd(RCC_APB1Periph_TIM2, ENABLE);                //时钟使能
    else if(TIMER_3 == TIMER_x)
        RCC_APB1PeriphClockCmd(RCC_APB1Periph_TIM3, ENABLE);                //时钟使能
    else if(TIMER_4 == TIMER_x)
        RCC_APB1PeriphClockCmd(RCC_APB1Periph_TIM4, ENABLE);                //时钟使能


    TIM_TimeBaseStructure.TIM_Period = arr;                    //计数44000
    TIM_TimeBaseStructure.TIM_Prescaler = pre;                      //设置为1MHZ计数一次,也就是1us计数一次
    TIM_TimeBaseStructure.TIM_ClockDivision = TIM_CKD_DIV1;                 //设置时钟分割:TDTS = Tck_tim
    TIM_TimeBaseStructure.TIM_CounterMode = TIM_CounterMode_Up;             //TIM向上计数模式
    TIM_TimeBaseStructure.TIM_RepetitionCounter = 0;                        //重复计数器设置为0
    TIM_TimeBaseInit((TIM_TypeDef *)TIMERN[TIMER_x], &TIM_TimeBaseStructure);//根据指定的参数初始化TIMx的时间基数单位
}

