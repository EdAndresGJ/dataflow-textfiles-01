//
// Created by Administrator on 1/13/2024.
//

#ifndef MAIN_MANAGERPROFESSOR_H
#define MAIN_MANAGERPROFESSOR_H


#include <iostream>
#include "Profesor.h"
#include <sstream>
#include <vector>

using namespace std;

class ManagerProfessor {

private:
    vector<Profesor *> professorContainer;
    /*Profesor** Prof;
    int cant;
    int tam;*/
public:
    ManagerProfessor();

    virtual ~ManagerProfessor();

    void agregarProfesor(Profesor *prof);

    bool emptyContainer();

    void eliminarProfesor(string ced);

    bool existeProfesor(string ced);

    string toString();

    void editarNombre(string ced, string nom);

    void editarEdad(string ced, int ed);

    void editarTitulo(string ced, string ti);

    Profesor *obtenerProfesor(string ced);

    vector<Profesor*> getContainer();

};


#endif //MAIN_MANAGERPROFESSOR_H
