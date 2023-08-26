<<<<<<<< HEAD:keyboards/custommk/evo70_r2/halconf.h
/* Copyright 2023 David Hoelscher (@customMK)
========
/* Copyright 2022 Ruslan Sayfutdinov (@KapJI)
>>>>>>>> bluetooth_playground:quantum/os_detection.h
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

<<<<<<<< HEAD:keyboards/custommk/evo70_r2/halconf.h
#define HAL_USE_I2C TRUE

#define HAL_USE_PWM TRUE

#define HAL_USE_RTC TRUE

#define HAL_USE_SPI TRUE

#define HAL_USE_GPT TRUE

#define SPI_SELECT_MODE SPI_SELECT_MODE_PAD

#define SERIAL_BUFFERS_SIZE 256

// This enables interrupt-driven mode
#define SPI_USE_WAIT TRUE

#include_next <halconf.h>
========
#include <stdint.h>

#ifdef OS_DETECTION_ENABLE
typedef enum {
    OS_UNSURE,
    OS_LINUX,
    OS_WINDOWS,
    OS_MACOS,
    OS_IOS,
} os_variant_t;

void         process_wlength(const uint16_t w_length);
os_variant_t detected_host_os(void);
void         erase_wlength_data(void);
#endif

#ifdef OS_DETECTION_DEBUG_ENABLE
void print_stored_setups(void);
void store_setups_in_eeprom(void);
#endif
>>>>>>>> bluetooth_playground:quantum/os_detection.h
