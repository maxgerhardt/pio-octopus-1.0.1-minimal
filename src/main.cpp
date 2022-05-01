#include <Arduino.h>

void setup(){
    Serial.begin(11500); // this is actually a Macro for SerialUSB
}

void loop() {
    Serial.println("Hello, world!");
    delay(1000);
}