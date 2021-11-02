/*********************************************************************************************************************
 * @file            hf_exti.h
 * @brief           EXTI配置
 * @author          HeFei WeiHuang
 * @version         1.0
 * @Target core     CH32V103R8T6
 * @date            2021-10-06
 ********************************************************************************************************************/

#ifndef _hf_exti_h
#define _hf_exti_h

#include "hf_gpio.h"

/* 枚举中断触发方式 */
typedef enum
{
    RISING = 0x08,
    FALLING = 0x0C,
    BOTH = 0x10
}TRIGGER_enum;

/* 函数声明 */

/* 外部函数，用户可自行调用 */
/* 开启引脚外部中断 */
void exti_enable(PIN_enum pin,TRIGGER_enum trigger);
/* 关闭引脚外部中断 */
void exti_disable(PIN_enum pin);

#endif
