#include <Arduino.h>

namespace MostrarNome {
    void PrintTexto(String texto) {
        Serial.println("Funçao dentro do namespace");
        Serial.println("Texto" + String (texto));
    }
}

void imprimeNome(String varNome) {
    Serial.println("Funçao imprimenome!");
    Serial.println("Nome: " + String(varNome));
}

void setup() {
    Serial.begin(115200);
    String nome = "Celor";
    Serial.println("Impressao direto em tela: " + String(nome));

    nome = "ESP32";
    imprimeNome(nome);

    nome = 'AICSS';
    MostrarNome::PrintTexto(nome);

}



void loop() {

}