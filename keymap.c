#include "k_type.h"

#define _______ KC_TRNS

#define _QW 0
#define _ARROW 1
#define _INTELLIJ 2

#define ARROW MO(_ARROW)
#define INTJ MO(_INTELLIJ)

#define ARR_ESC LT(ARROW, KC_ESC)
#define INTJ_Z LT(INTJ, KC_Z)
#define FNDFILE LSFT(LCTL(KC_N))

enum custom_keycodes {
  D_EMAIL = SAFE_RANGE,
  A_EMAIL,
  PW
};

const uint16_t keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_QW] = KEYMAP(
      KC_ESC,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,           KC_PSCR, KC_SLCK, KC_PAUS, \
      KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSPC, KC_INS,  KC_HOME, KC_PGUP, \
      KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSLS, KC_DEL,  KC_END,  KC_PGDN, \
      ARR_ESC, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT, KC_ENT, \
      KC_LSFT, INTJ_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,                            KC_UP, \
      KC_LCTL, KC_LALT, KC_LGUI,          KC_SPC,                    KC_RALT, KC_RGUI,   INTJ,  KC_RCTL,                            KC_LEFT, KC_DOWN, KC_RGHT),

    [_ARROW] = KEYMAP(
      _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______, _______, _______, \
      _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, KC_MPLY, KC_MNXT, KC_VOLU, \
      _______, _______, _______, _______, _______, _______, _______, D_EMAIL,   KC_UP, A_EMAIL, _______, _______, _______, _______, KC_MSTP, KC_MPRV, KC_VOLD, \
      _______, _______, _______, _______, _______, _______, KC_HOME, KC_LEFT, KC_DOWN, KC_RGHT, _______, _______, _______, \
      _______, _______, _______, _______, _______, _______,  KC_END, _______, _______, _______, _______, _______,                            KC_PGUP, \
      _______, _______, _______,          _______,                   _______, _______, _______, _______,                            KC_HOME, KC_PGDN, KC_END),

    [_INTELLIJ] = KEYMAP(
      _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______, _______, _______, \
      _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, \
      _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, \
      _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, \
      _______, _______, _______, _______, _______, _______, FNDFILE, _______, _______, _______, _______, _______,                            _______, \
      _______, _______, _______,          _______,                   _______, _______, _______, _______,                            _______, _______, _______),
};

// Runs just one time when the keyboard initializes.
void matrix_init_user(void) {

};

// Runs constantly in the background, in a loop.
void matrix_scan_user(void) {

};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case PW:
      if (record->event.pressed) {
        SEND_STRING("PW");
      }
      return false;
      break;
    case D_EMAIL:
      if (record->event.pressed) {
        SEND_STRING("x#");
      }
      return false;
      break;
    case A_EMAIL:
      if (record->event.pressed) {
        SEND_STRING("xE");
      }
      return false;
      break;
  }
  return true;
}
