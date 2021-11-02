/*********************************************************************************************************************
* @file            main.c
* @brief           智能车干簧管例程
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

-此例程基于CH32V103学习板与扩展板, 干簧管检测到磁铁，智能车尾灯闪烁黄色三次，间隔100ms

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
        /* 此处编写循环运行的代码 */
        unsigned char reed_flag = 0;

        reed_flag = reed_check();    //获取干簧管状态

        if(reed_flag == REED_SWITCH_ON)    //判断干簧管是否检测到磁铁
        {
            car_both_rgb_flash(yellow, 3, 100);    //智能车尾灯闪烁黄色三次，间隔100ms
        }
    }

}
