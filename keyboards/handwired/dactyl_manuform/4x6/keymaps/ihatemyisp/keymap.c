#include QMK_KEYBOARD_H

extern keymap_config_t keymap_config;

#define MACVOLU KC__VOLUP
#define MACVOLD KC__VOLDOWN
#define POWERON KC_POWER

// #define SFT_ESC  SFT_T(KC_ESC)
// #define CTL_BSPC CTL_T(KC_BSPC)
// #define ALT_SPC  ALT_T(KC_SPC)
// #define SFT_ENT  SFT_T(KC_ENT)

// #define KC_ML KC_MS_LEFT
// #define KC_MR KC_MS_RIGHT
// #define KC_MU KC_MS_UP
// #define KC_MD KC_MS_DOWN
// #define KC_MB1 KC_MS_BTN1
// #define KC_MB2 KC_MS_BTN1

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

[0] = LAYOUT( \
    KC_ESC,  KC_Q,  KC_W,   KC_E,   KC_R,   KC_T,               KC_Y,   KC_U,   KC_I,   KC_O,   KC_P,   KC_LBRC,
    KC_LSFT,  KC_A,  KC_S,   KC_D,   KC_F,   KC_G,               KC_H,   KC_J,   KC_K,   KC_L,   KC_SCLN,KC_QUOT,
    KC_TAB, KC_Z,  KC_X,   KC_C,   KC_V,   KC_B,               KC_N,   KC_M,   KC_COMM,KC_DOT, KC_SLSH,KC_BSLS,
	                KC_CAPS,TG(1),                                              TG(2),  KC_RBRC,
                                    KC_GRV, KC_LCTL,            KC_SPC,KC_BSPC,
                                    KC_RALT,KC_LGUI,            KC_ENT,KC_COPY,
                                    KC_MEH, MO(1),              MO(2), KC_PSTE
),

[1] = LAYOUT(
    KC_F1,  KC_F2,  KC_F3,  KC_F4,  KC_F5,  KC_F6,              KC_F7,  KC_F8,  KC_F9,  KC_F10, KC_F11, KC_F12,
    _______,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,KC_PGUP,            XXXXXXX,KC_UP,  XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,
    _______,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,KC_PGDN,            KC_LEFT,KC_DOWN,KC_RGHT,XXXXXXX,XXXXXXX,XXXXXXX,
                    XXXXXXX,TG(0),                                              TG(2),  XXXXXXX,
                                    XXXXXXX,XXXXXXX,            XXXXXXX,XXXXXXX,
                                    KC_PSCR,_______,            XXXXXXX,XXXXXXX,
                                    XXXXXXX,_______,            _______,XXXXXXX
),

[2] = LAYOUT(
    KC_1,   KC_2,   KC_3,   KC_4,   KC_5,   KC_6,               KC_7,   KC_8,   KC_9,   KC_0,   KC_MINS,KC_EQL,
    _______,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,            MACVOLU,KC_VOLU,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,
    _______,KC_LCTL,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,            MACVOLD,KC_VOLD,XXXXXXX,XXXXXXX,KC_RCTL,KC_RSFT,
                    XXXXXXX,TG(0),                                              TG(1),  XXXXXXX,
                                    XXXXXXX,XXXXXXX,            XXXXXXX,XXXXXXX,
                                    XXXXXXX,_______,            POWERON,XXXXXXX,
                                    RESET,  _______,            _______,RESET
)
};


void persistent_default_layer_set(uint16_t default_layer) {
  eeconfig_update_default_layer(default_layer);
  default_layer_set(default_layer);
}