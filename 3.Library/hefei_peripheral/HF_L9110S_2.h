/*********************************************************************************************************************
* @file            HF_L9110S_2.h
* @author          Andreas HF
* @version         1.0
* @Target core     CH32V103R8T6
* @date            -2021.10.22, V1.0
********************************************************************************************************************/

#ifndef __HF_L9110S_H
#define __HF_L9110S_H

#include "headfile.h"

/* ��Դ���� */
#define L_PWM_F        PWM4_CH3_B8
#define L_PWM_B        PWM4_CH4_B9
#define R_PWM_F        PWM3_CH3_B0
#define R_PWM_B        PWM3_CH4_B1

/* ���Ͷ��� */
typedef enum
{
    left,
    right
}left_or_right;

//��������
/* �������ʼ�� */
void l9110s_init(left_or_right object);
/* �����ת */
void l9110s_forward(left_or_right object, uint16_t value);
/* �����ת */
void l9110s_back(left_or_right object, uint16_t value);

#endif
