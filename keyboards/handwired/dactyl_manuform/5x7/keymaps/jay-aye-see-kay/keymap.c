#include QMK_KEYBOARD_H


// Each layer gets a name for readability, which is then used in the keymap matrix below.
// The underscores don't mean anything - you can have a layer called STUFF or any other name.
// Layer names don't all need to be of the same length, obviously, and you can also skip them
// entirely and just use numbers.
#define _QWERTY 0
#define _CODE   1
#define _MOVE   2
#define _MIRROR 3

// Some basic macros
#define TASK    LCTL(LSFT(KC_ESC))
#define TAB_R   LCTL(KC_TAB)
#define TAB_L   LCTL(LSFT(KC_TAB))
#define TAB_RO  LCTL(LSFT(KC_T))

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

[_QWERTY] = LAYOUT_5x7(
  // left hand
   XXXXXXX,   KC_1,    KC_2,    KC_3,   KC_4,   KC_5,   KC_6,
   KC_TAB,    KC_Q,    KC_W,    KC_E,   KC_R,   KC_T,   XXXXXXX,
   KC_ESC,    KC_A,    KC_S,    KC_D,   KC_F,   KC_G,   OSL(_MIRROR),
   KC_LSFT,   KC_Z,    KC_X,    KC_C,   KC_V,   KC_B,
   XXXXXXX,   KC_GRV,  XXXXXXX, KC_LALT,
                               KC_LGUI,  KC_LCTL,
                               KC_BSPC,  KC_SPC,
                               MO(_MOVE),  MO(_CODE),
                        // right hand
                         KC_5,         KC_6,    KC_7,    KC_8,     KC_9,     KC_0,     XXXXXXX,
                         XXXXXXX,      KC_Y,    KC_U,    KC_I,     KC_O,     KC_P,     KC_BSLASH,
                         OSL(_MIRROR), KC_H,    KC_J,    KC_K,     KC_L,     KC_SCLN,  KC_QUOT,
                                       KC_N,    KC_M,    KC_COMM,  KC_DOT,   KC_SLSH,  KC_RSFT,
                                                    KC_RALT,  KC_MINUS, KC_EQUAL, XXXXXXX,
            KC_RCTL, KC_RGUI,
            KC_ENTER, XXXXXXX,
            MO(_CODE), MO(_MOVE)
),

[_CODE] = LAYOUT_5x7(
  // left hand
   _______, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   _______,
   _______, KC_TILD, KC_GRV,  KC_LCBR, KC_RCBR, XXXXXXX, _______,
   _______, KC_UNDS, KC_MINS, KC_LPRN, KC_RPRN, XXXXXXX, RESET,
   _______, KC_PLUS, KC_EQL,  KC_LBRC, KC_RBRC, XXXXXXX,
   _______, _______, _______, _______,
                               _______, _______,
                               _______, _______,
                               _______, _______,
        // right hand
                    _______, KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,
                    _______, XXXXXXX, KC_7,    KC_8,    KC_9,    XXXXXXX, KC_F12,
                    _______, KC_0,    KC_4,    KC_5,    KC_6,    XXXXXXX, _______,
                             XXXXXXX, KC_1,    KC_2,    KC_3,    XXXXXXX, _______,
                                               _______, _______, _______, _______,
        _______, _______,
        _______, _______,
        _______, _______
  ),

[_MOVE] = LAYOUT_5x7(
  // left hand
   _______,   _______,   _______,   _______,   _______,   _______,  _______,
   _______,   XXXXXXX,   KC_BTN2,   KC_MS_U,   KC_BTN1,   XXXXXXX,  _______,
   _______,   KC_WH_U,   KC_MS_L,   KC_MS_D,   KC_MS_R,   XXXXXXX,  _______,
   _______,   KC_WH_D,   XXXXXXX,   XXXXXXX,   XXXXXXX,   XXXXXXX,
   _______,   _______,   _______,   _______,
                               _______, _______,
                               _______, _______,
                               _______, _______,
        // right hand
                     _______,   _______,   _______,   _______,   _______,   _______,   _______,
                     _______,   XXXXXXX,   XXXXXXX,   XXXXXXX,   XXXXXXX,   XXXXXXX,   _______,
                     _______,   KC_LEFT,   KC_DOWN,   KC_UP,     KC_RGHT,   XXXXXXX,   _______,
                                XXXXXXX,   KC_VOLD,   KC_VOLU,   KC_MUTE,   KC_MPLY,   KC_MNXT,
                                                      _______,   _______,   _______,   _______,
        _______, _______,
        _______, _______,
        _______, _______
  ),


[_MIRROR] = LAYOUT_5x7(
  // left hand
   XXXXXXX,   KC_0,     KC_9,     KC_8,    KC_7,   KC_6,   KC_5,
   KC_BSLASH, KC_P,     KC_O,     KC_I,    KC_U,   KC_Y,   _______,
   KC_QUOT,   KC_SCLN,  KC_L,     KC_K,    KC_J,   KC_H,   _______,
   KC_RSFT,   KC_SLSH,  KC_DOT,   KC_COMM, KC_M,   KC_N,
   XXXXXXX,   KC_EQUAL, KC_MINUS, KC_RALT, 
                               KC_RGUI,  KC_RCTL,
                               KC_ENTER, XXXXXXX,
                               MO(_MOVE),  MO(_CODE),
                        // right hand
                         KC_6,    KC_5,    KC_4,    KC_3,     KC_2,     KC_1,     XXXXXXX,
                         _______, KC_T,    KC_R,    KC_E,     KC_W,     KC_Q,     KC_TAB,
                         _______, KC_G,    KC_F,    KC_D,     KC_S,     KC_A,     KC_ESC,
                                  KC_B,    KC_V,    KC_C,     KC_X,     KC_Z,     KC_LSFT,
                                                    KC_LALT,  XXXXXXX,  KC_GRV,   XXXXXXX,
            KC_LCTL, KC_LGUI,
            KC_BSPC,  KC_SPC,
            MO(_CODE), MO(_MOVE)
  ),
};
