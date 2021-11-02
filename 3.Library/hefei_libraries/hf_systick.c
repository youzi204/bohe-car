/*********************************************************************************************************************
 * @file            hf_systick.c
 * @brief           SYSTICK����
 * @author          HeFei WeiHuang
 * @version         1.0
 * @Target core     CH32V103R8T6
 * @date            2021-10-06
 ********************************************************************************************************************/

#include "hf_systick.h"

//-------------------------------------------------------------------------------------------------------------------
//  @brief      �δ�ʱ������
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
    SysTick->CTLR = 1;          //����ϵͳ������ systick��HCLK/8 ʱ���� us
}


//-------------------------------------------------------------------------------------------------------------------
//  @brief      ��õ�ǰ�δ�ʱ����ֵ
//  @param      void
//  @return     uint32          ���ص�ǰSystem tick timer��ֵ
//  Sample usage:               uint32 tim = systick_getval();
//-------------------------------------------------------------------------------------------------------------------
uint32 systick_getval(void)
{
    return (*(volatile uint32*)0xE000F004);
}

//-------------------------------------------------------------------------------------------------------------------
//  @brief      �δ�ʱ����ʱ
//  @param      time                us
//  @return     void
//  Sample usage:                   �ڲ�ʹ�ã��û��������
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
    SysTick->CTLR = 1;          //����ϵͳ������ systick��HCLK/8 ʱ���� us

    while((*(volatile uint32*)0xE000F004) <= time);
}
