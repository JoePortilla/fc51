/**
 * \file fc51.cpp
 * \brief Archivo de implementación para el sensor infrarojo de proximidad FC-51
 * \author Joseph Santiago Portilla. Ing. Electrónico - @JoePortilla
 */

#include <Arduino.h>
#include "fc51.hpp"

FC51::FC51() {}

void FC51::setup(uint8_t pin)
{
    // Ajuste de variables
    _pin = pin;
    // Definición del pin como entrada.
    pinMode(_pin, INPUT);
}

bool FC51::detection()
{
    // Lectura del estado digital del sensor
    status = digitalRead(_pin);

    // El sensor maneja logica negativa, por lo que un estado bajo o 0,
    // indica que se ha detectado algo.
    if (status == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
