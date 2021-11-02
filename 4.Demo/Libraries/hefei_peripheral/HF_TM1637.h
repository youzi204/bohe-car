/*********************************************************************************************************************
* @file            HF_TM1637.h
* @author          Andreas HF
* @version         1.0
* @Target core     CH32V103R8T6
* @date            -2021.10.22, V1.0
********************************************************************************************************************/

#ifndef  _HF_TM1637_H
#define  _HF_TM1637_H

#include "headfile.h"

/* LED��ʾ���飬������ */
static const unsigned char leddata[]={
                0x3F,  //"0"
                0x06,  //"1"
                0x5B,  //"2"
                0x4F,  //"3"
                0x66,  //"4"
                0x6D,  //"5"
                0x7D,  //"6"
                0x07,  //"7"
                0x7F,  //"8"
                0x6F,  //"9"
                0x77,  //"A"
                0x7C,  //"B"
                0x39,  //"C"
                0x5E,  //"D"
                0x79,  //"E"
                0x71,  //"F"
                0x00,  //Ϩ��
                0x00  //�Զ���
                         };

//�궨��
#define led_scl B10
#define led_sda B11

#define led_scl_clr() gpio_bit_output(led_scl, 0)
#define led_scl_set() gpio_bit_output(led_scl, 1)

#define led_sda_clr() gpio_bit_output(led_sda, 0)
#define led_sda_set() gpio_bit_output(led_sda, 1)

#define led_sda_get()   gpio_get(led_sda)


#define BIT_1    1
#define BIT_2    2
#define BIT_3    3
#define BIT_4    4


//��������
/* ����ܳ�ʼ�� */
void tm1637_init(void);
/* ��ʼ�ź� */
void tm1637_start(void);
/* ֹͣ�ź� */
void tm1637_stop(void);
/* дһ���ֽ� */
void tm1637_write_byte(unsigned char dat);
/* �ȴ�Ӧ�� */
void tm1637_wait_ack(void);
/* ����һ������ */
void tm1637_command(unsigned char cmd);
/* �������ʾ */
void tm1637_leddisplay(unsigned char num_position, unsigned char num, unsigned char dp);


//ȫ�ֱ�������

#endif
