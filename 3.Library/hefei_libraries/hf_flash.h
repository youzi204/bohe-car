/*********************************************************************************************************************
 * @file            hf_flash.h
 * @brief           FLASH配置
 * @author          HeFei WeiHuang
 * @version         1.0
 * @Target core     CH32V103R8T6
 * @date            2021-10-06
 ********************************************************************************************************************/

#ifndef _hf_flash_h
#define _hf_flash_h

#include "ch32v10x_flash.h"
#include "ch32v10x_misc.h"
#include "common.h"

/* 宏定义 */
#define FLASH_BASE_ADDR             (0x08000000)                // FALSH首地址
#define FLASH_PAGE_SIZE             (0x00000400)                // 1K byte
#define FLASH_SECTION_SIZE          (FLASH_PAGE_SIZE*4)         // 4K byte
//一共16个扇区，一个扇区4K


/* 枚举定义声明 */
/* 枚举 Flash 扇区 */
typedef enum
{
    FLASH_SECTION_00,
    FLASH_SECTION_01,
    FLASH_SECTION_02,
    FLASH_SECTION_03,
    FLASH_SECTION_04,
    FLASH_SECTION_05,
    FLASH_SECTION_06,
    FLASH_SECTION_07,
    FLASH_SECTION_08,
    FLASH_SECTION_09,
    FLASH_SECTION_10,
    FLASH_SECTION_11,
    FLASH_SECTION_12,
    FLASH_SECTION_13,
    FLASH_SECTION_14,
    FLASH_SECTION_15,
}FLASH_SECTION_enum;

/* 枚举 Flash 页索引 */
typedef enum
{
    FLASH_PAGE_0,
    FLASH_PAGE_1,
    FLASH_PAGE_2,
    FLASH_PAGE_3,
}FLASH_PAGE_enum;

/* 函数声明 */

/* 外部函数，用户可自行调用 */
/* 校验FLASH是否有数据 */
uint8 flash_check(FLASH_SECTION_enum FLASH_SECTION_x, FLASH_PAGE_enum FLASH_PAGE_x);
/* 擦除扇区 */
uint8 flash_erase_page(FLASH_SECTION_enum FLASH_SECTION_x, FLASH_PAGE_enum FLASH_PAGE_x);
/* 读取一页 */
void flash_page_read (FLASH_SECTION_enum FLASH_SECTION_x, FLASH_PAGE_enum FLASH_PAGE_x, uint32 *buf, uint16 len);
/* 编程一页 */
uint8 flash_page_program(FLASH_SECTION_enum FLASH_SECTION_x, FLASH_PAGE_enum FLASH_PAGE_x, const uint32 *buf, uint16 len);

#endif
