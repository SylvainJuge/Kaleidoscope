#include "Kaleidoscope.h"

#include "Kaleidoscope-FocusSerial.h"

//#include "Kaleidoscope-MouseKeys.h"

KEYMAPS(
    [0] = KEYMAP(XXX, XXX)
)

KALEIDOSCOPE_INIT_PLUGINS(
  Focus
);

void setup() {
  Kaleidoscope.setup();
}

void loop() {
  Kaleidoscope.loop();
}
