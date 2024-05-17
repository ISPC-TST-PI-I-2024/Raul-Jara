#include <Arduino.h>

#define pulsador 34
#define led 18

bool puls_pres = 0;
bool estado_led = 0; 

void isr(){
  
  estado_led = !estado_led;
  puls_pres = 1;
  }

void setup() {

  Serial.begin(115200);

  pinMode(led, OUTPUT);
  pinMode(pulsador, INPUT); 
  attachInterrupt(digitalPinToInterrupt(pulsador), isr, RISING); 
}

void loop() {
  if (puls_pres){
    digitalWrite(led, estado_led);
    puls_pres = 0;
    Serial.println("otro estado Led 1");
  }
  
}