/*********************************************************************************************************************
 * @file            hf_systick.h
 * @brief           SYSTICK����
 * @author          HeFei WeiHuang
 * @version         1.0
 * @Target core     CH32V103R8T6
 * @date            2021-10-06
 ********************************************************************************************************************/

#ifndef _hf_systick_h
#define _hf_systick_h

#include "common.h"

/* �궨�� */
/* ����SYSTICK��ʱ */
#define systick_delay_ms(time)      systick_delay(time * (sys_clk/8000))    //����SYSTICK��ʱʱ��  ��λms
#define systick_delay_us(time)      systick_delay(time * (sys_clk/8000000)) //����SYSTICK��ʱʱ��  ��λus

/* ���ڻ�ȡ��ǰʱ�� */
#define systick_getval_ms()         systick_getval()/(sys_clk/8000)         //��ȡ��ǰ��ʱʱ��  ��λms
#define systick_getval_us()         systick_getval()/(sys_clk/8000000)      //��ȡ��ǰ��ʱʱ��  ��λus
#define systick_getval_ns()         systick_getval()/(sys_clk/8000000000)   //��ȡ��ǰ��ʱʱ��  ��λns

/* �������� */

/* �ⲿ�������û������е��� */
/* �δ�ʱ������ */
void systick_start(void);
/* ��õ�ǰ�δ�ʱ����ֵ */
void systick_delay(uint64 time);

/* �ڲ��������û������ע */
/* �δ�ʱ����ʱ */
uint32 systick_getval(void);

#endif
