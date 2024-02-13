//
// Created by Maikol Guzman Alan on 3/1/22.
//

#include "Profesor.h"

Profesor::Profesor(string g,string c, string n, int e) : titulo(g), Persona (c,n,e) {

}

Profesor::~Profesor() {

}

void Profesor::setCedula(string x) {
    x=cedula;
}

void Profesor::setNombre(string x) {
    nombre=x;
}

void Profesor::setEdad(int x) {
    edad=x;
}

void Profesor::setTitulo(string x) {
    titulo=x;
}

string Profesor::getCedula() {
    return cedula;
}

string Profesor::getNombre() {
    return nombre;
}

int Profesor::getEdad() {
    return edad;
}


string Profesor::toString() {
    stringstream s;

    s << "CEDULA: " << cedula << endl;

    s << "NOMBRE: " << nombre << endl;

    s << "EDAD: " << edad << endl;

    s << "TITULO: " << titulo << endl;

    return s.str();

}

string Profesor::getTitulo() {
    return titulo;
}
