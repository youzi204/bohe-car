/*********************************************************************************************************************
 * @file            car_four_keys.c
 * @brief           �İ�������
 * @author          HeFei
 * @version         1.0
 * @Target core     CH32V103R8T6
 * @date            2021-10-06
 ********************************************************************************************************************/
#include "car_four_keys.h"
#include "car_led_display.h"

//-------------------------------------------------------------------------------------------------------------------
// @brief        ��ʼ���İ���
// @param        none
// @return       void
// Sample usage:        key_init();
//                      ��ʼ���İ���
//-------------------------------------------------------------------------------------------------------------------
void four_keys_init()
{
    gpio_init(key1, GPI, 1, SPEED_50MHZ|IN_PULLUP);
    gpio_init(key2, GPI, 1, SPEED_50MHZ|IN_PULLUP);
    gpio_init(key3, GPI, 1, SPEED_50MHZ|IN_PULLUP);
    gpio_init(key4, GPI, 1, SPEED_50MHZ|IN_PULLUP);
}

//-------------------------------------------------------------------------------------------------------------------
// @brief        �İ�����ʾ
// @param        none
// @return       void
// Sample usage:        key_init();
//                      �İ�����ʾ
//-------------------------------------------------------------------------------------------------------------------
int keys_value_dispaly()
{
    while(1)
    {
        if(RESET == gpio_get_input(key1))
        {
            Delay_Ms(100);
            if(RESET == gpio_get_input(key1))
            {
                led_display_on(one, one, one, one);
            }
         }
        if(RESET == gpio_get_input(key2))
        {
            Delay_Ms(100);
            if(RESET == gpio_get_input(key2))
            {
                led_display_on(two, two, two, two);
            }
        }
        if(RESET == gpio_get_input(key3))
        {
            Delay_Ms(100);
            if(RESET == gpio_get_input(key3))
            {
                led_display_on(three, three, three, three);
            }
        }
        if(RESET == gpio_get_input(key4))
        {
            Delay_Ms(100);
            if(RESET == gpio_get_input(key4))
            {
                led_display_on(four, four, four, four);
            }
        }
    }
}
