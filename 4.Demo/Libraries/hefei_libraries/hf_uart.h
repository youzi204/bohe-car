/*********************************************************************************************************************
 * @file            hf_uart.h
 * @brief           UART配置
 * @author          HeFei WeiHuang
 * @version         1.0
 * @Target core     CH32V103R8T6
 * @date            2021-10-06
 ********************************************************************************************************************/

#ifndef _hf_uart_h
#define _hf_uart_h

#include "common.h"
#include "ch32v10x_rcc.h"
#include "ch32v10x_usart.h"
#include "hf_gpio.h"
#include "hf_nvic.h"

/* 枚举类型定义 */
/* 枚举UART引脚 */
typedef enum        //初始化的时候，必须使用同一组引脚例如，UART1_TX_A9和UART1_RX_A10是一组引脚
{

    UART1_TX_A9 = 0x00,     UART1_RX_A10,   //默认引脚
    UART1_TX_B6,            UART1_RX_B7,    //重映射

    UART2_TX_A2 = 0x10,     UART2_RX_A3,    //默认引脚

    UART3_TX_B10 = 0x20,    UART3_RX_B11,   //默认引脚
    UART3_TX_C10,           UART3_RX_C11    //部分重映射

}UARTPIN_enum;

/* 枚举UART */
typedef enum
{
    UART_1 = 0,
    UART_2,
    UART_3
}UARTN_enum;

/* 枚举UART中断方式 */
typedef enum
{
    UARTINT_RX = 0,
    UARTINT_TX,
    UARTINT_BOTH
}UARTNINT_enum;

/* 函数声明 */

/* 外部函数，用户可自行调用 */
/* 串口初始化 */
void uart_init(UARTN_enum UART_x, uint32 baud, UARTPIN_enum tx_pin, UARTPIN_enum rx_pin);
/* 串口发送一个字节 */
void uart_putchar(UARTN_enum UART_x, uint8 dat);
/* 串口发送数组 */
void uart_putbuff(UARTN_enum UART_x, uint8 *buff, uint32 len);
/* 串口发送字符串 */
void uart_putstr(UARTN_enum UART_x, const uint8 *str);
/* 打开串口发送接收中断 */
uint8 uart_getchar(UARTN_enum UART_x);
/* 读取串口接收的数据（whlie等待） */
uint8 uart_query(UARTN_enum UART_x, uint8 *dat);
/* 读取串口接收的数据（查询接收） */
void uart_interrupt_init(UARTN_enum UART_x,uint8 status, UARTNINT_enum UARTINT_xx);

/* 内部函数，用户无需关注 */
/* 串口引脚初始化 */
void uart_gpio_init(UARTPIN_enum tx_pin, UARTPIN_enum rx_pin);


#endif
