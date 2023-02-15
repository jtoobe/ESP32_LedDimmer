#include <analogWrite.h>
// Constantes para los pines
const int PULSADOR = 35;
const int LED = 32;

// Variable para almacenar el estado del PULSADOR
int estado;

void setup(){
    // PULSADOR configurado como entrada de datos
  pinMode(PULSADOR,INPUT);
    // LED configurado como salida de datos
    pinMode(LED,OUTPUT);
}
  
void loop() {
  // Si el pulsador es pulsado cuando el LED está apagado...
  if(digitalRead(PULSADOR)){
    // ... se enciende el LED
    digitalWrite(LED, HIGH);
    // Se establece un retraso de medio segundo entre pulsaciones
    delay(5000);

  analogWrite(LED, 250);     // Enciende el LED
  delay(1000);              // Espera un segundo
  analogWrite(LED, 200);    // Enciende el LED
  delay(1000); 
  analogWrite(LED, 150);    // Enciende el LED
  delay(1000); 
  analogWrite(LED, 100);    // Enciende el LED
  delay(1000); 
  analogWrite(LED, 50);    // Enciende el LED
  delay(1000); 
  analogWrite(LED, 0);    // Enciende el LED
  delay(1000);
  }  
}
