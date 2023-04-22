#include <Arduino.h>

int LED_PIN = 5;
int BUTTON_A_PIN = 9;
int BUTTON_B_PIN = 8;

void setup() {
    pinMode(LED_PIN, OUTPUT);
    pinMode(BUTTON_A_PIN, INPUT_PULLUP);
    pinMode(BUTTON_B_PIN, INPUT_PULLUP);
}   

void loop() {
    if (digitalRead(BUTTON_A_PIN) == LOW) {
        digitalWrite(LED_PIN, HIGH);
    }
    if (digitalRead(BUTTON_B_PIN) == LOW) {
        digitalWrite(LED_PIN, LOW);
    }
}
