/*********************************************************************************************************************
 * @file            hf_gpio.h
 * @brief           GPIO����
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

/* �궨�� */
#define GPIOx_BASE      GPIOA_BASE//ƫ��0x0400
#define GPIO_PIN_CONFIG (SPEED_50MHZ | OUT_PP)              //�궨��GPIO���ŵ�Ĭ�����ã����ڳ�ʼ��GPIOʱ������д�����������Ҫ���������������޸�
#define GPIO_INT_CONFIG (IN_PULLUP)                         //�궨��GPIO�ж����ŵ�Ĭ�����ã����ڳ�ʼ��GPIO�ж�ʱ������д�����������Ҫ���������������޸�
/* GPIO��ַ */
#define GPIO_IDR_ADDR(X,Y)  (0x40010808 + X*0x400 + Y)
//X = 0����A=�˿� , X = 1����B�˿� ,��������
//X = 0,Y = 0���� A0�˿ڵ�ַ �� X = 0,Y = 1���� A8�˿ڵ�ַ
/* GPIO��λ */
#define GPIO_PIN_RESET(x)   ((GPIO_TypeDef *)(GPION[(uint8)((x & 0xE0) >> 5)]))->BCR  = (uint16)(1 << (x & 0x1F))
/* GPIO��λ */
#define GPIO_PIN_SET(x)     ((GPIO_TypeDef *)(GPION[(uint8)((x & 0xE0) >> 5)]))->BSHR  = (uint16)(1 << (x & 0x1F))
/* �жϱ�־λ���    */
#define CLEAR_GPIO_FLAG(pin) GPIO_ClearPinsInterruptFlags(PORTPTR[pin>>5], 1<<(pin&0x1f));

/* �����ⲿ���� */
extern const uint32 GPION[4];

/* ö�ٶ������� */
/* ö��GPIO�˿� */
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

    PIN_NULL = 128,                               //������
}PIN_enum;

/* ö��GPIO����ٶ� */
typedef enum
{
    SPEED_10MHZ = 0x100,
    SPEED_2MHZ = 0x200,
    SPEED_50MHZ = 0x300
}GPIOSPEED_enum;

/* ö��GPIO���� */
typedef enum
{
    IN_AIN = 0x00,              //ģ������ģʽ
    IN_FLOAT = 0x04,            //��������ģʽ
    IN_PULLDOWN = 0x28,         //��������
    IN_PULLUP = 0x48,           //��������

    OUT_PP = 0x10,              //ͨ���������ģʽ
    OUT_OD = 0x14,              //ͨ�ÿ�©���ģʽ
    OUT_AF_PP = 0x18,           //���ù����������ģʽ
    OUT_AF_OD = 0x1C,           //���ù��ܿ�©���ģʽ

}GPIOMODE_enum;

/* ö��GPIO�˿ڷ��� */
typedef enum
{
    GPI = 0, //����ܽ����뷽��
    GPO = 1, //����ܽ��������
}GPIODIR_enum;

/* �������� */

/* �ⲿ�������û������е��� */
/* GPIO��ʼ�� */
void gpio_init(PIN_enum pin, GPIODIR_enum dir, uint8 dat, uint32 pinconf);
/* GPIO������� */
void gpio_bit_output(PIN_enum pin, uint8 dat);
/* GPIO״̬��ȡ����״̬ */
uint8 gpio_get_input(PIN_enum pin);
/* GPIO״̬��ȡ���״̬ */
uint8 gpio_get_output(PIN_enum pin);
/* GPIO ��ת */
void gpio_toggle(PIN_enum pin);


#endif
