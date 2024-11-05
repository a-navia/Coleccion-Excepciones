//
// Created by navia on 24-Oct-24.
//

#include "EJ3.h"
#include<iostream>
#include<stdexcept>

void func3() {
    throw std::runtime_error("Error en func3");
}
void func2() {
    func3();
}
void func1() {
    func2();
}

