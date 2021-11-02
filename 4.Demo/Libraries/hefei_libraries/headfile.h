/*********************************************************************************************************************
 * @file            headfile.h
 * @brief           头文件
 * @author          HeFei WeiHuang
 * @version         1.0
 * @Target core     CH32V103R8T6
 * @date            2021-08-29
 ********************************************************************************************************************/
 
#ifndef _HEADFILE_H
#define _HEADFILE_H

#include "ch32v10x.h"
#include <stdio.h>
#include <stdint.h>
#include "common.h"
#include "board.h"
#include "isr.h"
#include "delay.h"

//------MCU外设驱动头文件
#include "hf_adc.h"
#include "hf_dma.h"
#include "hf_encoder.h"
#include "hf_exti.h"
#include "hf_flash.h"
#include "hf_gpio.h"
#include "hf_i2c_hardware.h"
#include "hf_i2c_software.h"
#include "hf_nvic.h"
#include "hf_pit.h"
#include "hf_pwm.h"
#include "hf_spi.h"
#include "hf_systick.h"
#include "hf_uart.h"
#include "misc.h"

//------外设驱动头文件
#include "HF_HC_SR04.h"
#include "HF_L9110S_2.h"
#include "HF_WS2812b.h"
#include "HF_TM1637.h"

//------智能车驱动头文件
#include "board_led.h"
#include "car_4keys.h"
#include "car_adc.h"
#include "car_buzzer.h"
#include "car_init.h"
#include "car_light.h"
#include "car_motion.h"
#include "car_reed_switch.h"
#include "car_uart.h"
#include "car_value_process.h"


#endif
