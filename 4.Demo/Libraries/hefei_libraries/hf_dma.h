/*********************************************************************************************************************
 * @file            hf_dma.h
 * @author          TaoZhihan
 * @version         1.0
 * @Target core     CH32V103R8T6
 * @date            2021-10-06
 ********************************************************************************************************************/

#ifndef _hf_dma_h
#define _hf_dma_h

#include "common.h"
#include "ch32v10x_dma.h"
#include "ch32v10x_rcc.h"

/* ö�ٶ������� */
/* ö��DMA���� */
typedef enum
{
    P2M = 0,        //������Ϊ���ݴ������Դ
    M2P             //������Ϊ���ݴ����Ŀ�ĵ�
}DMADIR_enum;

/* ö��DMAͨ�� */
typedef enum
{
    DMA_CH1 = 0,
    DMA_CH2,
    DMA_CH3,
    DMA_CH4,
    DMA_CH5,
    DMA_CH6,
    DMA_CH7,
}DMA_CH_enum;

/* �������� */

/* �ⲿ�������û������е���  */
/* ����DMA���� */
void dma_init(DMA_CH_enum DMA_CHx, uint32_t ppaddr, uint32_t memaddr, uint32_t num, DMADIR_enum directions);


#endif
