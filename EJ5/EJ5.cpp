//
// Created by navia on 29-Oct-24.
//

#include "EJ5.h"
#include<iostream>
#include<stdexcept>

void lanzaExcepcionEJ5() {
    try {
        throw std::runtime_error("Error en la funcion lanzaExcepcionEJ5");
    }
    catch (const std::runtime_error& e) {
            std::cout << "Excepcion reactivada capturada: " << e.what() << std::endl;
        throw; // Relanza la excepción
    }
}