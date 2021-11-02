/*********************************************************************************************************************
* @file            HF_HC_SR04.h
* @author          Andreas HF
* @version         1.0
* @Target core     CH32V103R8T6
* @date            -2021.10.22, V1.0
 ********************************************************************************************************************/

#ifndef _HF_HC_SR04_H
#define _HF_HC_SR04_H

#include "headfile.h"

/* ��Դ���� */
#define TRIG         A4
#define ECHO         A0
#define EXTI_NUM     EXTI_0


//��������
/* ��������ʼ�� */
void ultra_init(void);
/* ����������һ�β����ؾ��� */
unsigned int ultra_get_distance(void);

//ȫ�ֱ�������

#endif
