/*
Copyright 2012 Jun Wako <wakojun@gmail.com>

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

#ifndef CONFIG_H
#define CONFIG_H

#include "config_common.h"

/* Bypass the error: #error "TIM2 is not a 32bits timer" */
#define CH_CFG_ST_RESOLUTION                16

/* USB Device descriptor parameter */

#define VENDOR_ID       0xFEED
#define PRODUCT_ID      0x6062
#define DEVICE_VER      0x0001
#define MANUFACTURER    Profet
#define PRODUCT         Atreus62

/* key matrix size */
#define MATRIX_ROWS 6
#define MATRIX_COLS 12

#define MATRIX_ROW_PINS { B6, B7, A15, B3, B4, B5}
#define MATRIX_COL_PINS { A3, A2, A1, A0, C15, C14, A10, A9, A8, B15, B14, B13}

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW

/* Set 0 if debouncing isn't needed */
#define DEBOUNCE 5

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE
/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE

#define RGB_DI_PIN A7
#define RGBLED_NUM 8
#define RGBLIGHT_LIMIT_VAL 100
#define RGBLIGHT_ANIMATIONS
#define RGBLIGHT_LAYERS
/*
 * Feature disable options
 *  These options are also useful to firmware size reduction.
 */

/* disable debug print */
// #define NO_DEBUG

/* disable print */
// #define NO_PRINT

/* disable action features */
//#define NO_ACTION_LAYER
//#define NO_ACTION_TAPPING
//#define NO_ACTION_ONESHOT
//#define NO_ACTION_MACRO
//#define NO_ACTION_FUNCTION

//#define WS2812_EXTERNAL_PULLUP


#endif