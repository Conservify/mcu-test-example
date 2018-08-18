#include <Arduino.h>
#include <AUnitVerbose.h>

test(correct) {
    auto x = 1;
    assertEqual(x, 1);
}

test(incorrect) {
    auto x = 1;
    assertNotEqual(x, 1);
}

void setup() {
    Serial.begin(115200);

    while (!Serial) {
        delay(10);
    }

    if (false) {
        aunit::TestRunner::setVerbosity(aunit::Verbosity::kAll);
    }
}

void loop() {
    aunit::TestRunner::run();
}
