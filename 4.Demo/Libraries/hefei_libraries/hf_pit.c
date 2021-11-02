/*********************************************************************************************************************
 * @file            hf_pit.c
 * @brief           PIT配置
 * @author          HeFei WeiHuang
 * @version         1.0
 * @Target core     CH32V103R8T6
 * @date            2021-10-06
 ********************************************************************************************************************/

#include "hf_pit.h"

/* 引用外部变量 */
extern const uint32 TIMERN[];

//-------------------------------------------------------------------------------------------------------------------
//  @brief      定时器周期中断(ms)
//  @param      timern      定时器通道
//  @param      ms          定时周期(1-32767)
//  @return     void
//  Sample usage:           timer_pit_interrupt(TIMER_1, 5); 使用定时器1作为5ms一次的周期中断
//-------------------------------------------------------------------------------------------------------------------
void timer_pit_interrupt_ms(TIMERN_enum TIMER_x, uint16 ms)
{
    /* 定时器TIM初始化,计数器 */
    assert(ms);

    uint16 arr, pre;
    arr = sys_clk/1640 - 1;
    pre = 2*ms - 1;

    timbase_init(TIMER_x, arr, pre);

    TIM_ITConfig((TIM_TypeDef *)TIMERN[TIMER_x],TIM_IT_Update,ENABLE );      //使能指定的TIM中断,允许更新中断
    TIM_ClearITPendingBit((TIM_TypeDef *)TIMERN[TIMER_x], TIM_IT_Update);

    /* 中断优先级NVIC设置 */
    if(TIMER_1 == TIMER_x)
        nvic_init(TIM1_UP_IRQn, 1, 2, ENABLE);
    else if(TIMER_2 == TIMER_x)
        nvic_init(TIM2_IRQn, 1, 2, ENABLE);
    else if(TIMER_3 == TIMER_x)
        nvic_init(TIM3_IRQn, 1, 2, ENABLE);
    else if(TIMER_4 == TIMER_x)
        nvic_init(TIM4_IRQn, 1, 2, ENABLE);

    TIM_Cmd((TIM_TypeDef *)TIMERN[TIMER_x], ENABLE);  //使能TIMx
}


//-------------------------------------------------------------------------------------------------------------------
//  @brief      定时器周期中断(us)
//  @param      timern      定时器通道
//  @param      us          定时周期(1-65535)
//  @return     void
//  Sample usage:           timer_pit_interrupt(TIMER_1, 5); 使用定时器1作为5ms一次的周期中断
//-------------------------------------------------------------------------------------------------------------------
void timer_pit_interrupt_us(TIMERN_enum TIMER_x, uint16 us)
{
    /* 定时器TIM初始化,计数器 */
    assert(us);

    uint16 arr, pre;
    arr = sys_clk/1000000 - 1;
    pre = us - 1;

    timbase_init(TIMER_x, arr, pre);

    TIM_ITConfig((TIM_TypeDef *)TIMERN[TIMER_x],TIM_IT_Update,ENABLE );      //使能指定的TIM中断,允许更新中断
    TIM_ClearITPendingBit((TIM_TypeDef *)TIMERN[TIMER_x], TIM_IT_Update);

    /* 中断优先级NVIC设置 */
    if(TIMER_1 == TIMER_x)
        nvic_init(TIM1_UP_IRQn, 1, 2, ENABLE);
    else if(TIMER_2 == TIMER_x)
        nvic_init(TIM2_IRQn, 1, 2, ENABLE);
    else if(TIMER_3 == TIMER_x)
        nvic_init(TIM3_IRQn, 1, 2, ENABLE);
    else if(TIMER_4 == TIMER_x)
        nvic_init(TIM4_IRQn, 1, 2, ENABLE);

    TIM_Cmd((TIM_TypeDef *)TIMERN[TIMER_x], ENABLE);  //使能TIMx

}


//-------------------------------------------------------------------------------------------------------------------
//  @brief      us计时器开始
//  @param      timern      选择模块的通道 (选择范围 由TIMERN_enum枚举值的内容确定)
//  @return     void
//  Sample usage:           pit_start_us(TIMER_1);  //定时器0 开始计数，每以us计数一次
//-------------------------------------------------------------------------------------------------------------------
void timer_pit_start_us(TIMERN_enum TIMER_x)
{
    uint16 arr, pre;

    arr = 65535;
    pre = sys_clk/1000000 - 1;

    timbase_init(TIMER_x, arr, pre);
    ((TIM_TypeDef *)TIMERN[TIMER_x])->CNT = 0;
    TIM_Cmd((TIM_TypeDef *)TIMERN[TIMER_x], ENABLE);  //使能TIMx
}

//-------------------------------------------------------------------------------------------------------------------
//  @brief      获取计时器值
//  @param      timern      选择模块的通道 (选择范围 由TIMERN_enum枚举值的内容确定)
//  @return     uint32      计数值
//  Sample usage:           本函数通常用户无需关心，如果需要获取计数值，应该调用h文件的宏定义函数（带有时间单位）
//-------------------------------------------------------------------------------------------------------------------
uint16 timer_pit_get_us(TIMERN_enum TIMER_x)
{
    return ((TIM_TypeDef *)TIMERN[TIMER_x])->CNT;
}

//-------------------------------------------------------------------------------------------------------------------
//  @brief      关闭PIT定时器
//  @param      timern      选择模块的通道 (选择范围 由TIMERN_enum枚举值的内容确定)
//  @return     void
//  Sample usage:           关闭定时器并清除标志位
//-------------------------------------------------------------------------------------------------------------------
void timer_pit_close(TIMERN_enum TIMER_x)
{
    TIM_DeInit((TIM_TypeDef *)TIMERN[TIMER_x]);
    TIM_Cmd((TIM_TypeDef *)TIMERN[TIMER_x], DISABLE);  //失能TIMx
}
