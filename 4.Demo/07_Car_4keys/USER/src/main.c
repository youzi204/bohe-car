/*********************************************************************************************************************
* @file            main.c
* @brief           按键控制智能车尾灯例程
* @author          Andreas HF
* @version         1.0
* @Target core     CH32V103R8T6
* @date            -2021.10.22, V1.0
********************************************************************************************************************/

/********************************************详细说明********************************************

* 1. 如果需要从外部调用库函数，只需将所用到的库函数放在CODE文件中，在工程中添加即可成功编译
* 2. 对于用户而言，只需要更改main函数的内容即可实现想要的功能
* 3. 如果需要声明变量、宏定义、函数等内容，可以放在main.h文件中
* 4. 如果需要用到中断，中断服务函数可以在gd32e23x_it.c文件中找到，只需要添加内容即可
* 5. 如果需要写一些说明性的文档，可以放在doc文件夹的readme.txt文件中

* 例程说明：
-此例程基于GD32E230学习板与扩展板, 控制智能车的左右两个尾灯的亮灭与闪烁。
-按下按键1，尾灯显示黄色
-按下按键2，尾灯显示红色
-按下按键3，尾灯显示蓝色
-按下按键1，尾灯显示绿色
-没有按键按下，尾灯显示白色

************************************************************************************************/

/* 用户头文件 */
#include "main.h"
#include "headfile.h"

/* 全局变量声明 */


/* 主函数 */
int main(void)
{
    /* 此处声明需要用到的局部变量 */
    unsigned char key_value;

    /* 智能车初始化 */
    car_init();

    /* 此处编写单次运行的代码(例如：初始化代码等) */


    while(1)
    {
        /* 此处编写需要循环执行的代码 */
        key_value = key_check();

        if (key_value != 0xFF)
        {
            if(key_value == 0x01)
            {
                car_both_rgb_on(yellow, 10);  //按下按键1，尾灯显示黄色
            }
            else if(key_value == 0x02)
            {
                car_both_rgb_on(red, 10);     //按下按键2，尾灯显示红色
            }
            else if(key_value == 0x03)
            {
                car_both_rgb_on(blue, 10);    //按下按键3，尾灯显示蓝色
            }
            else if(key_value == 0x04)
            {
                car_both_rgb_on(green, 10);   //按下按键4，尾灯显示绿色
            }
        }
    }
}
