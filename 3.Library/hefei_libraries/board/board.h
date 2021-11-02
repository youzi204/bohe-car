/*********************************************************************************************************************
* @file             board.h
* @brief            学习板基本参数初始化
* @author           HeFei WeiHuang
* @version          1.0
* @Target core      CH32V103R8T6
* @date             2021-10-06
********************************************************************************************************************/

#ifndef _wh_board_h
#define _w_board_h

#include <hf_uart.h>
#include "ch32v10x_usart.h"

/* 宏定义 */
#define PRINTF_ENABLE           1                   //printf使能
#define DEBUG_UART              UART_1              //DEBUG串口
#define DEBUG_UART_BAUD         115200              //DEBUG串口波特率
#define DEBUG_UART_TX_PIN       UART1_TX_A9         //DEBUG串口TX引脚
#define DEBUG_UART_RX_PIN       UART1_RX_A10        //DEBUG串口RX引脚

/* 函数声明 */

/* 外部函数，用户可自行调用 */
/* 学习板初始化 */
void board_init(void);

#endif
