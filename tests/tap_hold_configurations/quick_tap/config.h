/* Copyright 2017 Fred Sundvik
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

#include "test_common.h"

<<<<<<<< HEAD:tests/tap_hold_configurations/quick_tap/config.h
#define QUICK_TAP_TERM 100
// Although a seemingly superfluous addition since the default per-key function behaves
// no differently from defining a single global QUICK_TAP_TERM, this has been useful
// to catch compilation errors and prevent regressions in the future; see PR #19893.
#define QUICK_TAP_TERM_PER_KEY
========
#define NO_ACTION_TAPPING
#define NO_ACTION_TAPPING_MODTAP_MODS
>>>>>>>> bluetooth_playground:tests/no_tapping/no_mod_tap_mods/config.h
