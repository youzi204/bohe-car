/*********************************************************************************************************************
 * @file            car_ultrasonic.h
 * @brief           超声波模块
 * @author          FengLin
 * @version         1.0
 * @Target core     CH32V103R8T6
 * @date            2021-10-07
 ********************************************************************************************************************/

#ifndef _car_ultrasonic_h
#define _car_ultrasonic_h

#include "headfile.h"

/* 宏定义引脚 */
#define pin_trig A4
#define pin_echo A0

/*外部变量声明*/
extern volatile uint32 sum;

/* 函数声明 */

/* 外部函数，用户可自行调用 */
/* 超声波模块初始化 */
void car_ultrasonic_init();
/* 超声波测试距离 */
float car_ultrasonic_getchar();

#endif
