<<<<<<<< HEAD:keyboards/projectd/65/projectd_65_ansi/mcuconf.h
/* Copyright (C) 2023 Westberry Technology (ChangZhou) Corp., Ltd
========
/* Copyright 2023 @ Keychron (https://www.keychron.com)
>>>>>>>> bluetooth_playground:keyboards/keychron/k4_pro/k4_pro.h
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

<<<<<<<< HEAD:keyboards/projectd/65/projectd_65_ansi/mcuconf.h
#include_next <mcuconf.h>
========
#include "quantum.h"
#ifdef VIA_ENABLE
#    include "via.h"
#endif
>>>>>>>> bluetooth_playground:keyboards/keychron/k4_pro/k4_pro.h

#undef WB32_SPI_USE_QSPI
#define WB32_SPI_USE_QSPI TRUE

<<<<<<<< HEAD:keyboards/projectd/65/projectd_65_ansi/mcuconf.h
#undef WB32_SPI_USE_SPIM2
#define WB32_SPI_USE_SPIM2 TRUE
========
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
>>>>>>>> bluetooth_playground:keyboards/keychron/k4_pro/k4_pro.h
