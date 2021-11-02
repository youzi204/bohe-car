/*********************************************************************************************************************
 * @file            car_led_display.h
 * @author          HeFei
 * @version         1.0
 * @Target core     CH32V103R8T6
 * @date            2021-10-07
 ********************************************************************************************************************/

#ifndef  _hf_led_display_h
#define  _hf_led_display_h

#include "headfile.h"


/* 数码管显示字符的宏定义 */
#define zero    leddata[0]
#define one     leddata[1]
#define two     leddata[2]
#define three   leddata[3]
#define four    leddata[4]
#define five    leddata[5]
#define six     leddata[6]
#define seven   leddata[7]
#define eight   leddata[8]
#define nine    leddata[9]
#define  A      leddata[10]
#define  B      leddata[11]
#define  C      leddata[12]
#define  D      leddata[13]
#define  E      leddata[14]
#define  F      leddata[15]
#define  H      leddata[16]
#define  L      leddata[17]
#define  n      leddata[18]
#define  u      leddata[19]
#define  p      leddata[20]
#define  o      leddata[21]
#define  line   leddata[22]
#define  off    leddata[23]

/* 函数声明 */

/* 外部函数，用户可自行调用 */
/* 点亮数码管 */
void led_display_on(uint8 char1, uint8 char2, uint8 char3, uint8 char4);

#endif
