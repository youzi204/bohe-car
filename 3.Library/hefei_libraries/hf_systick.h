/*********************************************************************************************************************
 * @file            hf_systick.h
 * @brief           SYSTICK配置
 * @author          HeFei WeiHuang
 * @version         1.0
 * @Target core     CH32V103R8T6
 * @date            2021-10-06
 ********************************************************************************************************************/

#ifndef _hf_systick_h
#define _hf_systick_h

#include "common.h"

/* 宏定义 */
/* 用于SYSTICK延时 */
#define systick_delay_ms(time)      systick_delay(time * (sys_clk/8000))    //设置SYSTICK延时时间  单位ms
#define systick_delay_us(time)      systick_delay(time * (sys_clk/8000000)) //设置SYSTICK延时时间  单位us

/* 用于获取当前时间 */
#define systick_getval_ms()         systick_getval()/(sys_clk/8000)         //获取当前计时时间  单位ms
#define systick_getval_us()         systick_getval()/(sys_clk/8000000)      //获取当前计时时间  单位us
#define systick_getval_ns()         systick_getval()/(sys_clk/8000000000)   //获取当前计时时间  单位ns

/* 函数声明 */

/* 外部函数，用户可自行调用 */
/* 滴答定时器启动 */
void systick_start(void);
/* 获得当前滴答定时器的值 */
void systick_delay(uint64 time);

/* 内部函数，用户无需关注 */
/* 滴答定时器延时 */
uint32 systick_getval(void);

#endif
