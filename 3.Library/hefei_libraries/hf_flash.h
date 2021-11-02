/*********************************************************************************************************************
 * @file            hf_flash.h
 * @brief           FLASH����
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

/* �궨�� */
#define FLASH_BASE_ADDR             (0x08000000)                // FALSH�׵�ַ
#define FLASH_PAGE_SIZE             (0x00000400)                // 1K byte
#define FLASH_SECTION_SIZE          (FLASH_PAGE_SIZE*4)         // 4K byte
//һ��16��������һ������4K


/* ö�ٶ������� */
/* ö�� Flash ���� */
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

/* ö�� Flash ҳ���� */
typedef enum
{
    FLASH_PAGE_0,
    FLASH_PAGE_1,
    FLASH_PAGE_2,
    FLASH_PAGE_3,
}FLASH_PAGE_enum;

/* �������� */

/* �ⲿ�������û������е��� */
/* У��FLASH�Ƿ������� */
uint8 flash_check(FLASH_SECTION_enum FLASH_SECTION_x, FLASH_PAGE_enum FLASH_PAGE_x);
/* �������� */
uint8 flash_erase_page(FLASH_SECTION_enum FLASH_SECTION_x, FLASH_PAGE_enum FLASH_PAGE_x);
/* ��ȡһҳ */
void flash_page_read (FLASH_SECTION_enum FLASH_SECTION_x, FLASH_PAGE_enum FLASH_PAGE_x, uint32 *buf, uint16 len);
/* ���һҳ */
uint8 flash_page_program(FLASH_SECTION_enum FLASH_SECTION_x, FLASH_PAGE_enum FLASH_PAGE_x, const uint32 *buf, uint16 len);

#endif
