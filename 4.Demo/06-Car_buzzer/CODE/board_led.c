/*********************************************************************************************************************
* @file            board_led.c
* @author          Andreas HF
* @Target core     CH32V103R8T6
* @revisions       -2021.10.22, V1.0
* @modify          none
********************************************************************************************************************/

#include "board_led.h"

//-------------------------------------------------------------------------------------------------------------------
// @brief        ����LED��ʼ��
// @param        led_num            ѡ��LED��LEDx(x = 1.2)
// @return       void
// Sample usage:       board_led_init(LED1);//����LED1��ʼ��
//-------------------------------------------------------------------------------------------------------------------
void board_led_init(unsigned char led_num)
{
    if(led_num == LED1)
    {
        gpio_init(LED1_PIN, GPO, 1, SPEED_50MHZ|LED1_MODE);
    }
    if(led_num == LED2)
    {
        gpio_init(LED2_PIN, GPO, 1, SPEED_50MHZ|LED2_MODE);
    }
}

//-------------------------------------------------------------------------------------------------------------------
// @brief        ����LED����
// @param        led_num            ѡ��LED��LEDx(x = 1.2)
// @return       void
// Sample usage:       board_led_on(LED1);//��������LED1
//-------------------------------------------------------------------------------------------------------------------
void board_led_on(unsigned char led_num)
{
    if(led_num == LED1)
    {
        gpio_bit_output(LED1_PIN,ON);
    }
    if(led_num == LED2)
    {
        gpio_bit_output(LED2_PIN,ON);
    }
}

//-------------------------------------------------------------------------------------------------------------------
// @brief        ����LED��ƽ��ת
// @param        led_num            ѡ��LED��LEDx(x = 1.2)
// @return       void
// Sample usage:       board_led_toggle(LED1);//����LED1��ת
//-------------------------------------------------------------------------------------------------------------------
void board_led_off(unsigned char led_num)
{
    if(led_num == LED1)
    {
        gpio_bit_output(LED1_PIN,OFF);
    }
    if(led_num == LED2)
    {
        gpio_bit_output(LED2_PIN,OFF);
    }
}

//����LED��ƽ��ת
void board_led_toggle(unsigned char led_num)
{
    if(led_num == LED1)
    {
        gpio_toggle(LED1_PIN);
    }
    if(led_num == LED2)
    {
        gpio_toggle(LED2_PIN);
    }
}
