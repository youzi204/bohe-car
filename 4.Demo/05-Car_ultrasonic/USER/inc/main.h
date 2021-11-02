/*********************************************************************************************************************
* @file            main.h
* @author          Andreas HF
* @version         1.0
* @Target core     CH32V103R8T6
* @date            -2021.10.22, V1.0
********************************************************************************************************************/

//说明：该文件用于存放用户在main函数中用到的变量定义、宏定义内容、函数声明

#ifndef __MAIN_H
#define __MAIN_H

#include "headfile.h"
#include "isr.h"

/* 宏定义 */



/* 变量定义 */



/* 函数声明 */
void uart_send_distance_ascii(unsigned char *ascii_value);

#endif
