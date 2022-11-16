#include QMK_KEYBOARD_H

enum layers {
    _BASE,
    _FN1,
    _FN2
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_BASE] = LAYOUT(
        KC_ESC,   KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,   KC_F11,   KC_F12,   KC_PSCR,  MO(2),    KC_DEL,
        KC_GRV,   KC_1,     KC_2,     KC_3,     KC_4,     KC_5,     KC_6,     KC_7,     KC_8,     KC_9,     KC_0,     KC_MINS,  KC_EQL,   KC_NO,    KC_BSPC,  KC_PGUP,
        KC_TAB,   KC_Q,     KC_W,     KC_E,     KC_R,     KC_T,     KC_Y,     KC_U,     KC_I,     KC_O,     KC_P,     KC_LBRC,  KC_RBRC,  KC_BSLS,            KC_PGDN,
        MO(1),    KC_A,     KC_S,     KC_D,     KC_F,     KC_G,     KC_H,     KC_J,     KC_K,     KC_L,     KC_SCLN,  KC_QUOT,            KC_ENT,             KC_HOME,
        KC_LSFT,  KC_NO,    KC_Z,     KC_X,     KC_C,     KC_V,     KC_B,     KC_N,     KC_M,     KC_COMM,  KC_DOT,   KC_SLSH,  KC_RSFT,            KC_UP,    KC_END,
        KC_LCTL,  KC_LGUI,  KC_LALT,                      KC_NO,    KC_SPC,   KC_NO,                        KC_RALT,  KC_APP,   KC_RCTL,  KC_LEFT,  KC_DOWN,  KC_RGHT
    ),
	[_FN1] = LAYOUT(
        KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_NO,    KC_NO,    KC_TRNS,
        KC_ESC,   KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,   KC_F11,   KC_F12,   KC_NO,    KC_DEL,   KC_TRNS,
        KC_TRNS,  KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_PGUP,  KC_UP,    KC_PGDN,  KC_PSCR,  KC_NO,    KC_NO,    KC_NO,              KC_TRNS,
        KC_TRNS,  KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_HOME,  KC_LEFT,  KC_DOWN,  KC_RGHT,  KC_NO,    KC_NO,              KC_TRNS,            KC_TRNS,
        KC_TRNS,  KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_END,   KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,              KC_TRNS,  KC_TRNS,
        KC_TRNS,  KC_TRNS,  KC_TRNS,                      KC_NO,    KC_NO,    KC_NO,                        KC_NO,    KC_NO,    KC_NO,    KC_TRNS,  KC_TRNS,  KC_TRNS
    ),
	[_FN2] = LAYOUT(
        KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_TRNS,  KC_NO,
        KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    QK_BOOT,  KC_NO,
        KC_INS,   RGB_HUI,  RGB_SAI,  RGB_VAI,  RGB_TOG,  RGB_MOD,  RGB_SPI,  KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,              KC_NO,
        KC_CAPS,  KC_SCRL,  KC_NUM,   KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,              KC_NO,              KC_NO,
        KC_PAUS,  KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    NK_TOGG,  KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,              KC_NO,    KC_NO,
        KC_NO,    KC_NO,    KC_NO,                        KC_NO,    KC_NO,    KC_NO,                        KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO
    )
};

