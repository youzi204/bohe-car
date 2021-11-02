/*********************************************************************************************************************
 * @file            car_Electromagnetic_Board.c
 * @author          RuilongWang
 * @version         1.0
 * @Target core     CH32V103R8T6
 * @date            2021-10-06
 ********************************************************************************************************************/

#include "car_electromagnetic_board.h"


//-------------------------------------------------------------------------------------------------------------------
// @brief        ��ʼ����а�
// @param        none
// @return       void
// Sample usage:        Electromagnetic_Board_init();
//                      ��ʼ����а�
//-------------------------------------------------------------------------------------------------------------------
void Electromagnetic_Board_init()
{
    /*��ʼ������ADCͨ��*/
    adc_init(Model_A1);
    adc_init(Model_A2);
    adc_init(Model_A3);
}


//-------------------------------------------------------------------------------------------------------------------
// @brief        ��ȡ��а�����
// @param        none
// @return       void
// Sample usage:        get_Electromagnetic_Board_value();
//                      ��ȡ��а�����
//-------------------------------------------------------------------------------------------------------------------
ElectromagneticValue get_Electromagnetic_Board_value()
{
    ElectromagneticValue value={0,0,0};
    float tmp_adc_value;
    uint16_t adc_value = 0;

    /* A1ͨ�����ݲɼ� */
    adc_value = adc_convert(Model_A1,0);                    //ת��ͨ��ģ����
    tmp_adc_value = (float)adc_value;                       //ת���ɸ�����
    value.Vin_A1 = tmp_adc_value * 3.3f / 4096.0f;          //ת���ɵ�ѹֵ

    /* A2ͨ�����ݲɼ� */
    adc_value = adc_convert(Model_A2,0);
    tmp_adc_value = (float)adc_value;
    value.Vin_A2 = tmp_adc_value * 3.3f / 4096.0f;

    /* A3ͨ�����ݲɼ� */
    adc_value = adc_convert(Model_A3,0);
    tmp_adc_value = (float)adc_value;
    value.Vin_A3 = tmp_adc_value * 3.3f / 4096.0f;

    return value;
}
