/*********************************************************************************************************************
 * @file            car_Electromagnetic_Board.h
 * @author          RuilongWang
 * @version         1.0
 * @Target core     CH32V103R8T6
 * @date            2021-10-06
 ********************************************************************************************************************/

#ifndef _Electromagnetic_Board_H_
#define _Electromagnetic_Board_H_

#include "headfile.h"


/* 宏定义 */
/*ADC通道定义*/
#define  Model_A1  ADC_IN13_C3
#define  Model_A2  ADC_IN14_C4
#define  Model_A3  ADC_IN15_C5


/* 变量定义 */
/* 电感采集数据结构体定义 */
typedef struct{
    float Vin_A1;
    float Vin_A2;
    float Vin_A3;
}ElectromagneticValue;


/* 函数声明 */
void Electromagnetic_Board_init();
ElectromagneticValue get_Electromagnetic_Board_value();


#endif
