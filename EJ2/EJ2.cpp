//
// Created by navia on 24-Oct-24.
//
#include "EJ2.h"
#include <stdexcept>
// Versión de la función que devuelve un valor de error
int divideError(int a, int b) {
    if (b == 0) {
        return -1; // valor de error
    }
    else {
        return a / b;
    }
}

// Versión de la función que lanza una excepción
int divideException(int a, int b) {
    if (b == 0) {
        throw std::invalid_argument("Division por cero"); // lanza una excepción
    }
    else {
        return a / b;
    }
}