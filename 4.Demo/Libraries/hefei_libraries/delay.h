/*********************************************************************************************************************
 * @file            delay.h
 * @brief           延时函数
 * @author          HeFei WeiHuang
 * @version         1.0
 * @Target core     CH32V103R8T6
 * @date            2021-10-06
 ********************************************************************************************************************/

#ifndef __delay_h
#define __delay_h

#include "common.h"

/* 函数声明  */

/* 外部函数，用户可自行调用  */
/* 延时初始化  */
void Delay_Init(void);
/* us级延时 */
void Delay_Us (uint32_t n);
/* ms级延时 */
void Delay_Ms (uint32_t n);


#endif


