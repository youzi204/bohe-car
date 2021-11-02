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

//宏定义
#define PWMCH         PWM1_CH4_A11
#define FREQ_DIV      14

#define DO           262
#define RE           294
#define MI           330
#define FA           370
#define SO           415
#define LA           466
#define SI           521


//函数声明
/* 蜂鸣器始化 */
void buzzer_init(void);
/*buzzer频率设置 */
void buzzer_freq(unsigned int freq);
/*PWM 占空比设置*/
void buzzer_duty(unsigned char duty);


//全局变量声明

#endif
