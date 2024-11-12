//
// Created by navia on 12-Nov-24.
//

#include "EJ7.h"
#include<stdexcept>
#include<fstream>
#include <iostream>

void escribeEnArchivoEJ7(std::ofstream& file) {
    file.open("archivo.txt");
    if (!file.is_open()) {
        throw std::runtime_error("No se puede escribir en un archivo cerrado");
    }
    try {
        file.close();
        file << "Hola, mundo!";

        if (file.fail()) {
            throw std::runtime_error("Error al escribir en el archivo");
        }
    }
    catch (const std::runtime_error& e) {
        std::cout << "Excepcion capturada en escribeEnArchivo: " << e.what() << std::endl;
        throw;
    }
    if (file.is_open()) {
        file.close();
    }
}
