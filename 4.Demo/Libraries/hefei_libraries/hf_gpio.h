/*********************************************************************************************************************
 * @file            hf_gpio.h
 * @brief           GPIO配置
 * @author          HeFei WeiHuang
 * @version         1.0
 * @Target core     CH32V103R8T6
 * @date            2021-10-06
 ********************************************************************************************************************/

#ifndef _hf_gpio_h
#define _hf_gpio_h

#include "ch32v10x_gpio.h"
#include "ch32v10x_rcc.h"
#include "ch32v10x_exti.h"
#include "common.h"

/* 宏定义 */
#define GPIOx_BASE      GPIOA_BASE//偏移0x0400
#define GPIO_PIN_CONFIG (SPEED_50MHZ | OUT_PP)              //宏定义GPIO引脚的默认配置，便于初始化GPIO时快速填写参数，如果需要其他参数可自行修改
#define GPIO_INT_CONFIG (IN_PULLUP)                         //宏定义GPIO中断引脚的默认配置，便于初始化GPIO中断时快速填写参数，如果需要其他参数可自行修改
/* GPIO地址 */
#define GPIO_IDR_ADDR(X,Y)  (0x40010808 + X*0x400 + Y)
//X = 0代表A=端口 , X = 1代表B端口 ,依次类推
//X = 0,Y = 0代表 A0端口地址 ， X = 0,Y = 1代表 A8端口地址
/* GPIO复位 */
#define GPIO_PIN_RESET(x)   ((GPIO_TypeDef *)(GPION[(uint8)((x & 0xE0) >> 5)]))->BCR  = (uint16)(1 << (x & 0x1F))
/* GPIO置位 */
#define GPIO_PIN_SET(x)     ((GPIO_TypeDef *)(GPION[(uint8)((x & 0xE0) >> 5)]))->BSHR  = (uint16)(1 << (x & 0x1F))
/* 中断标志位清除    */
#define CLEAR_GPIO_FLAG(pin) GPIO_ClearPinsInterruptFlags(PORTPTR[pin>>5], 1<<(pin&0x1f));

/* 引用外部变量 */
extern const uint32 GPION[4];

/* 枚举定义声明 */
/* 枚举GPIO端口 */
typedef enum
{
    A0 = 0,  A1,  A2,  A3,  A4,  A5,  A6,  A7,
    A8,  A9,  A10, A11, A12, A13, A14, A15,

    B0 = 32,  B1,  B2,  B3,  B4,  B5,  B6,  B7,
    B8,  B9,  B10, B11, B12, B13, B14, B15,

    C0 = 64,  C1,  C2,  C3,  C4,  C5,  C6,  C7,
    C8,  C9,  C10, C11, C12, C13, C14, C15,

    D0 = 96,  D1,  D2,  D3,  D4,  D5,  D6,  D7,
    D8,  D9,  D10, D11, D12, D13, D14, D15,

    PIN_NULL = 128,                               //空引脚
}PIN_enum;

/* 枚举GPIO输出速度 */
typedef enum
{
    SPEED_10MHZ = 0x100,
    SPEED_2MHZ = 0x200,
    SPEED_50MHZ = 0x300
}GPIOSPEED_enum;

/* 枚举GPIO配置 */
typedef enum
{
    IN_AIN = 0x00,              //模拟输入模式
    IN_FLOAT = 0x04,            //浮空输入模式
    IN_PULLDOWN = 0x28,         //下拉输入
    IN_PULLUP = 0x48,           //上拉输入

    OUT_PP = 0x10,              //通用推挽输出模式
    OUT_OD = 0x14,              //通用开漏输出模式
    OUT_AF_PP = 0x18,           //复用功能推挽输出模式
    OUT_AF_OD = 0x1C,           //复用功能开漏输出模式

}GPIOMODE_enum;

/* 枚举GPIO端口方向 */
typedef enum
{
    GPI = 0, //定义管脚输入方向
    GPO = 1, //定义管脚输出方向
}GPIODIR_enum;

/* 函数声明 */

/* 外部函数，用户可自行调用 */
/* GPIO初始化 */
void gpio_init(PIN_enum pin, GPIODIR_enum dir, uint8 dat, uint32 pinconf);
/* GPIO输出设置 */
void gpio_bit_output(PIN_enum pin, uint8 dat);
/* GPIO状态获取输入状态 */
uint8 gpio_get_input(PIN_enum pin);
/* GPIO状态获取输出状态 */
uint8 gpio_get_output(PIN_enum pin);
/* GPIO 翻转 */
void gpio_toggle(PIN_enum pin);


#endif
