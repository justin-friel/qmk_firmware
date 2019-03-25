#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[0] = LAYOUT(
        KC_ESC, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINS, KC_EQL, KC_BSPC, KC_NO,
        KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_LBRC, KC_RBRC, KC_BSLS,
        MO(1),  KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, KC_ENT,
        KC_LSFT, KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_RSFT, KC_NO, MO(2),
        KC_LCTL, KC_LGUI, KC_LALT, KC_SPC, KC_SPC, KC_SPC, KC_NO, KC_RALT, KC_NO, KC_RGUI, KC_RCTL),
	[1] = LAYOUT(
        KC_GRV,   KC_F1,    KC_F2,    KC_F3, KC_F4, KC_F5, KC_F6,   KC_F7,    KC_F8,    KC_F9,    KC_F10,   KC_F11, KC_F12, KC_DEL, KC_NO,
        KC_NO,    KC_NO,    KC_NO,    KC_NO, KC_NO, KC_NO, KC_NO,   KC_PGUP,  KC_UP,    KC_PGDN,  KC_PSCR,  KC_NO,  KC_NO,  KC_NO,
        KC_TRNS,  KC_NO,    KC_NO,    KC_NO, KC_NO, KC_NO, KC_HOME, KC_LEFT,  KC_DOWN,  KC_RGHT,  KC_NO,    KC_NO,  KC_NO,
        KC_TRNS,  KC_NO,    KC_NO,    KC_NO, KC_NO, KC_NO, KC_NO,   KC_END,   KC_NO,    KC_NO,    KC_NO,    KC_NO,  KC_TRNS,  KC_NO, KC_NO,
        KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_NO, KC_NO, KC_NO, KC_NO,   KC_NO,    KC_NO,    KC_TRNS,  KC_TRNS),
	[2] = LAYOUT(
        KC_NO,    KC_NO,    KC_NO,   KC_NO,   KC_NO,    KC_NO,    KC_NO,  KC_NO, KC_NO,  KC_NO,    KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
        KC_NO,    RGB_HUI,  RGB_SAI, RGB_VAI, RGB_TOG,  RGB_MOD,  KC_NO,  KC_NO, KC_INS, KC_NO,    KC_NO, KC_NO, KC_NO, KC_NO,
        KC_CAPS,  RGB_HUD,  RGB_SAD, RGB_VAD, KC_NO,    RGB_RMOD, KC_NO,  KC_NO, KC_NO,  KC_SLCK,  KC_NO, KC_NO, KC_NO,
        KC_NO,    KC_NO,    KC_NO,   KC_NO,   KC_NO,    KC_NO,    KC_NO,  KC_NO, KC_NO,  KC_NO,    KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS,
        KC_NO,    KC_NO,    KC_NO,   KC_NO,   KC_NO,    KC_NO,    KC_NO,  KC_NO, KC_NO,  KC_NO, KC_NO)
};

void matrix_init_user(void) {

}

void matrix_scan_user(void) {

}

/*void led_set_user(uint8_t usb_led) {
  if (host_keyboard_leds() & (1 << USB_LED_CAPS_LOCK)) {
    rgblight_setrgb_at( 255, 0 ,0, 0);
  }
}*/

void led_set_user(uint8_t usb_led) {
  /* `rgblight_setrgb_at(r, g, b, led)`
    Set a single LED to the given RGB value,
      where `r`/`g`/`b` are between 0 and 255 and `
      led` is between 0 and `RGBLED_NUM` (not written to EEPROM)

    if (IS_LED_ON(usb_led, USB_LED_NUM_LOCK)) {
        PORTB |= (1<<0);
    } else {
        PORTB &= ~(1<<0);
    }*/
    /* if (IS_LED_ON(usb_led, USB_LED_CAPS_LOCK)) {
        rgblight_setrgb_at( 255, 0 ,0, 1);
        rgblight_setrgb_at( 255, 0 ,0, 4);
    } else {
        rgblight_toggle();
    } */
    /*if (IS_LED_ON(usb_led, USB_LED_SCROLL_LOCK)) {
        PORTB |= (1<<2);
    } else {
        PORTB &= ~(1<<2);
    }
    if (IS_LED_ON(usb_led, USB_LED_COMPOSE)) {
        PORTB |= (1<<3);
    } else {
        PORTB &= ~(1<<3);
    }
    if (IS_LED_ON(usb_led, USB_LED_KANA)) {
        PORTB |= (1<<4);
    } else {
        PORTB &= ~(1<<4);
    }*/
}

