#include QMK_KEYBOARD_H
#include "version.h"
#include "keymap_hebrew.h"
#include "keyboardLayers.h"
#include "keyDefines.h"
#include "greekUnicodeNames.h"
#include "tapDanceCodes.h"

//
enum custom_keycodes {
    RGB_SLD = EZ_SAFE_RANGE,
    // LANG_HEB,
    last,
};
// uint8_t mod_state;

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_baseLayer] = LAYOUT_ergodox(
        // Left
        // 1------------------*2------------------*3------------------*4------------------*5------------------*6------------------*7------------------end
        /**/ XXX, /*----------*/ XXX, /*----------*/ TD(DNC_PRT_SCRN), TD(DNC_COPY_CUT), /**/ KC_PASTE, /*----*/ KC_UNDO, /*------*/ KC_REDO,
        // 1------------------*2------------------*3------------------*4------------------*5------------------*6------------------*7------------------end
        /**/ GUI_T(KC_ESC), /**/ KC_Q, /*---------*/ KC_W, /*---------*/ KC_E, /*---------*/ KC_R, /*---------*/ KC_T, /*---------*/ KC_HOME,
        // -------------------*1------------------*2------------------*3------------------*4------------------*5------------------*6------------------end
        /**/ KC_WIN_CHANGE, /**/ KC_A, /*---------*/ KC_S, /*---------*/ ALT_T(KC_D), /*--*/ CTL_T(KC_F), /*--*/ KC_G,
        // 1------------------*2------------------*3------------------*4------------------*5------------------*6------------------*7------------------end
        /**/ KC_MS_WH_UP, /*--*/ KC_Z, /*---------*/ KC_X, /*---------*/ KC_UP, /*--------*/ KC_V, /*---------*/ KC_B, /*---------*/ KC_END,
        //--------------------*-------------------*1------------------*2------------------*3------------------*4------------------*5------------------end
        /**/ KC_MS_WH_DOWN, /**/ XXX, /*----------*/ KC_LEFT, /*------*/ KC_DOWN, /*------*/ SFT_T(KC_RIGHT),
        // 1------------------*2------------------end
        /**/ KC_ENTER, /*-----*/ XXX,
        // 1------------------end
        /**/ XXX,
        // 1------------------*2------------------*3------------------end
        /**/ LT(2, KC_SPACE), /**/ LT(4, KC_TAB), /**/ LT(5, KC_BSPACE),

        // Right
        // 1------------------*2------------------*3------------------*4------------------*5------------------*6------------------*7------------------end
        /**/ XXX, /*-----------*/ XXX, /*----------*/ XXX, /*----------*/ XXX, /*----------*/ XXX, /*---------*/ XXX, /*----------*/ XXX,
        // 1------------------*2------------------*3------------------*4------------------*5------------------*6------------------*7------------------end
        /**/ XXX, /*----------*/ KC_Y, /*---------*/ KC_U, /*---------*/ KC_I, /*---------*/ KC_O, /*---------*/ XXX, /*----------*/ GUI_T(KC_ESC),
        // -------------------*1------------------*2------------------*3------------------*4------------------*5------------------*6------------------end
        /*--------------------*/ KC_H, /*---------*/ CTL_T(KC_J), /*--*/ ALT_T(KC_K), /*--*/ KC_L, /*---------*/ KC_P, /*---------*/ XXX,
        // 1------------------*2------------------*3------------------*4------------------*5------------------*6------------------*7------------------end
        /**/ XXX, /*----------*/ KC_N, /*---------*/ KC_M, /*---------*/ XXX, /*----------*/ KC_C, /*---------*/ XXX, /*----------*/ XXX,
        //--------------------*-------------------*1------------------*2------------------*3------------------*4------------------*5------------------end
        /*--------------------*-------------------*/ SFT_T(KC_BSPACE), /**/ KC_DELETE, /*-*/ XXX, /*----------*/ XXX, /*----------*/ XXX,
        // 1------------------*2------------------end
        /**/ VOL_DOWN, /*-----*/ VOL_UP,
        // 1------------------end
        /**/ XXX,
        // 1------------------*2------------------*3------------------end
        /**/ KC_LAN_CHANGE, /**/ TD(DNC_LANG_HEB), /**/ LT(2, KC_ENTER)),

    [_hebrewLayer] = LAYOUT_ergodox(
        // Left
        // 1------------------*2------------------*3------------------*4------------------*5------------------*6------------------*7------------------end
        /**/ XXX, /*----------*/ XXX, /*----------*/ XXX, /*----------*/ XXX, /*----------*/ XXX, /*----------*/ XXX, /*----------*/ XXX,
        // 1------------------*2------------------*3------------------*4------------------*5------------------*6------------------*7------------------end
        /**/ TD(DNC_ESC_HEB_GUI), KC_NO, /*-------*/ IL_GIML, /*------*/ IL_ALEF, /*------*/ IL_AYIN, /*------*/ KC_NO, /*--------*/ XXX,
        // -------------------*1------------------*2------------------*3------------------*4------------------*5------------------*6------------------end
        /**/ XXX, /*----------*/ IL_SHIN, /*------*/ IL_HE, /*--------*/ TD(DNC_VAV_ALT), /**/ TD(DNC_RESH_CTL), /**/ IL_ZAYN,
        // 1------------------*2------------------*3------------------*4------------------*5------------------*6------------------*7------------------end
        /**/ XXX, /*----------*/ KC_NO, /*--------*/ IL_DALT, /*------*/ XXX, /*----------*/ IL_BET, /*-------*/ IL_TSDI, /*------*/ XXX,
        //--------------------*-------------------*1------------------*2------------------*3------------------*4------------------*5------------------end
        /**/ XXX, /*----------*/ XXX, /*----------*/ XXX, /*----------*/ XXX, /*----------*/ XXX,
        // 1------------------*2------------------end
        /**/ XXX, /*----------*/ XXX,
        // 1------------------end
        /**/ XXX,
        // 1------------------*2------------------*3------------------end
        /**/ LT(3, KC_SPACE), /**/ XXX, /*--------*/ XXX,

        // Right
        // 1------------------*2------------------*3------------------*4------------------*5------------------*6------------------*7------------------end
        /**/ XXX, /*----------*/ XXX, /*----------*/ XXX, /*----------*/ XXX, /*----------*/ XXX, /*----------*/ XXX, /*----------*/ XXX,
        // 1------------------*2------------------*3------------------*4------------------*5------------------*6------------------*7------------------end
        /**/ XXX, /*----------*/ KC_NO, /*--------*/ IL_KAF, /*-------*/ IL_TAV, /*-------*/ IL_PE, /*--------*/ KC_NO, /*--------*/ TD(DNC_ESC_HEB_GUI),
        // -------------------*1------------------*2------------------*3------------------*4------------------*5------------------*6------------------end
        /*--------------------*/ IL_HET, /*-------*/ TD(DNC_LAMD_CTL), IL_MEM, /*---------*/ TD(DNC_YOD_ALT), /**/ IL_QOF, /*------*/ XXX,
        // 1------------------*2------------------*3------------------*4------------------*5------------------*6------------------*7------------------end
        /**/ XXX, /*----------*/ IL_TET, /*-------*/ IL_NUN, /*-------*/ XXX, /*----------*/ IL_SMKH, /*------*/ KC_NO, /*--------*/ XXX,
        //--------------------*-------------------*1------------------*2------------------*3------------------*4------------------*5------------------end
        /*--------------------*-------------------*/ XXX, /*----------*/ XXX, /*----------*/ XXX, /*----------*/ XXX, /*----------*/ XXX,
        // 1------------------*2------------------end
        /**/ XXX, /*----------*/ XXX,
        // 1------------------end
        /**/ XXX,
        // 1------------------*2------------------*3------------------end
        /**/ XXX, /*-------*/ XXX, /*---------*/ LT(3, KC_ENTER)),

    [_numLayer] = LAYOUT_ergodox(
        // layer 3
        // Left
        // 1------------------*2------------------*3------------------*4------------------*5------------------*6------------------*7------------------end
        /**/ XXX, /*----------*/ XXX, /*----------*/ XXX, /*----------*/ XXX, /*----------*/ XXX, /*----------*/ XXX, /*----------*/ XXX,
        // 1------------------*2------------------*3------------------*4------------------*5------------------*6------------------*7------------------end
        /**/ XXX, /*----------*/ KC_GRAVE, /*-----*/ KC_BSLASH, /*----*/ KC_CIRCUMFLEX, /**/ KC_SLASH, /*--/--*/ KC_ASTERISK, /*--*/ XXX,
        // -------------------*1------------------*2------------------*3------------------*4------------------*5------------------*6------------------end
        /**/ XXX, /*----------*/ KC_TILDE, /*-----*/ KC_MINUS, /*-----*/ ALT_T(KC_EQUAL), /**/ TD(DNC_PLUS_CTL), /**/ KC_DOUBLE_QUOTE,
        // 1------------------*2------------------*3------------------*4------------------*5------------------*6------------------*7------------------end
        /**/ XXX, /*----------*/ XXX, /*----------*/ KC_L_ANG_BRC, /*-*/ KC_UNDERSCORE, /**/ KC_R_ANG_BRC, /*-*/ KC_QUOTE, /*-----*/ KC_COLON,
        //--------------------*-------------------*1------------------*2------------------*3------------------*4------------------*5------------------end
        /**/ XXX, /*----------*/ XXX, /*----------*/ KC_AMPERSAND, /*-*/ KC_PIPE, /*------*/ KC_LEFT_PAREN,
        // 1------------------*2------------------end
        /**/ XXX, /*----------*/ XXX,
        // 1------------------end
        /**/ XXX,
        // 1------------------*2------------------*3------------------end
        /**/ KC_RIGHT_PAREN, /**/ XXX, /*---------*/ XXX,

        // Right
        // 1------------------*2------------------*3------------------*4------------------*5------------------*6------------------*7------------------end
        /**/ XXX, /*----------*/ XXX, /*----------*/ XXX, /*----------*/ XXX, /*----------*/ XXX, /*----------*/ XXX, /*----------*/ XXX,
        // 1------------------*2------------------*3------------------*4------------------*5------------------*6------------------*7------------------end
        /**/ XXX, /*----------*/ KC_SCOLON, /*----*/ TD(DNC_7_LSQB), /**/ TD(DNC_8_RSQB), /**/ KC_9, /*-------*/ KC_HASH, /*------*/ XXX,
        // -------------------*1------------------*2------------------*3------------------*4------------------*5------------------*6------------------end
        /*--------------------*/ KC_DOT, /*-------*/ CTL_T(KC_4), /*--*/ ALT_T(KC_5), /*--*/ KC_6, /*---------*/ KC_PERCENT, /*---*/ XXX,
        // 1------------------*2------------------*3------------------*4------------------*5------------------*6------------------*7------------------end
        /**/ XXX, /*----------*/ KC_COMMA, /*-----*/ TD(DNC_1_LCRB), /**/ TD(DNC_2_RCRB), /**/ KC_3, /*-------*/ KC_DOLLAR, /*----*/ XXX,
        //--------------------*-------------------*1------------------*2------------------*3------------------*4------------------*5------------------end
        /*--------------------*-------------------*/ KC_QUESTION, /*--*/ KC_EXLM, /*------*/ KC_AT, /*--------*/ XXX, /*----------*/ XXX,
        // 1------------------*2------------------end
        /**/ XXX, /*----------*/ XXX,
        // 1------------------end
        /**/ XXX,
        // 1------------------*2------------------*3------------------end
        /**/ XXX, /*----------*/ XXX, /*----------*/ KC_0),

    [_numLayerHebrew] = LAYOUT_ergodox(
        // Layer 5
        // Left
        //--------------- || --------------- || --------------- || --------------- || --------------- || --------------- || --------------- ||
        /**/ XXX, XXX, XXX, XXX, XXX, XXX, XXX,
        //--------------- || --------------- || --------------- || --------------- || --------------- || --------------- || --------------- ||
        /**/ XXX, XXX, IL_SLSH, IL_CIRC, IL_BSLS, IL_ASTR, XXX,
        //--------------- || --------------- || --------------- || --------------- || --------------- || --------------- ||
        /**/ XXX, IL_TILD, IL_MINS, ALT_T(IL_EQL), TD(DNC_PLUS_CTL), IL_DQUO,
        //--------------- || --------------- || --------------- || --------------- || --------------- || --------------- || --------------- ||
        /**/ XXX, XXX, IL_LABK, IL_UNDS, IL_RABK, IL_QUOT, IL_COLN,
        //--------------- || --------------- || --------------- || --------------- || --------------- ||
        /**/ XXX, XXX, IL_AMPR, IL_PIPE, IL_LPRN,
        //                                                                                            || --------------- || --------------- ||
        /**/ XXX, XXX,
        //                                                                                                               || --------------- ||
        /**/ XXX,
        //                                                                         || --------------- || --------------- || --------------- ||
        /**/ IL_RPRN, XXX, XXX,

        // Right
        //--------------- || --------------- || --------------- || --------------- || --------------- || --------------- || --------------- ||
        /**/ XXX, XXX, XXX, XXX, XXX, XXX, XXX,
        //--------------- || --------------- || --------------- || --------------- || --------------- || --------------- || --------------- ||
        /**/ KC_F8, IL_SCLN, TD(DNC_7H_LSQB), TD(DNC_8H_RSQB), KC_9, IL_PND, XXX,
        //                || --------------- || --------------- || --------------- || --------------- || --------------- || --------------- ||
        /**/ IL_DOT, CTL_T(IL_4), ALT_T(IL_5), IL_6, IL_PERC, XXX,
        //--------------- || --------------- || --------------- || --------------- || --------------- || --------------- || --------------- ||
        /**/ KC_F4, IL_COMM, TD(DNC_1H_LCRB), TD(DNC_2H_RCRB), KC_3, IL_DLR, XXX,
        //                                   || --------------- || --------------- || --------------- || --------------- || --------------- ||
        /**/ IL_QUES, IL_EXLM, IL_AT, XXX, XXX,
        //--------------- || --------------- ||
        /**/ XXX, XXX,
        //--------------- ||
        /**/ XXX,
        //--------------- || --------------- || --------------- ||
        /**/ XXX, XXX, KC_0),

    [_fnLayer] = LAYOUT_ergodox(
        // Left
        //--------------- || --------------- || --------------- || --------------- || --------------- || --------------- || --------------- ||
        /**/ XXX, XXX, XXX, XXX, XXX, XXX, XXX,
        //--------------- || --------------- || --------------- || --------------- || --------------- || --------------- || --------------- ||
        /**/ XXX, XXX, XXX, XXX, XXX, XXX, XXX,
        //--------------- || --------------- || --------------- || --------------- || --------------- || --------------- ||
        /**/ XXX, XXX, XXX, XXX, XXX, XXX,
        //--------------- || --------------- || --------------- || --------------- || --------------- || --------------- || --------------- ||
        /**/ XXX, XXX, XXX, XXX, XXX, XXX, XXX,
        //--------------- || --------------- || --------------- || --------------- || --------------- ||
        /**/ XXX, XXX, XXX, XXX, XXX,
        //                                                                                            || --------------- || --------------- ||
        /**/ XXX, XXX,
        //                                                                                                               || --------------- ||
        /**/ XXX,
        //                                                                         || --------------- || --------------- || --------------- ||
        /**/ XXX, XXX, XXX,

        // Right
        //--------------- || --------------- || --------------- || --------------- || --------------- || --------------- || --------------- ||
        /**/ XXX, XXX, KC_F10, KC_F11, KC_F12, XXX, XXX,
        //--------------- || --------------- || --------------- || --------------- || --------------- || --------------- || --------------- ||
        /**/ XXX, XXX, KC_F7, KC_F8, KC_F9, XXX, XXX,
        //                || --------------- || --------------- || --------------- || --------------- || --------------- || --------------- ||
        /**/ XXX, KC_F4, KC_F5, KC_F6, XXX, XXX,
        //--------------- || --------------- || --------------- || --------------- || --------------- || --------------- || --------------- ||
        /**/ XXX, XXX, KC_F1, KC_F2, KC_F3, XXX, XXX,
        //                                   || --------------- || --------------- || --------------- || --------------- || --------------- ||
        /**/ XXX, XXX, XXX, XXX, XXX,
        //--------------- || --------------- ||
        /**/ XXX, XXX,
        //--------------- ||
        /**/ XXX,
        //--------------- || --------------- || --------------- ||
        /**/ XXX, XXX, XXX),

    [_greekLayer] = LAYOUT_ergodox(
        // Left
        // ------------------------- || -------------------- || -------------------- || -------------------- || -------------------- || -------------------- || -------------------- ||
        /**/ XXX, XXX, XXX, XXX, XXX, XXX, XXX,
        // ------------------------- || -------------------- || -------------------- || -------------------- || -------------------- || -------------------- || -------------------- ||
        /**/ XXX, X(omegaPi), XP(omega, omegaCap), XP(epsilon, epsilonCap), XP(rho, rhoCap), XP(tau, tauCap), XXX,
        // ------------------------- || -------------------- || -------------------- || -------------------- || -------------------- || -------------------- ||
        /**/ XXX, XP(alpha, alphaCap), XP(sigma, sigmaCap), XP(delta, deltaCap), XP(phi, phiCap), XP(gamma, gammaCap),
        // ------------------------- || -------------------- || -------------------- || -------------------- || -------------------- || -------------------- || -------------------- ||
        /**/ XXX, XP(zeta, zetaCap), XP(xi, xiCap), XXX, X(phiEmptySet), XP(beta, betaCap), XXX,
        // ------------------------- || -------------------- || -------------------- || -------------------- || -------------------- ||
        /**/ XXX, XXX, XXX, XXX, XXX,

        //                                                                                                   || -------------------- || -------------------- ||
        /**/ XXX, XXX,
        //                                                                                                                           || -------------------- ||
        /**/ XXX,
        //                                                                           || -------------------- || -------------------- || -------------------- ||
        /**/ XXX, XXX, XXX,

        // Right
        // ------------------------- || -------------------- || -------------------- || -------------------- || -------------------- || -------------------- || -------------------- ||
        /**/ XXX, XXX, XXX, XXX, XXX, XXX, XXX,
        // ------------------------- || -------------------- || -------------------- || -------------------- || -------------------- || -------------------- || -------------------- ||
        /**/ XXX, XP(psi, psiCap), XP(upsilon, upsilonCap), XP(iota, iotaCap), XP(omicron, omegaCap), XXX, XXX,
        //                           || -------------------- || -------------------- || -------------------- || -------------------- || -------------------- || -------------------- ||
        /**/ XP(eta, etaCap), XP(theta, thetaCap), XP(kappa, kappaCap), XP(lambda, lambdaCap), XXX, XXX,
        // ------------------------- || -------------------- || -------------------- || -------------------- || -------------------- || -------------------- || -------------------- ||
        /**/ XXX, XP(nu, nuCap), XP(mu, muCap), XP(pi, phiCap), XP(chi, chiCap), XXX, XXX,
        //                                                   || -------------------- || -------------------- || -------------------- || -------------------- || -------------------- ||
        /**/ XXX, XXX, XXX, XXX, XXX,

        // ------------------------- || -------------------- ||
        /**/ XXX, XXX,
        // ------------------------- ||
        /**/ XXX,
        // ------------------------- || -------------------- || -------------------- ||
        /**/ XXX, XXX, XXX),
};

// Macros
bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        // case LANG_HEB:
        //     if (record->event.pressed) {
        //         SEND_STRING(SS_LALT(SS_TAP(X_LSHIFT)));
        //         layer_invert(1);
        //     }
        //     break;
    }
    return true;
}
// Layer State
uint32_t layer_state_set_user(uint32_t state) {
    uint8_t layer = biton32(state);
    ergodox_board_led_off();
    ergodox_right_led_1_off();
    ergodox_right_led_2_off();
    ergodox_right_led_3_off();
    switch (layer) {
        case _hebrewLayer:
            ergodox_right_led_1_on();
            break;
        case _numLayer:
        case _numLayerHebrew:
            ergodox_right_led_2_on();
            break;
        case _fnLayer:
        case _greekLayer:
            ergodox_right_led_1_on();
            ergodox_right_led_2_on();
            ergodox_right_led_3_on();
            break;
        default:
            break;
    }
    return state;
};

// Key Overrides
const key_override_t mem_shift_final_OR   = ko_make_with_layers(MOD_MASK_SHIFT, KC_N, KC_O, 1 << _hebrewLayer);
const key_override_t num_shift_final_OR   = ko_make_with_layers(MOD_MASK_SHIFT, KC_B, KC_I, 1 << _hebrewLayer);
const key_override_t pe_shift_final_OR    = ko_make_with_layers(MOD_MASK_SHIFT, KC_P, KC_SCOLON, 1 << _hebrewLayer);
const key_override_t kaf_shift_final_OR   = ko_make_with_layers(MOD_MASK_SHIFT, KC_F, KC_L, 1 << _hebrewLayer);
const key_override_t tsdik_shift_final_OR = ko_make_with_layers(MOD_MASK_SHIFT, KC_M, KC_DOT, 1 << _hebrewLayer);

const key_override_t **key_overrides = (const key_override_t *[]){
    &mem_shift_final_OR,
    &num_shift_final_OR,
    &pe_shift_final_OR,
    &kaf_shift_final_OR,
    &tsdik_shift_final_OR,
    NULL  // Null terminate the array of overrides!
};

// costum keys "permissive_hold"
bool get_permissive_hold(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case LT(2, KC_SPACE):
        case LT(3, KC_SPACE):

        case LT(2, KC_ENTER):
        case LT(3, KC_ENTER):

            return true;
        default:
            return false;
    }
}

// costum keys "hold_on_other_key_press"
bool get_hold_on_other_key_press(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case LT(2, KC_SPACE):
        case LT(3, KC_SPACE):

        case LT(2, KC_ENTER):
        case LT(3, KC_ENTER):

            return true;
        default:
            return false;
    }
}

// costum keys tapping term
uint16_t get_tapping_term(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case GUI_T(KC_ESC):
        case ALT_T(KC_D):
        case ALT_T(KC_K):
        case CTL_T(KC_F):
        case CTL_T(KC_J):
            return TAPPING_TERM * 1.2;
        default:
            return TAPPING_TERM;
    }
}

// tap dances
typedef struct {
    bool    is_press_action;
    uint8_t step;
} tap;

enum { SINGLE_TAP = 1, SINGLE_HOLD, DOUBLE_TAP, DOUBLE_HOLD, DOUBLE_SINGLE_TAP, MORE_TAPS };

static tap dance_state[TAP_DANCE_ENUM_LAST];
int        tdWaitTime = 10;

uint8_t dance_step(qk_tap_dance_state_t *state);

uint8_t dance_step(qk_tap_dance_state_t *state) {
    if (state->count == 1) {
        if (state->interrupted || !state->pressed)
            return SINGLE_TAP;
        else
            return SINGLE_HOLD;
    } else if (state->count == 2) {
        if (state->interrupted)
            return DOUBLE_SINGLE_TAP;
        else if (state->pressed)
            return DOUBLE_HOLD;
        else
            return DOUBLE_TAP;
    }
    return MORE_TAPS;
}

void on_DNC_NUN(qk_tap_dance_state_t *state, void *user_data);
void DNC_NUN_finished(qk_tap_dance_state_t *state, void *user_data);
void DNC_NUN_reset(qk_tap_dance_state_t *state, void *user_data);

void on_DNC_NUN(qk_tap_dance_state_t *state, void *user_data) {
    if (state->count == 3) {
        tap_code16(KC_B);
        tap_code16(KC_B);
        tap_code16(KC_B);
    }
    if (state->count > 3) {
        tap_code16(KC_B);
    }
}

void DNC_NUN_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[DNC_NUN].step = dance_step(state);
    switch (dance_state[DNC_NUN].step) {
        case SINGLE_TAP:
            register_code16(KC_B);
            break;
        case SINGLE_HOLD:
            register_code16(KC_I);
            break;
        case DOUBLE_TAP:
            register_code16(KC_B);
            register_code16(KC_B);
            break;
        case DOUBLE_SINGLE_TAP:
            tap_code16(KC_B);
            register_code16(KC_B);
    }
}

void DNC_NUN_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(tdWaitTime);
    switch (dance_state[DNC_NUN].step) {
        case SINGLE_TAP:
            unregister_code16(KC_B);
            break;
        case SINGLE_HOLD:
            unregister_code16(KC_I);
            break;
        case DOUBLE_TAP:
            unregister_code16(KC_B);
            break;
        case DOUBLE_SINGLE_TAP:
            unregister_code16(KC_B);
            break;
    }
    dance_state[DNC_NUN].step = 0;
}

void on_DNC_TSDI(qk_tap_dance_state_t *state, void *user_data);
void DNC_TSDI_finished(qk_tap_dance_state_t *state, void *user_data);
void DNC_TSDI_reset(qk_tap_dance_state_t *state, void *user_data);

void on_DNC_TSDI(qk_tap_dance_state_t *state, void *user_data) {
    if (state->count == 3) {
        tap_code16(KC_M);
        tap_code16(KC_M);
        tap_code16(KC_M);
    }
    if (state->count > 3) {
        tap_code16(KC_M);
    }
}

void DNC_TSDI_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[DNC_TSDI].step = dance_step(state);
    switch (dance_state[DNC_TSDI].step) {
        case SINGLE_TAP:
            register_code16(KC_M);
            break;
        case SINGLE_HOLD:
            register_code16(KC_DOT);
            break;
        case DOUBLE_TAP:
            register_code16(KC_M);
            register_code16(KC_M);
            break;
        case DOUBLE_SINGLE_TAP:
            tap_code16(KC_M);
            register_code16(KC_M);
    }
}

void DNC_TSDI_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(tdWaitTime);
    switch (dance_state[DNC_TSDI].step) {
        case SINGLE_TAP:
            unregister_code16(KC_M);
            break;
        case SINGLE_HOLD:
            unregister_code16(KC_DOT);
            break;
        case DOUBLE_TAP:
            unregister_code16(KC_M);
            break;
        case DOUBLE_SINGLE_TAP:
            unregister_code16(KC_M);
            break;
    }
    dance_state[DNC_TSDI].step = 0;
}

void on_DNC_KAF(qk_tap_dance_state_t *state, void *user_data);
void DNC_KAF_finished(qk_tap_dance_state_t *state, void *user_data);
void DNC_KAF_reset(qk_tap_dance_state_t *state, void *user_data);

void on_DNC_KAF(qk_tap_dance_state_t *state, void *user_data) {
    if (state->count == 3) {
        tap_code16(KC_F);
        tap_code16(KC_F);
        tap_code16(KC_F);
    }
    if (state->count > 3) {
        tap_code16(KC_F);
    }
}

void DNC_KAF_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[DNC_KAF].step = dance_step(state);
    switch (dance_state[DNC_KAF].step) {
        case SINGLE_TAP:
            register_code16(KC_F);
            break;
        case SINGLE_HOLD:
            register_code16(KC_L);
            break;
        case DOUBLE_TAP:
            register_code16(KC_F);
            register_code16(KC_F);
            break;
        case DOUBLE_SINGLE_TAP:
            tap_code16(KC_F);
            register_code16(KC_F);
    }
}

void DNC_KAF_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(tdWaitTime);
    switch (dance_state[DNC_KAF].step) {
        case SINGLE_TAP:
            unregister_code16(KC_F);
            break;
        case SINGLE_HOLD:
            unregister_code16(KC_L);
            break;
        case DOUBLE_TAP:
            unregister_code16(KC_F);
            break;
        case DOUBLE_SINGLE_TAP:
            unregister_code16(KC_F);
            break;
    }
    dance_state[DNC_KAF].step = 0;
}

void on_DNC_MEM(qk_tap_dance_state_t *state, void *user_data);
void DNC_MEM_finished(qk_tap_dance_state_t *state, void *user_data);
void DNC_MEM_reset(qk_tap_dance_state_t *state, void *user_data);

void on_DNC_MEM(qk_tap_dance_state_t *state, void *user_data) {
    if (state->count == 3) {
        tap_code16(KC_N);
        tap_code16(KC_N);
        tap_code16(KC_N);
    }
    if (state->count > 3) {
        tap_code16(KC_N);
    }
}

void DNC_MEM_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[DNC_MEM].step = dance_step(state);
    switch (dance_state[DNC_MEM].step) {
        case SINGLE_TAP:
            register_code16(KC_N);
            break;
        case SINGLE_HOLD:
            register_code16(KC_O);
            break;
        case DOUBLE_TAP:
            register_code16(KC_N);
            register_code16(KC_N);
            break;
        case DOUBLE_SINGLE_TAP:
            tap_code16(KC_N);
            register_code16(KC_N);
    }
}

void DNC_MEM_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(tdWaitTime);
    switch (dance_state[DNC_MEM].step) {
        case SINGLE_TAP:
            unregister_code16(KC_N);
            break;
        case SINGLE_HOLD:
            unregister_code16(KC_O);
            break;
        case DOUBLE_TAP:
            unregister_code16(KC_N);
            break;
        case DOUBLE_SINGLE_TAP:
            unregister_code16(KC_N);
            break;
    }
    dance_state[DNC_MEM].step = 0;
}

void on_DNC_PE(qk_tap_dance_state_t *state, void *user_data);
void DNC_PE_finished(qk_tap_dance_state_t *state, void *user_data);
void DNC_PE_reset(qk_tap_dance_state_t *state, void *user_data);

void on_DNC_PE(qk_tap_dance_state_t *state, void *user_data) {
    if (state->count == 3) {
        tap_code16(KC_P);
        tap_code16(KC_P);
        tap_code16(KC_P);
    }
    if (state->count > 3) {
        tap_code16(KC_P);
    }
}

void DNC_PE_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[DNC_PE].step = dance_step(state);
    switch (dance_state[DNC_PE].step) {
        case SINGLE_TAP:
            register_code16(KC_P);
            break;
        case SINGLE_HOLD:
            register_code16(KC_SCOLON);
            break;
        case DOUBLE_TAP:
            register_code16(KC_P);
            register_code16(KC_P);
            break;
        case DOUBLE_SINGLE_TAP:
            tap_code16(KC_P);
            register_code16(KC_P);
    }
}

void DNC_PE_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(tdWaitTime);
    switch (dance_state[DNC_PE].step) {
        case SINGLE_TAP:
            unregister_code16(KC_P);
            break;
        case SINGLE_HOLD:
            unregister_code16(KC_SCOLON);
            break;
        case DOUBLE_TAP:
            unregister_code16(KC_P);
            break;
        case DOUBLE_SINGLE_TAP:
            unregister_code16(KC_P);
            break;
    }
    dance_state[DNC_PE].step = 0;
}

void on_DNC_PRT_SCRN(qk_tap_dance_state_t *state, void *user_data);
void DNC_PRT_SCRN_finished(qk_tap_dance_state_t *state, void *user_data);
void DNC_PRT_SCRN_reset(qk_tap_dance_state_t *state, void *user_data);

void on_DNC_PRT_SCRN(qk_tap_dance_state_t *state, void *user_data) {
    if (state->count == 3) {
        tap_code16(LGUI(KC_PSCREEN));
        tap_code16(LGUI(KC_PSCREEN));
        tap_code16(LGUI(KC_PSCREEN));
    }
    if (state->count > 3) {
        tap_code16(LGUI(KC_PSCREEN));
    }
}

void DNC_PRT_SCRN_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[DNC_PRT_SCRN].step = dance_step(state);
    switch (dance_state[DNC_PRT_SCRN].step) {
        case SINGLE_TAP:
            register_code16(LGUI(KC_PSCREEN));
            break;
        case SINGLE_HOLD:
            register_code16(LGUI(LSFT(KC_S)));
            break;
        case DOUBLE_TAP:
            register_code16(LGUI(KC_PSCREEN));
            register_code16(LGUI(KC_PSCREEN));
            break;
        case DOUBLE_SINGLE_TAP:
            tap_code16(LGUI(KC_PSCREEN));
            register_code16(LGUI(KC_PSCREEN));
    }
}

void DNC_PRT_SCRN_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(tdWaitTime);
    switch (dance_state[DNC_PRT_SCRN].step) {
        case SINGLE_TAP:
            unregister_code16(LGUI(KC_PSCREEN));
            break;
        case SINGLE_HOLD:
            unregister_code16(LGUI(LSFT(KC_S)));
            break;
        case DOUBLE_TAP:
            unregister_code16(LGUI(KC_PSCREEN));
            break;
        case DOUBLE_SINGLE_TAP:
            unregister_code16(LGUI(KC_PSCREEN));
            break;
    }
    dance_state[DNC_PRT_SCRN].step = 0;
}

void on_DNC_COPY_CUT(qk_tap_dance_state_t *state, void *user_data);
void DNC_COPY_CUT_finished(qk_tap_dance_state_t *state, void *user_data);
void DNC_COPY_CUT_reset(qk_tap_dance_state_t *state, void *user_data);

void on_DNC_COPY_CUT(qk_tap_dance_state_t *state, void *user_data) {
    if (state->count == 3) {
        tap_code16(LCTL(KC_C));
        tap_code16(LCTL(KC_C));
        tap_code16(LCTL(KC_C));
    }
    if (state->count > 3) {
        tap_code16(LCTL(KC_C));
    }
}

void DNC_COPY_CUT_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[DNC_COPY_CUT].step = dance_step(state);
    switch (dance_state[DNC_COPY_CUT].step) {
        case SINGLE_TAP:
            register_code16(LCTL(KC_C));
            break;
        case SINGLE_HOLD:
            register_code16(LCTL(KC_X));
            break;
        case DOUBLE_TAP:
            register_code16(LCTL(KC_C));
            register_code16(LCTL(KC_C));
            break;
        case DOUBLE_SINGLE_TAP:
            tap_code16(LCTL(KC_C));
            register_code16(LCTL(KC_C));
    }
}

void DNC_COPY_CUT_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(tdWaitTime);
    switch (dance_state[DNC_COPY_CUT].step) {
        case SINGLE_TAP:
            unregister_code16(LCTL(KC_C));
            break;
        case SINGLE_HOLD:
            unregister_code16(LCTL(KC_X));
            break;
        case DOUBLE_TAP:
            unregister_code16(LCTL(KC_C));
            break;
        case DOUBLE_SINGLE_TAP:
            unregister_code16(LCTL(KC_C));
            break;
    }
    dance_state[DNC_COPY_CUT].step = 0;
}

void on_DNC_PLUS_CTL(qk_tap_dance_state_t *state, void *user_data);
void DNC_PLUS_CTL_finished(qk_tap_dance_state_t *state, void *user_data);
void DNC_PLUS_CTL_reset(qk_tap_dance_state_t *state, void *user_data);

void on_DNC_PLUS_CTL(qk_tap_dance_state_t *state, void *user_data) {
    if (state->count == 3) {
        tap_code16(LSFT(KC_EQUAL));
        tap_code16(LSFT(KC_EQUAL));
        tap_code16(LSFT(KC_EQUAL));
    }
    if (state->count > 3) {
        tap_code16(LSFT(KC_EQUAL));
    }
}

void DNC_PLUS_CTL_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[DNC_PLUS_CTL].step = dance_step(state);
    switch (dance_state[DNC_PLUS_CTL].step) {
        case SINGLE_TAP:
            register_code16(LSFT(KC_EQUAL));
            break;
        case SINGLE_HOLD:
            register_code16(KC_LCTRL);
            break;
        case DOUBLE_TAP:
            register_code16(LSFT(KC_EQUAL));
            register_code16(LSFT(KC_EQUAL));
            break;
        case DOUBLE_SINGLE_TAP:
            tap_code16(LSFT(KC_EQUAL));
            register_code16(LSFT(KC_EQUAL));
    }
}

void DNC_PLUS_CTL_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(tdWaitTime);
    switch (dance_state[DNC_PLUS_CTL].step) {
        case SINGLE_TAP:
            unregister_code16(LSFT(KC_EQUAL));
            break;
        case SINGLE_HOLD:
            unregister_code16(KC_LCTRL);
            break;
        case DOUBLE_TAP:
            unregister_code16(LSFT(KC_EQUAL));
            break;
        case DOUBLE_SINGLE_TAP:
            unregister_code16(LSFT(KC_EQUAL));
            break;
    }
    dance_state[DNC_PLUS_CTL].step = 0;
}

void on_DNC_7_LSQB(qk_tap_dance_state_t *state, void *user_data);
void DNC_7_LSQB_finished(qk_tap_dance_state_t *state, void *user_data);
void DNC_7_LSQB_reset(qk_tap_dance_state_t *state, void *user_data);

void on_DNC_7_LSQB(qk_tap_dance_state_t *state, void *user_data) {
    if (state->count == 3) {
        tap_code16(KC_7);
        tap_code16(KC_7);
        tap_code16(KC_7);
    }
    if (state->count > 3) {
        tap_code16(KC_7);
    }
}

void DNC_7_LSQB_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[DNC_7_LSQB].step = dance_step(state);
    switch (dance_state[DNC_7_LSQB].step) {
        case SINGLE_TAP:
            register_code16(KC_7);
            break;
        case SINGLE_HOLD:
            register_code16(KC_LBRACKET);
            break;
        case DOUBLE_TAP:
            register_code16(KC_7);
            register_code16(KC_7);
            break;
        case DOUBLE_SINGLE_TAP:
            tap_code16(KC_7);
            register_code16(KC_7);
    }
}

void DNC_7_LSQB_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(tdWaitTime);
    switch (dance_state[DNC_7_LSQB].step) {
        case SINGLE_TAP:
            unregister_code16(KC_7);
            break;
        case SINGLE_HOLD:
            unregister_code16(KC_LBRACKET);
            break;
        case DOUBLE_TAP:
            unregister_code16(KC_7);
            break;
        case DOUBLE_SINGLE_TAP:
            unregister_code16(KC_7);
            break;
    }
    dance_state[DNC_7_LSQB].step = 0;
}

void on_DNC_8_RSQB(qk_tap_dance_state_t *state, void *user_data);
void DNC_8_RSQB_finished(qk_tap_dance_state_t *state, void *user_data);
void DNC_8_RSQB_reset(qk_tap_dance_state_t *state, void *user_data);

void on_DNC_8_RSQB(qk_tap_dance_state_t *state, void *user_data) {
    if (state->count == 3) {
        tap_code16(KC_8);
        tap_code16(KC_8);
        tap_code16(KC_8);
    }
    if (state->count > 3) {
        tap_code16(KC_8);
    }
}

void DNC_8_RSQB_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[DNC_8_RSQB].step = dance_step(state);
    switch (dance_state[DNC_8_RSQB].step) {
        case SINGLE_TAP:
            register_code16(KC_8);
            break;
        case SINGLE_HOLD:
            register_code16(KC_RBRACKET);
            break;
        case DOUBLE_TAP:
            register_code16(KC_8);
            register_code16(KC_8);
            break;
        case DOUBLE_SINGLE_TAP:
            tap_code16(KC_8);
            register_code16(KC_8);
    }
}

void DNC_8_RSQB_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(tdWaitTime);
    switch (dance_state[DNC_8_RSQB].step) {
        case SINGLE_TAP:
            unregister_code16(KC_8);
            break;
        case SINGLE_HOLD:
            unregister_code16(KC_RBRACKET);
            break;
        case DOUBLE_TAP:
            unregister_code16(KC_8);
            break;
        case DOUBLE_SINGLE_TAP:
            unregister_code16(KC_8);
            break;
    }
    dance_state[DNC_8_RSQB].step = 0;
}

void on_DNC_1_LCRB(qk_tap_dance_state_t *state, void *user_data);
void DNC_1_LCRB_finished(qk_tap_dance_state_t *state, void *user_data);
void DNC_1_LCRB_reset(qk_tap_dance_state_t *state, void *user_data);

void on_DNC_1_LCRB(qk_tap_dance_state_t *state, void *user_data) {
    if (state->count == 3) {
        tap_code16(KC_1);
        tap_code16(KC_1);
        tap_code16(KC_1);
    }
    if (state->count > 3) {
        tap_code16(KC_1);
    }
}

void DNC_1_LCRB_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[DNC_1_LCRB].step = dance_step(state);
    switch (dance_state[DNC_1_LCRB].step) {
        case SINGLE_TAP:
            register_code16(KC_1);
            break;
        case SINGLE_HOLD:
            register_code16(LSFT(KC_LBRACKET));
            break;
        case DOUBLE_TAP:
            register_code16(KC_1);
            register_code16(KC_1);
            break;
        case DOUBLE_SINGLE_TAP:
            tap_code16(KC_1);
            register_code16(KC_1);
    }
}

void DNC_1_LCRB_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(tdWaitTime);
    switch (dance_state[DNC_1_LCRB].step) {
        case SINGLE_TAP:
            unregister_code16(KC_1);
            break;
        case SINGLE_HOLD:
            unregister_code16(LSFT(KC_LBRACKET));
            break;
        case DOUBLE_TAP:
            unregister_code16(KC_1);
            break;
        case DOUBLE_SINGLE_TAP:
            unregister_code16(KC_1);
            break;
    }
    dance_state[DNC_1_LCRB].step = 0;
}

void on_DNC_2_RCRB(qk_tap_dance_state_t *state, void *user_data);
void DNC_2_RCRB_finished(qk_tap_dance_state_t *state, void *user_data);
void DNC_2_RCRB_reset(qk_tap_dance_state_t *state, void *user_data);

void on_DNC_2_RCRB(qk_tap_dance_state_t *state, void *user_data) {
    if (state->count == 3) {
        tap_code16(KC_2);
        tap_code16(KC_2);
        tap_code16(KC_2);
    }
    if (state->count > 3) {
        tap_code16(KC_2);
    }
}

void DNC_2_RCRB_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[DNC_2_RCRB].step = dance_step(state);
    switch (dance_state[DNC_2_RCRB].step) {
        case SINGLE_TAP:
            register_code16(KC_2);
            break;
        case SINGLE_HOLD:
            register_code16(LSFT(KC_RBRACKET));
            break;
        case DOUBLE_TAP:
            register_code16(KC_2);
            register_code16(KC_2);
            break;
        case DOUBLE_SINGLE_TAP:
            tap_code16(KC_2);
            register_code16(KC_2);
    }
}

void DNC_2_RCRB_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(tdWaitTime);
    switch (dance_state[DNC_2_RCRB].step) {
        case SINGLE_TAP:
            unregister_code16(KC_2);
            break;
        case SINGLE_HOLD:
            unregister_code16(LSFT(KC_RBRACKET));
            break;
        case DOUBLE_TAP:
            unregister_code16(KC_2);
            break;
        case DOUBLE_SINGLE_TAP:
            unregister_code16(KC_2);
            break;
    }
    dance_state[DNC_2_RCRB].step = 0;
}

void on_DNC_VAV_ALT(qk_tap_dance_state_t *state, void *user_data);
void DNC_VAV_ALT_finished(qk_tap_dance_state_t *state, void *user_data);
void DNC_VAV_ALT_reset(qk_tap_dance_state_t *state, void *user_data);

void on_DNC_VAV_ALT(qk_tap_dance_state_t *state, void *user_data) {
    if (state->count == 3) {
        tap_code16(KC_U);
        tap_code16(KC_U);
        tap_code16(KC_U);
    }
    if (state->count > 3) {
        tap_code16(KC_U);
    }
}

void DNC_VAV_ALT_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[DNC_VAV_ALT].step = dance_step(state);
    switch (dance_state[DNC_VAV_ALT].step) {
        case SINGLE_TAP:
            register_code16(KC_U);
            break;
        case SINGLE_HOLD:
            layer_move(_baseLayer);
            register_code16(KC_LALT);
            break;
        case DOUBLE_TAP:
            register_code16(KC_U);
            register_code16(KC_U);
            break;
        case DOUBLE_SINGLE_TAP:
            tap_code16(KC_U);
            register_code16(KC_U);
    }
}

void DNC_VAV_ALT_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(tdWaitTime);
    switch (dance_state[DNC_VAV_ALT].step) {
        case SINGLE_TAP:
            unregister_code16(KC_U);
            break;
        case SINGLE_HOLD:
            unregister_code16(KC_LALT);
            layer_move(_hebrewLayer);
            break;
        case DOUBLE_TAP:
            unregister_code16(KC_U);
            break;
        case DOUBLE_SINGLE_TAP:
            unregister_code16(KC_U);
            break;
    }
    dance_state[DNC_VAV_ALT].step = 0;
}

void on_DNC_YOD_ALT(qk_tap_dance_state_t *state, void *user_data);
void DNC_YOD_ALT_finished(qk_tap_dance_state_t *state, void *user_data);
void DNC_YOD_ALT_reset(qk_tap_dance_state_t *state, void *user_data);

void on_DNC_YOD_ALT(qk_tap_dance_state_t *state, void *user_data) {
    if (state->count == 3) {
        tap_code16(KC_H);
        tap_code16(KC_H);
        tap_code16(KC_H);
    }
    if (state->count > 3) {
        tap_code16(KC_H);
    }
}

void DNC_YOD_ALT_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[DNC_YOD_ALT].step = dance_step(state);
    switch (dance_state[DNC_YOD_ALT].step) {
        case SINGLE_TAP:
            register_code16(KC_H);
            break;
        case SINGLE_HOLD:
            layer_move(_baseLayer);
            register_code16(KC_LALT);
            break;
        case DOUBLE_TAP:
            register_code16(KC_H);
            register_code16(KC_H);
            break;
        case DOUBLE_SINGLE_TAP:
            tap_code16(KC_H);
            register_code16(KC_H);
    }
}

void DNC_YOD_ALT_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(tdWaitTime);
    switch (dance_state[DNC_YOD_ALT].step) {
        case SINGLE_TAP:
            unregister_code16(KC_H);
            break;
        case SINGLE_HOLD:
            unregister_code16(KC_LALT);
            layer_move(_hebrewLayer);
            break;
        case DOUBLE_TAP:
            unregister_code16(KC_H);
            break;
        case DOUBLE_SINGLE_TAP:
            unregister_code16(KC_H);
            break;
    }
    dance_state[DNC_YOD_ALT].step = 0;
}

// new dance
void on_DNC_ESC_HEB_GUI(qk_tap_dance_state_t *state, void *user_data);
void DNC_ESC_HEB_GUI_finished(qk_tap_dance_state_t *state, void *user_data);
void DNC_ESC_HEB_GUI_reset(qk_tap_dance_state_t *state, void *user_data);

void on_DNC_ESC_HEB_GUI(qk_tap_dance_state_t *state, void *user_data) {
    if (state->count == 3) {
        tap_code16(KC_ESC);
        tap_code16(KC_ESC);
        tap_code16(KC_ESC);
    }
    if (state->count > 3) {
        tap_code16(KC_ESC);
    }
}

void DNC_ESC_HEB_GUI_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[DNC_ESC_HEB_GUI].step = dance_step(state);
    switch (dance_state[DNC_ESC_HEB_GUI].step) {
        case SINGLE_TAP:
            register_code16(KC_ESC);
            break;
        case SINGLE_HOLD:
            layer_move(_baseLayer);
            register_code16(KC_LGUI);
            break;
        case DOUBLE_TAP:
            register_code16(KC_ESC);
            register_code16(KC_ESC);
            break;
        case DOUBLE_SINGLE_TAP:
            tap_code16(KC_ESC);
            register_code16(KC_ESC);
    }
}
void DNC_ESC_HEB_GUI_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(tdWaitTime);
    switch (dance_state[DNC_ESC_HEB_GUI].step) {
        case SINGLE_TAP:
            unregister_code16(KC_ESC);
            break;
        case SINGLE_HOLD:
            unregister_code16(KC_LGUI);
            layer_move(_hebrewLayer);
            break;
        case DOUBLE_TAP:
            unregister_code16(KC_ESC);
            break;
        case DOUBLE_SINGLE_TAP:
            unregister_code16(KC_ESC);
            break;
    }
    dance_state[DNC_ESC_HEB_GUI].step = 0;
}

void on_DNC_LAMD_CTL(qk_tap_dance_state_t *state, void *user_data);
void DNC_LAMD_CTL_finished(qk_tap_dance_state_t *state, void *user_data);
void DNC_LAMD_CTL_reset(qk_tap_dance_state_t *state, void *user_data);

void on_DNC_LAMD_CTL(qk_tap_dance_state_t *state, void *user_data) {
    if (state->count == 3) {
        tap_code16(IL_LAMD);
        tap_code16(IL_LAMD);
        tap_code16(IL_LAMD);
    }
    if (state->count > 3) {
        tap_code16(IL_LAMD);
    }
}

void DNC_LAMD_CTL_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[DNC_LAMD_CTL].step = dance_step(state);
    switch (dance_state[DNC_LAMD_CTL].step) {
        case SINGLE_TAP:
            register_code16(IL_LAMD);
            break;
        case SINGLE_HOLD:
            layer_move(_baseLayer);
            register_code16(KC_LCTL);
            break;
        case DOUBLE_TAP:
            register_code16(IL_LAMD);
            register_code16(IL_LAMD);
            break;
        case DOUBLE_SINGLE_TAP:
            tap_code16(IL_LAMD);
            register_code16(IL_LAMD);
    }
}

void DNC_LAMD_CTL_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(tdWaitTime);
    switch (dance_state[DNC_LAMD_CTL].step) {
        case SINGLE_TAP:
            unregister_code16(IL_LAMD);
            break;
        case SINGLE_HOLD:
            unregister_code16(KC_LCTL);
            layer_move(_hebrewLayer);
            break;
        case DOUBLE_TAP:
            unregister_code16(IL_LAMD);
            break;
        case DOUBLE_SINGLE_TAP:
            unregister_code16(IL_LAMD);
            break;
    }
    dance_state[DNC_LAMD_CTL].step = 0;
}
// new dance
void on_DNC_RESH_CTL(qk_tap_dance_state_t *state, void *user_data);
void DNC_RESH_CTL_finished(qk_tap_dance_state_t *state, void *user_data);
void DNC_RESH_CTL_reset(qk_tap_dance_state_t *state, void *user_data);

void on_DNC_RESH_CTL(qk_tap_dance_state_t *state, void *user_data) {
    if (state->count == 3) {
        tap_code16(IL_RESH);
        tap_code16(IL_RESH);
        tap_code16(IL_RESH);
    }
    if (state->count > 3) {
        tap_code16(IL_RESH);
    }
}

void DNC_RESH_CTL_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[DNC_RESH_CTL].step = dance_step(state);
    switch (dance_state[DNC_RESH_CTL].step) {
        case SINGLE_TAP:
            register_code16(IL_RESH);
            break;
        case SINGLE_HOLD:
            layer_move(_baseLayer);
            register_code16(KC_LCTL);
            break;
        case DOUBLE_TAP:
            register_code16(IL_RESH);
            register_code16(IL_RESH);
            break;
        case DOUBLE_SINGLE_TAP:
            tap_code16(IL_RESH);
            register_code16(IL_RESH);
    }
}

void DNC_RESH_CTL_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(tdWaitTime);
    switch (dance_state[DNC_RESH_CTL].step) {
        case SINGLE_TAP:
            unregister_code16(IL_RESH);
            break;
        case SINGLE_HOLD:
            unregister_code16(KC_LCTL);
            layer_move(_hebrewLayer);
            break;
        case DOUBLE_TAP:
            unregister_code16(IL_RESH);
            break;
        case DOUBLE_SINGLE_TAP:
            unregister_code16(IL_RESH);
            break;
    }
    dance_state[DNC_RESH_CTL].step = 0;
}

// new dance
void on_DNC_7H_LSQB(qk_tap_dance_state_t *state, void *user_data);
void DNC_7H_LSQB_finished(qk_tap_dance_state_t *state, void *user_data);
void DNC_7H_LSQB_reset(qk_tap_dance_state_t *state, void *user_data);

void on_DNC_7H_LSQB(qk_tap_dance_state_t *state, void *user_data) {
    if (state->count == 3) {
        tap_code16(KC_7);
        tap_code16(KC_7);
        tap_code16(KC_7);
    }
    if (state->count > 3) {
        tap_code16(KC_7);
    }
}

void DNC_7H_LSQB_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[DNC_7H_LSQB].step = dance_step(state);
    switch (dance_state[DNC_7H_LSQB].step) {
        case SINGLE_TAP:
            register_code16(KC_7);
            break;
        case SINGLE_HOLD:
            register_code16(KC_LBRC);
            break;
        case DOUBLE_TAP:
            register_code16(KC_7);
            register_code16(KC_7);
            break;
        case DOUBLE_SINGLE_TAP:
            tap_code16(KC_7);
            register_code16(KC_7);
    }
}

void DNC_7H_LSQB_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(tdWaitTime);
    switch (dance_state[DNC_7H_LSQB].step) {
        case SINGLE_TAP:
            unregister_code16(KC_7);
            break;
        case SINGLE_HOLD:
            unregister_code16(KC_LBRC);
            break;
        case DOUBLE_TAP:
            unregister_code16(KC_7);
            break;
        case DOUBLE_SINGLE_TAP:
            unregister_code16(KC_7);
            break;
    }
    dance_state[DNC_7H_LSQB].step = 0;
}

void on_DNC_8H_RSQB(qk_tap_dance_state_t *state, void *user_data);
void DNC_8H_RSQB_finished(qk_tap_dance_state_t *state, void *user_data);
void DNC_8H_RSQB_reset(qk_tap_dance_state_t *state, void *user_data);

void on_DNC_8H_RSQB(qk_tap_dance_state_t *state, void *user_data) {
    if (state->count == 3) {
        tap_code16(KC_8);
        tap_code16(KC_8);
        tap_code16(KC_8);
    }
    if (state->count > 3) {
        tap_code16(KC_8);
    }
}

void DNC_8H_RSQB_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[DNC_8H_RSQB].step = dance_step(state);
    switch (dance_state[DNC_8H_RSQB].step) {
        case SINGLE_TAP:
            register_code16(KC_8);
            break;
        case SINGLE_HOLD:
            register_code16(KC_RBRC);
            break;
        case DOUBLE_TAP:
            register_code16(KC_8);
            register_code16(KC_8);
            break;
        case DOUBLE_SINGLE_TAP:
            tap_code16(KC_8);
            register_code16(KC_8);
    }
}

void DNC_8H_RSQB_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(tdWaitTime);
    switch (dance_state[DNC_8H_RSQB].step) {
        case SINGLE_TAP:
            unregister_code16(KC_8);
            break;
        case SINGLE_HOLD:
            unregister_code16(KC_RBRC);
            break;
        case DOUBLE_TAP:
            unregister_code16(KC_8);
            break;
        case DOUBLE_SINGLE_TAP:
            unregister_code16(KC_8);
            break;
    }
    dance_state[DNC_8H_RSQB].step = 0;
}

// new dance
void on_DNC_1H_LCRB(qk_tap_dance_state_t *state, void *user_data);
void DNC_1H_LCRB_finished(qk_tap_dance_state_t *state, void *user_data);
void DNC_1H_LCRB_reset(qk_tap_dance_state_t *state, void *user_data);

void on_DNC_1H_LCRB(qk_tap_dance_state_t *state, void *user_data) {
    if (state->count == 3) {
        tap_code16(KC_1);
        tap_code16(KC_1);
        tap_code16(KC_1);
    }
    if (state->count > 3) {
        tap_code16(KC_1);
    }
}

void DNC_1H_LCRB_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[DNC_1H_LCRB].step = dance_step(state);
    switch (dance_state[DNC_1H_LCRB].step) {
        case SINGLE_TAP:
            register_code16(KC_1);
            break;
        case SINGLE_HOLD:
            register_code16(LSFT(KC_LBRC));
            break;
        case DOUBLE_TAP:
            register_code16(KC_1);
            register_code16(KC_1);
            break;
        case DOUBLE_SINGLE_TAP:
            tap_code16(KC_1);
            register_code16(KC_1);
    }
}

void DNC_1H_LCRB_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(tdWaitTime);
    switch (dance_state[DNC_1H_LCRB].step) {
        case SINGLE_TAP:
            unregister_code16(KC_1);
            break;
        case SINGLE_HOLD:
            unregister_code16(LSFT(KC_LBRC));
            break;
        case DOUBLE_TAP:
            unregister_code16(KC_1);
            break;
        case DOUBLE_SINGLE_TAP:
            unregister_code16(KC_1);
            break;
    }
    dance_state[DNC_1H_LCRB].step = 0;
}

// new dance
void on_DNC_2H_RCRB(qk_tap_dance_state_t *state, void *user_data);
void DNC_2H_RCRB_finished(qk_tap_dance_state_t *state, void *user_data);
void DNC_2H_RCRB_reset(qk_tap_dance_state_t *state, void *user_data);

void on_DNC_2H_RCRB(qk_tap_dance_state_t *state, void *user_data) {
    if (state->count == 3) {
        tap_code16(KC_2);
        tap_code16(KC_2);
        tap_code16(KC_2);
    }
    if (state->count > 3) {
        tap_code16(KC_2);
    }
}

void DNC_2H_RCRB_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[DNC_2H_RCRB].step = dance_step(state);
    switch (dance_state[DNC_2H_RCRB].step) {
        case SINGLE_TAP:
            register_code16(KC_2);
            break;
        case SINGLE_HOLD:
            register_code16(LSFT(KC_RBRC));
            break;
        case DOUBLE_TAP:
            register_code16(KC_2);
            register_code16(KC_2);
            break;
        case DOUBLE_SINGLE_TAP:
            tap_code16(KC_2);
            register_code16(KC_2);
    }
}

void DNC_2H_RCRB_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(tdWaitTime);
    switch (dance_state[DNC_2H_RCRB].step) {
        case SINGLE_TAP:
            unregister_code16(KC_2);
            break;
        case SINGLE_HOLD:
            unregister_code16(LSFT(KC_RBRC));
            break;
        case DOUBLE_TAP:
            unregister_code16(KC_2);
            break;
        case DOUBLE_SINGLE_TAP:
            unregister_code16(KC_2);
            break;
    }
    dance_state[DNC_2H_RCRB].step = 0;
}

// new dance
void on_DNC_LANG_HEB(qk_tap_dance_state_t *state, void *user_data);
void DNC_LANG_HEB_finished(qk_tap_dance_state_t *state, void *user_data);
void DNC_LANG_HEB_reset(qk_tap_dance_state_t *state, void *user_data);

void on_DNC_LANG_HEB(qk_tap_dance_state_t *state, void *user_data) {
    if (state->count == 3) {
        tap_code16(LALT(LSFT(KC_NO)));
        layer_invert(_hebrewLayer);
    }
    if (state->count > 3) {
        tap_code16(LALT(LSFT(KC_NO)));
        layer_invert(_hebrewLayer);
    }
}

void DNC_LANG_HEB_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[DNC_LANG_HEB].step = dance_step(state);
    switch (dance_state[DNC_LANG_HEB].step) {
        case SINGLE_TAP:
            // if ((get_mods() & MOD_MASK_CTRL) == MOD_MASK_CTRL) {
            //     tap_code16(LALT(LSFT(KC_NO)));
            //     break;
            // } else if ((get_mods() & MOD_MASK_ALT) == MOD_MASK_ALT) {
            //     layer_invert(_hebrewLayer);
            //     break;
            // }
            tap_code16(LALT(LSFT(KC_NO)));
            layer_invert(_hebrewLayer);
            break;
        case SINGLE_HOLD:
            if (IS_LAYER_ON(_hebrewLayer)) {
                tap_code16(LALT(LSFT(KC_NO)));
                layer_invert(_hebrewLayer);
            } else
                register_code16(KC_LSFT);
            break;
        case DOUBLE_TAP:
            layer_invert(_hebrewLayer);
            break;
        case DOUBLE_HOLD:  // temporary english with
            if (IS_LAYER_ON(_hebrewLayer)) {
                tap_code16(LALT(LSFT(KC_NO)));
                layer_invert(_hebrewLayer);
                register_code16(KC_LSFT);
            } else {  // coming from non hebrew layer - treat as single tap
                tap_code16(LALT(LSFT(KC_NO)));
                layer_invert(_hebrewLayer);
            }
    }
}

void DNC_LANG_HEB_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(tdWaitTime);
    switch (dance_state[DNC_LANG_HEB].step) {
        case SINGLE_TAP:
            break;
        case SINGLE_HOLD:
            if ((get_mods() & MOD_BIT(KC_LSFT)) == MOD_BIT(KC_LSFT)) {
                unregister_code16(KC_LSFT);
            } else {
                tap_code16(LALT(LSFT(KC_NO)));
                layer_invert(_hebrewLayer);
            }
            break;
        case DOUBLE_TAP:
            break;
        case DOUBLE_HOLD:
            // if came from hebrew go back. else keep change in layer and language
            if (IS_LAYER_OFF(_hebrewLayer)) {
                unregister_code16(KC_LSFT);
                tap_code16(LALT(LSFT(KC_NO)));
                layer_invert(_hebrewLayer);
            }
            break;
    }
    dance_state[DNC_LANG_HEB].step = 0;
}

qk_tap_dance_action_t tap_dance_actions[] = {
    // Hebrew ending letters
    [DNC_NUN]  = ACTION_TAP_DANCE_FN_ADVANCED(on_DNC_NUN, DNC_NUN_finished, DNC_NUN_reset),
    [DNC_TSDI] = ACTION_TAP_DANCE_FN_ADVANCED(on_DNC_TSDI, DNC_TSDI_finished, DNC_TSDI_reset),
    [DNC_KAF]  = ACTION_TAP_DANCE_FN_ADVANCED(on_DNC_KAF, DNC_KAF_finished, DNC_KAF_reset),
    [DNC_MEM]  = ACTION_TAP_DANCE_FN_ADVANCED(on_DNC_MEM, DNC_MEM_finished, DNC_MEM_reset),
    [DNC_PE]   = ACTION_TAP_DANCE_FN_ADVANCED(on_DNC_PE, DNC_PE_finished, DNC_PE_reset),
    // Macros
    [DNC_PRT_SCRN] = ACTION_TAP_DANCE_FN_ADVANCED(on_DNC_PRT_SCRN, DNC_PRT_SCRN_finished, DNC_PRT_SCRN_reset),
    [DNC_COPY_CUT] = ACTION_TAP_DANCE_FN_ADVANCED(on_DNC_COPY_CUT, DNC_COPY_CUT_finished, DNC_COPY_CUT_reset),
    // Base layer tap-hold
    [DNC_PLUS_CTL] = ACTION_TAP_DANCE_FN_ADVANCED(on_DNC_PLUS_CTL, DNC_PLUS_CTL_finished, DNC_PLUS_CTL_reset),

    // Numbers tap-hold
    [DNC_7_LSQB] = ACTION_TAP_DANCE_FN_ADVANCED(on_DNC_7_LSQB, DNC_7_LSQB_finished, DNC_7_LSQB_reset),
    [DNC_8_RSQB] = ACTION_TAP_DANCE_FN_ADVANCED(on_DNC_8_RSQB, DNC_8_RSQB_finished, DNC_8_RSQB_reset),
    [DNC_2_RCRB] = ACTION_TAP_DANCE_FN_ADVANCED(on_DNC_2_RCRB, DNC_2_RCRB_finished, DNC_2_RCRB_reset),
    [DNC_1_LCRB] = ACTION_TAP_DANCE_FN_ADVANCED(on_DNC_1_LCRB, DNC_1_LCRB_finished, DNC_1_LCRB_reset),

    // hebrew modifiers right
    [DNC_LAMD_CTL] = ACTION_TAP_DANCE_FN_ADVANCED(on_DNC_LAMD_CTL, DNC_LAMD_CTL_finished, DNC_LAMD_CTL_reset),
    [DNC_YOD_ALT]  = ACTION_TAP_DANCE_FN_ADVANCED(on_DNC_YOD_ALT, DNC_YOD_ALT_finished, DNC_YOD_ALT_reset),
    // hebrew modifiers left
    [DNC_VAV_ALT]     = ACTION_TAP_DANCE_FN_ADVANCED(on_DNC_VAV_ALT, DNC_VAV_ALT_finished, DNC_VAV_ALT_reset),
    [DNC_RESH_CTL]    = ACTION_TAP_DANCE_FN_ADVANCED(on_DNC_RESH_CTL, DNC_RESH_CTL_finished, DNC_RESH_CTL_reset),
    [DNC_ESC_HEB_GUI] = ACTION_TAP_DANCE_FN_ADVANCED(on_DNC_ESC_HEB_GUI, DNC_ESC_HEB_GUI_finished, DNC_ESC_HEB_GUI_reset),

    // Hebrew Numbers tap-hold
    [DNC_7H_LSQB] = ACTION_TAP_DANCE_FN_ADVANCED(on_DNC_7H_LSQB, DNC_7H_LSQB_finished, DNC_7H_LSQB_reset),
    [DNC_8H_RSQB] = ACTION_TAP_DANCE_FN_ADVANCED(on_DNC_8H_RSQB, DNC_8H_RSQB_finished, DNC_8H_RSQB_reset),

    [DNC_1H_LCRB] = ACTION_TAP_DANCE_FN_ADVANCED(on_DNC_1H_LCRB, DNC_1H_LCRB_finished, DNC_1H_LCRB_reset),
    [DNC_2H_RCRB] = ACTION_TAP_DANCE_FN_ADVANCED(on_DNC_2H_RCRB, DNC_2H_RCRB_finished, DNC_2H_RCRB_reset),

    // hebrew language macros
    [DNC_LANG_HEB] = ACTION_TAP_DANCE_FN_ADVANCED_TIME(on_DNC_LANG_HEB, DNC_LANG_HEB_finished, DNC_LANG_HEB_reset, TAPPING_TERM + 100),

};
