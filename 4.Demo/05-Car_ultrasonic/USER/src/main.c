/*********************************************************************************************************************
* @file            main.c
* @brief           智能车超声波测距例程
* @author          Andreas HF
* @version         1.0
* @Target core     CH32V103R8T6
* @date            -2021.10.22, V1.0
********************************************************************************************************************/

/********************************************详细说明********************************************

* 1. 如果需要从外面调库函数，只需将所用到的库函数放在CODE文件中，在工程中添加即可成功编译
* 2. 对于用户而言，只需要更改main函数的内容即可实现想要的功能
* 3. 如果需要声明变量或宏定义内容，可以放在main.h文件中
* 4. 如果需要用到中断，中断服务函数可以放在isr.c文件中
* 5. 如果需要写一些说明性的文档，可以放在doc文件夹的readme中

* 例程说明：

-此例程基于GD32E230学习板与扩展板, 控制小车超声波模块测障碍物距离，并将测得距离用串口发送。

************************************************************************************************/

/* 用户头文件 */
#include "main.h"
#include "headfile.h"

/* 全局变量声明 */


/* 主函数 */
int main()
{
    /* 此处声明需要用到的局部变量 */
    unsigned int  distance_value;
    unsigned char distance_ascii[6];
    unsigned char i;

    /* 智能车初始化 */
    car_init();

    /* 此处编写单次运行的代码(例如：初始化代码等) */


    while(1)
    {
        /* 此处编写循环运行的代码 */
        distance_value = ultra_get_distance();              //超声波模块测距

        int_to_ascii(distance_value, distance_ascii);       //将测得距离转换为ascii码

        uart_send_distance_ascii(distance_ascii);           //串口发送测得的距离
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
    uart_send_char(UART_1, 0x0A);                            //换行
}
