//
// Created by Administrator on 2/12/2024.
//

#include "Persona.h"

Persona::Persona(string c, string n, int e) : cedula(c), nombre(n), edad(e)   {}

Persona::~Persona() {

}

Persona::Persona() {
    cedula="no definida ";
    nombre="no definido ";
    edad=0;

}

Persona::Persona(string ced):cedula(ced) {

}

