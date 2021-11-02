/*********************************************************************************************************************
 * @file            hf_uart.h
 * @brief           UART����
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

/* ö�����Ͷ��� */
/* ö��UART���� */
typedef enum        //��ʼ����ʱ�򣬱���ʹ��ͬһ���������磬UART1_TX_A9��UART1_RX_A10��һ������
{

    UART1_TX_A9 = 0x00,     UART1_RX_A10,   //Ĭ������
    UART1_TX_B6,            UART1_RX_B7,    //��ӳ��

    UART2_TX_A2 = 0x10,     UART2_RX_A3,    //Ĭ������

    UART3_TX_B10 = 0x20,    UART3_RX_B11,   //Ĭ������
    UART3_TX_C10,           UART3_RX_C11    //������ӳ��

}UARTPIN_enum;

/* ö��UART */
typedef enum
{
    UART_1 = 0,
    UART_2,
    UART_3
}UARTN_enum;

/* ö��UART�жϷ�ʽ */
typedef enum
{
    UARTINT_RX = 0,
    UARTINT_TX,
    UARTINT_BOTH
}UARTNINT_enum;

/* �������� */

/* �ⲿ�������û������е��� */
/* ���ڳ�ʼ�� */
void uart_init(UARTN_enum UART_x, uint32 baud, UARTPIN_enum tx_pin, UARTPIN_enum rx_pin);
/* ���ڷ���һ���ֽ� */
void uart_putchar(UARTN_enum UART_x, uint8 dat);
/* ���ڷ������� */
void uart_putbuff(UARTN_enum UART_x, uint8 *buff, uint32 len);
/* ���ڷ����ַ��� */
void uart_putstr(UARTN_enum UART_x, const uint8 *str);
/* �򿪴��ڷ��ͽ����ж� */
uint8 uart_getchar(UARTN_enum UART_x);
/* ��ȡ���ڽ��յ����ݣ�whlie�ȴ��� */
uint8 uart_query(UARTN_enum UART_x, uint8 *dat);
/* ��ȡ���ڽ��յ����ݣ���ѯ���գ� */
void uart_interrupt_init(UARTN_enum UART_x,uint8 status, UARTNINT_enum UARTINT_xx);

/* �ڲ��������û������ע */
/* �������ų�ʼ�� */
void uart_gpio_init(UARTPIN_enum tx_pin, UARTPIN_enum rx_pin);


#endif
