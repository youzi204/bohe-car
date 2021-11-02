/*********************************************************************************************************************
* @file            car_motion.h
* @brief           智能车动作控制
* @author          Davis Klay HF
* @version         1.0
* @Target core     GD32E230C8T6
* @date            2021-10-07
********************************************************************************************************************/

#ifndef __CAR_MOTION_H
#define __CAR_MOTION_H

#include "headfile.h"


/* 函数声明 */

/* 外部函数，用户可自行调用 */
/* 小车前进 */
void car_forward();
/* 小车后退 */
void car_back();
/* 小车停止 */
void car_stop();
/* 小车左转 */
void car_turnleft();
/* 小车右转 */
void car_turnright();


#endif
