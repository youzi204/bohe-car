/*********************************************************************************************************************
* @file            car_reed_switch.h
* @author          Andreas HF
* @Target core     CH32V103R8T6
* @revisions       -2021.10.22, V1.0
* @modify          none
 ********************************************************************************************************************/

#ifndef _HF_REED_SWITCH_H_
#define _HF_REED_SWITCH_H_

#include "headfile.h"

//���Ŷ���˵��
#define REED_SWITCH_PIN B3
#define REED_SWITCH_ON 0
#define REED_SWITCH_OFF 1

//��������
/*��ʼ���ɻɹܰ�����*/
void reed_init(void);
/*��ȡ�ɻɹܰ����״̬*/
unsigned char reed_check(void);

#endif
