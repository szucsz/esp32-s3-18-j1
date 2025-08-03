/*
 * lv_conf.h for Waveshare ESP32-S3-Touch-AMOLED-1.8
 * Reference: https://www.waveshare.com/wiki/ESP32-S3-Touch-AMOLED-1.8
 * Display: SH8601 (368x448)
 * Touch: FT3168
 * LVGL v8.x recommended
 */

#ifndef LV_CONF_H
#define LV_CONF_H

/*====================
   LVGL CONFIGURATION
 ====================*/

#define LV_COLOR_DEPTH           16
#define LV_COLOR_16_SWAP         1   /* Required for SH8601 QSPI display */
#define LV_COLOR_SCREEN_TRANSP   0
#define LV_COLOR_MIX_ROUNDING    1
#define LV_COLOR_CHROMA_KEY      lv_color_hex(0x00FF00)

#define LV_HOR_RES_MAX           368
#define LV_VER_RES_MAX           448

#define LV_DPI_DEF               130

#define LV_MEM_SIZE              (64U * 1024U) /* 64KB for LVGL heap */
#define LV_MEM_BUF_MAX_NUM       16

#define LV_ENABLE_GC             0
#define LV_USE_LOG               1
#define LV_LOG_LEVEL             LV_LOG_LEVEL_WARN
#define LV_LOG_PRINTF            1

#define LV_USE_PERF_MONITOR      1
#define LV_USE_REFR_DEBUG        0

#define LV_USE_ASSERT_NULL       1
#define LV_USE_ASSERT_MALLOC     1
#define LV_USE_ASSERT_MEM_INTEGRITY 1
#define LV_USE_ASSERT_OBJ        1

#define LV_USE_GPU               0
#define LV_USE_GPU_STM32_DMA2D   0

#define LV_USE_FILESYSTEM        1
#define LV_USE_FS_POSIX          1
#define LV_USE_FS_STDIO          1
#define LV_FS_POSIX_LETTER       'A'

#define LV_USE_DRAW_SDL          0
#define LV_USE_DRAW_SW           1

#define LV_USE_TOUCHPAD          1
#define LV_USE_INDEV             1

#define LV_USE_DISP              1
#define LV_USE_DISP_BUF          1

#define LV_USE_THEME_DEFAULT     1
#define LV_USE_THEME_BASIC       1
#define LV_USE_THEME_MONO        0

#define LV_USE_FONT_DEJAVU_16    1
#define LV_USE_FONT_DEJAVU_20    1
#define LV_USE_FONT_DEJAVU_22    1
#define LV_USE_FONT_DEJAVU_28    1
#define LV_USE_FONT_UNSCII_8     0
#define LV_USE_FONT_UNSCII_16    0

#define LV_USE_DEMO_WIDGETS      1
#define LV_USE_DEMO_KEYPAD_AND_ENCODER 0
#define LV_USE_DEMO_BENCHMARK    0
#define LV_USE_DEMO_STRESS       0

#endif /*LV_CONF_H*/
