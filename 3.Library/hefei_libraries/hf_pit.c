/*********************************************************************************************************************
 * @file            hf_pit.c
 * @brief           PIT����
 * @author          HeFei WeiHuang
 * @version         1.0
 * @Target core     CH32V103R8T6
 * @date            2021-10-06
 ********************************************************************************************************************/

#include "hf_pit.h"

/* �����ⲿ���� */
extern const uint32 TIMERN[];

//-------------------------------------------------------------------------------------------------------------------
//  @brief      ��ʱ�������ж�(ms)
//  @param      timern      ��ʱ��ͨ��
//  @param      ms          ��ʱ����(1-32767)
//  @return     void
//  Sample usage:           timer_pit_interrupt(TIMER_1, 5); ʹ�ö�ʱ��1��Ϊ5msһ�ε������ж�
//-------------------------------------------------------------------------------------------------------------------
void timer_pit_interrupt_ms(TIMERN_enum TIMER_x, uint16 ms)
{
    /* ��ʱ��TIM��ʼ��,������ */
    assert(ms);

    uint16 arr, pre;
    arr = sys_clk/1640 - 1;
    pre = 2*ms - 1;

    timbase_init(TIMER_x, arr, pre);

    TIM_ITConfig((TIM_TypeDef *)TIMERN[TIMER_x],TIM_IT_Update,ENABLE );      //ʹ��ָ����TIM�ж�,��������ж�
    TIM_ClearITPendingBit((TIM_TypeDef *)TIMERN[TIMER_x], TIM_IT_Update);

    /* �ж����ȼ�NVIC���� */
    if(TIMER_1 == TIMER_x)
        nvic_init(TIM1_UP_IRQn, 1, 2, ENABLE);
    else if(TIMER_2 == TIMER_x)
        nvic_init(TIM2_IRQn, 1, 2, ENABLE);
    else if(TIMER_3 == TIMER_x)
        nvic_init(TIM3_IRQn, 1, 2, ENABLE);
    else if(TIMER_4 == TIMER_x)
        nvic_init(TIM4_IRQn, 1, 2, ENABLE);

    TIM_Cmd((TIM_TypeDef *)TIMERN[TIMER_x], ENABLE);  //ʹ��TIMx
}


//-------------------------------------------------------------------------------------------------------------------
//  @brief      ��ʱ�������ж�(us)
//  @param      timern      ��ʱ��ͨ��
//  @param      us          ��ʱ����(1-65535)
//  @return     void
//  Sample usage:           timer_pit_interrupt(TIMER_1, 5); ʹ�ö�ʱ��1��Ϊ5msһ�ε������ж�
//-------------------------------------------------------------------------------------------------------------------
void timer_pit_interrupt_us(TIMERN_enum TIMER_x, uint16 us)
{
    /* ��ʱ��TIM��ʼ��,������ */
    assert(us);

    uint16 arr, pre;
    arr = sys_clk/1000000 - 1;
    pre = us - 1;

    timbase_init(TIMER_x, arr, pre);

    TIM_ITConfig((TIM_TypeDef *)TIMERN[TIMER_x],TIM_IT_Update,ENABLE );      //ʹ��ָ����TIM�ж�,��������ж�
    TIM_ClearITPendingBit((TIM_TypeDef *)TIMERN[TIMER_x], TIM_IT_Update);

    /* �ж����ȼ�NVIC���� */
    if(TIMER_1 == TIMER_x)
        nvic_init(TIM1_UP_IRQn, 1, 2, ENABLE);
    else if(TIMER_2 == TIMER_x)
        nvic_init(TIM2_IRQn, 1, 2, ENABLE);
    else if(TIMER_3 == TIMER_x)
        nvic_init(TIM3_IRQn, 1, 2, ENABLE);
    else if(TIMER_4 == TIMER_x)
        nvic_init(TIM4_IRQn, 1, 2, ENABLE);

    TIM_Cmd((TIM_TypeDef *)TIMERN[TIMER_x], ENABLE);  //ʹ��TIMx

}


//-------------------------------------------------------------------------------------------------------------------
//  @brief      us��ʱ����ʼ
//  @param      timern      ѡ��ģ���ͨ�� (ѡ��Χ ��TIMERN_enumö��ֵ������ȷ��)
//  @return     void
//  Sample usage:           pit_start_us(TIMER_1);  //��ʱ��0 ��ʼ������ÿ��us����һ��
//-------------------------------------------------------------------------------------------------------------------
void timer_pit_start_us(TIMERN_enum TIMER_x)
{
    uint16 arr, pre;

    arr = 65535;
    pre = sys_clk/1000000 - 1;

    timbase_init(TIMER_x, arr, pre);
    ((TIM_TypeDef *)TIMERN[TIMER_x])->CNT = 0;
    TIM_Cmd((TIM_TypeDef *)TIMERN[TIMER_x], ENABLE);  //ʹ��TIMx
}

//-------------------------------------------------------------------------------------------------------------------
//  @brief      ��ȡ��ʱ��ֵ
//  @param      timern      ѡ��ģ���ͨ�� (ѡ��Χ ��TIMERN_enumö��ֵ������ȷ��)
//  @return     uint32      ����ֵ
//  Sample usage:           ������ͨ���û�������ģ������Ҫ��ȡ����ֵ��Ӧ�õ���h�ļ��ĺ궨�庯��������ʱ�䵥λ��
//-------------------------------------------------------------------------------------------------------------------
uint16 timer_pit_get_us(TIMERN_enum TIMER_x)
{
    return ((TIM_TypeDef *)TIMERN[TIMER_x])->CNT;
}

//-------------------------------------------------------------------------------------------------------------------
//  @brief      �ر�PIT��ʱ��
//  @param      timern      ѡ��ģ���ͨ�� (ѡ��Χ ��TIMERN_enumö��ֵ������ȷ��)
//  @return     void
//  Sample usage:           �رն�ʱ���������־λ
//-------------------------------------------------------------------------------------------------------------------
void timer_pit_close(TIMERN_enum TIMER_x)
{
    TIM_DeInit((TIM_TypeDef *)TIMERN[TIMER_x]);
    TIM_Cmd((TIM_TypeDef *)TIMERN[TIMER_x], DISABLE);  //ʧ��TIMx
}
