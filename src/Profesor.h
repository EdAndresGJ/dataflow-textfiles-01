//
// Created by Maikol Guzman Alan on 3/1/22.
//
using namespace std;
#include "Persona.h"
#include<iostream>

#ifndef MAIN_PROFESOR_H
#define MAIN_PROFESOR_H


class Profesor : public Persona{
private:
    string titulo;
public:
    Profesor(string ,string, string, int);

    virtual ~Profesor();

    void setCedula(string) ;

    void setNombre(string) ;

    void setEdad(int) ;

    void setTitulo(string) ;

    string getCedula() ;

    string getNombre() ;

    int getEdad() ;

    string getTitulo() ;

    virtual string toString() ;
};


#endif //MAIN_PROFESOR_H