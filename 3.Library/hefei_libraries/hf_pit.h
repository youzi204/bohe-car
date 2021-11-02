/*********************************************************************************************************************
 * @file            hf_pit.h
 * @brief           PIT配置
 * @author          HeFei WeiHuang
 * @version         1.0
 * @Target core     CH32V103R8T6
 * @date            2021-10-06
 ********************************************************************************************************************/

#ifndef _hf_pit_h
#define _hf_pit_h

#include "hf_nvic.h"
#include "hf_tim.h"

/* 函数声明 */

/* 外部函数，用户可自行调用 */
/* 定时器周期中断(ms) */
void timer_pit_interrupt_ms(TIMERN_enum TIMER_x, uint16 ms);
/* 定时器周期中断(us) */
void timer_pit_interrupt_us(TIMERN_enum TIMER_x, uint16 us);

/* 内部函数，用户无需关注 */
/* us计时器开始 */
void timer_pit_start_us(TIMERN_enum TIMER_x);
/* 获取计时器值 */
uint16 timer_pit_get_us(TIMERN_enum TIMER_x);
/* 关闭PIT定时器 */
void timer_pit_close(TIMERN_enum TIMER_x);


#endif
