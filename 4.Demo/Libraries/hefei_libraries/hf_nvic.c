/*********************************************************************************************************************
 * @file            hf_nvic.c
 * @brief           NVIC配置
 * @author          HeFei WeiHuang
 * @version         1.0
 * @Target core     CH32V103R8T6
 * @date            2021-10-06
 ********************************************************************************************************************/

#include "hf_nvic.h"

//-------------------------------------------------------------------------------------------------------------------
//  @brief      中断初始化
//  @param      irqn                        中断号，可以查看CH32V10x.h文件中的IRQn_Type枚举体定义
//  @param      preemption_priority         抢占优先级值越小，优先级越高 (可选参数最高0，最低1)
//  @param      sub_priority                次优先级值越小，优先级越高     (可选参数0-7，最高0，最低7)
//  @param      status                      使能或者失能
//  @return     void
//  Sample usage:                           nvic_init(EXTI0_IRQn,0, 0, ENABLE); //外部中断0使能,抢占优先级最高，次优先级最高。
//-------------------------------------------------------------------------------------------------------------------
void nvic_init(IRQn_Type irqn,uint8 preemption_priority, uint8 sub_priority,uint8 status)
{
    NVIC_InitTypeDef NVIC_InitStructure;

    NVIC_InitStructure.NVIC_IRQChannel = irqn;                                  //中断号设置
    NVIC_InitStructure.NVIC_IRQChannelPreemptionPriority=preemption_priority;   //抢占优先级值越小，优先级越高
    NVIC_InitStructure.NVIC_IRQChannelSubPriority = sub_priority;               //次优先级值越小，优先级越高
    NVIC_InitStructure.NVIC_IRQChannelCmd = status;                             //使能
    NVIC_Init(&NVIC_InitStructure);

    /* 保存状态值 */
    irq_status.ienr0 |= (PFIC->ISR[0] & 0xFFFFF000);    //[31:12]
    irq_status.ienr1 |= (PFIC->ISR[1] & 0x0FFFFFFF);    //[27:0]
    if(irq_status.flag == 1)
    {
        close_all_irq();
    }
}

//-------------------------------------------------------------------------------------------------------------------
//  @brief      关闭总中断
//  @param      void
//  @return     void
//  @since      v1.0
//  Sample usage:       DisableGlobalIRQ();
//-------------------------------------------------------------------------------------------------------------------
uint8 DisableGlobalIRQ(void)
{
    uint8 state;
    irq_status.flag = 1;
    if((irq_status.ienr0 == 0) && (irq_status.ienr1 == 0))   state = 0;  //没有就返回0
    else state = 1;  //有中断就返回1
    close_all_irq();
    return state;
}

//-------------------------------------------------------------------------------------------------------------------
//  @brief      打开总中断
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
//  @brief      关闭所有中断
//  @return     void
//  @since      v1.0
//  Sample usage:       内部使用  用户无需关心
//-------------------------------------------------------------------------------------------------------------------
void close_all_irq(void)
{
    /* 写1，清空状态 */
    PFIC->IRER[0] = 0xffffffff;
    PFIC->IRER[1] = 0xffffffff;
}

//-------------------------------------------------------------------------------------------------------------------
//  @brief      恢复之前关闭的中断值
//  @param      irq_status       当前保留中断值
//  @return     void
//  @since      v1.0
//  Sample usage:       内部使用  用户无需关心
//-------------------------------------------------------------------------------------------------------------------
void sys_recover_irq(void)
{
    PFIC->IENR[0] = irq_status.ienr0;
    PFIC->IENR[1] = irq_status.ienr1;
}
