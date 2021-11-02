/*********************************************************************************************************************
 * @file            hf_exti.c
 * @brief           EXTI����
 * @author          HeFei WeiHuang
 * @version         1.0
 * @Target core     CH32V103R8T6
 * @date            2021-10-06
 ********************************************************************************************************************/

#include "hf_exti.h"

//-------------------------------------------------------------------------------------------------------------------
// @brief        ���������ⲿ�ж�
// @param        pin         ѡ������� (��ѡ��Χ�� common.h ��PIN_enumö��ֵȷ��)
// @param        exti_mode              �жϵ�ģʽ��ֻ��ѡ�����²�����
//  @arg          CHANGE:                ��ƽ�ı䴥��
//  @arg          RISING:                �����ش���
//  @arg          FALLING:               �½��ش���
// @return       void
// Sample usage:            exti_enable(A0, RISING);//����PA0�ⲿ�жϣ�ģʽΪ��ƽ�����ش���
                            //ע���޷�ͬʱ����ͬһ���������ⲿ�жϣ���PA0��PB0��
//-------------------------------------------------------------------------------------------------------------------
void exti_enable(PIN_enum pin,TRIGGER_enum trigger)
{
    //GPIO �ⲿ�жϳ�ʼ��
    EXTI_InitTypeDef EXTI_InitStructure;
    RCC_APB2PeriphClockCmd(RCC_APB2Periph_AFIO,ENABLE);
    GPIO_EXTILineConfig(pin >> 5, pin & 0x1F);              //�����жϺ�����
    EXTI_InitStructure.EXTI_Line = 1 << (pin & 0x1F);       //���ź�����
    EXTI_InitStructure.EXTI_Mode = EXTI_Mode_Interrupt;     //����ģʽ
    EXTI_InitStructure.EXTI_Trigger = trigger;              //������ʽ
    EXTI_InitStructure.EXTI_LineCmd = ENABLE;               //ʹ�ܻ���ʧ��
    EXTI_Init(&EXTI_InitStructure);
}

//-------------------------------------------------------------------------------------------------------------------
// @brief        ���������ⲿ�ж�
// @param        pin         ѡ������� (��ѡ��Χ�� common.h ��PIN_enumö��ֵȷ��)
// @return       void
// Sample usage:        exti_disable(A0);
                        //�ر�����PX0���ⲿ�жϣ�X=A��B��C��F��
//-------------------------------------------------------------------------------------------------------------------
void exti_disable(PIN_enum pin)
{
    EXTI->INTENR &= ~(1 << (pin & 0x1F));
}
