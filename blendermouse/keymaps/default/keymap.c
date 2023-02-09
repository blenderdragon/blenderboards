#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * ┌─0─┬─1─┬─2─┬─3─┬─4─┬─5─┬─6─┬─7─┬─8─┬─9─┬─10┬─11┐
     * 0 A │ B │ C │ a │ E │ F │ G │ H │ x │ J │ K │ L │
     * ├───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┤
     * 1 A │ B │ C │ b │ E │ F │ G │ H │ y │ J │   │ L │
     * ├───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┤
     * 2 A │ B │ C │ c │ E │ F │ G │ H │ z │ J │ K │ L │
     * ├───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┤
     * 3   │ B │ c │   │ E │ F │   │ H │   │ J │ K │   │
     * └───┴───┴───┴───┴───┴───┴───┴───┴───┴───┴───┴───┘
     */
    [0] = LAYOUT_ortho_4x12(
        KC_ESC,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_BSPC,
        KC_TAB,  KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,             KC_SCLN,
        KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    MO(2),   KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLASH,
                 KC_LCTL, KC_LALT,          KC_SPC,  MO(1),            KC_SPC,           MO(3),   KC_ENT   
    ),
    [1] = LAYOUT_ortho_4x12(
        KC_PSCR, KC_1,    KC_2,    KC_3,             KC_4,           KC_5,             KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_BSPC,
        KC_X,    KC_X,    KC_X,    KC_X,             LGUI(KC_UP),    KC_X,             KC_SCLN, KC_MINS, KC_EQL,  KC_LBRC,          KC_RBRC,          
        KC_LSFT, KC_X,    KC_X,    LGUI(KC_LEFT),    LGUI(KC_DOWN),  LGUI(KC_RGHT),    KC_X,    KC_DOT,  KC_PAST, KC_QUOT, KC_GRV,  KC_BSLS, 
                 KC_LCTL, KC_LALT,                   KC_X,           KC_X,             KC_X,             KC_X,    KC_X   
    ),
    [2] = LAYOUT_ortho_4x12(
        KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,
        KC_X,    KC_X,    KC_X,    KC_X,    KC_X,    KC_X,    KC_X,    KC_X,    KC_X,    KC_X,             KC_X,
        KC_LSFT, KC_X,    KC_X,    KC_X,    KC_X,    KC_X,    KC_X,    KC_X,    KC_X,    KC_X,    KC_X,    QK_BOOT,
                 KC_LCTL, KC_LALT,          KC_X,    KC_X,             KC_X,             KC_X,    KC_X   
    ),
    [3] = LAYOUT_ortho_4x12(
        KC_X,    KC_X,    KC_LGUI, KC_L,    KC_X,    KC_X,    KC_X,    KC_X,    KC_X,    KC_X,    KC_X,    KC_DEL,
        KC_X,    KC_X,    KC_X,    KC_X,    KC_X,    KC_X,    KC_X,    KC_X,    KC_X,    KC_UP,            KC_X,
        KC_LSFT, KC_X,    KC_X,    KC_X,    KC_X,    KC_X,    KC_X,    KC_X,    KC_X,    KC_LEFT, KC_DOWN, KC_RGHT,
                 KC_LCTL, KC_LALT,          KC_X,    KC_X,             KC_X,             KC_X,    KC_X   
    )
};
