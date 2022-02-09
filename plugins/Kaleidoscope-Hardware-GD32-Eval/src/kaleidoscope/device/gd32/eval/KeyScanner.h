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

#pragma once

#ifdef ARDUINO_GD32F303CC_GENERIC

#include <Arduino.h>

#include "kaleidoscope/device/gd32/eval/KeyScanner.h"

namespace kaleidoscope {
namespace device {
namespace gd32 {
namespace eval {

struct KeyScannerProps : public kaleidoscope::driver::keyscanner::BaseProps {
  static constexpr uint8_t matrix_rows = 1;
  static constexpr uint8_t matrix_columns = 2;

  typedef MatrixAddr<matrix_rows, matrix_columns> KeyAddr;
};

class KeyScanner: public kaleidoscope::driver::keyscanner::Base<KeyScannerProps> {
 private:
  typedef KeyScanner ThisType;
  typedef KeyScannerProps Props_;
 public:
  static bool do_scan;

  static void setup();
  static void scanMatrix();
  static void readMatrix();
  static void actOnMatrixScan();

  static bool isKeyswitchPressed(KeyAddr key_addr);
  static uint8_t pressedKeyswitchCount();

  static bool wasKeyswitchPressed(KeyAddr key_addr);
  static uint8_t previousPressedKeyswitchCount();
};

} // namespace eval
} // namespace gd32
} // namespace device
} // namespace kaleidoscope

#endif
