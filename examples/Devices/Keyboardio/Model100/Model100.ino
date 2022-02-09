#include "Kaleidoscope.h"

//#include "Kaleidoscope-FocusSerial.h"

//#include "Kaleidoscope-MouseKeys.h"

KEYMAPS(
    [0] = KEYMAP(XXX, XXX)
)

#if 0
KALEIDOSCOPE_INIT_PLUGINS(
    Focus
    //  MouseKeys
);
#endif

void setup() {
  Kaleidoscope.setup();

  delay(10000);
}

void loop() {
  Kaleidoscope.loop();
}
