#ifndef MPCONFIBOARD_H_INC
#define MPCONFIBOARD_H_INC

#define MICROPY_HW_BOARD_NAME        "TiLDA Mk4 Prototype"
#define MICROPY_HW_MCU_NAME          "TI MSP432E4"

#define MICROPY_PY_SOCKET            (1)
#define MICROPY_PY_NETWORK           (1)
#define MICROPY_PY_NETWORK_NDK       (0)   /* TI NDK Ethernet */
#define MICROPY_PY_NETWORK_WIFI      (1)   /* TI WiFi */
#define MICROPY_MACHINE_NVSBDEV      (0)
#define MICROPY_MACHINE_SD           (0)
#define MICROPY_HW_HAS_UGFX          (MICROPY_PY_UGFX)  // set in mpconfigbpard.mk

#include "MSP_EXP432E401Y.h"

#if MICROPY_HW_HAS_UGFX
#define MICROPY_HW_UGFX_SPI         MSP_EXP432E401Y_SPI0
#define MICROPY_HW_UGFX_PIN_CS      MSP_EXP432E401Y_LCD_CS
#define MICROPY_HW_UGFX_PIN_RST     MSP_EXP432E401Y_GPIO_LCD_RST
#define MICROPY_HW_UGFX_PIN_A0      MSP_EXP432E401Y_GPIO_LCD_DCX
#endif

#endif
