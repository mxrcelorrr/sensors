#include <Arduino.h>

const uint8_t LED_PIN = 26;

void piscarLED(int vezes, int intervalo) {
    for (int i = 0; i < vezes; i++) {
        digitalWrite(LED_PIN, HIGH);
        delay(intervalo);
        digitalWrite(LED_PIN, LOW);
        delay(intervalo);
    }   
}

int somar(int a, int b) {
    int result = a + b;
    return result;
}

void setup() {
    Serial.begin(115200);
    Serial.println("Exempo de funcao para piscar led");

    pinMode(LED_PIN, OUTPUT);
    piscarLED(3, 1000);

    int resultado = somar(5, 29);
    Serial.println("Resultado da soma: ");
    Serial.print(resultado);
}

void loop() {

}