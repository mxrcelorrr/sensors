#include <Arduino.h>

#define LED_PIN 26
#define BTN_PIN 16

void setup() {
    pinMode(LED_PIN, OUTPUT);
    pinMode(BTN_PIN, INPUT_PULLUP);
}

void loop() {
    while (digitalRead(BTN_PIN) == LOW)        {
        digitalWrite(LED_PIN, HIGH);
        delay(200);
        digitalWrite(LED_PIN, LOW);
    }
}