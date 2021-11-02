/*********************************************************************************************************************
* @file            board_led.c
* @author          Andreas HF
* @Target core     CH32V103R8T6
* @revisions       -2021.10.22, V1.0
* @modify          none
********************************************************************************************************************/

#ifndef _BOARD_LED_H_
#define _BOARD_LED_H_

#include "headfile.h"

//宏定义
#define LED1    1
#define LED2    2

#define LED1_PIN     C7
#define LED1_MODE    OUT_PP

#define LED2_PIN     C6
#define LED2_MODE    OUT_PP

#define ON      0
#define OFF     1


//函数声明
/*板载LED初始化*/
void board_led_init(unsigned char led_num);
/*板载LED点亮*/
void board_led_on(unsigned char led_num);
/*板载LED熄灭*/
void board_led_off(unsigned char led_num);
/*板载LED电平翻转*/
void board_led_toggle(unsigned char led_num);

//全局变量声明

#endif
