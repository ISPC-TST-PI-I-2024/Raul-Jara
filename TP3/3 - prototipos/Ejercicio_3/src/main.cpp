#include <Arduino.h>
// Definir el número de pin para el LED
const int ledPin = 18; 
const int ledPin1 = 5; 
const int ledPin2 = 17;
byte = Entrada; 

void setup() {
  // Configurar el pin como salida
  pinMode(ledPin, OUTPUT);
  pinMode(ledPin1, OUTPUT);
  pinMode(ledPin2, OUTPUT);
  Serial.begin(9600) // fijamos la velocidad de sincronizacion
}

void loop() {
  if (Serial.available())
  // Encender el LED
  digitalWrite(ledPin, HIGH);
  delay(500); // Esperar 1 segundo

  // Apagar el LED
  digitalWrite(ledPin, LOW);
  delay(500); // Encendido continuo
}
void loop() {
  // Encender el LED
  digitalWrite(ledPin5, HIGH);
  delay(500); // Esperar 1 segundo

  // Apagar el LED
  digitalWrite(ledPin5, LOW);
  delay(500); // Encendido continuo
}