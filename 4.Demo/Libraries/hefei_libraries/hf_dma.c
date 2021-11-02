/*********************************************************************************************************************
 * @file            hf_dma.c
 * @author          TaoZhihan
 * @version         1.0
 * @Target core     CH32V103R8T6
 * @date            2021-10-06
 ********************************************************************************************************************/

#include "hf_dma.h"

/* 内部变量声明 */
const uint32 DMA1_CHN_BASE[7] = {DMA1_Channel1_BASE, DMA1_Channel2_BASE, DMA1_Channel3_BASE
        , DMA1_Channel4_BASE, DMA1_Channel5_BASE, DMA1_Channel6_BASE, DMA1_Channel7_BASE};


//-------------------------------------------------------------------------------------------------------------------
// @brief        配置DMA功能
// @param        DMA_CHx                dma通道,见common.h内定义的枚举类型
// @param        ppaddr                 外设基地址配置
// @param        memaddr                存储器基地址配置
// @param        num                    配置数据长度
// @param        directions             配置DMA传输方向
// @return       void
// Sample usage:        dma_struct_init(&init_struct, (uint32_t)(&ADC_RDATA), rx_buffer, P2M);
//                      //设置DMA结构体为init_struct，外设基地址为ADC数据寄存器，存储器基地址rx_buffer，外设数据传输到存储器
//-------------------------------------------------------------------------------------------------------------------
void dma_init(DMA_CH_enum DMA_CHx, uint32_t ppaddr, uint32_t memaddr, uint32_t num, DMADIR_enum directions)
{
    /* 配置DMA结构体 */
    DMA_InitTypeDef DMA_InitStruct;

    /* DMA时钟使能 */
    RCC_AHBPeriphClockCmd(RCC_AHBPeriph_DMA1, ENABLE);

    /* DMA初始化 */
    DMA_DeInit((DMA_Channel_TypeDef *)DMA1_CHN_BASE[DMA_CHx]);

    /* 配置DMA结构体参数 */
    DMA_InitStruct.DMA_PeripheralBaseAddr = ppaddr;
    DMA_InitStruct.DMA_MemoryBaseAddr = memaddr;
    DMA_InitStruct.DMA_DIR = DMA_DIR_PeripheralDST;
    DMA_InitStruct.DMA_BufferSize = num;
    DMA_InitStruct.DMA_PeripheralInc = DMA_PeripheralInc_Disable;
    DMA_InitStruct.DMA_MemoryInc = DMA_MemoryInc_Enable;
    DMA_InitStruct.DMA_PeripheralDataSize = DMA_PeripheralDataSize_HalfWord;
    DMA_InitStruct.DMA_MemoryDataSize = DMA_MemoryDataSize_HalfWord;
    DMA_InitStruct.DMA_Mode = DMA_Mode_Normal;           //DMA模式使能
    DMA_InitStruct.DMA_Priority = DMA_Priority_High;
    DMA_InitStruct.DMA_M2M = DMA_M2M_Disable;             //存储器到存储器DMA传输禁能

    /* DMA通道x初始化 */
    DMA_Init((DMA_Channel_TypeDef *)DMA1_CHN_BASE[DMA_CHx], &DMA_InitStruct);

    /* DMA通道x传输使能 */
    DMA_Cmd((DMA_Channel_TypeDef *)DMA1_CHN_BASE[DMA_CHx], DISABLE);
}
