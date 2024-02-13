//
// Created by Administrator on 1/13/2024.
//

#include "ManagerProfessor.h"

bool ManagerProfessor::existeProfesor(string ced) {
    for (size_t i = 0; i < professorContainer.size(); ++i) {
        if (professorContainer[i]->getCedula()==ced)
            return true;
    }
    return false;
}

ManagerProfessor::ManagerProfessor() {
}

void ManagerProfessor::agregarProfesor(Profesor* prof){
    professorContainer.push_back(prof);
}

void ManagerProfessor::eliminarProfesor(string ced) {
    for (int i = 0; i < professorContainer.size(); ++i) {
        if (professorContainer[i]->getCedula() == ced) {
            delete professorContainer[i];
            professorContainer.erase(professorContainer.begin() + i);
            break;
        }
    }
}


string ManagerProfessor::toString() {
    stringstream s;
    for (int i = 0; i < professorContainer.size(); ++i) {
        s<<professorContainer[i]->toString()<<endl;
    }
    return s.str();
}

void ManagerProfessor::editarNombre(string ced, string nom) {
    for (int i = 0; i < professorContainer.size(); ++i) {
        if(professorContainer[i]->getCedula()==ced){
            professorContainer[i]->setNombre(nom);
        }
    }
}

void ManagerProfessor::editarEdad(string ced, int ed) {
    for (int i = 0; i < professorContainer.size(); ++i) {
        if(professorContainer[i]->getCedula()==ced){
            professorContainer[i]->setEdad(ed);
        }
    }
}

void ManagerProfessor::editarTitulo(string ced, string ti) {
    for (int i = 0; i < professorContainer.size(); ++i) {
        if(professorContainer[i]->getCedula()==ced){
            professorContainer[i]->setTitulo(ti);
        }
    }
}

ManagerProfessor::~ManagerProfessor() {
    for(int i=0; i<professorContainer.size(); i++){
        delete professorContainer[i];
    }
    professorContainer.clear();
}

vector<Profesor*> ManagerProfessor::getContainer() {
    return professorContainer;
}