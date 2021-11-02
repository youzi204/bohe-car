/*********************************************************************************************************************
 * @file            car_Buzzer.h
 * @brief           智能车蜂鸣器控制
 * @author          Davis Klay HF
 * @version         1.0
 * @Target core     CH32V103R8T6
 * @date            2021-10-7
 ********************************************************************************************************************/

#ifndef  _car_Buzzer_h
#define  _car_Buzzer_h


#include "headfile.h"

/* 引脚定义说明 */
#define Buzzer B3

/* 函数声明 */
void Buzzer_Init(void);
void Buzzer_loud(void);
void Buzzer_notloud(void);


#endif
