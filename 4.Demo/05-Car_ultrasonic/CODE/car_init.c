/*********************************************************************************************************************
* @file            car_init.c
* @author          Andreas HF
* @Target core     CH32V103R8T6
* @revisions       -2021.10.22, V1.0
* @modify          none
********************************************************************************************************************/

#include "car_init.h"

//-------------------------------------------------------------------------------------------------------------------
// @brief        左右轮pwm初始化
// @param        void    
// @return       void
// Sample usage:        car_init(); 
                        //智能车初始化
//-------------------------------------------------------------------------------------------------------------------

void car_init()
{
    DisableGlobalIRQ();                                         //默认关所有中断
    uart_init(UART_1, 115200U, UART1_TX_A9, UART1_RX_A10);      //配置TYPE-C串行通信接口，用于printf打印数据
    board_init();                                               //务必保留，本函数用于初始化MPU,时钟/调试串口
    Delay_Init();

    /* 初始化电机 */
    l9110s_init(left);
    l9110s_init(right);

    /* 初始化按键 */
    key_init(K1);
    key_init(K2);
    key_init(K3);
    key_init(K4);

    /* 初始化ADC */
    adc_channel_init(ADC_CH_1);
    adc_channel_init(ADC_CH_2);
    adc_channel_init(ADC_CH_3);

    /* 初始化板载LED */
    board_led_init(LED1);
    board_led_init(LED2);

    /* 初始化蜂鸣器 */
    buzzer_init();
    buzzer_freq(2000);

    /* 初始化RGB引脚 */
    ws2812b_init();

    /* 初始化干簧管板引脚 */
    reed_init();

    /* 初始化数码管  */
    tm1637_init();
    tm1637_command(0x8f);

    /* 初始化超声波  */
    ultra_init();

    /* 初始化中断 */
    int_init();

    /* 总中断最后开启 */
    EnableGlobalIRQ(0);
}	

//-------------------------------------------------------------------------------------------------------------------
// @brief        中断初始化
// @param        void
// @return       void
// Sample usage:        int_init();//中断初始化
//-------------------------------------------------------------------------------------------------------------------
void int_init(void)
{
    EXTI_ClearITPendingBit(EXTI_Line0);            //超声波ECHO引脚中断初始化
    exti_enable(ECHO, BOTH);

    TIM_ITConfig(TIM2,TIM_IT_Update,ENABLE);      //使能指定的TIM中断,允许更新中断
    TIM_ClearITPendingBit(TIM2, TIM_IT_Update);

    nvic_init(TIM2_IRQn, 0, 0, ENABLE);
    nvic_init(EXTI0_IRQn, 0, 1, ENABLE);
}
