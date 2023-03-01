/**
 * \file fc51.hpp
 * \brief Archivo de cabecera para el sensor infrarojo de proximidad FC-51
 * \author Joseph Santiago Portilla. Ing. Electrónico - @JoePortilla
 */

#ifndef FC51_HPP
#define FC51_HPP

/**
 * \brief Clase para instanciar un sensor FC51. Incluye funciones
 * que permiten configurar sus pines y obtener estado de detección de proximidad.
 */
class FC51
{
public:
    /**
     * \brief Constructor inicial.
     */
    FC51();

    /**
     * \brief Función para configurar el sensor.
     * \param pin: GPIO al que se conecta el sensor.
     * \returns Sin retorno.
     */
    void setup(uint8_t pin);

    /**
     * \brief Función para medir la distancia con el sensor.
     * \param NA: Sin párametros.
     * \returns Estado de detección.
     */
    bool detection();

private:
    uint8_t _pin;    // GPIO al que se conecta el sensor.
    bool status = 0; // Estado de proximidad.
};

#endif
