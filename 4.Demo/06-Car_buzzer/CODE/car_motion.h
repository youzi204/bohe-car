/*********************************************************************************************************************
* @file            car_motion.h
* @author          Andreas HF
* @Target core     CH32V103R8T6
* @revisions       -2021.10.22, V1.0
* @modify          none
********************************************************************************************************************/

#ifndef __CAR_MOTION_H
#define __CAR_MOTION_H

#include "headfile.h"

//��������
/* С��ֱ�� */
void car_forward(void);
/* С������ */
void car_back(void);
/* ͣ�� */
void car_stop(void);
/* С����ת */
void car_turnleft(void);
/* С����ת */
void car_turnright(void);

#endif
