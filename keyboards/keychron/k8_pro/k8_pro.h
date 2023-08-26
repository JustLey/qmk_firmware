/* Copyright 2021 @ Keychron (https://www.keychron.com)
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

<<<<<<<< HEAD:keyboards/keychron/v2/jis/config.h
/* RGB Matrix Configuration */
#define DRIVER_1_LED_TOTAL 35
#define DRIVER_2_LED_TOTAL 36
#define RGB_MATRIX_LED_COUNT (DRIVER_1_LED_TOTAL + DRIVER_2_LED_TOTAL)

#define CKLED2001_CURRENT_TUNE \
    { 0xBD, 0xBD, 0x5D, 0xBD, 0xBD, 0x5D, 0xBD, 0xBD, 0x5D, 0xBD, 0xBD, 0x5D }

/* Enable caps-lock LED */
#define CAPS_LOCK_LED_INDEX 30
========
#include "quantum.h"
#ifdef VIA_ENABLE
#    include "via.h"
#endif

#define ___ KC_NO

#ifdef VIA_ENABLE
#    define USER_START QK_KB_0
#else
#    define USER_START SAFE_RANGE
#endif

// clang-format off
enum {
    KC_LOPTN = USER_START,
    KC_ROPTN,
    KC_LCMMD,
    KC_RCMMD,
    KC_TASK,
    KC_FILE,
    KC_SNAP,
    KC_CTANA,
    KC_SIRI,
#ifdef KC_BLUETOOTH_ENABLE
    BT_HST1,
    BT_HST2,
    BT_HST3,
    BAT_LVL,
#else
    BT_HST1 = KC_TRNS,
    BT_HST2 = KC_TRNS,
    BT_HST3 = KC_TRNS,
    BAT_LVL = KC_TRNS,
#endif
	NEW_SAFE_RANGE
};
>>>>>>>> bluetooth_playground:keyboards/keychron/k8_pro/k8_pro.h
