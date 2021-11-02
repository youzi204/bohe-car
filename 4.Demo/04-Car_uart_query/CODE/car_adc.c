/*********************************************************************************************************************
* @file            car_adc.c
* @author          Andreas HF
* @Target core     CH32V103R8T6
* @revisions       -2021.10.22, V1.0
* @modify          none
********************************************************************************************************************/

#include "car_adc.h"

//-------------------------------------------------------------------------------------------------------------------
// @brief        adc初始化
// @param        adc_ch            选择ADC通道：ADC_CH_x(x = 1,2,3)
// @return       void
// Sample usage:       adc_channel_init(ADC_CH_1);//初始化ADC通道1
//-------------------------------------------------------------------------------------------------------------------
void adc_channel_init(uint32_t adc_ch)
{
    adc_init(adc_ch);
}

//-------------------------------------------------------------------------------------------------------------------
// @brief        adc转换一次
// @param        adc_ch            选择ADC通道：ADC_CH_x(x = 1,2,3)
// @return       void
// Sample usage:        unsigned int data; data = adc_get(ADC_CH_1);//ADC通道1转换一次
//-------------------------------------------------------------------------------------------------------------------
unsigned int adc_get(uint32_t adc_ch)
{
    unsigned int adc_value;

    adc_value = adc_convert(adc_ch, ADC_12BIT);       //adc转换一次

    return adc_value;
}
