#include <Arduino.h>

// put function declarations here:
int myFunction(int, int);

void setup() {
  // put your setup code here, to run once:
  int result = myFunction(2, 3);
}

void loop() {
  // Esto es una prueba sencilla para subir cambios a GitHub
 //  Proyecto con ESP32
}

// put function definitions here:
int myFunction(int x, int y) {
  return x + y;
}