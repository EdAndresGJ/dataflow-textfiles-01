//
// Created by Maikol Guzman Alan on 3/16/22.
//
#include <stdlib.h>
#include <stdexcept>

#include "FileManager.h"
#include "Profesor.h"
using namespace std;

int main() {
    try {
        std::cout << "Welcome to the UNA! (VIRTUAL)\n" << std::endl;

        Profesor *Prof1 = new Profesor("Doctor", "4654", "Juan", 40);
        Profesor *Prof2 = new Profesor("Ingles", "1313", "Kevin", 20);
        Profesor *Prof3 = new Profesor("Mate", "1484", "Pedro", 31);
        Profesor *Prof4 = new Profesor("Feo", "9633", "Juanito", 52);

        ManagerProfessor Container;

        Container.agregarProfesor(Prof1);
        Container.agregarProfesor(Prof2);
        Container.agregarProfesor(Prof3);
        Container.agregarProfesor(Prof4);

        FileManager fileManager;

        // This function will save the information of the
        // Physical Product in a file with the name games.txt
        fileManager.save(Container, "Profesores.csv");

        // This function read a text file by line
        string fileTextByLine = fileManager.readByLine("Profesores.csv");

        // This function read a text file by full content in one sentence
        string fileTextByContent = fileManager.readByContent("Profesores.csv");

        cout << "[FILE TEXT READ BY LINE]" << endl;
        cout << fileTextByLine << endl;

        cout << "[FILE TEXT READ BY CONTENT]" << endl;
        cout << fileTextByContent << endl;
    } catch (exception &ex) {
        cerr << ex.what() << '\n' << std::endl;
    }

}