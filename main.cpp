//
// Created by navia on 24-Oct-24.
//
#include <iostream>
#include <stdexcept>

#include "main.h"
#include "EJ1/EJ1.h"
#include "EJ2/EJ2.h"
#include "EJ3/EJ3.h"
#include "EJ4/EJ4.h"
#include "EJ5/EJ5.h"

int main() {
//EJ1
const int result = divide(5, 0);
    std::cout << result << std::endl;
//EJ2
    // Uso de la versión que devuelve un valor de error
const int resultError = divideError(5, 0);
    if (resultError == -1) {
        std::cout << resultError << std::endl;
    }
    // Uso de la versión que lanza una excepción
    try {
        int resultException = divideException(5, 0);
        std::cout << resultException << std::endl;
    }
    catch (const std::invalid_argument& e) {
        std::cout << e.what() << std::endl;
    }
//EJ3
    try {
        func3();
    }
    catch (const std::runtime_error& e) {
        std::cout << "Excepcion capturada en main: " << e.what() << std::endl;
    }
//EJ4
    try {
        lanzaExcepcion();
    }
    catch (const MiExcepcion& e) {
        std::cout << "Excepcion capturada: " << e.what() << std::endl;
    }
//EJ5
    try {
        try {
            EJ5::lanzaExcepcionEJ5();
        }
        catch (const std::runtime_error& e) {
            std::cout << "Excepción capturada y manejada. Reactivando..." << std::endl;
            throw; // Relanza la excepción
        }
    }
    catch (const std::runtime_error& e) {
        std::cout << "Excepción reactivada capturada: " << e.what() << std::endl;
    }
    return 0;
}
