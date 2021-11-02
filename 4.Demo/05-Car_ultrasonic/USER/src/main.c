/*********************************************************************************************************************
* @file            main.c
* @brief           ���ܳ��������������
* @author          Andreas HF
* @version         1.0
* @Target core     CH32V103R8T6
* @date            -2021.10.22, V1.0
********************************************************************************************************************/

/********************************************��ϸ˵��********************************************

* 1. �����Ҫ��������⺯����ֻ�轫���õ��Ŀ⺯������CODE�ļ��У��ڹ�������Ӽ��ɳɹ�����
* 2. �����û����ԣ�ֻ��Ҫ����main���������ݼ���ʵ����Ҫ�Ĺ���
* 3. �����Ҫ����������궨�����ݣ����Է���main.h�ļ���
* 4. �����Ҫ�õ��жϣ��жϷ��������Է���isr.c�ļ���
* 5. �����ҪдһЩ˵���Ե��ĵ������Է���doc�ļ��е�readme��

* ����˵����

-�����̻���GD32E230ѧϰ������չ��, ����С��������ģ����ϰ�����룬������þ����ô��ڷ��͡�

************************************************************************************************/

/* �û�ͷ�ļ� */
#include "main.h"
#include "headfile.h"

/* ȫ�ֱ������� */


/* ������ */
int main()
{
    /* �˴�������Ҫ�õ��ľֲ����� */
    unsigned int  distance_value;
    unsigned char distance_ascii[6];
    unsigned char i;

    /* ���ܳ���ʼ�� */
    car_init();

    /* �˴���д�������еĴ���(���磺��ʼ�������) */


    while(1)
    {
        /* �˴���дѭ�����еĴ��� */
        distance_value = ultra_get_distance();              //������ģ����

        int_to_ascii(distance_value, distance_ascii);       //����þ���ת��Ϊascii��

        uart_send_distance_ascii(distance_ascii);           //���ڷ��Ͳ�õľ���
        Delay_Ms(500);
    }
}

void uart_send_distance_ascii(unsigned char *ascii_value)
{
    uart_send_char(UART_1, ascii_value[1]);
    uart_send_char(UART_1, ascii_value[2]);
    uart_send_char(UART_1, ascii_value[3]);
    uart_send_char(UART_1, '.');
    uart_send_char(UART_1, ascii_value[4]);
    uart_send_char(UART_1, 0x0D);
    uart_send_char(UART_1, 0x0A);                            //����
}
