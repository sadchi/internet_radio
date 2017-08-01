#include <Arduino.h>

#define PRINT_PARAMS

void setup() {
  Serial.begin(9600);
  #ifdef PRINT_PARAMS
  #endif
}

void loop() {
  delay(1000);
  Serial.println("Hello World!");
}
