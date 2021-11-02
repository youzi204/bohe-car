/*********************************************************************************************************************
 * @file            hf_exti.c
 * @brief           EXTI配置
 * @author          HeFei WeiHuang
 * @version         1.0
 * @Target core     CH32V103R8T6
 * @date            2021-10-06
 ********************************************************************************************************************/

#include "hf_exti.h"

//-------------------------------------------------------------------------------------------------------------------
// @brief        开启引脚外部中断
// @param        pin         选择的引脚 (可选择范围由 common.h 内PIN_enum枚举值确定)
// @param        exti_mode              中断的模式，只能选择以下参数：
//  @arg          CHANGE:                电平改变触发
//  @arg          RISING:                上升沿触发
//  @arg          FALLING:               下降沿触发
// @return       void
// Sample usage:            exti_enable(A0, RISING);//开启PA0外部中断，模式为电平上升沿触发
                            //注：无法同时开启同一引脚数的外部中断（如PA0和PB0）
//-------------------------------------------------------------------------------------------------------------------
void exti_enable(PIN_enum pin,TRIGGER_enum trigger)
{
    //GPIO 外部中断初始化
    EXTI_InitTypeDef EXTI_InitStructure;
    RCC_APB2PeriphClockCmd(RCC_APB2Periph_AFIO,ENABLE);
    GPIO_EXTILineConfig(pin >> 5, pin & 0x1F);              //引脚中断号配置
    EXTI_InitStructure.EXTI_Line = 1 << (pin & 0x1F);       //引脚号配置
    EXTI_InitStructure.EXTI_Mode = EXTI_Mode_Interrupt;     //触发模式
    EXTI_InitStructure.EXTI_Trigger = trigger;              //触发方式
    EXTI_InitStructure.EXTI_LineCmd = ENABLE;               //使能或者失能
    EXTI_Init(&EXTI_InitStructure);
}

//-------------------------------------------------------------------------------------------------------------------
// @brief        屏蔽引脚外部中断
// @param        pin         选择的引脚 (可选择范围由 common.h 内PIN_enum枚举值确定)
// @return       void
// Sample usage:        exti_disable(A0);
                        //关闭引脚PX0的外部中断（X=A、B、C、F）
//-------------------------------------------------------------------------------------------------------------------
void exti_disable(PIN_enum pin)
{
    EXTI->INTENR &= ~(1 << (pin & 0x1F));
}
