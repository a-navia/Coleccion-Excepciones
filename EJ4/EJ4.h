//
// Created by navia on 24-Oct-24.
//

#ifndef EJ4_H
#define EJ4_H

#include <exception>
#include <string>

// Declaration of the custom exception class
class MiExcepcion : public std::exception {
private:
    std::string mensaje;
public:
    explicit MiExcepcion(const std::string& msg);
    const char* what() const noexcept override;
};

// Declaration of the function that throws the custom exception
void lanzaExcepcion();

#endif //EJ4_H

