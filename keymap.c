#include QMK_KEYBOARD_H

#define _MAIN 0

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [_MAIN] = LAYOUT(
	KC_MEDIA_NEXT_TRACK, KC_MEDIA_PREV_TRACK, 	 
  ),
  
};

bool encoder_update_user(uint8_t index, bool clockwise) {
    if (clockwise) {
        tap_code(KC_VOLU);  // Volume Up
    } else {
        tap_code(KC_VOLD);  // Volume Down
    }
    return false;
}

