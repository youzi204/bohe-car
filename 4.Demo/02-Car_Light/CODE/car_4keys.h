/*********************************************************************************************************************
* @file            car_4keys.h
* @author          Andreas HF
* @Target core     CH32V103R8T6
* @revisions       -2021.10.22, V1.0
* @modify          none
********************************************************************************************************************/

#ifndef CAR_4KEYS_H_
#define CAR_4KEYS_H_

#include "headfile.h"

//�궨��
#define KEYDOWN    0
#define KEYUP      1

#define K1         2
#define K2         3
#define K3         4
#define K4         5

#define K1_PIN     B12
#define K1_MODE    IN_PULLUP

#define K2_PIN     B13
#define K2_MODE    IN_PULLUP

#define K3_PIN     B14
#define K3_MODE    IN_PULLUP

#define K4_PIN     B15
#define K4_MODE    IN_PULLUP

//��������
/*������ʼ��*/
void key_init(unsigned char key_num);
/*����ֵ*/
unsigned char key_check(void);

//ȫ�ֱ�������

#endif /* CAR_4KEYS_H_ */
