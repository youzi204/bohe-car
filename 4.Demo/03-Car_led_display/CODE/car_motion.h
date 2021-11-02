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

//函数定义
/* 小车直行 */
void car_forward(void);
/* 小车倒车 */
void car_back(void);
/* 停车 */
void car_stop(void);
/* 小车左转 */
void car_turnleft(void);
/* 小车右转 */
void car_turnright(void);

#endif
