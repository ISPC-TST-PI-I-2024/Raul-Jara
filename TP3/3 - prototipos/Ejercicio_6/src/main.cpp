#include <Arduino.h>

#define puls 34
#define led 18
int T_debounce = 100;
bool touch_actual = 0;
bool touch_ant = 0; 

bool debounce (bool touch_actual){      //devuelve true si el el pulsador continua en el mismo, funcion debounce
  bool last_t = touch_actual;           //despues de un retardo
  
  delayMicroseconds(T_debounce);
  
  touch_actual = digitalRead(puls);

  if(touch_actual == last_t)
    return true;
  else 
    return false;
}

void setup() {

  Serial.begin(115200);
  pinMode(led, OUTPUT);
  pinMode(puls, INPUT);

}

void loop() {
  touch_actual = digitalRead(puls);

  if (debounce(touch_actual) == true){
    if (touch_actual == false)
      digitalWrite(led, HIGH);
    else
      digitalWrite(led, LOW);
  }

}