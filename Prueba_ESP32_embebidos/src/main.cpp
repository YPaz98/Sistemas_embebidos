// Prueba, practicando punteros.

#include <Arduino.h>

int numero = 10; 
void duplicar(int *puntero);

void setup() {

    Serial.begin(115200);
}

void loop() {

    Serial.print("Numero = " + string(numero));
    duplicar(&numero); // & numero, significa que le pasa la dirección de memoria de la variable número.  
                      //  Operador, dirección.

    delay(1000);
}

void duplicar(int *puntero){

    *puntero = *puntero * 2;
    Serial.print("Numero duplicado: "+string(*puntero));
}
