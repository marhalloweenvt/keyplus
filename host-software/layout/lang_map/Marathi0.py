# Copyright 2018 jem@seethis.link
# Licensed under the MIT license (http://opensource.org/licenses/MIT)
from hid_keycodes import *
lang = 'Marathi'
country = 'India'
scancode_map = {
    KC_0: ('0', ')', '', '०', ')', ''),
    KC_1: ('1', '!', '', '१', 'ऍ', ''),
    KC_2: ('2', '@', '', '२', 'ॅ', ''),
    KC_3: ('3', '#', '', '३', 'र्र', ''),
    KC_4: ('4', '$', '', '४', '्र्', ''),
    KC_5: ('5', '%', '', '५', '\U00094d1c्ञ', ''),
    KC_6: ('6', '^', '', '६', '\U00094d24्र', ''),
    KC_7: ('7', '&', '', '७', '\U00094d15्ष', ''),
    KC_8: ('8', '*', '', '८', '\U00094d36्र', ''),
    KC_9: ('9', '(', '', '९', '(', ''),
    KC_A: ('a', 'A', '', 'ो', 'ओ', ''),
    KC_B: ('b', 'B', '', 'व', 'ऴ', ''),
    KC_C: ('c', 'C', '', 'म', 'ण', ''),
    KC_D: ('d', 'D', '', '्', 'अ', ''),
    KC_E: ('e', 'E', '', 'ा', 'आ', ''),
    KC_F: ('f', 'F', '', 'ि', 'इ', ''),
    KC_G: ('g', 'G', '', 'ु', 'उ', ''),
    KC_H: ('h', 'H', '', 'प', 'फ', ''),
    KC_I: ('i', 'I', '', 'ग', 'घ', ''),
    KC_J: ('j', 'J', '', 'र', 'ऱ', ''),
    KC_K: ('k', 'K', '', 'क', 'ख', ''),
    KC_L: ('l', 'L', '', 'त', 'थ', ''),
    KC_M: ('m', 'M', '', 'स', 'श', ''),
    KC_M: ('m', 'M', '', '〫', '', ''),
    KC_N: ('n', 'N', '', 'ल', 'ळ', ''),
    KC_O: ('o', 'O', '', 'द', 'ध', ''),
    KC_P: ('p', 'P', '', 'ज', 'झ', ''),
    KC_Q: ('q', 'Q', '', 'ौ', 'औ', ''),
    KC_R: ('r', 'R', '', 'ी', 'ई', ''),
    KC_S: ('s', 'S', '', 'े', 'ए', ''),
    KC_T: ('t', 'T', '', 'ू', 'ऊ', ''),
    KC_U: ('u', 'U', '', 'ह', 'ङ', ''),
    KC_V: ('v', 'V', '', 'न', 'ऩ', ''),
    KC_W: ('w', 'W', '', 'ै', 'ऐ', ''),
    KC_X: ('x', 'X', '', 'ं', 'ँ', ''),
    KC_Y: ('y', 'Y', '', 'ब', 'भ', ''),
    KC_Z: ('z', 'Z', '', 'ॆ', 'ऎ', ''),
    KC_APOSTROPHE: ("'", '"', '', 'ट', 'ठ', ''),
    KC_BACKSPACE: ('\x08', '\x08', '', '\x08', '\x08', ''),
    KC_BACK_SLASH: ('\\', '|', '', 'ॉ', 'ऑ', ''),
    KC_COMMA: (',', '<', '', ',', 'ष', ''),
    KC_COMMA: (',', '<', '', '〭', '', ''),
    KC_ENTER: ('', '', '', '\n', '', ''),
    KC_EQUAL: ('=', '+', '', 'ृ', 'ृ', ''),
    KC_FORWARD_SLASH: ('/', '?', '', 'य', 'य़', ''),
    KC_FORWARD_SLASH: ('/', '?', '', '〮', '', ''),
    KC_GRAVE: ('`', '~', '', 'ॊ', 'ऒ', ''),
    KC_LEFT_BRACKET: ('[', '{', '', 'ड', 'ढ', ''),
    KC_MINUS: ('-', '_', '', '-', 'ः', ''),
    KC_PERIOD: ('.', '>', '', '.', '।', ''),
    KC_PERIOD: ('.', '>', '', '〬', '', ''),
    KC_RIGHT_BRACKET: (']', '}', '', '़', 'ञ', ''),
    KC_SEMICOLON: (';', ':', '', 'च', 'छ', ''),
    KC_SPACEBAR: (' ', ' ', '', ' ', ' ', ''),
    KC_TAB: ('\t', '', '', '\t', '\t', ''),
}