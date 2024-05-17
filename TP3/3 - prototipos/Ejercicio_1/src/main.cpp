#include <Arduino.h>
// Definir el número de pin para el LED
const int ledPin = 18;

void setup() {
  // Configurar el pin como salida
  pinMode(ledPin, OUTPUT);
}

void loop() {
  // Encender el LED
  digitalWrite(ledPin, HIGH);
  delay(1000); // Esperar 1 segundo

  // Apagar el LED
  digitalWrite(ledPin, LOW);
  delay(0); // Encendido continuo
}