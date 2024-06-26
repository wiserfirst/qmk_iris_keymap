#include "config.h"
/* #include "print.h" */
#include "keycode.h"
#include "quantum.h"

#define BOTH_SHIFTS_TURNS_ON_CAPS_WORD

#define X_____X KC_TRNS
#define ___X___ KC_NO

/* ALT === OPT */
#define L_PANE LCMD(LOPT(KC_LEFT))
#define R_PANE LCMD(LOPT(KC_RIGHT))
#define OPT_L LOPT(KC_LEFT)
#define OPT_R LOPT(KC_RIGHT)
#define CMD_L LCMD(KC_LEFT)
#define CMD_R LCMD(KC_RIGHT)

#define SW_INPT LCTL(KC_SPACE)
#define CMD_TILD LCMD(KC_TILD)

// Home Row Mod-Taps
#define HOME_A LCTL_T(KC_A)
#define HOME_S LOPT_T(KC_S)
#define HOME_D LCMD_T(KC_D)
#define HOME_K LCMD_T(KC_K)
#define HOME_L ROPT_T(KC_L)
#define HOME_SCLN RCTL_T(KC_SCLN)

enum custom_layers {
     _QWERTY,
     _SYMBOL,
     _NUMBER,
     _MOUSE
};

// Home Row Layer Taps
#define HOME_F LT(_SYMBOL, KC_F)
#define HOME_J LT(_SYMBOL, KC_J)
#define HOME_G LT(_NUMBER, KC_G)
#define HOME_H LT(_NUMBER, KC_H)

// Lower Home Row Layer Taps
#define HOME_V LT(_MOUSE, KC_V)
#define HOME_M LT(_MOUSE, KC_M)

// Thumb Mod-Taps
#define THUM_BSPC LSFT_T(KC_BSPC)
#define THUM_SPC  RSFT_T(KC_SPC)
#define THUM_TAB HYPR_T(KC_TAB)
#define THUM_ENT MEH_T(KC_ENT)

#define BAS_LYR TO(_QWERTY)
#define SYM_LYR TG(_SYMBOL)
#define NUM_LYR TG(_NUMBER)
#define MSE_LYR TG(_MOUSE)

enum custom_keycodes {
  PLACEHOLDER = SAFE_RANGE, // can always be here
  LED_BLU, // HSV_172_255_255
  LED_GRN, // HSV_86_255_128
  LED_RED, // HSV_0_255_255
  LED_ORNG, // HSV_27_255_255
  LED_PUPL,
  L_ERB,
  R_ERB,
  // Emojis
  CLAP,
  COFFEE,
  L_ARROW,
  D_ARROW,
  R_ARROW,
  U_ARROW,
  LAUGH,
  MINUS_ONE,
  NEUTRAL,
  PLUS_ONE,
  SAD,
  SINGLE_ARROW,
  SMILE,
  TROLL,
  WINK,
  // MS Teams Emojis
  TM_100,
  TM_BOW,
  TM_CAKE,
  TM_CLAP,
  TM_CMARK,
  TM_COFE,
  TM_CSFG, // crossed fingers
  TM_EXPH, // exploding head
  TM_EYES,
  TM_HEART,
  TM_OKAY,
  TM_PALM, // face palm
  TM_PRAY,
  TM_P_ONE, // +1
  TM_SMILE,
  TM_SURP, // surprised
  TM_TADA,
  TM_TEA,
  TM_THINK,
  TM_WAVE,
};
