/*********************************************************************************************************************
 * @file            hf_dma.c
 * @author          TaoZhihan
 * @version         1.0
 * @Target core     CH32V103R8T6
 * @date            2021-10-06
 ********************************************************************************************************************/

#include "hf_dma.h"

/* �ڲ��������� */
const uint32 DMA1_CHN_BASE[7] = {DMA1_Channel1_BASE, DMA1_Channel2_BASE, DMA1_Channel3_BASE
        , DMA1_Channel4_BASE, DMA1_Channel5_BASE, DMA1_Channel6_BASE, DMA1_Channel7_BASE};


//-------------------------------------------------------------------------------------------------------------------
// @brief        ����DMA����
// @param        DMA_CHx                dmaͨ��,��common.h�ڶ����ö������
// @param        ppaddr                 �������ַ����
// @param        memaddr                �洢������ַ����
// @param        num                    �������ݳ���
// @param        directions             ����DMA���䷽��
// @return       void
// Sample usage:        dma_struct_init(&init_struct, (uint32_t)(&ADC_RDATA), rx_buffer, P2M);
//                      //����DMA�ṹ��Ϊinit_struct���������ַΪADC���ݼĴ������洢������ַrx_buffer���������ݴ��䵽�洢��
//-------------------------------------------------------------------------------------------------------------------
void dma_init(DMA_CH_enum DMA_CHx, uint32_t ppaddr, uint32_t memaddr, uint32_t num, DMADIR_enum directions)
{
    /* ����DMA�ṹ�� */
    DMA_InitTypeDef DMA_InitStruct;

    /* DMAʱ��ʹ�� */
    RCC_AHBPeriphClockCmd(RCC_AHBPeriph_DMA1, ENABLE);

    /* DMA��ʼ�� */
    DMA_DeInit((DMA_Channel_TypeDef *)DMA1_CHN_BASE[DMA_CHx]);

    /* ����DMA�ṹ����� */
    DMA_InitStruct.DMA_PeripheralBaseAddr = ppaddr;
    DMA_InitStruct.DMA_MemoryBaseAddr = memaddr;
    DMA_InitStruct.DMA_DIR = DMA_DIR_PeripheralDST;
    DMA_InitStruct.DMA_BufferSize = num;
    DMA_InitStruct.DMA_PeripheralInc = DMA_PeripheralInc_Disable;
    DMA_InitStruct.DMA_MemoryInc = DMA_MemoryInc_Enable;
    DMA_InitStruct.DMA_PeripheralDataSize = DMA_PeripheralDataSize_HalfWord;
    DMA_InitStruct.DMA_MemoryDataSize = DMA_MemoryDataSize_HalfWord;
    DMA_InitStruct.DMA_Mode = DMA_Mode_Normal;           //DMAģʽʹ��
    DMA_InitStruct.DMA_Priority = DMA_Priority_High;
    DMA_InitStruct.DMA_M2M = DMA_M2M_Disable;             //�洢�����洢��DMA�������

    /* DMAͨ��x��ʼ�� */
    DMA_Init((DMA_Channel_TypeDef *)DMA1_CHN_BASE[DMA_CHx], &DMA_InitStruct);

    /* DMAͨ��x����ʹ�� */
    DMA_Cmd((DMA_Channel_TypeDef *)DMA1_CHN_BASE[DMA_CHx], DISABLE);
}
