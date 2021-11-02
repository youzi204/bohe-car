/*********************************************************************************************************************
 * @file            hf_uart.c
 * @brief           UART����
 * @author          HeFei WeiHuang
 * @version         1.0
 * @Target core     CH32V103R8T6
 * @date            2021-10-06
 ********************************************************************************************************************/

#include "hf_uart.h"

/* �ڲ��������� */
const uint32 UARTN[] = {USART1_BASE, USART2_BASE, USART3_BASE ,UART4_BASE};

//-------------------------------------------------------------------------------------------------------------------
//  @brief      ���ڳ�ʼ��
//  @param      uartn       ����ͨ��
//  @param      baud        ������
//  @param      tx_pin      ���ڷ������ź�
//  @param      rx_pin      ���ڽ������ź�
//  @return     void
//  Sample usage:           uart_init(UART_1, 115200, UART1_TX_A9, UART1_RX_A10); //����1��ʼ�����ź�,TXΪA9,RXΪA10
//-------------------------------------------------------------------------------------------------------------------
void uart_init(UARTN_enum UART_x, uint32 baud, UARTPIN_enum tx_pin, UARTPIN_enum rx_pin)
{
    USART_InitTypeDef USART_InitStructure;

    //��������ʹ��
    if(UART_1 == UART_x) RCC_APB2PeriphClockCmd(RCC_APB2Periph_USART1, ENABLE);
    else if(UART_2 == UART_x) RCC_APB1PeriphClockCmd(RCC_APB1Periph_USART2, ENABLE);
    else if(UART_3 == UART_x) RCC_APB1PeriphClockCmd(RCC_APB1Periph_USART3, ENABLE);

    //���ų�ʼ��
    uart_gpio_init(tx_pin, rx_pin);

    //���ڲ�������
    USART_InitStructure.USART_BaudRate = baud;
    USART_InitStructure.USART_WordLength = USART_WordLength_8b;
    USART_InitStructure.USART_StopBits = USART_StopBits_1;
    USART_InitStructure.USART_Parity = USART_Parity_No;
    USART_InitStructure.USART_HardwareFlowControl = USART_HardwareFlowControl_None;
    USART_InitStructure.USART_Mode = USART_Mode_Tx | USART_Mode_Rx;

    //ʹ�ܴ���
    USART_Init((USART_TypeDef*)UARTN[UART_x], &USART_InitStructure);
    USART_Cmd((USART_TypeDef*)UARTN[UART_x], ENABLE);

}


//-------------------------------------------------------------------------------------------------------------------
//  @brief      ���ڷ���һ���ֽ�
//  @param      uartn       ����ͨ��
//  @param      dat         ��������
//  @return     void
//  Sample usage:           uart_putchar(UART_1, 0x43);        //����1����0x43��
//-------------------------------------------------------------------------------------------------------------------
void uart_putchar(UARTN_enum UART_x, uint8 dat)
{
    while((((USART_TypeDef*)UARTN[UART_x])->STATR & USART_FLAG_TXE)==0);
    ((USART_TypeDef*)UARTN[UART_x])->DATAR = dat;
}

//-------------------------------------------------------------------------------------------------------------------
//  @brief      ���ڷ�������
//  @param      uartn       ����ͨ��
//  @param      buff        Ҫ���͵������ַ
//  @param      len         ���ݳ���
//  @return     void
//  Sample usage:           uart_putbuff(UART_1, buff, 10);     //����1����10��buff���顣
//-------------------------------------------------------------------------------------------------------------------
void uart_putbuff(UARTN_enum UART_x, uint8 *buff, uint32 len)
{
    while(len--)
        uart_putchar(UART_x, *buff++);
}


//-------------------------------------------------------------------------------------------------------------------
//  @brief      ���ڷ����ַ���
//  @param      uartn       ����ͨ��
//  @param      str         �ַ����׵�ַ
//  @return     void
//  Sample usage:           uart_putstr(UART_1, (uint8 *)"12345")   //����1����12345����ַ���
//-------------------------------------------------------------------------------------------------------------------
void uart_putstr(UARTN_enum UART_x, const uint8 *str)
{
    while(*str)
    {
        uart_putchar(UART_x, *str++);
    }
}

//-------------------------------------------------------------------------------------------------------------------
//  @brief      �򿪴��ڷ��ͽ����ж�
//  @param      uartn       ����ͨ��
//  @param      status      ʹ�ܻ���ʧ��
//  @param      UARTINT_xx  �ж�����
//                  UARTINT_RX = 0,
//                  UARTINT_TX,
//                  UARTINT_BOTH
//  @return     void
//  Sample usage:           uart_tx_irq(UART_1, DISABLE);       //�رմ���1���� �ж�
//-------------------------------------------------------------------------------------------------------------------
void uart_interrupt_init(UARTN_enum UART_x,uint8 status, UARTNINT_enum UARTINT_xx)
{
    if(UARTINT_RX == UARTINT_xx)
    {
        USART_ITConfig(((USART_TypeDef*)UARTN[UART_x]), USART_IT_RXNE, ENABLE);
        nvic_init(USART1_IRQn + UART_x, 0, 0, status);
    }
    else if(UARTINT_TX == UARTINT_xx)
    {
        USART_ITConfig(((USART_TypeDef*)UARTN[UART_x]), USART_IT_TXE, ENABLE);
        nvic_init(USART1_IRQn + UART_x, 0, 0, status);
    }
    else if (UARTINT_BOTH == UARTINT_xx)
    {
        USART_ITConfig(((USART_TypeDef*)UARTN[UART_x]), USART_IT_RXNE, ENABLE);
        nvic_init(USART1_IRQn + UART_x, 0, 0, status);
        USART_ITConfig(((USART_TypeDef*)UARTN[UART_x]), USART_IT_TXE, ENABLE);
        nvic_init(USART1_IRQn + UART_x, 0, 1, status);
    }
}

//-------------------------------------------------------------------------------------------------------------------
//  @brief      ��ȡ���ڽ��յ����ݣ�whlie�ȴ���
//  @param      uartn           ����ģ���(UART_1,UART_2,UART_3,UART_4)
//  @param      *dat            �������ݵĵ�ַ
//  @return     void
//  Sample usage:               uint8 dat; uart_getchar(USART_1,&dat);       // ���մ���1����  ������dat������
//-------------------------------------------------------------------------------------------------------------------
uint8 uart_getchar(UARTN_enum UART_x)
{
    uint8 dat;
    while((((USART_TypeDef*)UARTN[UART_x])->STATR & USART_FLAG_RXNE) == 0);
    dat = (uint8_t)(((USART_TypeDef*)UARTN[UART_x])->DATAR & (uint16_t)0x01FF);
    return dat;
}

//-------------------------------------------------------------------------------------------------------------------
//  @brief      ��ȡ���ڽ��յ����ݣ���ѯ���գ�
//  @param      uartn           ����ģ���(UART_1,UART_2,UART_3,UART_4)
//  @param      *dat            �������ݵĵ�ַ
//  @return     uint8           1�����ճɹ�   0��δ���յ�����
//  Sample usage:               uint8 dat; uart_query(USART_1,&dat);       // ���մ���1����  ������dat������
//-------------------------------------------------------------------------------------------------------------------
uint8 uart_query(UARTN_enum UART_x, uint8 *dat)
{
    if((((USART_TypeDef*)UARTN[UART_x])->STATR & USART_FLAG_RXNE) != 0)
    {
        *dat = (uint16_t)(((USART_TypeDef*)UARTN[UART_x])->DATAR & (uint16_t)0x01FF);
        return 1;
    }
    return 0;
}

//-------------------------------------------------------------------------------------------------------------------
//  @brief      �������ų�ʼ��
//  @param      tx_pin      ���ڷ������ź�
//  @param      rx_pin      ���ڽ������ź�
//  @return     void
//  Sample usage:           �ڲ�ʹ�ã��û��������
//-------------------------------------------------------------------------------------------------------------------
void uart_gpio_init(UARTPIN_enum tx_pin, UARTPIN_enum rx_pin)
{
    if(tx_pin == UART1_TX_A9 && rx_pin == UART1_RX_A10)
    {
        gpio_init(A9, GPO, 0, SPEED_50MHZ|OUT_AF_PP);
        gpio_init(A10, GPI, 0, IN_FLOAT);
    }
    else if(tx_pin == UART1_TX_B6)
    {
        gpio_init(B6, GPO, 0, SPEED_50MHZ|OUT_AF_PP);
        gpio_init(B7, GPI, 0, IN_FLOAT);

    }
    else if(tx_pin == UART2_TX_A2)
    {
        gpio_init(A2, GPO, 0, SPEED_50MHZ|OUT_AF_PP);
        gpio_init(A3, GPI, 0, IN_FLOAT);

    }
    else if(tx_pin == UART3_TX_B10)
    {
        gpio_init(B10, GPO, 0, SPEED_50MHZ|OUT_AF_PP);
        gpio_init(B11, GPI, 0, IN_FLOAT);

    }
    else if(tx_pin == UART3_TX_C10)
    {
        gpio_init(C10, GPO, 0, SPEED_50MHZ|OUT_PP);
        gpio_init(C11, GPI, 0, IN_FLOAT);
    }
}
