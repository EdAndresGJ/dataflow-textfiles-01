//
// Created by Maikol Guzman Alan on 3/16/22.
//

#ifndef MY_PROJECT_NAME_FILEMANAGER_H
#define MY_PROJECT_NAME_FILEMANAGER_H
#include <string>
#include <iostream>
#include <fstream>
#include "ManagerProfessor.h"

using namespace std;

class FileManager {
public:

    static void save(ManagerProfessor &Container, const string& filename);


    static string readByLine(const string& filename);


    static string readByContent(const string& filename);
};


#endif //MY_PROJECT_NAME_FILEMANAGER_H
