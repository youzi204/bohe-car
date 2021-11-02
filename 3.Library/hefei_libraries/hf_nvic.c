/*********************************************************************************************************************
 * @file            hf_nvic.c
 * @brief           NVIC����
 * @author          HeFei WeiHuang
 * @version         1.0
 * @Target core     CH32V103R8T6
 * @date            2021-10-06
 ********************************************************************************************************************/

#include "hf_nvic.h"

//-------------------------------------------------------------------------------------------------------------------
//  @brief      �жϳ�ʼ��
//  @param      irqn                        �жϺţ����Բ鿴CH32V10x.h�ļ��е�IRQn_Typeö���嶨��
//  @param      preemption_priority         ��ռ���ȼ�ֵԽС�����ȼ�Խ�� (��ѡ�������0�����1)
//  @param      sub_priority                �����ȼ�ֵԽС�����ȼ�Խ��     (��ѡ����0-7�����0�����7)
//  @param      status                      ʹ�ܻ���ʧ��
//  @return     void
//  Sample usage:                           nvic_init(EXTI0_IRQn,0, 0, ENABLE); //�ⲿ�ж�0ʹ��,��ռ���ȼ���ߣ������ȼ���ߡ�
//-------------------------------------------------------------------------------------------------------------------
void nvic_init(IRQn_Type irqn,uint8 preemption_priority, uint8 sub_priority,uint8 status)
{
    NVIC_InitTypeDef NVIC_InitStructure;

    NVIC_InitStructure.NVIC_IRQChannel = irqn;                                  //�жϺ�����
    NVIC_InitStructure.NVIC_IRQChannelPreemptionPriority=preemption_priority;   //��ռ���ȼ�ֵԽС�����ȼ�Խ��
    NVIC_InitStructure.NVIC_IRQChannelSubPriority = sub_priority;               //�����ȼ�ֵԽС�����ȼ�Խ��
    NVIC_InitStructure.NVIC_IRQChannelCmd = status;                             //ʹ��
    NVIC_Init(&NVIC_InitStructure);

    /* ����״ֵ̬ */
    irq_status.ienr0 |= (PFIC->ISR[0] & 0xFFFFF000);    //[31:12]
    irq_status.ienr1 |= (PFIC->ISR[1] & 0x0FFFFFFF);    //[27:0]
    if(irq_status.flag == 1)
    {
        close_all_irq();
    }
}

//-------------------------------------------------------------------------------------------------------------------
//  @brief      �ر����ж�
//  @param      void
//  @return     void
//  @since      v1.0
//  Sample usage:       DisableGlobalIRQ();
//-------------------------------------------------------------------------------------------------------------------
uint8 DisableGlobalIRQ(void)
{
    uint8 state;
    irq_status.flag = 1;
    if((irq_status.ienr0 == 0) && (irq_status.ienr1 == 0))   state = 0;  //û�оͷ���0
    else state = 1;  //���жϾͷ���1
    close_all_irq();
    return state;
}

//-------------------------------------------------------------------------------------------------------------------
//  @brief      �����ж�
//  @param      void
//  @return     void
//  @since      v1.0
//  Sample usage:       EnableGlobalIRQ();
//-------------------------------------------------------------------------------------------------------------------
void EnableGlobalIRQ(uint8 state)
{
    if(state == 0)
    {
        irq_status.flag = 0;
        sys_recover_irq();
    }
}

//-------------------------------------------------------------------------------------------------------------------
//  @brief      �ر������ж�
//  @return     void
//  @since      v1.0
//  Sample usage:       �ڲ�ʹ��  �û��������
//-------------------------------------------------------------------------------------------------------------------
void close_all_irq(void)
{
    /* д1�����״̬ */
    PFIC->IRER[0] = 0xffffffff;
    PFIC->IRER[1] = 0xffffffff;
}

//-------------------------------------------------------------------------------------------------------------------
//  @brief      �ָ�֮ǰ�رյ��ж�ֵ
//  @param      irq_status       ��ǰ�����ж�ֵ
//  @return     void
//  @since      v1.0
//  Sample usage:       �ڲ�ʹ��  �û��������
//-------------------------------------------------------------------------------------------------------------------
void sys_recover_irq(void)
{
    PFIC->IENR[0] = irq_status.ienr0;
    PFIC->IENR[1] = irq_status.ienr1;
}
