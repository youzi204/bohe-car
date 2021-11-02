/*********************************************************************************************************************
 * @file            hf_spi.h
 * @brief           硬件SPI配置
 * @author          HeFei WeiHuang
 * @version         1.0
 * @Target core     CH32V103R8T6
 * @date            2021-10-06
 ********************************************************************************************************************/

#ifndef _hf_spi_h
#define _hf_spi_h

#include "common.h"
#include "ch32v10x_spi.h"
#include "hf_gpio.h"
#include "stddef.h"

/* 枚举类型定义 */
/* 枚举SPI */
typedef enum
{
    SPI_1 = 0x00,
    SPI_2 = 0x01
}SPIN_enum;

/* 枚举SPI通道 */
typedef enum
{
    //----------SPI1----------
    SPI1_SCK_PA5 = 0x00,
    SPI1_MOSI_PA7,
    SPI1_MISO_PA6,

    //重映射
    SPI1_SCK_PB3 = 0x10,
    SPI1_MOSI_PB5,
    SPI1_MISO_PB4,

    //----------SPI2----------
    SPI2_SCK_PB13 = 0x20,
    SPI2_MOSI_PB15,
    SPI2_MISO_PB14,

    SPI_MISO_NULL
}SPI_PIN_enum;

/* 枚举SPI分频系数 */
typedef enum
{
    FPCLK_DIV_2 = 0x00,
    FPCLK_DIV_4,
    FPCLK_DIV_16,
    FPCLK_DIV_32,
    FPCLK_DIV_64,
    FPCLK_DIV_128,
    FPCLK_DIV_256,
}SPI_SPEED_enum;

/* 函数声明 */

/* 外部函数，用户可自行调用 */
/* SPI初始化 */
void spi_init(
        SPIN_enum SPI_x,
        SPI_PIN_enum sck_pin,
        SPI_PIN_enum mosi_pin,
        SPI_PIN_enum miso_pin,
        PIN_enum cs_pin,
        uint8 mode,
        SPI_SPEED_enum BaudRatePrescaler);
/* SPI发送接收函数 */
void spi_mosi(SPIN_enum spi_n, uint8 *modata, uint8 *midata, uint32 len);

/* 内部函数，用户无需关注 */
/* SPI引脚初始化 */
void spi_gpio_init(SPI_PIN_enum sck_pin, SPI_PIN_enum mosi_pin, SPI_PIN_enum miso_pin, PIN_enum cs_pin);


#endif
