/*********************************************************************************************************************
 * @file            car_ultrasonic.h
 * @brief           ������ģ��
 * @author          FengLin
 * @version         1.0
 * @Target core     CH32V103R8T6
 * @date            2021-10-07
 ********************************************************************************************************************/

#ifndef _car_ultrasonic_h
#define _car_ultrasonic_h

#include "headfile.h"

/* �궨������ */
#define pin_trig A4
#define pin_echo A0

/*�ⲿ��������*/
extern volatile uint32 sum;

/* �������� */

/* �ⲿ�������û������е��� */
/* ������ģ���ʼ�� */
void car_ultrasonic_init();
/* ���������Ծ��� */
float car_ultrasonic_getchar();

#endif
