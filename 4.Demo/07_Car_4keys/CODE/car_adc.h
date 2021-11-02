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

//�궨��
#define ADC_CH_1     ADC_IN15_C5
#define ADC_CH_2     ADC_IN14_C4
#define ADC_CH_3     ADC_IN11_C1

//��������
/* adc��ʼ�� */
void adc_channel_init(uint32_t adc_ch);
/* adcת��һ�� */
unsigned int adc_get(uint32_t adc_ch);

//ȫ�ֱ�������

#endif /* CAR_ADC_H_ */
