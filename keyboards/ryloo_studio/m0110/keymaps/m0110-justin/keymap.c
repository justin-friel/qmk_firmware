/*
Copyright 2020 newtonapple

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

#include QMK_KEYBOARD_H

#define UNUSED XXXXXXX

enum keyboard_layers {
  _BASE,
  _FN,
  _HWFN
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[_BASE] = LAYOUT(
        KC_ESC,   KC_1,     KC_2,     KC_3,     KC_4,     KC_5,     KC_6,     KC_7,     KC_8,     KC_9,     KC_0,     KC_MINS,  KC_EQL,   UNUSED,  KC_BSPC,
        KC_TAB,   KC_Q,     KC_W,     KC_E,     KC_R,     KC_T,     KC_Y,     KC_U,     KC_I,     KC_O,     KC_P,     KC_LBRC,  KC_RBRC,  KC_BSLS,
        MO(_FN),  KC_A,     KC_S,     KC_D,     KC_F,     KC_G,     KC_H,     KC_J,     KC_K,     KC_L,     KC_SCLN,  KC_QUOT,  UNUSED,   KC_ENT,
        KC_LSFT,  UNUSED,   KC_Z,     KC_X,     KC_C,     KC_V,     KC_B,     KC_N,     KC_M,     KC_COMM,  KC_DOT,   KC_SLSH,  KC_RSFT,  MO(_HWFN),
        KC_LCTL,  KC_LGUI,  KC_LALT,  UNUSED,                       KC_SPC,   UNUSED,             KC_RALT,  KC_RGUI,  UNUSED,   KC_APP,   KC_RCTL),
 
    [_FN]  = LAYOUT(
        KC_GRV,   KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,   KC_F11,   KC_F12,   UNUSED,  KC_DEL,
        _______,  _______,  _______,  _______,  _______,  _______,  _______,  KC_PGUP,  KC_UP,    KC_PGDN,  KC_PSCR,  _______,  _______,  _______,
        _______,  _______,  _______,  _______,  _______,  _______,  KC_HOME,  KC_LEFT,  KC_DOWN,  KC_RGHT,  _______,  _______,  UNUSED,   _______,
        _______,  UNUSED,   _______,  _______,  _______,  _______,  _______,  KC_END,   _______,  _______,  _______,  _______,  _______,  _______,
        _______,  _______,  _______,  UNUSED,                       _______,  UNUSED,             _______,  _______,  UNUSED,   _______,  _______),
 
    [_HWFN]  = LAYOUT(
        QK_BOOT,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  UNUSED,  XXXXXXX,
        XXXXXXX,  UG_HUEU,  UG_SATU,  UG_VALU,  UG_TOGG,  UG_PREV,  UG_SPDU,  KC_INS,   KC_SCRL,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,
        KC_CAPS,  UG_HUED,  UG_SATD,  UG_VALD,  XXXXXXX,  UG_NEXT,  UG_SPDD,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  UNUSED,   XXXXXXX,
        XXXXXXX,  UNUSED,   XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  NK_TOGG,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,
        XXXXXXX,  XXXXXXX,  XXXXXXX,  UNUSED,                       XXXXXXX,  UNUSED,             XXXXXXX,  XXXXXXX,  UNUSED,   XXXXXXX,  XXXXXXX) 
}; 


/*
// Light LEDs  in cyan when keyboard layer 0 is active
const rgblight_segment_t PROGMEM base_layer[] = RGBLIGHT_LAYER_SEGMENTS(
    {0, 4, HSV_GREEN}
);
// Light LEDs 11 & 12 in purple when keyboard layer 2 is active
const rgblight_segment_t PROGMEM fn_layer[] = RGBLIGHT_LAYER_SEGMENTS(
    {11, 2, HSV_PURPLE}
);
// Light LEDs 13 & 14 in green when keyboard layer 3 is active
const rgblight_segment_t PROGMEM hwfn_layer[] = RGBLIGHT_LAYER_SEGMENTS(
    {13, 2, HSV_RED}
);
*/