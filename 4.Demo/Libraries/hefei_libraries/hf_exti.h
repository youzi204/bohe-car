/*********************************************************************************************************************
 * @file            hf_exti.h
 * @brief           EXTI����
 * @author          HeFei WeiHuang
 * @version         1.0
 * @Target core     CH32V103R8T6
 * @date            2021-10-06
 ********************************************************************************************************************/

#ifndef _hf_exti_h
#define _hf_exti_h

#include "hf_gpio.h"

/* ö���жϴ�����ʽ */
typedef enum
{
    RISING = 0x08,
    FALLING = 0x0C,
    BOTH = 0x10
}TRIGGER_enum;

/* �������� */

/* �ⲿ�������û������е��� */
/* ���������ⲿ�ж� */
void exti_enable(PIN_enum pin,TRIGGER_enum trigger);
/* �ر������ⲿ�ж� */
void exti_disable(PIN_enum pin);

#endif
