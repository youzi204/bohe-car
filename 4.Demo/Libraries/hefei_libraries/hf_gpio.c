/*********************************************************************************************************************
 * @file            hf_gpio.c
 * @brief           GPIO����
 * @author          HeFei WeiHuang
 * @version         1.0
 * @Target core     CH32V103R8T6
 * @date            2021-10-06
 ********************************************************************************************************************/

#include "hf_gpio.h"

/* �ڲ��������� */
const uint32 GPION[4] = {GPIOA_BASE, GPIOB_BASE, GPIOC_BASE, GPIOD_BASE};

//-------------------------------------------------------------------------------------------------------------------
//  @brief      GPIO��ʼ��
//  @param      pin         ѡ������� (��ѡ��Χ�� common.h ��PIN_enumö��ֵȷ��)
//  @param      dir         ���ŵķ���   �����GPO   ���룺GPI
//  @param      dat         ���ų�ʼ��ʱ���õĵ�ƽ״̬�����ʱ��Ч 0���͵�ƽ 1���ߵ�ƽ
//  @param      pinconf     �������ã������ò�����wh_gpio.h�ļ���GPIOSPEED_enum��GPIOMODE_enumö��ֵȷ�����������ʹ�� | ���
//  @return     void
//  Sample usage:           gpio_init(D0, GPO, 1, SPEED_50MHZ|OUT_PP);//D0��ʼ��ΪGPIO���ܡ����ģʽ������ߵ�ƽ���ٶ�50MHZ �������
//-------------------------------------------------------------------------------------------------------------------
void gpio_init(PIN_enum pin, GPIODIR_enum dir, uint8 dat, uint32 pinconf)
{
    GPIO_InitTypeDef GPIO_InitStructure;
    uint8 io_group = (pin & 0xE0) >> 5;
    uint8 io_pin = pin & 0x1F;


    if(PIN_NULL == pin) return;
    //GPIO����ʹ��
    if(0 == (pin >> 5))      RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOA, ENABLE);
    else if(1 == (pin >> 5)) RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOB, ENABLE);
    else if(2 == (pin >> 5)) RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOC, ENABLE);
    else if(3 == (pin >> 5)) RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOD, ENABLE);
    else if(4 == (pin >> 5)) RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOE, ENABLE);
    else if(5 == (pin >> 5)) RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOF, ENABLE);
    else if(6 == (pin >> 5)) RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOG, ENABLE);


    //�������ź�
    GPIO_InitStructure.GPIO_Pin = (uint16)(1 << io_pin);

    if(GPO == dir)
    {
        //ֻ�������Ҫ�����ٶ�
        if((uint16)pinconf >> 8 == 0) GPIO_InitStructure.GPIO_Speed = (GPIOSpeed_TypeDef)(GPIO_Speed_50MHz);  //��ֹû����д�������,Ĭ������50Mhz
        else GPIO_InitStructure.GPIO_Speed = (GPIOSpeed_TypeDef)((uint16)pinconf >> 8);                       //�Ѿ���д�˸ò���������ֵ������
    }

    //����ģʽ
    GPIO_InitStructure.GPIO_Mode = (GPIOMode_TypeDef)((uint16)pinconf & 0xff);
    GPIO_Init((GPIO_TypeDef *)(GPION[io_group]), &GPIO_InitStructure);

    if(GPO == dir)
    {
        //ֻ�������Ҫ��������״̬
        GPIO_WriteBit((GPIO_TypeDef *)(GPION[io_group]), (uint16)(1 << io_pin), dat);
    }
}

//-------------------------------------------------------------------------------------------------------------------
//  @brief      GPIO�������
//  @param      pin         ���ź�ѡ������� (��ѡ��Χ�� common.h ��PIN_enumö��ֵȷ��)
//  @param      dat         ���ŵĵ�ƽ״̬�����ʱ��Ч 0���͵�ƽ 1���ߵ�ƽ
//  @return     void
//  Sample usage:           gpio_set(D0, 0);//D0����͵�ƽ
//-------------------------------------------------------------------------------------------------------------------
void gpio_bit_output(PIN_enum pin, uint8 dat)
{
    uint8 io_group = (pin & 0xE0) >> 5;
    uint8 io_pin = pin & 0x1F;

    if (dat == 1)
         ((GPIO_TypeDef *)(GPION[io_group]))->BSHR = 1 << io_pin;
    else
         ((GPIO_TypeDef *)(GPION[io_group]))->BCR = 1 << io_pin;
}

//-------------------------------------------------------------------------------------------------------------------
//  @brief      GPIO״̬��ȡ����״̬
//  @param      pin         ѡ������� (��ѡ��Χ�� common.h ��PIN_enumö��ֵȷ��)
//  @return     uint8       0���͵�ƽ 1���ߵ�ƽ
//  Sample usage:           uint8 status = gpio_get(D0);//��ȡD0���ŵ�ƽ
//-------------------------------------------------------------------------------------------------------------------
uint8 gpio_get_input(PIN_enum pin)
{
    uint8 io_group = (pin & 0xE0) >> 5;
    uint8 io_pin = pin & 0x1F;

    if((((GPIO_TypeDef *)(GPION[io_group]))->INDR & (1 << io_pin)) != 0)
    {
        return 1;
    }
    return 0;
}

//-------------------------------------------------------------------------------------------------------------------
//  @brief      GPIO״̬��ȡ���״̬
//  @param      pin         ѡ������� (��ѡ��Χ�� common.h ��PIN_enumö��ֵȷ��)
//  @return     uint8       0���͵�ƽ 1���ߵ�ƽ
//  Sample usage:           uint8 status = gpio_get(D0);//��ȡD0���ŵ�ƽ
//-------------------------------------------------------------------------------------------------------------------
uint8 gpio_get_output(PIN_enum pin)
{
    uint8 io_group = (pin & 0xE0) >> 5;
    uint8 io_pin = pin & 0x1F;

    if((((GPIO_TypeDef *)(GPION[io_group]))->OUTDR & (1 << io_pin)))
    {
        return 1;
    }
    return 0;
}

//-------------------------------------------------------------------------------------------------------------------
//  @brief      GPIO ��ת
//  @param      pin         ѡ������� (��ѡ��Χ�� common.h ��PIN_enumö��ֵȷ��)
//  @return     void        
//  Sample usage:           gpio_toggle(D5);//D5���ŵ�ƽ��ת
//-------------------------------------------------------------------------------------------------------------------
void gpio_toggle(PIN_enum pin)
{
    uint8 io_group = (pin & 0xE0) >> 5;
    uint8 io_pin = pin & 0x1F;

    ((GPIO_TypeDef *)(GPION[io_group]))->OUTDR ^= (uint16)(1 << io_pin);
}
