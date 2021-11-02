/*********************************************************************************************************************
 * @file            car_four_keys.h
 * @brief           �İ�������
 * @author          HeFei
 * @version         1.0
 * @Target core     CH32V103R8T6
 * @date            2021-10-06
 ********************************************************************************************************************/
#ifndef _CAR_FOUR_KEYS_H
#define _CAR_FOUR_KEYS_H
#include "headfile.h"

/* �궨�� */
/*�ĸ���������*/
#define key1     B12
#define key2     B13
#define key3     B14
#define key4     B15

/* �������� */
int keys_value_display();
void four_keys_dispaly();

#endif
