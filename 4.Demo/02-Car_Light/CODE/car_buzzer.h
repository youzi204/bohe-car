/*********************************************************************************************************************
* @file            car_buzzer.h
* @author          Andreas HF
* @Target core     CH32V103R8T6
* @revisions       -2021.10.22, V1.0
* @modify          none
********************************************************************************************************************/

#ifndef __CAR_BUZZER_H
#define __CAR_BUZZER_H

#include "headfile.h"

//�궨��
#define PWMCH         PWM1_CH4_A11
#define FREQ_DIV      14

#define DO           262
#define RE           294
#define MI           330
#define FA           370
#define SO           415
#define LA           466
#define SI           521


//��������
/* ������ʼ�� */
void buzzer_init(void);
/*buzzerƵ������ */
void buzzer_freq(unsigned int freq);
/*PWM ռ�ձ�����*/
void buzzer_duty(unsigned char duty);


//ȫ�ֱ�������

#endif
