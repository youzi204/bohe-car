/*********************************************************************************************************************
 * @file            car_Buzzer.h
 * @brief           ���ܳ�����������
 * @author          Davis Klay HF
 * @version         1.0
 * @Target core     CH32V103R8T6
 * @date            2021-10-7
 ********************************************************************************************************************/

#ifndef  _car_Buzzer_h
#define  _car_Buzzer_h


#include "headfile.h"

/* ���Ŷ���˵�� */
#define Buzzer B3

/* �������� */
void Buzzer_Init(void);
void Buzzer_loud(void);
void Buzzer_notloud(void);


#endif
