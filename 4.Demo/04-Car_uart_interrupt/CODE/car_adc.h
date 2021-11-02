/*********************************************************************************************************************
* @file            car_adc.h
* @author          Andreas HF
* @Target core     CH32V103R8T6
* @revisions       -2021.10.22, V1.0
* @modify          none
********************************************************************************************************************/

#ifndef CAR_ADC_H_
#define CAR_ADC_H_

#include "headfile.h"

//宏定义
#define ADC_CH_1     ADC_IN15_C5
#define ADC_CH_2     ADC_IN14_C4
#define ADC_CH_3     ADC_IN11_C1

//函数声明
/* adc初始化 */
void adc_channel_init(uint32_t adc_ch);
/* adc转换一次 */
unsigned int adc_get(uint32_t adc_ch);

//全局变量声明

#endif /* CAR_ADC_H_ */
