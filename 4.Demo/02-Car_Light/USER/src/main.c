/*********************************************************************************************************************
* @file            main.c
* @brief           智能车尾灯控制例程
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

-此例程基于GD32E230学习板与扩展板, 控制智能车左右两个尾灯的亮灭与闪烁。

************************************************************************************************/

/* 用户头文件 */
#include "main.h"
#include "headfile.h"

/* 全局变量声明 */


/* 主函数 */
int main()
{
    /* 此处声明需要用到的局部变量 */

    /* 智能车初始化 */
    car_init();

    /* 此处编写单次运行的代码(例如：初始化代码等) */


    while(1)
    {
        /* 此处编写需要循环执行的代码 */
        car_forward();                          //智能车前进
        Delay_Ms(5000);                         //等待5s

        car_turnleft();                         //智能车左转
        car_left_rgb_flash(yellow, 3, 500);     //智能车尾灯左灯闪烁黄色三次，间隔500ms

        car_forward();                          //智能车前进
        Delay_Ms(5000);                         //等待5s

        car_turnright();                        //智能车右转
        car_right_rgb_flash(yellow, 3, 500);    //智能车尾灯右灯闪烁黄色三次，间隔500ms

        car_forward();                          //智能车前进
        Delay_Ms(5000);                         //等待5s

        car_stop();                             //智能车停止
        car_both_rgb_on(red, 5000);             //智能车尾灯两灯显示红色，等待5000s
        car_both_rgb_off();                     //智能车尾灯关闭

        car_back();                             //智能车后退
        car_both_rgb_on(white, 5000);           //智能车尾灯两灯显示白色，等待5000s
        car_both_rgb_off();                     //智能车尾灯关闭

        car_stop();                             //智能车停止
        car_both_rgb_on(red, 5000);             //智能车尾灯两灯显示红色，等待5000s
        car_both_rgb_off();                     //智能车尾灯关闭
    }
}


