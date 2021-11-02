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

/* ö���������� */

/* ö��TIMER */
typedef enum
{
    TIMER_1,
    TIMER_2,
    TIMER_3,
    TIMER_4,
}TIMERN_enum;

/* ö��TIMERͨ�� */
typedef enum
{
    CHANNEL_1 =0,
    CHANNEL_2,
    CHANNEL_3,
    CHANNEL_4,
}TIMERN_CHANNEL_enum;

/* �������� */

/* �ⲿ�������û������е��� */
/* ʱ����ʼ�� */
void timbase_init(TIMERN_enum TIMER_x,   uint16 arr, uint16 pre);

#endif
