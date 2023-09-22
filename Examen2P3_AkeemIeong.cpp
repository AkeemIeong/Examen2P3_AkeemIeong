#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include "Tarea.h"
#include "Sprint.h"
#include "Historias_de_Usuario.h"
#include "Proyecto.h"
#include "Developer.h"
#include "SeniorDev.h"
#include "ScrumMaster.h"
#include "JuniorDev.h"
using namespace std;
vector<Proyecto*>Proyectos;
vector<Historias_de_Usuario*>Historias_de_usuario;
vector<Tarea*> Tareas;
vector<Sprint*>Sprints;

string leer() {
    string info, otra;
    ifstream archivo;
    archivo.open("historias_usuario.txt.txt", ios::in);
    if (archivo.fail()) {
        cout << "No se puedo abrir el archivo";
        exit(1);
    }

    while (!archivo.eof()) {
        getline(archivo, info);
        cout << info << endl;
        otra += info;
        break;
    }

    archivo.close();
    return otra;
}


void menu() {
    int op,op2;
    do {
        cout << "-----Menu Principal-----\n"
            "1. Leer archivos\n"
            "2. Guardar archivos\n"
            "3. Asignaciones\n"
            "4. Salir\n"
            "Seleccione una opcion:";
        cin >> op;
        switch (op) {
        case 1:
            leer();
            /*leer("proyecto.txt");
            leer("tarea.txt");
            leer("sprint.txt");
            leer("historias_usuario.txt");*/
            break;
        case 2:
            break;
        case 3:
            do {
                cout << "----- Submenu Asignaciones -----\n"
                    "1. Asignar Proyecto a Scrum Master\n"
                    "2. Listar y Asignar Sprint a Proyecto y a Scum Master\n"
                    "3. Listar y Asignar Historia a Sprint, Proyecto y Senior Dev\n"
                    "4. Listar y Asignar Tarea a Historia de Usuario, Sprint y Junior Dev\n"
                    "5. Regresar al Menu Principal\n"
                    "Seleccione una opcion:\n";
                cin >> op2;
                switch (op2) {
                case 1:
                    break;
                case 2:
                    break;
                case 3:
                    break;
                case 4:
                    break;

                }
            } while (op2 != 5);
            break;
        }
    } while (op!=4);
}

int main(){
    menu();
}