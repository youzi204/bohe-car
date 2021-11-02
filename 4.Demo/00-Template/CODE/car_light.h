/*********************************************************************************************************************
 * @file            car_light.h
 * @brief           智能车尾灯控制
 * @author          Andreas WH
 * @version         1.1
 * @Target core     CH32V103R8T6
 * @date            2021-10-07
 ********************************************************************************************************************/

#ifndef __CAR_LIGHT_H
#define __CAR_LIGHT_H

#include "headfile.h"

/* 类型定义 */
typedef enum
{
    red,
    yellow,
    white,
    green,
    blue,
    cyan,
    purple
}rgb_color;


/* 全局变量声明 */
/* rgb颜色定义 */
static unsigned char rgb_off[3] = {0x00,0x00,0x00};
static unsigned char rgb_blue[3] = {0x00,0x00,0xFF};
static unsigned char rgb_green[3] = {0x00,0xFF,0x00};
static unsigned char rgb_cyan[3] = {0x00,0xFF,0xFF};
static unsigned char rgb_red[3] = {0xFF,0x00,0x00};
static unsigned char rgb_purple[3] = {0xFF,0x00,0xFF};
static unsigned char rgb_yellow[3] = {0xFF,0xFF,0x00};
static unsigned char rgb_white[3] = {0xFF,0xFF,0xFF};
static unsigned char rgb_user_define[3] = {0xA7, 0xC8, 0xE2};


/* 函数声明 */

/* 外部函数，用户可自行调用 */
/* 智能车尾灯同时亮起 */
void car_both_rgb_on(rgb_color color, uint16_t time);
/* 智能车尾灯熄灭 */
void car_both_rgb_off();
/* 智能车尾灯左灯闪烁 */
void car_left_rgb_flash(rgb_color color, uint16_t flash_count, uint16_t time);
/* 智能车尾灯右灯闪烁 */
void car_right_rgb_flash(rgb_color color, uint16_t flash_count, uint16_t time);
/* 智能车尾灯同时闪烁 */
void car_both_rgb_flash(rgb_color color, uint16_t flash_count, uint16_t time);


#endif
