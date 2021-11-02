/*********************************************************************************************************************
* @file            car_uart.h
* @author          Andreas HF
* @Target core     CH32V103R8T6
* @revisions       -2021.10.22, V1.0
* @modify          none
********************************************************************************************************************/
#ifndef CAR_UART_H_
#define CAR_UART_H_

#include "headfile.h"

//宏定义
#define UART1            USART1
#define UART1_TXD_PORT   GPIOA
#define UART1_TXD_PIN    GPIO_PIN_9
#define UART1_RXD_PORT   GPIOA
#define UART1_RXD_PIN    GPIO_PIN_10
#define UART1_BAUDRATE   115200

#define UART2            USART2
#define UART2_TXD_PORT   GPIOA
#define UART2_TXD_PIN    GPIO_PIN_2
#define UART2_RXD_PORT   GPIOA
#define UART2_RXD_PIN    GPIO_PIN_3
#define UART2_BAUDRATE   115200


//函数声明
/*串口1初始化*/
void uart1_init(unsigned int uart_periph);
/*串口2初始化*/
void uart2_init(unsigned int uart_periph);
/*串口发送一个字节*/
void uart_send_char(unsigned int uart_periph, unsigned char dat);
/*串口接收数据*/
unsigned char uart_receive(unsigned int uart_periph);


//全局变量声明


#endif
