// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

#define LAYOUT_72(k0A, k1A, k2A, k3A, k4A, k5A, k6A, k7A, k0E, k1E, k2E, k3E, k4E, k5E, \
k0B, k1B, k2B, k3B, k4B, k5B, k6B, k7B, k0F, k1F, k2F, k3F, k4F, k5F, k6F, \
k0C, k1C, k2C, k3C, k4C, k5C, k6C, k7C, k0G, k1G, k2G, k3G, k4G, k5G, k6G, \
k0D, k1D, k2D, k3D, k4D, k5D, k6D, k7D, k0H, k1H, k2H, k3H, k4H, k5H, k6H, \
k7E, k7F, k7G, k7H, k7I,      k6E,      k0I, k1I, k2I, k3I, k4I, k5I, k6I) { \
	 {k0A, k0B, k0C, k0D, k0E, k0F, k0G, k0H, k0I}, \
	 {k1A, k1B, k1C, k1D, k1E, k1F, k1G, k1H, k1I}, \
	 {k2A, k2B, k2C, k2D, k2E, k2F, k2G, k2H, k2I}, \
	 {k3A, k3B, k3C, k3D, k3E, k3F, k3G, k3H, k3I}, \
	 {k4A, k4B, k4C, k4D, k4E, k4F, k4G, k4H, k4I}, \
	 {k5A, k5B, k5C, k5D, k5E, k5F, k5G, k5H, k5I}, \
	 {k6A, k6B, k6C, k6D, k6E, k6F, k6G, k6H, k6I}, \
	 {k7A, k7B, k7C, k7D, k7E, k7F, k7G, k7H, k7I} \
}

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_72(
        KC_GRAVE,   KC_1,   KC_2,   KC_3,   KC_4,   KC_5,   KC_6,   KC_7,   KC_8,   KC_9,   KC_0,           KC_MINUS,           KC_EQUAL,           KC_BACKSPACE,
        KC_TAB,     KC_Q,   KC_W,   KC_E,   KC_R,   KC_T,   KC_Y,   KC_U,   KC_I,   KC_O,   KC_P,           KC_LEFT_BRACKET,    KC_RIGHT_BRACKET,   KC_BACKSLASH,   KC_HOME,
        KC_ESCAPE,  KC_A,   KC_S,   KC_D,   KC_F,   KC_G,   KC_H,   KC_J,   KC_K,   KC_L,   KC_SEMICOLON,   KC_QUOT,            KC_ENT,             KC_NO,          KC_END,
        KC_LSFT,    KC_Z,   KC_X,   KC_C,   KC_V,   KC_B,   KC_N,   KC_M,   KC_COMM,KC_DOT, KC_SLSH,        KC_RSFT,            KC_UP,              KC_NO,          KC_PGUP,
        KC_LCTL,    KC_LGUI,KC_NO,  KC_LALT,KC_SPC,         KC_SPC,         KC_RALT,KC_NO,  KC_RCTL,        KC_LEFT,            KC_DOWN,            KC_RIGHT,       KC_PGDN   

    )
};
