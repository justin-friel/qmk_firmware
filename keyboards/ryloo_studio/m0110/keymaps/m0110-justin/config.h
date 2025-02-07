/* Copyright 2025 Justin Friel
 *
 *  This program is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program.  If not, see <https://www.gnu.org/licenses/>.
 */

#define BOOTMAGIC_LITE_ROW 0
#define BOOTMAGIC_LITE_COLUMN 0

#ifdef LOCKING_SUPPORT_ENABLE
/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
    #undef LOCKING_SUPPORT_ENABLE
#endif

#ifdef LOCKING_RESYNC_ENABLE
/* Locking resynchronize hack */
    #undef LOCKING_RESYNC_ENABLE
#endif

#define RGB_DI_PIN E2
#ifdef RGB_DI_PIN

    #ifdef RGBLIGHT_LED_COUNT
        #undef RGBLIGHT_LED_COUNT
    #endif

    #define RGBLIGHT_LED_COUNT 4
#endif