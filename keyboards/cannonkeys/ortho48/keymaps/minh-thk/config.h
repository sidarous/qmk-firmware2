/*
Copyright 2015 Jun Wako <wakojun@gmail.com>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once

/* USB Device descriptor parameter */
#define VENDOR_ID       0xCA04
#define PRODUCT_ID      0x0248
#define DEVICE_VER      0x0001
/* in python2: list(u"whatever".encode('utf-16-le')) */
/*   at most 32 characters or the ugly hack in usb_main.c borks */
#define MANUFACTURER QMK
#define PRODUCT Ortho48
#define DESCRIPTION Ortho48

/* key matrix size */
#define MATRIX_ROWS 4
#define MATRIX_COLS 12

#define MATRIX_COL_PINS { B11, B10, B1, B0, A7, A6, A5, B14, A15, A0, C15, C14}
#define MATRIX_ROW_PINS { B12, C13, A2, A1 }
#define DIODE_DIRECTION COL2ROW

#define BACKLIGHT_LEVELS 6
#define BACKLIGHT_BREATHING
#define BREATHING_PERIOD 6

/* define if matrix has ghost */
//#define MATRIX_HAS_GHOST

//#define NUMBER_OF_ENCODERS 1

//for thk orth048
#define ENCODERS_PAD_A { B8, B9 }
#define ENCODERS_PAD_B { B3, B4 }

#define TAP_CODE_DELAY 100

#define ENCODER_RESOLUTION 4

#define SSD1306OLED
/*
#ifdef I2C1_SCL
    #undef I2C1_SCL 6
#endif
#ifdef I2C1_SDA
    #undef I2C1_SDA 7
#endif

#define I2C1_SCL 6
#define I2C1_SDA 7
*/
/* Set 0 if debouncing isn't needed */
#define DEBOUNCE    5

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE
/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE

#define RGBLIGHT_ANIMATIONS
#ifdef WS2812_LED_N
    #undef WS2812_LED_N
#endif
#define WS2812_LED_N 10
#define RGBLED_NUM WS2812_LED_N
#define PORT_WS2812     GPIOB
#define PIN_WS2812      15
#define WS2812_SPI SPID2




/*
 * Feature disable options
 *  These options are also useful to firmware size reduction.
 */

/* disable debug print */
//#define NO_DEBUG

/* disable print */
//#define NO_PRINT

/* disable action features */
//#define NO_ACTION_LAYER
//#define NO_ACTION_TAPPING
//#define NO_ACTION_ONESHOT
//#define NO_ACTION_MACRO
//#define NO_ACTION_FUNCTION
