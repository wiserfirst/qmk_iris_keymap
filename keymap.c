// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H
#include "user.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [_QWERTY] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
     KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                               KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                               KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_BSLS,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     KC_ESC,  HOME_A,  HOME_S,  HOME_D,  HOME_F,  HOME_G,                             HOME_H,  HOME_J,  HOME_K,  HOME_L,  HOME_SCLN, KC_QUOT,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     CW_TOGG, KC_Z,    KC_X,    KC_C,    HOME_V,  KC_B,    SYM_LYR,          NUM_LYR, KC_N,    HOME_M,  KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,
  //└────────┴────────┴────────┴───┬────┴───┬────┴─────┬──┴──────┬─┘        └───┬────┴────┬───┴─────┬──┴────┬───┴────────┴────────┴────────┘
                                    CW_TOGG, THUM_BSPC, THUM_TAB,                THUM_ENT, THUM_SPC, MSE_LYR
                                // └────────┴──────────┴─────────┘              └─────────┴─────────┴───────┘
  ),

  [_SYMBOL] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
     _______, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,                              KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     _______, KC_BSLS, KC_AT,   KC_PLUS, KC_MINS, KC_PERC,                            KC_LBRC, KC_LPRN, KC_LCBR, L_ERB,   ___X___,   KC_F12,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     _______, KC_CIRC, KC_DLR,  KC_ASTR, KC_EQL,  KC_HASH,                            KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, KC_GRV,  CMD_TILD,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     _______, _______, KC_AMPR, KC_EXLM, KC_UNDS, KC_PIPE, _______,          _______, KC_RBRC, KC_RPRN, KC_RCBR, R_ERB,   KC_TILD, _______,
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                    _______,  CMD_L,   CMD_R,                     CMD_L,   CMD_R,  _______
                                // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
  ),

  [_NUMBER] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
     _______, _______, _______, _______, _______, _______,                            _______, _______, _______, _______, _______, _______,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     _______, TM_HEART,TM_TADA, TM_PALM, TM_EXPH, TM_SURP,                            TM_CLAP, KC_P7,   KC_P8,   KC_P9,   TM_COFE, _______,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     _______, TM_EYES, TM_CMARK,TM_100,  TM_PRAY, TM_BOW,                             TM_WAVE, KC_P4,   KC_P5,   KC_P6,   TM_SMILE,TM_P_ONE,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     _______, _______, TM_CAKE, TM_OKAY, TM_THINK,TM_CSFG, _______,          _______, KC_P0,   KC_P1,   KC_P2,   KC_P3,   TM_TEA,  _______,
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                    _______,  OPT_L,   OPT_R,                     OPT_L,   OPT_R,  _______
                                // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
  ),

  [_MOUSE] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
     _______, _______, _______, _______, _______, QK_BOOT,                            _______, _______, _______, _______, _______, QK_BOOT,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     _______, RGB_SAI, RGB_SAD, RGB_MOD, RGB_RMOD,RGB_M_P,                            _______, _______, _______, _______, _______, _______,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     _______, RGB_VAI, RGB_VAD, LED_RED, LED_GRN, RGB_TOG,                            KC_MS_L, KC_MS_D, KC_MS_U, KC_MS_R, _______, _______,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     _______, RGB_HUI, RGB_HUD, LED_BLU, LED_ORNG,LED_PUPL,_______,          _______, _______, KC_BTN1, KC_BTN2, _______, _______, _______,
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                    _______, L_PANE,  R_PANE,                    L_PANE,  R_PANE,  _______
                                // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
  )
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  if (record->event.pressed) {
    switch (keycode) {
      // dynamically generate these.
      case LED_BLU:
        rgb_matrix_mode_noeeprom(RGB_MATRIX_SOLID_COLOR);
        rgb_matrix_sethsv_noeeprom(HSV_BLUE);
        return false;

      case LED_GRN:
        rgb_matrix_mode_noeeprom(RGB_MATRIX_SOLID_COLOR);
        rgb_matrix_sethsv_noeeprom(HSV_GREEN);
        return false;

      case LED_RED:
        rgb_matrix_mode_noeeprom(RGB_MATRIX_SOLID_COLOR);
        rgb_matrix_sethsv_noeeprom(HSV_RED);
        return false;

      case LED_ORNG:
        rgb_matrix_mode_noeeprom(RGB_MATRIX_SOLID_COLOR);
        rgb_matrix_sethsv_noeeprom(HSV_ORANGE);
        return false;

      case LED_PUPL:
        rgb_matrix_mode_noeeprom(1);
        rgb_matrix_sethsv_noeeprom(HSV_PURPLE);
        return false;

      case L_ERB:
        SEND_STRING("<%=");
        return false;

      case R_ERB:
        SEND_STRING("%>");
        return false;

      case CLAP:
        SEND_STRING(":clap:");
        return false;

      case COFFEE:
        SEND_STRING(":coffee:");
        return false;

      case D_ARROW:
        SEND_STRING(":arrow_down:");
        return false;

      case LAUGH:
        SEND_STRING(":joy:");
        return false;

      case L_ARROW:
        SEND_STRING(":arrow_left:");
        return false;

      case MINUS_ONE:
        SEND_STRING(":-1:");
        return false;

      case NEUTRAL:
        SEND_STRING(":neutral:");
        return false;

      case PLUS_ONE:
        SEND_STRING(":+1:");
        return false;

      case R_ARROW:
        SEND_STRING(":arrow_right:");
        return false;

      case SAD:
        SEND_STRING(":disappointed:");
        return false;

      case SMILE:
        SEND_STRING(":smile:");
        return false;

      case TROLL:
        SEND_STRING(":trollface:");
        return false;

      case U_ARROW:
        SEND_STRING(":arrow_up:");
        return false;

      case WINK:
        SEND_STRING(":wink:");
        return false;

      // MS Teams Emojis
      case TM_100:
        SEND_STRING("(hundredpoints)");
        return false;

      case TM_BOW:
        SEND_STRING("(manbowing)");
        return false;

      case TM_CAKE:
        SEND_STRING("(cake)");
        return false;

      case TM_CLAP:
        SEND_STRING("(clap)");
        return false;

      case TM_CMARK:
        SEND_STRING("(checkmarkbutton)");
        return false;

      case TM_COFE:
        SEND_STRING("(coffee)");
        return false;

      case TM_CSFG:
        SEND_STRING("(crossedfingers)");
        return false;

      case TM_EXPH:
        SEND_STRING("(explodinghead)");
        return false;

      case TM_EYES:
        SEND_STRING("(eyes)");
        return false;

      case TM_HEART:
        SEND_STRING("(heart)");
        return false;

      case TM_PALM:
        SEND_STRING("(facepalm)");
        return false;

      case TM_OKAY:
        SEND_STRING("(ok)");
        return false;

      case TM_PRAY:
        SEND_STRING("(pray)");
        return false;

      case TM_P_ONE:
        SEND_STRING("(y)");
        return false;

      case TM_SMILE:
        SEND_STRING(":)");
        return false;

      case TM_SURP:
        SEND_STRING(":O");
        return false;

      case TM_TADA:
        SEND_STRING("(partypopper)");
        return false;

      case TM_TEA:
        SEND_STRING("(chai)");
        return false;

      case TM_THINK:
        SEND_STRING("(thinkingface)");
        return false;

      case TM_WAVE:
        SEND_STRING("(wavinghand)");
        return false;
    }
  }

  return true;
};
