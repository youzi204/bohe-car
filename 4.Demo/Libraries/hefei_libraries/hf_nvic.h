/*********************************************************************************************************************
 * @file            hf_nvic.h
 * @brief           NVIC配置
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

/* 函数声明*/

/* 外部函数，用户可自行调用 */
/* 中断初始化 */
void nvic_init(IRQn_Type irqn,uint8 preemption_priority, uint8 sub_priority,uint8 status);
/* 关闭总中断 */
uint8 DisableGlobalIRQ(void);
/* 打开总中断 */
void EnableGlobalIRQ(uint8 state);

/* 内部函数，用户无需关注 */
/* 关闭所有中断 */
void close_all_irq(void);
/* 恢复之前关闭的中断值 */
void sys_recover_irq(void);

#endif
