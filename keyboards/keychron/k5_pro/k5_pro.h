<<<<<<<< HEAD:keyboards/handwired/maverick0197/keydeck8/keymaps/default/keymap.c
/* Copyright 2023 Maverick0197
========
/* Copyright 2023 @ Keychron (https://www.keychron.com)
>>>>>>>> bluetooth_playground:keyboards/keychron/k5_pro/k5_pro.h
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

<<<<<<<< HEAD:keyboards/handwired/maverick0197/keydeck8/keymaps/default/keymap.c
#include QMK_KEYBOARD_H
========
#pragma once

#include "quantum.h"
#ifdef VIA_ENABLE
#    include "via.h"
#endif

#define ___ KC_NO
>>>>>>>> bluetooth_playground:keyboards/keychron/k5_pro/k5_pro.h

#ifdef VIA_ENABLE
#    define USER_START QK_KB_0
#else
#    define USER_START SAFE_RANGE
#endif

// clang-format off
<<<<<<<< HEAD:keyboards/handwired/maverick0197/keydeck8/keymaps/default/keymap.c

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
        KC_MEDIA_PREV_TRACK, KC_MEDIA_PLAY_PAUSE, KC_MEDIA_NEXT_TRACK,
        KC_1, KC_2, KC_3,
        KC_4, KC_5, KC_6)
};
#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {
    [0] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU) }
};
#endif // ENCODER_MAP_ENABLE

// clang-format on
========
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
>>>>>>>> bluetooth_playground:keyboards/keychron/k5_pro/k5_pro.h
