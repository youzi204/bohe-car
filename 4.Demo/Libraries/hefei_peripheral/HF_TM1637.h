/*********************************************************************************************************************
* @file            HF_TM1637.h
* @author          Andreas HF
* @version         1.0
* @Target core     CH32V103R8T6
* @date            -2021.10.22, V1.0
********************************************************************************************************************/

#ifndef  _HF_TM1637_H
#define  _HF_TM1637_H

#include "headfile.h"

/* LED显示数组，共阴极 */
static const unsigned char leddata[]={
                0x3F,  //"0"
                0x06,  //"1"
                0x5B,  //"2"
                0x4F,  //"3"
                0x66,  //"4"
                0x6D,  //"5"
                0x7D,  //"6"
                0x07,  //"7"
                0x7F,  //"8"
                0x6F,  //"9"
                0x77,  //"A"
                0x7C,  //"B"
                0x39,  //"C"
                0x5E,  //"D"
                0x79,  //"E"
                0x71,  //"F"
                0x00,  //熄灭
                0x00  //自定义
                         };

//宏定义
#define led_scl B10
#define led_sda B11

#define led_scl_clr() gpio_bit_output(led_scl, 0)
#define led_scl_set() gpio_bit_output(led_scl, 1)

#define led_sda_clr() gpio_bit_output(led_sda, 0)
#define led_sda_set() gpio_bit_output(led_sda, 1)

#define led_sda_get()   gpio_get(led_sda)


#define BIT_1    1
#define BIT_2    2
#define BIT_3    3
#define BIT_4    4


//函数声明
/* 数码管初始化 */
void tm1637_init(void);
/* 起始信号 */
void tm1637_start(void);
/* 停止信号 */
void tm1637_stop(void);
/* 写一个字节 */
void tm1637_write_byte(unsigned char dat);
/* 等待应答 */
void tm1637_wait_ack(void);
/* 发送一个命令 */
void tm1637_command(unsigned char cmd);
/* 数码管显示 */
void tm1637_leddisplay(unsigned char num_position, unsigned char num, unsigned char dp);


//全局变量声明

#endif
