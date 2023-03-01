#include <Arduino.h>
#include "fc51.hpp"

// Creación de un objeto de la clase FC51
FC51 sensorIR;
// GPIO al que se conecta el sensor infrarojo.
uint8_t fc51Pin = 34;

void setup()
{
  // Inicializar la comunicación serial a 115200 baudios.
  Serial.begin(115200);
  // Ajustes iniciales del sensor
  sensorIR.setup(fc51Pin);
}

void loop()
{
  // Medición de proximidad
  if (sensorIR.detection())
  {
    Serial.println("Objeto detectado!");
  }

  delay(200);
}
