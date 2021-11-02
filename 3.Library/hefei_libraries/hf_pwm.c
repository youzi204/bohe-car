/*********************************************************************************************************************
 * @file            hf_pwm.c
 * @author          TaoZhihan
 * @version         1.0
 * @Target core     CH32V103R8T6
 * @date            2021-10-06
 ********************************************************************************************************************/

#include "hf_pwm.h"

/* 引用外部变量 */
extern const uint32 TIMERN[];

//-------------------------------------------------------------------------------------------------------------------
//  @brief      PWM初始化
//  @param      pwmch           PWM通道号及引脚
//  @param      freq            PWM频率
//  @param      duty            PWM占空比
//  @param      TIM_OCPreload_Enable_Disable     默认设置为TIM_OCPreload_Disable,后期可删除此形参只是为了适配RGB灯做的修改
//  @return     void
//  Sample usage:               pwm_init(PWM1_CH1_A8, 50, 5000);   //初始化PWM1 通道1 使用引脚A8  输出PWM频率50HZ   占空比为百分之 5000/PWM_DUTY_MAX*100
//                              PWM_DUTY_MAX在wh_pwm.h文件中 默认为10000
//-------------------------------------------------------------------------------------------------------------------
void pwm_init(PWMCH_enum pwmch, uint32 freq, uint32 duty, uint16_t TIM_OCPreload_Enable_Disable)
{
    TIM_OCInitTypeDef  TIM_OCInitStructure;

    uint16 match_temp;                                          //占空比值
    uint16 period_temp;                                         //周期值
    uint16 freq_div = 0;                                        //分频值

    pwm_gpio_init(pwmch);                                       //PWM引脚初始化

    /* 获取系统主频 */
    sys_clk = (uint32)72000000;
    freq_div = (uint16)((sys_clk / freq) >> 16);                            //多少分频
    period_temp = (uint16)(sys_clk/(freq*(freq_div + 1)));                  //周期
    match_temp = period_temp * duty / PWM_DUTY_MAX;                         //占空比

    /* 时基初始化 */
    timbase_init((pwmch >> 8), period_temp - 1, freq_div);

    RCC_APB2PeriphClockCmd(RCC_APB2Periph_AFIO, ENABLE);        //使能AFIO复用功能模块时钟

//    //引脚重映射
//    if((pwmch >> 4) == 0x10)        //PWM1的部分重映射
//        GPIO_PinRemapConfig(GPIO_PartialRemap_TIM1, ENABLE);
//    else if((pwmch >> 4) == 0x11)   //PWM2的完全重映射
//        GPIO_PinRemapConfig(GPIO_FullRemap_TIM2, ENABLE);
//    else if((pwmch >> 4) == 0x21)   //PWM3的完全重映射
//        GPIO_PinRemapConfig(GPIO_FullRemap_TIM3, ENABLE);
//    else if((pwmch >> 4) == 0x22)   //PWM3的部分重映射
//        GPIO_PinRemapConfig(GPIO_PartialRemap_TIM3, ENABLE);

    //初始化TIM PWM模式
    TIM_OCInitStructure.TIM_OCMode = TIM_OCMode_PWM1;                       //选择定时器模式:TIM脉冲宽度调制模式2
    TIM_OCInitStructure.TIM_OutputState = TIM_OutputState_Enable;           //比较输出使能
    TIM_OCInitStructure.TIM_Pulse = match_temp;
    TIM_OCInitStructure.TIM_OCPolarity = TIM_OCPolarity_High;               //输出极性:TIM输出比较极性高
    TIM_OCInitStructure.TIM_OCIdleState = TIM_OCIdleState_Reset;

    if((pwmch & 0x03) == 0x00)                                              //通道选择
    {
        TIM_OC1Init(((TIM_TypeDef *) TIMERN[pwmch>>8]), &TIM_OCInitStructure );                         //定时器通道1初始化
        TIM_CtrlPWMOutputs(((TIM_TypeDef *) TIMERN[pwmch>>8]), ENABLE );
        TIM_OC1PreloadConfig(((TIM_TypeDef *) TIMERN[pwmch>>8]), TIM_OCPreload_Enable_Disable);         //定时器预装载配置
    }
    else if((pwmch & 0x03) == 0x01)
    {
        TIM_OC2Init(((TIM_TypeDef *) TIMERN[pwmch>>8]), &TIM_OCInitStructure );
        TIM_CtrlPWMOutputs(((TIM_TypeDef *) TIMERN[pwmch>>8]), ENABLE );
        TIM_OC2PreloadConfig(((TIM_TypeDef *) TIMERN[pwmch>>8]), TIM_OCPreload_Enable_Disable);
    }
    else if((pwmch & 0x03) == 0x02)
    {
        TIM_OC3Init(((TIM_TypeDef *) TIMERN[pwmch>>8]), &TIM_OCInitStructure );
        TIM_CtrlPWMOutputs(((TIM_TypeDef *) TIMERN[pwmch>>8]), ENABLE );
        TIM_OC3PreloadConfig(((TIM_TypeDef *) TIMERN[pwmch>>8]), TIM_OCPreload_Enable_Disable);
    }
    else if((pwmch & 0x03) == 0x03)
    {
        TIM_OC4Init(((TIM_TypeDef *) TIMERN[pwmch>>8]), &TIM_OCInitStructure );
        TIM_CtrlPWMOutputs(((TIM_TypeDef *) TIMERN[pwmch>>8]), ENABLE );
        TIM_OC4PreloadConfig(((TIM_TypeDef *) TIMERN[pwmch>>8]), TIM_OCPreload_Enable_Disable);
    }

    TIM_Cmd(((TIM_TypeDef *) TIMERN[pwmch>>8]), ENABLE);                                              //定时器使能
}

//-------------------------------------------------------------------------------------------------------------------
//  @brief      PWM占空比设定
//  @param      pwmch           PWM通道号及引脚
//  @param      duty            PWM占空比
//  @return     void
//  Sample usage:               pwm_duty(PWM1_CH1_A8, 5000);   //PWM1 通道1 使用引脚A8 占空比为百分之 5000/PWM_DUTY_MAX*100
//                              PWM_DUTY_MAX在wh_pwm.h文件中 默认为10000
//-------------------------------------------------------------------------------------------------------------------
void pwm_duty(PWMCH_enum pwmch, uint32 duty)
{
    uint16 match_temp;
    uint16 period_temp;

    period_temp = ((TIM_TypeDef *) TIMERN[pwmch>>8])->ATRLR;    //获取定时器的周期值
    match_temp = period_temp * duty / PWM_DUTY_MAX;             //占空比

    if((pwmch >> 8) == 0x00)
    {
        (*(volatile uint32*)(0x40012C34 + (pwmch&0x03) * 0x04)) = match_temp;
        //0x40012C34 TIM1->CH1CVR
        //0x40012C38 TIM1->CH2CVR
        //0x40012C3C TIM1->CH3CVR
        //0x40012C40 TIM1->CH4CVR
    }
    else if((pwmch >> 8) == 0x01)
    {
        (*(volatile uint32*)(0x40000034 + (pwmch&0x03) * 0x04)) = match_temp;
        //0x40000034 TIM2->CH1CVR
        //0x40000038 TIM2->CH2CVR
        //0x4000003C TIM2->CH3CVR
        //0x40000040 TIM2->CH4CVR
    }
    else if((pwmch >> 8) == 0x02)
    {
        (*(volatile uint32*)(0x40000434 + (pwmch&0x03) * 0x04)) = match_temp;
        //0x40000434 TIM3->CH1CVR
        //0x40000438 TIM3->CH2CVR
        //0x4000043C TIM3->CH3CVR
        //0x40000440 TIM3->CH4CVR
    }
    else if((pwmch >> 8) == 0x03)
    {
        (*(volatile uint32*)(0x40000834 + (pwmch&0x03) * 0x04)) = match_temp;
        //0x40000834 TIM4->CH1CVR
        //0x40000838 TIM4->CH2CVR
        //0x4000083C TIM4->CH3CVR
        //0x40000840 TIM4->CH4CVR
    }
}

//-------------------------------------------------------------------------------------------------------------------
//  @brief      PWM频率设定
//  @param      pwmch           PWM通道号及引脚
//  @param      freq            PWM频率
//  @param      duty            PWM占空比
//  @return     void
//  Sample usage:               pwm_freq(PWM1_CH1_A8, 60, 5000);   //使用引脚A8  输出PWM频率60HZ   占空比为百分之 5000/PWM_DUTY_MAX*100
//                              PWM_DUTY_MAX在wh_pwm.h文件中 默认为10000
//-------------------------------------------------------------------------------------------------------------------
void pwm_freq(PWMCH_enum pwmch, uint32 freq)
{
    uint16 period_temp = 0;                                     //周期值
    uint16 freq_div = 0;                                        //分频值
    uint16 match_temp;

    freq_div = (uint16)((sys_clk / freq) >> 16);                //计算多少分频
    period_temp = (uint16)(sys_clk/(freq*(freq_div + 1)));      //计算周期

    ((TIM_TypeDef *) TIMERN[pwmch>>8])->ATRLR = period_temp - 1 ;
    ((TIM_TypeDef *) TIMERN[pwmch>>8])->PSC = freq_div;
}


//-------------------------------------------------------------------------------------------------------------------
//  @brief      PWM停止输出
//  @param      pwmch           PWM通道号及引脚
//  @return     void
//  Sample usage:               pwm_freq(PWM1_CH1_A8, 60, 5000);   //使用引脚A8  输出PWM频率60HZ   占空比为百分之 5000/PWM_DUTY_MAX*100
//                              PWM_DUTY_MAX在wh_pwm.h文件中 默认为10000
//-------------------------------------------------------------------------------------------------------------------
void pwm_stop(PWMCH_enum pwmch)
{
    TIM_Cmd(((TIM_TypeDef *) TIMERN[pwmch>>8]), DISABLE);         //定时器失能
}

//-------------------------------------------------------------------------------------------------------------------
//  @brief      PWM引脚初始化
//  @param      pwmch       PWM通道(可选择范围由wh_pwm.h内PWMCH_enum枚举值确定)
//  @return     void
//  Sample usage:           内部使用  用户无需关心
//-------------------------------------------------------------------------------------------------------------------
void pwm_gpio_init(PWMCH_enum pwmch)
{
    switch(pwmch)
    {

        case PWM1_CH1_A8:
            gpio_init(A8, GPO, 0, SPEED_50MHZ|OUT_AF_PP);
            break;
        case PWM1_CH2_A9:
            gpio_init(A9, GPO, 0, SPEED_50MHZ|OUT_AF_PP);
            break;
        case PWM1_CH3_A10:
            gpio_init(A10, GPO, 0, SPEED_50MHZ|OUT_AF_PP);
            break;
        case PWM1_CH4_A11:
            gpio_init(A11, GPO, 0, SPEED_50MHZ|OUT_AF_PP);
            break;

        case PWM2_CH1_A0:
            gpio_init(A0, GPO, 0, SPEED_50MHZ|OUT_AF_PP);
            break;
        case PWM2_CH2_A1:
            gpio_init(A1, GPO, 0, SPEED_50MHZ|OUT_AF_PP);
            break;
        case PWM2_CH3_A2:
            gpio_init(A2, GPO, 0, SPEED_50MHZ|OUT_AF_PP);
            break;
        case PWM2_CH4_A3:
            gpio_init(A3, GPO, 0, SPEED_50MHZ|OUT_AF_PP);
            break;

        case PWM2_CH1_A15:
            gpio_init(A15, GPO, 0, SPEED_50MHZ|OUT_AF_PP);
            break;
        case PWM2_CH2_B3:
            gpio_init(B3, GPO, 0, SPEED_50MHZ|OUT_AF_PP);
            break;
        case PWM2_CH3_B10:
            gpio_init(B10, GPO, 0, SPEED_50MHZ|OUT_AF_PP);
            break;
        case PWM2_CH4_B11:
            gpio_init(B11, GPO, 0, SPEED_50MHZ|OUT_AF_PP);
            break;

        case PWM3_CH1_A6:
            gpio_init(A6, GPO, 0, SPEED_50MHZ|OUT_AF_PP);
            break;
        case PWM3_CH2_A7:
            gpio_init(A7, GPO, 0, SPEED_50MHZ|OUT_AF_PP);
            break;
        case PWM3_CH3_B0:
            gpio_init(B0, GPO, 0, SPEED_50MHZ|OUT_AF_PP);
            break;
        case PWM3_CH4_B1:
            gpio_init(B1, GPO, 0, SPEED_50MHZ|OUT_AF_PP);
            break;

        case PWM3_CH1_C6:
            gpio_init(C6, GPO, 0, SPEED_50MHZ|OUT_AF_PP);
            break;
        case PWM3_CH2_C7:
            gpio_init(C7, GPO, 0, SPEED_50MHZ|OUT_AF_PP);
            break;
        case PWM3_CH3_C8:
            gpio_init(C8, GPO, 0, SPEED_50MHZ|OUT_AF_PP);
            break;
        case PWM3_CH4_C9:
            gpio_init(C9, GPO, 0, SPEED_50MHZ|OUT_AF_PP);
            break;

        case PWM3_CH1_B4:
            gpio_init(B4, GPO, 0, SPEED_50MHZ|OUT_AF_PP);
            break;
        case PWM3_CH2_B5:
            gpio_init(B5, GPO, 0, SPEED_50MHZ|OUT_AF_PP);
            break;

        case PWM4_CH1_B6:
            gpio_init(B6, GPO, 0, SPEED_50MHZ|OUT_AF_PP);
            break;
        case PWM4_CH2_B7:
            gpio_init(B7, GPO, 0, SPEED_50MHZ|OUT_AF_PP);
            break;
        case PWM4_CH3_B8:
            gpio_init(B8, GPO, 0, SPEED_50MHZ|OUT_AF_PP);
            break;
        case PWM4_CH4_B9:
            gpio_init(B9, GPO, 0, SPEED_50MHZ|OUT_AF_PP);
            break;
        default:
            //断言
            break;
    }
}
