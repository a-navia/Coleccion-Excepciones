//
// Created by navia on 12-Nov-24.
//

#include "EJ6.h"
#include<iostream>
#include<stdexcept>

void lanzaExcepcionEJ6() {
    std::cout << "Iniciando el programa..." << std::endl;
    throw std::runtime_error("Error en la función lanzaExcepcion");
    std::cout << "Este mensaje no se mostrará, ya que el programa se detendrá antes." << std::endl;
}
