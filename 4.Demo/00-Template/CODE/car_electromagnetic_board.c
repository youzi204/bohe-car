/*********************************************************************************************************************
 * @file            car_Electromagnetic_Board.c
 * @author          RuilongWang
 * @version         1.0
 * @Target core     CH32V103R8T6
 * @date            2021-10-06
 ********************************************************************************************************************/

#include "car_electromagnetic_board.h"


//-------------------------------------------------------------------------------------------------------------------
// @brief        初始化电感板
// @param        none
// @return       void
// Sample usage:        Electromagnetic_Board_init();
//                      初始化电感板
//-------------------------------------------------------------------------------------------------------------------
void Electromagnetic_Board_init()
{
    /*初始化三个ADC通道*/
    adc_init(Model_A1);
    adc_init(Model_A2);
    adc_init(Model_A3);
}


//-------------------------------------------------------------------------------------------------------------------
// @brief        获取电感板数据
// @param        none
// @return       void
// Sample usage:        get_Electromagnetic_Board_value();
//                      获取电感板数据
//-------------------------------------------------------------------------------------------------------------------
ElectromagneticValue get_Electromagnetic_Board_value()
{
    ElectromagneticValue value={0,0,0};
    float tmp_adc_value;
    uint16_t adc_value = 0;

    /* A1通道数据采集 */
    adc_value = adc_convert(Model_A1,0);                    //转换通道模拟量
    tmp_adc_value = (float)adc_value;                       //转换成浮点数
    value.Vin_A1 = tmp_adc_value * 3.3f / 4096.0f;          //转换成电压值

    /* A2通道数据采集 */
    adc_value = adc_convert(Model_A2,0);
    tmp_adc_value = (float)adc_value;
    value.Vin_A2 = tmp_adc_value * 3.3f / 4096.0f;

    /* A3通道数据采集 */
    adc_value = adc_convert(Model_A3,0);
    tmp_adc_value = (float)adc_value;
    value.Vin_A3 = tmp_adc_value * 3.3f / 4096.0f;

    return value;
}
