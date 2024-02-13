//
// Created by Administrator on 2/12/2024.
//
#ifndef MAIN_PERSONA_H
#define MAIN_PERSONA_H

#include <iostream>
#include <string>
#include<sstream>
using namespace std;
class Persona {
protected:
    string cedula;
    string nombre;
    int edad;

public:
    Persona(string, string, int);
    Persona();
    Persona(string ced);
    ~Persona();

    virtual void setCedula(string x) =0;

    virtual void setNombre(string x) =0;

    virtual void setEdad(int x) = 0;

    virtual string getCedula()=0 ;

    virtual string getNombre() =0;

    virtual int getEdad() =0;

    virtual string toString() =0;
};


#endif //MAIN_PERSONA_H


