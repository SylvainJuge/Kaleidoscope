/* -*- mode: c++ -*-
 * Kaleidoscope - Firmware for computer input devices
 * Copyright (C) 2021  Keyboard.io, Inc.
 *
 * This program is free software: you can redistribute it and/or modify it under
 * the terms of the GNU General Public License as published by the Free Software
 * Foundation, version 3.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
 * FOR A PARTICULAR PURPOSE. See the GNU General Public License for more
 * details.
 *
 * You should have received a copy of the GNU General Public License along with
 * this program. If not, see <http://www.gnu.org/licenses/>.
 */

#ifdef ARDUINO_GD32F303CC_GENERIC

#include "Arduino.h"
#include "kaleidoscope/Runtime.h"
#include "kaleidoscope/device/gd32/eval/KeyScanner.h"

namespace kaleidoscope {
namespace device {
namespace gd32 {
namespace eval {

const uint8_t KeyScannerProps::matrix_rows;
const uint8_t KeyScannerProps::matrix_columns;

void KeyScanner::setup() {
}

void KeyScanner::scanMatrix() {
}

void KeyScanner::readMatrix() {
}

void KeyScanner::actOnMatrixScan() {
}

bool KeyScanner::isKeyswitchPressed(KeyAddr key_addr) {
  return false;
}

uint8_t KeyScanner::pressedKeyswitchCount() {
  return 0;
}

bool KeyScanner::wasKeyswitchPressed(KeyAddr key_addr) {
  return false;
}

uint8_t KeyScanner::previousPressedKeyswitchCount() {
  return 0;
}

} // namespace eval
} // namespace gd32
} // namespace device
} // namespace kaleidoscope

#endif
