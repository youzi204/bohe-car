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

/* �궨�� */
#define enable_irq(irq)                 NVIC_EnableIRQ(irq)         //ʹ��IRQ
#define disable_irq(irq)                NVIC_DisableIRQ(irq)        //��ֹIRQ
#define set_irq_priority(irq,pri0)      NVIC_SetPriority(irq,pri0)  //�������ȼ������ȼ���Χ0-7

#endif
