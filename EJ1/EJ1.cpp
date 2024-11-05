//
// Created by navia on 24-Oct-24.
//

#include <iostream>
#include "EJ1.h"
// variable global que actúa como bandera de error
bool errorFlag = false;
// función que divide dos números enteros
int divide(int a, int b) {
    if (b == 0) {
        std::cout << "Ocurrio un error: division por cero." << std::endl;
        errorFlag = true;
        return 0;
    }
    else {
        return a / b;
    }
}

