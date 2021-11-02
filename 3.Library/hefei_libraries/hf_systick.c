/*********************************************************************************************************************
 * @file            hf_systick.c
 * @brief           SYSTICK配置
 * @author          HeFei WeiHuang
 * @version         1.0
 * @Target core     CH32V103R8T6
 * @date            2021-10-06
 ********************************************************************************************************************/

#include "hf_systick.h"

//-------------------------------------------------------------------------------------------------------------------
//  @brief      滴答定时器启动
//  @param      void
//  @return     void
//  Sample usage:               systick_start();
//-------------------------------------------------------------------------------------------------------------------
void systick_start(void)
{
    SysTick->CTLR = 0;
    SysTick->CNTL0 = 0;
    SysTick->CNTL1 = 0;
    SysTick->CNTL2 = 0;
    SysTick->CNTL3 = 0;
    SysTick->CTLR = 1;          //启动系统计数器 systick（HCLK/8 时基） us
}


//-------------------------------------------------------------------------------------------------------------------
//  @brief      获得当前滴答定时器的值
//  @param      void
//  @return     uint32          返回当前System tick timer的值
//  Sample usage:               uint32 tim = systick_getval();
//-------------------------------------------------------------------------------------------------------------------
uint32 systick_getval(void)
{
    return (*(volatile uint32*)0xE000F004);
}

//-------------------------------------------------------------------------------------------------------------------
//  @brief      滴答定时器延时
//  @param      time                us
//  @return     void
//  Sample usage:                   内部使用，用户无需关心
//-------------------------------------------------------------------------------------------------------------------
void systick_delay(uint64 time)
{
    SysTick->CTLR = 0;
    SysTick->CNTL0 = 0;
    SysTick->CNTL1 = 0;
    SysTick->CNTL2 = 0;
    SysTick->CNTL3 = 0;
    SysTick->CNTH0 = 0;
    SysTick->CNTH1 = 0;
    SysTick->CNTH2 = 0;
    SysTick->CNTH3 = 0;
    SysTick->CTLR = 1;          //启动系统计数器 systick（HCLK/8 时基） us

    while((*(volatile uint32*)0xE000F004) <= time);
}
