/*********************************************************************************************************************
 * @file            hf_reed_switch.h
 * @brief           干簧管检测磁场
 * @author          HeFei WeiHuang
 * @version         1.1
 * @Target core     CH32V103R8T6
 * @date            2021-10-06
 ********************************************************************************************************************/

#ifndef _hf_reed_switch_h
#define _hf_reed_switch_h

#include "headfile.h"

/* 引脚定义说明 */
#define reed_switch B3
#define led1 C6
#define led2 C7



/* 函数声明 */
void reed_led_init(void);
void reed_init(void);
uint32 get_gpio_group(PIN_enum pin);
uint8 get_gpio_pin(PIN_enum pin);
void gpio_init(PIN_enum pin, GPIODIR_enum dir, uint8 dat, uint32 pinconf);
void gpio_bit_output(PIN_enum pin, uint8 dat);

#endif
