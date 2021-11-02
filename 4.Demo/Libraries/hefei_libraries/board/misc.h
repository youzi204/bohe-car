/*********************************************************************************************************************
 * @file            misc.h
 * @brief
 * @author          HeFei WeiHuang
 * @version         1.0
 * @Target core     CH32V103R8T6
 * @date            2021-08-29
 ********************************************************************************************************************/

#ifndef _misc_h
#define _misc_h

/* 宏定义 */
#define enable_irq(irq)                 NVIC_EnableIRQ(irq)         //使能IRQ
#define disable_irq(irq)                NVIC_DisableIRQ(irq)        //禁止IRQ
#define set_irq_priority(irq,pri0)      NVIC_SetPriority(irq,pri0)  //设置优先级，优先级范围0-7

#endif
