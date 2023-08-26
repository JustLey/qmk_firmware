<<<<<<<< HEAD:keyboards/splitkb/aurora/lily58/config.h
/* Copyright 2022 splitkb.com <support@splitkb.com>
========
/* Copyright 2022 @ lokher (https://www.keychron.com)
>>>>>>>> bluetooth_playground:keyboards/keychron/bluetooth/bat_level_animation.h
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

<<<<<<<< HEAD:keyboards/splitkb/aurora/lily58/config.h
// Not yet available in `info.json`
#ifdef OLED_ENABLE
#   define OLED_FONT_H "keyboards/splitkb/aurora/lily58/glcdfont.c"
#endif
========
void bat_level_animiation_start(uint8_t percentage);
void bat_level_animiation_stop(void);
bool bat_level_animiation_actived(void);
void bat_level_animiation_indicate(void);
void bat_level_animiation_task(void);
>>>>>>>> bluetooth_playground:keyboards/keychron/bluetooth/bat_level_animation.h
