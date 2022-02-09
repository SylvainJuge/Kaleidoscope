#include "Kaleidoscope.h"

#include "Kaleidoscope-FocusSerial.h"

//#include "Kaleidoscope-MouseKeys.h"

KALEIDOSCOPE_INIT_PLUGINS(
  Focus,
  FocusSettingsCommand,
  FocusEEPROMCommand
);

void setup() {
  Kaleidoscope.setup();
}

void loop() {
  //Kaleidoscope.loop();
}
