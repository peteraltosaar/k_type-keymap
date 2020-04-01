#include "k_type.h"

#define _______ KC_TRNS

#define _QW 0
#define _ARROW 1
#define _INTELLIJ 2
#define _APPS 3

#define ARROW MO(_ARROW)
#define INTJ MO(_INTELLIJ)
#define APPS MO(_APPS)

#define ARR_ESC LT(ARROW, KC_ESC)
#define INTJ_Z LT(INTJ, KC_Z)
#define INTJ_F LT(INTJ, KC_F)
#define INTJ_J LT(INTJ, KC_J)
#define SPC_APP LT(APPS, KC_SPC)
#define LOCKSCR LGUI(LCTL(KC_Q))
#define SWTCSCR LGUI(LSFT(LCTL(KC_G)))
#define ALTLEFT LALT(KC_LEFT)
#define ALTRGHT LALT(KC_RGHT)
#define GUILEFT LGUI(KC_LEFT)
#define GUIRGHT LGUI(KC_RGHT)
#define CHARS LGUI(LCTL(KC_SPC))
#define ADDTODO LGUI(LSFT(KC_A))
#define DW_LEFT LALT(KC_BSPC)
#define DW_RGHT LALT(KC_DEL)

// IntelliJ Shortcuts
#define FNDFILE LSFT(LCTL(KC_N))
#define REFACTR LCTL(LALT(LSFT(KC_T)))
#define CLOSE LCTL(KC_F4)
#define HIDWINS LCTL(LSFT(KC_F12))
#define RUNTGTS LSFT(LALT(KC_F10))
#define RERUN LCTL(KC_F5)
#define EXECUTE LCTL(LSFT(KC_F10))
#define SYMBOL LSFT(LCTL(LALT(KC_N)))
#define DEBUG LCTL(LSFT(KC_F9))
#define END LCTL(KC_F2)
#define CREATE LALT(KC_INS)
#define FIND LCTL(LSFT(KC_F))
#define GO2TEST LCTL(LSFT(KC_T))
#define GIT LALT(KC_GRV)
#define HIERARC LCTL(LALT(KC_H))
#define USAGES LALT(KC_F7)
#define MENU LALT(LSFT(KC_SCLN))
#define BACK LCTL(LALT(KC_LEFT))
#define FORWARD LCTL(LALT(KC_RGHT))
#define PREVMTD LALT(KC_UP)
#define NEXTMTD LALT(KC_DOWN)
#define FONT_DN LSFT(LCTL(LALT(KC_MINS)))
#define FONT_UP LSFT(LCTL(LALT(KC_EQL)))
#define FONTRES LSFT(LCTL(LALT(KC_SCLN)))
#define INFO LCTL(KC_F1)
#define OUTLINE LCTL(KC_F12)
#define PRVCHNG LCTL(LALT(LSFT(KC_UP)))
#define NXTCHNG LCTL(LALT(LSFT(KC_DOWN)))
#define EXT_VAR LCTL(LALT(KC_V))

// Media Keys

#define VOLUP KC__VOLUP
#define VOLDOWN KC__VOLDOWN

enum custom_keycodes {
  D_EMAIL = SAFE_RANGE,
  A_EMAIL,
  PW,
  BRAVE,
  FIREFOX,
  ITERM,
  MAIL,
  NOTION,
  SIGNAL,
  SPOTIFY,
  TEAMS,
  TODOIST,
  VMWARE
};

const uint16_t keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_QW] = KEYMAP(
      KC_ESC,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,           ADDTODO,   CHARS, LOCKSCR, \
      KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSPC, KC_INS,  KC_HOME, KC_PGUP, \
      KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSLS, KC_DEL,  KC_END,  KC_PGDN, \
      ARR_ESC, KC_A,    KC_S,    KC_D,    INTJ_F,    KC_G,    KC_H,    INTJ_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT, KC_ENT, \
      KC_LSFT, INTJ_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,                            KC_UP, \
      KC_LCTL, KC_LALT, KC_LGUI,          SPC_APP,                    KC_RALT, KC_RGUI,   INTJ,  KC_RCTL,                            KC_LEFT, KC_DOWN, KC_RGHT),

    [_ARROW] = KEYMAP(
      _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______, _______,      PW, \
      _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,   VOLUP, KC_MPLY, KC_MSTP, \
      _______, _______, _______,  KC_ENT, _______, _______, _______, D_EMAIL,   KC_UP, A_EMAIL, _______, _______, _______, _______, VOLDOWN, KC_MRWD, KC_MFFD, \
      _______, DW_LEFT, KC_BSPC,  KC_DEL, DW_RGHT, GUILEFT, ALTLEFT, KC_LEFT, KC_DOWN, KC_RGHT, ALTRGHT, GUIRGHT, _______, \
      _______, _______, _______, _______, _______, KC_HOME,  KC_END, SWTCSCR, _______, _______, _______, _______,                            KC_PGUP, \
      _______, _______, _______,          _______,                   _______, _______, _______, _______,                            KC_HOME, KC_PGDN, KC_END),

    [_INTELLIJ] = KEYMAP(
      _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______, _______, _______, \
      _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, \
      _______,   CLOSE, _______,     END, REFACTR, GO2TEST, _______, _______, PREVMTD, OUTLINE, _______, _______, _______, _______, _______, _______, _______, \
      HIDWINS, RUNTGTS,  SYMBOL,   DEBUG,    FIND,     GIT, HIERARC,    BACK, NEXTMTD, FORWARD, FONTRES, _______, _______, \
      _______,   RERUN, EXECUTE,  CREATE, EXT_VAR, _______, FNDFILE,    MENU, FONT_DN, FONT_UP,    INFO, _______,                            PRVCHNG, \
      _______, _______, _______,          _______,                   _______, _______, _______, _______,                            _______, NXTCHNG, _______),

    [_APPS] = KEYMAP(
      _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______, _______,   RESET, \
      _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, \
      _______, _______, _______,    MAIL, _______, TODOIST, _______, FIREFOX,   ITERM, _______, _______, _______, _______, _______, _______, _______, _______, \
      _______, _______,  SIGNAL, _______, _______, _______, _______, KC_MINS, _______, _______, _______, _______, _______, \
      _______, _______, _______,   TEAMS,  VMWARE,   BRAVE,  NOTION, SPOTIFY, _______, _______, _______, _______,                            _______, \
      _______, _______, _______,          _______,                   _______, _______, _______, _______,                            _______, _______, _______),
};

// Runs just one time when the keyboard initializes.
void matrix_init_user(void) {

};

// Runs constantly in the background, in a loop.
void matrix_scan_user(void) {

};

void delay(void) {
  int dummy = 0;
  for (int i = 0; i < 1000; i++) {
    dummy++;
  }
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case PW:
      if (record->event.pressed) {
        SEND_STRING("PW");
      }
      return false;
    case D_EMAIL:
      if (record->event.pressed) {
        SEND_STRING("x#");
      }
      return false;
    case A_EMAIL:
      if (record->event.pressed) {
        SEND_STRING("xE");
      }
      return false;
    case BRAVE:
      if (record->event.pressed) {
        SEND_STRING(SS_LALT(SS_TAP(X_SPACE)));
        delay();
        SEND_STRING("brave" SS_TAP(X_ENTER));
      }
      return false;
    case FIREFOX:
      if (record->event.pressed) {
        SEND_STRING(SS_LALT(SS_TAP(X_SPACE)));
        delay();
        SEND_STRING("firefox" SS_TAP(X_ENTER));
      }
      return false;
    case ITERM:
      if (record->event.pressed) {
        SEND_STRING(SS_LALT(SS_TAP(X_SPACE)));
        delay();
        SEND_STRING("iterm" SS_TAP(X_ENTER));
      }
      return false;
    case MAIL:
      if (record->event.pressed) {
        SEND_STRING(SS_LALT(SS_TAP(X_SPACE)));
        delay();
        SEND_STRING("mail" SS_TAP(X_ENTER));
      }
      return false;
    case NOTION:
      if (record->event.pressed) {
        SEND_STRING(SS_LALT(SS_TAP(X_SPACE)));
        delay();
        SEND_STRING("notion" SS_TAP(X_ENTER));
      }
      return false;
    case SIGNAL:
      if (record->event.pressed) {
        SEND_STRING(SS_LALT(SS_TAP(X_SPACE)));
        delay();
        SEND_STRING("signal" SS_TAP(X_ENTER));
      }
      return false;
    case SPOTIFY:
      if (record->event.pressed) {
        SEND_STRING(SS_LALT(SS_TAP(X_SPACE)));
        delay();
        SEND_STRING("spotify" SS_TAP(X_ENTER));
      }
      return false;
    case TEAMS:
      if (record->event.pressed) {
        SEND_STRING(SS_LALT(SS_TAP(X_SPACE)));
        delay();
        SEND_STRING("teams" SS_TAP(X_ENTER));
      }
      return false;
    case TODOIST:
      if (record->event.pressed) {
        SEND_STRING(SS_LALT(SS_TAP(X_SPACE)));
        delay();
        SEND_STRING("todoist" SS_TAP(X_ENTER));
      }
      return false;
    case VMWARE:
      if (record->event.pressed) {
        SEND_STRING(SS_LALT(SS_TAP(X_SPACE)));
        delay();
        SEND_STRING("vmware" SS_TAP(X_ENTER));
      }
      return false;
  }
  return true;
}
