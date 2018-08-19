#include <Arduino.h>
#include <AUnitVerbose.h>

using namespace aunit;

class SimpleSuite : public TestOnce {
protected:
    void setup() override {
    }

    void teardown() override {
    }
};

testF(SimpleSuite, simple) {
    auto x = 1;
    assertEqual(x, 1);
}

test(simple) {
    auto x = 1;
    assertEqual(x, 1);
}

void setup() {
    Serial.begin(115200);

    while (!Serial) {
        delay(10);
    }

    TestRunner::setVerbosity(Verbosity::kAll);
}

void loop() {
    TestRunner::run();
}
