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

//引脚定义说明
#define REED_SWITCH_PIN B3
#define REED_SWITCH_ON 0
#define REED_SWITCH_OFF 1

//函数声明
/*初始化干簧管板引脚*/
void reed_init(void);
/*获取干簧管板输出状态*/
unsigned char reed_check(void);

#endif
