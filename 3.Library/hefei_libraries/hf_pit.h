/*********************************************************************************************************************
 * @file            hf_pit.h
 * @brief           PIT����
 * @author          HeFei WeiHuang
 * @version         1.0
 * @Target core     CH32V103R8T6
 * @date            2021-10-06
 ********************************************************************************************************************/

#ifndef _hf_pit_h
#define _hf_pit_h

#include "hf_nvic.h"
#include "hf_tim.h"

/* �������� */

/* �ⲿ�������û������е��� */
/* ��ʱ�������ж�(ms) */
void timer_pit_interrupt_ms(TIMERN_enum TIMER_x, uint16 ms);
/* ��ʱ�������ж�(us) */
void timer_pit_interrupt_us(TIMERN_enum TIMER_x, uint16 us);

/* �ڲ��������û������ע */
/* us��ʱ����ʼ */
void timer_pit_start_us(TIMERN_enum TIMER_x);
/* ��ȡ��ʱ��ֵ */
uint16 timer_pit_get_us(TIMERN_enum TIMER_x);
/* �ر�PIT��ʱ�� */
void timer_pit_close(TIMERN_enum TIMER_x);


#endif
