/*
This is the c configuration file for the keymap

Copyright 2012 Jun Wako <wakojun@gmail.com>
Copyright 2015 Jack Humbert

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

#define _BASE 0
#define _SYM 1
#define _NAV 2

#define L_1 KC_LALT
#define L_2 LSFT_T(KC_SPC)
#define L_3 KC_LCTL
#define L_4 KC_LGUI
#define L_5 KC_TAB
#define L_6 KC_ESC

#define R_1 RALT_T(KC_BSPC)
#define R_2 LT(_SYM, KC_ENT)
#define R_3 KC_RCTL
#define R_4 KC_RGUI
#define R_5 KC_BSPC
#define R_6 KC_DEL

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
    [_MATRIX] = LAYOUT(
        [0,0] , [0,1],    [0,2],    [0,3],    [0,4],    [0,5],                                         [5,0],    [5,1],    [5,2],    [5,3],    [5,4],    [5,5],
        [1,0] , [1,1],    [1,2],    [1,3],    [1,4],    [1,5],                                         [6,0],    [6,1],    [6,2],    [6,3],    [6,4],    [6,5],
        [2,0] , [2,1],    [2,2],    [2,3],    [2,4],    [2,5],                                         [7,0],    [7,1],    [7,2],    [7,3],    [7,4],    [7,5],
                          [3,2],    [3,3],                                                                                 [8,2],    [8,3],
                                              [4,4],    [4,5],                                         [9,0],    [9,1],
                                                    [4,2],  [4,3],                                [9, 3],    [9, 2],
                                                    [4,1],  [4,0],                                [9, 4],    [9, 5]
    ),
    */
    [_BASE] = LAYOUT(
        QK_BOOT,   KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                                         KC_Y,    KC_U,    KC_I,    KC_O,    KC_P, KC_EQUAL,
        KC_LSFT,   KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                                         KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_LEFT_BRACKET,
        KC_LCTL, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,                                         KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_QUOT, KC_RIGHT_BRACKET,
                          KC_LBRC, KC_RBRC,                                                        KC_LT, KC_GT,
                                            L_1, L_2,                          R_1, R_2,
                                                    L_3,  L_4,       R_3,  R_4,
                                                    L_5,  L_6,       R_5, R_6
    ),

    [_SYM] = LAYOUT(
        KC_TRNS, KC_1,       KC_2,     KC_3,      KC_4,       KC_5,                                              KC_6 ,       KC_7,       KC_8,       KC_9,     KC_0, KC_TRNS,
        KC_TRNS, KC_EXLM,    KC_AT,    KC_HASH,    KC_DLR,    KC_PERC,                                           KC_CIRC,    KC_AMPR,    KC_ASTR,    KC_LPRN,  KC_RPRN, KC_TRNS,
        KC_TRNS, KC_TRNS,    KC_TRNS,  KC_TRNS,    KC_TRNS,   KC_TRNS,                                           KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,  KC_TRNS, KC_TRNS,
                          KC_LBRC, KC_RBRC,                                                        KC_TRNS, KC_TRNS,
                                            KC_TRNS, KC_TRNS,                          KC_TRNS, KC_TRNS,
                                                    KC_TRNS,  KC_TRNS,       KC_TRNS,  KC_TRNS,
                                                    KC_TRNS,  KC_TRNS,       KC_TRNS,  KC_TRNS
    ),

    // [10] = LAYOUT(
    //     KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,                                         KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,
    //     KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,                                         KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,
    //     KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,                                         KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,  KC_TRNS,
    //                       KC_LBRC, KC_RBRC,                                                        KC_TRNS, KC_TRNS,
    //                                         KC_TRNS, KC_TRNS,                          KC_TRNS, KC_TRNS,
    //                                                 KC_TRNS,  KC_TRNS,       KC_TRNS,  KC_TRNS,
    //                                                 KC_TRNS,  KC_TRNS,       KC_TRNS,  KC_TRNS
    // ),
};

