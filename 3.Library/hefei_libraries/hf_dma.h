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

/* 枚举定义声明 */
/* 枚举DMA方向 */
typedef enum
{
    P2M = 0,        //外设作为数据传输的来源
    M2P             //外设作为数据传输的目的地
}DMADIR_enum;

/* 枚举DMA通道 */
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

/* 函数声明 */

/* 外部函数，用户可自行调用  */
/* 配置DMA功能 */
void dma_init(DMA_CH_enum DMA_CHx, uint32_t ppaddr, uint32_t memaddr, uint32_t num, DMADIR_enum directions);


#endif
