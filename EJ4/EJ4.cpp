//
// Created by navia on 24-Oct-24.
//

#include "EJ4.h"
#include<iostream>
#include<string>

// Definition of the custom exception class methods
MiExcepcion::MiExcepcion(const std::string& msg) : mensaje(msg) {}

const char* MiExcepcion::what() const noexcept {
    return mensaje.c_str();
}

// Definition of the function that throws the custom exception
void lanzaExcepcion() {
    throw MiExcepcion("Ocurrio un error en la funcion lanzaExcepcion");
}

