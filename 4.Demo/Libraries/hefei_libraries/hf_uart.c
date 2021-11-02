/*********************************************************************************************************************
 * @file            hf_uart.c
 * @brief           UART配置
 * @author          HeFei WeiHuang
 * @version         1.0
 * @Target core     CH32V103R8T6
 * @date            2021-10-06
 ********************************************************************************************************************/

#include "hf_uart.h"

/* 内部变量定义 */
const uint32 UARTN[] = {USART1_BASE, USART2_BASE, USART3_BASE ,UART4_BASE};

//-------------------------------------------------------------------------------------------------------------------
//  @brief      串口初始化
//  @param      uartn       串口通道
//  @param      baud        波特率
//  @param      tx_pin      串口发送引脚号
//  @param      rx_pin      串口接收引脚号
//  @return     void
//  Sample usage:           uart_init(UART_1, 115200, UART1_TX_A9, UART1_RX_A10); //串口1初始化引脚号,TX为A9,RX为A10
//-------------------------------------------------------------------------------------------------------------------
void uart_init(UARTN_enum UART_x, uint32 baud, UARTPIN_enum tx_pin, UARTPIN_enum rx_pin)
{
    USART_InitTypeDef USART_InitStructure;

    //串口总线使能
    if(UART_1 == UART_x) RCC_APB2PeriphClockCmd(RCC_APB2Periph_USART1, ENABLE);
    else if(UART_2 == UART_x) RCC_APB1PeriphClockCmd(RCC_APB1Periph_USART2, ENABLE);
    else if(UART_3 == UART_x) RCC_APB1PeriphClockCmd(RCC_APB1Periph_USART3, ENABLE);

    //引脚初始化
    uart_gpio_init(tx_pin, rx_pin);

    //串口参数配置
    USART_InitStructure.USART_BaudRate = baud;
    USART_InitStructure.USART_WordLength = USART_WordLength_8b;
    USART_InitStructure.USART_StopBits = USART_StopBits_1;
    USART_InitStructure.USART_Parity = USART_Parity_No;
    USART_InitStructure.USART_HardwareFlowControl = USART_HardwareFlowControl_None;
    USART_InitStructure.USART_Mode = USART_Mode_Tx | USART_Mode_Rx;

    //使能串口
    USART_Init((USART_TypeDef*)UARTN[UART_x], &USART_InitStructure);
    USART_Cmd((USART_TypeDef*)UARTN[UART_x], ENABLE);

}


//-------------------------------------------------------------------------------------------------------------------
//  @brief      串口发送一个字节
//  @param      uartn       串口通道
//  @param      dat         串口数据
//  @return     void
//  Sample usage:           uart_putchar(UART_1, 0x43);        //串口1发送0x43。
//-------------------------------------------------------------------------------------------------------------------
void uart_putchar(UARTN_enum UART_x, uint8 dat)
{
    while((((USART_TypeDef*)UARTN[UART_x])->STATR & USART_FLAG_TXE)==0);
    ((USART_TypeDef*)UARTN[UART_x])->DATAR = dat;
}

//-------------------------------------------------------------------------------------------------------------------
//  @brief      串口发送数组
//  @param      uartn       串口通道
//  @param      buff        要发送的数组地址
//  @param      len         数据长度
//  @return     void
//  Sample usage:           uart_putbuff(UART_1, buff, 10);     //串口1发送10个buff数组。
//-------------------------------------------------------------------------------------------------------------------
void uart_putbuff(UARTN_enum UART_x, uint8 *buff, uint32 len)
{
    while(len--)
        uart_putchar(UART_x, *buff++);
}


//-------------------------------------------------------------------------------------------------------------------
//  @brief      串口发送字符串
//  @param      uartn       串口通道
//  @param      str         字符串首地址
//  @return     void
//  Sample usage:           uart_putstr(UART_1, (uint8 *)"12345")   //串口1发送12345这个字符串
//-------------------------------------------------------------------------------------------------------------------
void uart_putstr(UARTN_enum UART_x, const uint8 *str)
{
    while(*str)
    {
        uart_putchar(UART_x, *str++);
    }
}

//-------------------------------------------------------------------------------------------------------------------
//  @brief      打开串口发送接收中断
//  @param      uartn       串口通道
//  @param      status      使能或者失能
//  @param      UARTINT_xx  中断类型
//                  UARTINT_RX = 0,
//                  UARTINT_TX,
//                  UARTINT_BOTH
//  @return     void
//  Sample usage:           uart_tx_irq(UART_1, DISABLE);       //关闭串口1发送 中断
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
//  @brief      读取串口接收的数据（whlie等待）
//  @param      uartn           串口模块号(UART_1,UART_2,UART_3,UART_4)
//  @param      *dat            接收数据的地址
//  @return     void
//  Sample usage:               uint8 dat; uart_getchar(USART_1,&dat);       // 接收串口1数据  存在在dat变量里
//-------------------------------------------------------------------------------------------------------------------
uint8 uart_getchar(UARTN_enum UART_x)
{
    uint8 dat;
    while((((USART_TypeDef*)UARTN[UART_x])->STATR & USART_FLAG_RXNE) == 0);
    dat = (uint8_t)(((USART_TypeDef*)UARTN[UART_x])->DATAR & (uint16_t)0x01FF);
    return dat;
}

//-------------------------------------------------------------------------------------------------------------------
//  @brief      读取串口接收的数据（查询接收）
//  @param      uartn           串口模块号(UART_1,UART_2,UART_3,UART_4)
//  @param      *dat            接收数据的地址
//  @return     uint8           1：接收成功   0：未接收到数据
//  Sample usage:               uint8 dat; uart_query(USART_1,&dat);       // 接收串口1数据  存在在dat变量里
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
//  @brief      串口引脚初始化
//  @param      tx_pin      串口发送引脚号
//  @param      rx_pin      串口接收引脚号
//  @return     void
//  Sample usage:           内部使用，用户无需关心
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
