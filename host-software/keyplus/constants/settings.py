#!/usr/bin/env python
# -*- coding: utf-8 -*-
# Copyright 2018 jem@seethis.link
# Licensed under the MIT license (http://opensource.org/licenses/MIT)

from __future__ import absolute_import, division, print_function, unicode_literals

AES_KEY_LEN = 16
EP_VENDOR_SIZE = 64
SETTINGS_RF_INFO_SIZE = 64
SETTINGS_RF_INFO_HEADER_SIZE = (SETTINGS_RF_INFO_SIZE - AES_KEY_LEN*2)
SETTINGS_SIZE = 512

MAX_NUMBER_KEYBOARDS = 64
MAX_NUMBER_DEVICES = 64

# Report
KEYBOARD_REPORT_MODE_AUTO = 0 # 6kro -> nkro if more than 6 keys pressed
KEYBOARD_REPORT_MODE_NKRO = 1 # nkro
KEYBOARD_REPORT_MODE_6KRO = 2 # 6kro

REPORT_MODE_STR_MAP = {
    KEYBOARD_REPORT_MODE_AUTO: "Auto NKRO",
    KEYBOARD_REPORT_MODE_6KRO: "6KRO",
    KEYBOARD_REPORT_MODE_NKRO: "NKRO",
}

def report_mode_to_str(mode):
    if mode in REPORT_MODE_STR_MAP:
        return REPORT_MODE_STR_MAP[mode]
    else:
        return "Unknown({})".format(mode)

# FEATURE_CTRL bit mask values
FEATURE_CTRL_USB_DISABLE      = (1 << 0)
FEATURE_CTRL_WIRED_DISABLE    = (1 << 1)
FEATURE_CTRL_RF_DISABLE       = (1 << 2)
FEATURE_CTRL_RF_MOUSE_DISABLE = (1 << 3)
FEATURE_CTRL_BT_DISABLE       = (1 << 4)
FEATURE_CTRL_RESERVED_0       = (1 << 5)
FEATURE_CTRL_RESERVED_1       = (1 << 6)
FEATURE_CTRL_RESERVED_2       = (1 << 7)

###############################################################################
#                           firmware info constants                           #
###############################################################################

SUPPORT_SCANNING_MASK = 0x01
SUPPORT_SCANNING_COL_ROW_MASK = 0x02
SUPPORT_SCANNING_ROW_COL_MASK = 0x04
SUPPORT_SCANNING_PINS_MASK = 0x08
SUPPORT_SCANNING_ARBITRARY_MASK = 0x10
SUPPORT_SCANNING_BUILT_IN_MASK = 0x20

SUPPORT_KEY_MEDIA = 0x01
SUPPORT_KEY_MOUSE = 0x02
SUPPORT_KEY_LAYERS = 0x04
SUPPORT_KEY_STICKY = 0x08
SUPPORT_KEY_TAP = 0x10
SUPPORT_KEY_HOLD = 0x20

SUPPORT_KRO_N = 0x01;
SUPPORT_KRO_6 = 0x02;

SUPPORT_LED_INDICATORS = 0x01
SUPPORT_LED_BACKLIGHTING = 0x02
SUPPORT_LED_WS2812 = 0x04

SUPPORT_NRF24 = 0x01
SUPPORT_I2C = 0x02
SUPPORT_UNIFYING = 0x04
SUPPORT_USB = 0x08
SUPPORT_BT = 0x10

MATRIX_SCANNER_INTERNAL_NONE = 0x00
MATRIX_SCANNER_INTERNAL_FAST_ROW_COL = 0x01
MATRIX_SCANNER_INTERNAL_SLOW_ROW_COL = 0x02
MATRIX_SCANNER_INTERNAL_HARD_CODED = 0x03
MATRIX_SCANNER_INTERNAL_CUSTOM = 0xff

INTERNAL_SCAN_METHOD_TABLE = {
    MATRIX_SCANNER_INTERNAL_NONE: "No matrix scanner",
    MATRIX_SCANNER_INTERNAL_FAST_ROW_COL: "Fast row col scanner",
    MATRIX_SCANNER_INTERNAL_SLOW_ROW_COL: "Small row col scanner",
    MATRIX_SCANNER_INTERNAL_HARD_CODED: "Hard coded scanner",
    MATRIX_SCANNER_INTERNAL_CUSTOM: "Custom scanner",
}
