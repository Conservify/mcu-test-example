#include <Arduino.h>

void setup() {
    Serial.begin(115200);

    while (!Serial) {
        delay(10);
    }

    Serial.println("Ready");
}

void loop() {
    for (auto i = 0; i < 10; ++i) {
        Serial.println("Tick");
        delay(100);
    }

    while (true) {
        delay(100);
    }
}
