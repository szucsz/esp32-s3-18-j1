/*
 * lv_drv_conf.h for Waveshare ESP32-S3-Touch-AMOLED-1.8
 * Reference: https://www.waveshare.com/wiki/ESP32-S3-Touch-AMOLED-1.8
 * Display: SH8601 (QSPI)
 * Touch: FT3168 (I2C)
 * LVGL v8.x recommended
 */

#ifndef LV_DRV_CONF_H
#define LV_DRV_CONF_H

/*====================
   LVGL DRIVER CONFIGURATION
 ====================*/

/* Display driver settings */
#define LV_DRV_DISP_SH8601_QSPI      1   /* Enable SH8601 QSPI display driver */
#define LV_DRV_DISP_USE_QSPI         1   /* Use QSPI for display communication */
#define LV_DRV_DISP_HOR_RES          368
#define LV_DRV_DISP_VER_RES          448
#define LV_DRV_DISP_SWAP_BYTES       1   /* Required for SH8601 */
#define LV_DRV_DISP_COLOR_DEPTH      16

/* Touch driver settings */
#define LV_DRV_TOUCH_FT3168_I2C      1   /* Enable FT3168 I2C touch driver */
#define LV_DRV_TOUCH_USE_I2C         1   /* Use I2C for touch communication */
#define LV_DRV_TOUCH_MAX_POINTS      5   /* FT3168 supports up to 5 points */

/* GPIO Expander (TCA9554) */
#define LV_DRV_USE_TCA9554           1

/* SD Card (TF Card) */
#define LV_DRV_USE_SDMMC             1

/* Power Management (AXP2101) */
#define LV_DRV_USE_AXP2101           1

/* IMU (QMI8658) */
#define LV_DRV_USE_QMI8658           1

/* Audio Codec (ES8311) */
#define LV_DRV_USE_ES8311            1

/* Enable logging for drivers */
#define LV_DRV_LOG_LEVEL             LV_LOG_LEVEL_WARN

#endif /*LV_DRV_CONF_H*/
