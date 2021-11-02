/*********************************************************************************************************************
 * @file            hf_pwm.h
 * @author          TaoZhihan
 * @version         1.0
 * @Target core     CH32V103R8T6
 * @date            2021-10-06
 ********************************************************************************************************************/

#ifndef _hf_pwm_h
#define _hf_pwm_h

#include "hf_gpio.h"
#include "hf_tim.h"

/* �궨�� */
#define PWM_DUTY_MAX 10000

/* ö�����Ͷ��� */
/* ö��PWMͨ�� */
typedef enum
{
    //ͬһ��PWMPģ�鲻ͬͨ��ֻ�������ͬƵ�ʵ�PWM��ռ�ձȿ����ò�ͬ
    //����PWM1_CH1_PA8��PWM1_CH3_PA10����ͬһ����ģ�飬Ƶ��ֻ��һ��������ռ�ձȿ��Բ�һ��

    //----------------PWM1----------------
    //����ΪTIMER1��PWM��һ��ͨ����������ͨ�����á�
    //���磺PWM1_CH2_PA9��PWM1_CH1N_PB13����ͬʱʹ�á�
    PWM1_CH1_A8 = 0x0000,
    PWM1_CH2_A9,
    PWM1_CH3_A10,
    PWM1_CH4_A11,


    //----------------PWM2----------------
    //����ΪTIMER2��PWM��һ��ͨ����������ͨ�����á�
    //���磺PWM2_CH2_PA1��PWM2_CH3_PB10����ͬʱʹ�á�
    PWM2_CH1_A0 = 0x0100,
    PWM2_CH2_A1,
    PWM2_CH3_A2,
    PWM2_CH4_A3,

    //����ΪTIMER2��PWM��һ��ͨ����������ͨ�����á�
    PWM2_CH1_A15 = 0x0110,     //��ȫӳ��
    PWM2_CH2_B3,               //��ȫӳ��
    PWM2_CH3_B10,              //��ȫӳ��
    PWM2_CH4_B11,              //��ȫӳ��

    //----------------PWM3----------------
    ///����ΪTIMER3��PWM��һ��ͨ����������ͨ�����á�
    //���磺PWM3_CH1_PA6��PWM2_CH3_PB10����ͬʱʹ�á�
    PWM3_CH1_A6 = 0x0200,
    PWM3_CH2_A7,
    PWM3_CH3_B0,
    PWM3_CH4_B1,

    //����ΪTIMER3��PWM��һ��ͨ����������ͨ�����á�
    PWM3_CH1_C6 = 0x0210,      //��ȫӳ��
    PWM3_CH2_C7,               //��ȫӳ��
    PWM3_CH3_C8,               //��ȫӳ��
    PWM3_CH4_C9,               //��ȫӳ��

    //����ΪTIMER3��PWM��һ��ͨ����������ͨ�����á�
    PWM3_CH1_B4 = 0x0220,      //����ӳ��
    PWM3_CH2_B5,               //����ӳ��

    //----------------PWM4----------------
    //����ΪTIMER4��PWM��һ��ͨ����
    PWM4_CH1_B6 = 0x0300,
    PWM4_CH2_B7,
    PWM4_CH3_B8,
    PWM4_CH4_B9

}PWMCH_enum;

/* �������� */

/* �ⲿ�������û������е��� */
/* PWM��ʼ�� */
void pwm_init(PWMCH_enum pwmch, uint32 freq, uint32 duty, uint16_t TIM_OCPreload_Enable_Disable);
/* PWMռ�ձ��趨 */
void pwm_duty(PWMCH_enum pwmch, uint32 duty);
/* PWMƵ���趨 */
void pwm_freq(PWMCH_enum pwmch, uint32 freq);
/* PWMֹͣ��� */
void pwm_stop(PWMCH_enum pwmch);

/* �ڲ��������û������ע */
/* PWM���ų�ʼ�� */
void pwm_gpio_init(PWMCH_enum pwmch);

#endif
