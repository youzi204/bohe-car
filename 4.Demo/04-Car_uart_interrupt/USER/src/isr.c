/*********************************************************************************************************************
 * @file            isr.c
 * @author          Andreas WH
 * @version         1.0
 * @Target core     CH32V103R8T6
 * @date            2021-10-22
 ********************************************************************************************************************/

#include "isr.h"
#include "headfile.h"

extern unsigned char g_rx_char;
extern unsigned char g_uart_flag;

void NMI_Handler(void) __attribute__((interrupt("WCH-Interrupt-fast")));
void HardFault_Handler(void) __attribute__((interrupt("WCH-Interrupt-fast")));
void EXTI0_IRQHandler(void) __attribute__((interrupt("WCH-Interrupt-fast")));
void EXTI1_IRQHandler(void) __attribute__((interrupt("WCH-Interrupt-fast")));
void EXTI2_IRQHandler(void) __attribute__((interrupt("WCH-Interrupt-fast")));
void EXTI3_IRQHandler(void) __attribute__((interrupt("WCH-Interrupt-fast")));
void EXTI4_IRQHandler(void) __attribute__((interrupt("WCH-Interrupt-fast")));
void ADC1_2_IRQHandler(void) __attribute__((interrupt("WCH-Interrupt-fast")));
void EXTI9_5_IRQHandler(void) __attribute__((interrupt("WCH-Interrupt-fast")));
void TIM1_UP_IRQHandler(void) __attribute__((interrupt("WCH-Interrupt-fast")));
void TIM2_IRQHandler(void) __attribute__((interrupt("WCH-Interrupt-fast")));
void TIM3_IRQHandler(void) __attribute__((interrupt("WCH-Interrupt-fast")));
void TIM4_IRQHandler(void) __attribute__((interrupt("WCH-Interrupt-fast")));
void USART1_IRQHandler(void) __attribute__((interrupt("WCH-Interrupt-fast")));
void USART2_IRQHandler(void) __attribute__((interrupt("WCH-Interrupt-fast")));
void USART3_IRQHandler(void) __attribute__((interrupt("WCH-Interrupt-fast")));
void EXTI15_10_IRQHandler(void) __attribute__((interrupt("WCH-Interrupt-fast")));


/*******************************************************************************
* Function Name  : NMI_Handler
* Description    : This function handles NMI exception.
* Input          : None
* Return         : None
*******************************************************************************/
void NMI_Handler(void)
{
    ;
}

/*******************************************************************************
* Function Name  : HardFault_Handler
* Description    : This function handles Hard Fault exception.
* Input          : None
* Return         : None
*******************************************************************************/
void HardFault_Handler(void)
{

  while (1)
  {
      ;
  }
}


//以下为中断服务函数，用户可根据需要，在对应函数内添加内容

/* EXTI0 中断服务函数 */
void EXTI0_IRQHandler(void)
{
    if(RESET != EXTI_GetITStatus(EXTI_Line0))
    {
        EXTI_ClearITPendingBit(EXTI_Line0);

    }


}

/* EXTI1 中断服务函数 */
void EXTI1_IRQHandler(void)
{
    ;
}

/* EXTI2 中断服务函数 */
void EXTI2_IRQHandler(void)
{
    ;
}

/* EXTI3 中断服务函数 */
void EXTI3_IRQHandler(void)
{
    ;
}

/* EXTI4 中断服务函数 */
void EXTI4_IRQHandler(void)
{
    ;
}

/* EXTI9_5 中断服务函数 */
void EXTI9_5_IRQHandler(void)
{
    ;
}

/* EXTI15_10 中断服务函数 */
void EXTI15_10_IRQHandler(void)
{
    ;
}

/* ADC1_2 中断服务函数 */
void ADC1_2_IRQHandler(void)
{
    ;
}

/* TIM1_UP 中断服务函数 */
void TIM1_UP_IRQHandler(void)
{
    if(TIM_GetITStatus(TIM1, TIM_IT_Update) != RESET)
    {
        TIM_ClearITPendingBit(TIM1, TIM_IT_Update);

    }
}

/* TIM2 中断服务函数 */
void TIM2_IRQHandler(void)
{
    if(TIM_GetITStatus(TIM2, TIM_IT_Update) != RESET)
    {
        TIM_ClearITPendingBit(TIM2, TIM_IT_Update);

    }
}

/* TIM3 中断服务函数 */
void TIM3_IRQHandler(void)
{
    if(TIM_GetITStatus(TIM3, TIM_IT_Update) != RESET)
    {
        TIM_ClearITPendingBit(TIM3, TIM_IT_Update);

    }
}

/* TIM4 中断服务函数 */
void TIM4_IRQHandler(void)
{
    if(TIM_GetITStatus(TIM4, TIM_IT_Update) != RESET)
    {
        TIM_ClearITPendingBit(TIM4, TIM_IT_Update);

    }
}

/* USART1 中断服务函数 */
void USART1_IRQHandler(void)
{
    if(USART_GetITStatus(USART1 , USART_IT_RXNE)!= RESET)
        {
            while((USART1->STATR & USART_FLAG_RXNE) == 0);
            g_uart_flag = 1;
            g_rx_char = USART_ReceiveData(USART1);
        }
}

/* USART2 中断服务函数 */
void USART2_IRQHandler(void)
{
    if(USART_GetITStatus(USART2, USART_IT_RXNE) != RESET)
    {
        USART_ClearITPendingBit(USART2, USART_IT_RXNE);

    }
}

/* USART3 中断服务函数 */
void USART3_IRQHandler(void)
{
    if(USART_GetITStatus(USART3, USART_IT_RXNE) != RESET)
    {
        USART_ClearITPendingBit(USART3, USART_IT_RXNE);

    }
}
