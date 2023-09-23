#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <sstream>
#include "Tarea.h"
#include "Sprint.h"
#include "Historias_de_Usuario.h"
#include "Proyecto.h"
#include "Developer.h"
#include "SeniorDev.h"
#include "ScrumMaster.h"
#include "JuniorDev.h"
using namespace std;
vector<Developer*>Developers;
vector<Proyecto*>Proyectos;
vector<Historias_de_Usuario*>Historias_de_usuario;
vector<Tarea*> Tareas;
vector<Sprint*>Sprints;

//metodo para leer y agragar al vector para Developer
void parseo_Developer(string cadena) {
    string lectura;
    stringstream input_stringstream(cadena);
    while (getline(input_stringstream, lectura)) {
        string ID, nombre_cum, anos_experiencia, puesto;
        stringstream stream(lectura);
        getline(stream, ID, ',');
        getline(stream, nombre_cum, ',');
        getline(stream, anos_experiencia, ',');
        getline(stream, puesto, ',');
        if(puesto=="ScrumMaster")
            Developers.push_back(new ScrumMaster(stoi(ID), nombre_cum, stoi(anos_experiencia), puesto));
        if(puesto=="SeniorDev")
            Developers.push_back(new SeniorDev(stoi(ID), nombre_cum, stoi(anos_experiencia), puesto));
        if(puesto=="JuniorDev")
            Developers.push_back(new JuniorDev(stoi(ID), nombre_cum, stoi(anos_experiencia), puesto));
    }
}
void leer_Developer() {
    string info;
    ifstream archivo;
    archivo.open("sprint.txt.txt", ios::in);
    if (archivo.fail()) {
        cout << "No se puedo abrir el archivo";
        exit(1);
    }
    while (!archivo.eof()) {
        getline(archivo, info);
        parseo_Developer(info);
    }
    archivo.close();
}
// fin de los metodos de Developer

//metodo para leer y agragar al vector para proyecto
void parseo_Proyecto(string cadena) {
    string lectura;
    stringstream input_stringstream(cadena);
    while (getline(input_stringstream, lectura)) {
        string Id_proyecto,nombre_proyecto,fecha_inicio,fecha_final,estado_proyecto;
        stringstream stream(lectura);
        getline(stream, Id_proyecto, ',');
        getline(stream, nombre_proyecto, ',');
        getline(stream, fecha_inicio, ',');
        getline(stream, fecha_final, ',');
        getline(stream, estado_proyecto, ',');
        Proyectos.push_back(new Proyecto(stoi(Id_proyecto), nombre_proyecto, fecha_inicio, fecha_final, estado_proyecto));
    }
}
void leer_Proyecto() {
    string info;
    ifstream archivo;
    archivo.open("proyecto.txt.txt", ios::in);
    if (archivo.fail()) {
        cout << "No se puedo abrir el archivo";
        exit(1);
    }
    while (!archivo.eof()) {
        getline(archivo, info);
        parseo_Proyecto(info);
    }
    archivo.close();
}
// fin de los metodos de proyecto

//metodo para leer y agragar al vector para historia ususarios
void parseo_Historia_usuarios(string cadena) {
    string lectura;
    stringstream input_stringstream(cadena);
    while (getline(input_stringstream, lectura)) {
        string Id_histotia, titulo, prioridad, tiempo;
        stringstream stream(lectura);
        getline(stream, Id_histotia, ',');
        getline(stream, titulo, ',');
        getline(stream, prioridad, ',');
        getline(stream, tiempo, ',');
        Historias_de_usuario.push_back(new Historias_de_Usuario(stoi(Id_histotia), titulo, prioridad, tiempo));
    }
}
void leer_Historia_usuarios() {
    string info;
    ifstream archivo;
    archivo.open("historias_usuario.txt.txt", ios::in);
    if (archivo.fail()) {
        cout << "No se puedo abrir el archivo";
        exit(1);
    }
    while (!archivo.eof()) {
        getline(archivo, info);
        parseo_Historia_usuarios(info);
    }
    archivo.close();
}
// fin de los metodos de historia ususarios

//metodo para leer y agragar al vector para Tarea
void parseo_Tarea(string cadena) {
    string lectura;
    stringstream input_stringstream(cadena);
    while (getline(input_stringstream, lectura)) {
        string Id_tarea, descripcion_tarea, estado_tarea;
        stringstream stream(lectura);
        getline(stream, Id_tarea, ',');
        getline(stream, descripcion_tarea, ',');
        getline(stream, estado_tarea, ',');
        Tareas.push_back(new Tarea(stoi(Id_tarea), descripcion_tarea, estado_tarea));
    }
}
void leer_Tarea() {
    string info;
    ifstream archivo;
    archivo.open("tarea.txt.txt", ios::in);
    if (archivo.fail()) {
        cout << "No se puedo abrir el archivo";
        exit(1);
    }
    while (!archivo.eof()) {
        getline(archivo, info);
        parseo_Tarea(info);
    }
    archivo.close();
}
// fin de los metodos de Tarea 

//metodo para leer y agragar al vector para sprint
void parseo_Sprint(string cadena) {
    string lectura;
    stringstream input_stringstream(cadena);
    while (getline(input_stringstream, lectura)) {
        string Id_sprint, nombre_sprint, fecha_inicio, fecha_final, estad_sprint;
        stringstream stream(lectura);
        getline(stream, Id_sprint, ',');
        getline(stream, nombre_sprint, ',');
        getline(stream, fecha_inicio, ',');
        getline(stream, fecha_final, ',');
        getline(stream, estad_sprint, ',');
        Sprints.push_back(new Sprint(stoi(Id_sprint), nombre_sprint, fecha_inicio, fecha_final, estad_sprint));
    }
}
void leer_Sprint() {
    string info;
    ifstream archivo;
    archivo.open("sprint.txt.txt", ios::in);
    if (archivo.fail()) {
        cout << "No se puedo abrir el archivo";
        exit(1);
    }
    while (!archivo.eof()) {
        getline(archivo, info);
        parseo_Sprint(info);
    }
    archivo.close();
}
// fin de los metodos de sprint

void escribir() {
    ofstream archivo;
    archivo.open("proyectos_modificados.txt.txt", ios::app);
    if (archivo.fail()) {
        cout << "No se puedo abrir el archivo";
        exit(1);
    }
    for (size_t i = 0; i < Developers.size(); i++){
        archivo<< Developers[i]->getnombreCompleto()<<endl;
    }
    for (size_t i = 0; i < Proyectos.size(); i++) {
        archivo << Proyectos[i]->getNombre_del_Proyecto() << endl;
    }
    for (size_t i = 0; i < Tareas.size(); i++) {
        archivo << Tareas[i]->getID_de_Tarea() << "," << Tareas[i]->getDescripcion_de_la_Tarea() <<"," << Tareas[i]->getEstado_de_la_Tarea() << "," << Tareas[i]->getID_de_Usuari_Relacionada();
    }
    for (size_t i = 0; i < Developers.size(); i++) {
        archivo << Developers[i]->getnombreCompleto() << endl;
    }
    for (size_t i = 0; i < Developers.size(); i++) {
        archivo << Developers[i]->getnombreCompleto() << endl;
    }
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
            leer_Developer();
            leer_Proyecto();
            leer_Historia_usuarios();
            leer_Tarea();
            leer_Sprint();
            break;
        case 2:
            escribir();
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
                    int ID_pro, ID_scrum_master;
                    cout << "--- Asignar Proyecto a Scrum Master ---\n"
                        "----- Lista de Proyectos -----\n";
                    for (size_t i = 0; i < Proyectos.size(); i++){
                        cout << "ID: " << i + 1 << " Nombre:" <<  Proyectos[i]->getNombre_del_Proyecto() << endl;
                    }
                    cout << "Por favor, ingrese el ID del proyecto que desea asignar: ";
                    cin >> ID_pro;
                    cout << "----- Lista de Scrum Master -----\n";
                    for (size_t i = 0; i < Developers.size(); i++) {
                        if (Developers[i]->getPuesto() == "ScrumMaster") {
                            cout << "ID: " << i + 1 << " Nombre: " << Developers[i]->getnombreCompleto();
                        }
                    }
                    cout << "Por favor, ingrese el ID del Scrum Master que desea asignar el proyecto: ";
                    cin >> ID_scrum_master;
                    Proyectos[ID_pro - 1]->getEquipo_de_Desarollo().push_back(Developers[ID_scrum_master-1]);
                    cout << Proyectos[ID_pro]->getNombre_del_Proyecto() << " asignado al Scrum Master " << Developers[ID_scrum_master]->getnombreCompleto() << " exitosamente!";
                    break;
                case 2:
                    int ID_sprint, ID_proyecto;
                    cout << "--- Asignar Sprint a un Proyecto ---\n"
                        "----- Lista de Sprint -----\n";
                    for (size_t i = 0; i < Sprints.size(); i++) {
                        cout << "ID: " << i + 1 << " Nombre:" << Sprints[i]->getNombre_del_Sprint() << endl;
                    }
                    cout << "Por favor, ingrese el ID del Sprint que desea asignar: ";
                    cin >> ID_sprint;
                    cout << "----- Lista de Proyectos -----\n";
                    for (size_t i = 0; i < Proyectos.size(); i++) {
                        cout << "ID: " << i + 1 << " Nombre:" << Proyectos[i]->getNombre_del_Proyecto() << endl;
                    }
                    cout << "Por favor, ingrese el ID del proyecto que desea asignar asignar el Sprint: ";
                    cin >> ID_proyecto;
                    Sprints[ID_sprint - 1]->setID_de_Proyecto_Relacionado(ID_proyecto - 1);
                    for (Developer* d : Proyectos.at(ID_proyecto-1)->getEquipo_de_Desarollo()) {
                        ((ScrumMaster*)d)(sprints.at())
                    }
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