/*********************************************************************************************************************
* @file            car_init.c
* @author          Andreas HF
* @Target core     CH32V103R8T6
* @revisions       -2021.10.22, V1.0
* @modify          none
********************************************************************************************************************/

#include "car_init.h"

//-------------------------------------------------------------------------------------------------------------------
// @brief        ������pwm��ʼ��
// @param        void    
// @return       void
// Sample usage:        car_init(); 
                        //���ܳ���ʼ��
//-------------------------------------------------------------------------------------------------------------------

void car_init()
{
    DisableGlobalIRQ();                                         //Ĭ�Ϲ������ж�
    uart_init(UART_1, 115200U, UART1_TX_A9, UART1_RX_A10);      //����TYPE-C����ͨ�Žӿڣ�����printf��ӡ����
    board_init();                                               //��ر��������������ڳ�ʼ��MPU,ʱ��/���Դ���
    Delay_Init();

    /* ��ʼ����� */
    l9110s_init(left);
    l9110s_init(right);

    /* ��ʼ������ */
    key_init(K1);
    key_init(K2);
    key_init(K3);
    key_init(K4);

    /* ��ʼ��ADC */
    adc_channel_init(ADC_CH_1);
    adc_channel_init(ADC_CH_2);
    adc_channel_init(ADC_CH_3);

    /* ��ʼ������LED */
    board_led_init(LED1);
    board_led_init(LED2);

    /* ��ʼ�������� */
    buzzer_init();
    buzzer_freq(2000);

    /* ��ʼ��RGB���� */
    ws2812b_init();

    /* ��ʼ���ɻɹܰ����� */
    reed_init();

    /* ��ʼ�������  */
    tm1637_init();
    tm1637_command(0x8f);

    /* ��ʼ��������  */
    ultra_init();

    /* ��ʼ���ж� */
    int_init();

    /* ���ж������ */
    EnableGlobalIRQ(0);
}	

//-------------------------------------------------------------------------------------------------------------------
// @brief        �жϳ�ʼ��
// @param        void
// @return       void
// Sample usage:        int_init();//�жϳ�ʼ��
//-------------------------------------------------------------------------------------------------------------------
void int_init(void)
{
    EXTI_ClearITPendingBit(EXTI_Line0);            //������ECHO�����жϳ�ʼ��
    exti_enable(ECHO, BOTH);

    TIM_ITConfig(TIM2,TIM_IT_Update,ENABLE);      //ʹ��ָ����TIM�ж�,��������ж�
    TIM_ClearITPendingBit(TIM2, TIM_IT_Update);

    nvic_init(TIM2_IRQn, 0, 0, ENABLE);
    nvic_init(EXTI0_IRQn, 0, 1, ENABLE);
}
