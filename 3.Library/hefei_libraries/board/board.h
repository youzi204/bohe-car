/*********************************************************************************************************************
* @file             board.h
* @brief            ѧϰ�����������ʼ��
* @author           HeFei WeiHuang
* @version          1.0
* @Target core      CH32V103R8T6
* @date             2021-10-06
********************************************************************************************************************/

#ifndef _wh_board_h
#define _w_board_h

#include <hf_uart.h>
#include "ch32v10x_usart.h"

/* �궨�� */
#define PRINTF_ENABLE           1                   //printfʹ��
#define DEBUG_UART              UART_1              //DEBUG����
#define DEBUG_UART_BAUD         115200              //DEBUG���ڲ�����
#define DEBUG_UART_TX_PIN       UART1_TX_A9         //DEBUG����TX����
#define DEBUG_UART_RX_PIN       UART1_RX_A10        //DEBUG����RX����

/* �������� */

/* �ⲿ�������û������е��� */
/* ѧϰ���ʼ�� */
void board_init(void);

#endif
