/*********************************************************************************************************************
 * @file            hf_nvic.h
 * @brief           NVIC����
 * @author          HeFei WeiHuang
 * @version         1.0
 * @Target core     CH32V103R8T6
 * @date            2021-10-06
 ********************************************************************************************************************/

#ifndef _hf_nvic_h
#define _hf_nvic_h

#include "common.h"
#include "board.h"
#include "ch32v10x_misc.h"

/* ��������*/

/* �ⲿ�������û������е��� */
/* �жϳ�ʼ�� */
void nvic_init(IRQn_Type irqn,uint8 preemption_priority, uint8 sub_priority,uint8 status);
/* �ر����ж� */
uint8 DisableGlobalIRQ(void);
/* �����ж� */
void EnableGlobalIRQ(uint8 state);

/* �ڲ��������û������ע */
/* �ر������ж� */
void close_all_irq(void);
/* �ָ�֮ǰ�رյ��ж�ֵ */
void sys_recover_irq(void);

#endif
