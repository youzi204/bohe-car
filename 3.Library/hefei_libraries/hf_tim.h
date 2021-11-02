/*********************************************************************************************************************
 * @file            hf_tim.h
 * @author          TaoZhihan
 * @version         1.0
 * @Target core     CH32V103R8T6
 * @date            2021-10-06
 ********************************************************************************************************************/

#ifndef _hf_tim_h
#define _hf_tim_h

#include "common.h"
#include "ch32v10x_tim.h"
#include "ch32v10x_rcc.h"

/* 枚举类型声明 */

/* 枚举TIMER */
typedef enum
{
    TIMER_1,
    TIMER_2,
    TIMER_3,
    TIMER_4,
}TIMERN_enum;

/* 枚举TIMER通道 */
typedef enum
{
    CHANNEL_1 =0,
    CHANNEL_2,
    CHANNEL_3,
    CHANNEL_4,
}TIMERN_CHANNEL_enum;

/* 函数声明 */

/* 外部函数，用户可自行调用 */
/* 时基初始化 */
void timbase_init(TIMERN_enum TIMER_x,   uint16 arr, uint16 pre);

#endif
