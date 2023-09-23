#pragma once
#include <string>
#include <vector>
#include "Developer.h"
using namespace std;
class Proyecto{
private:
	int ID_de_Proyecto;
	string Nombre_del_Proyecto;
	string Fecha_de_Inicio;
	string Fecha_de_Finalizacion;
	string Estado_del_proyecto;
	vector<Developer*> Equipo_de_Desarollo;
public:
	~Proyecto();
	Proyecto(int, string, string, string, string);
	void setEquipo_de_Desarollo(vector<Developer*>);
	vector<Developer*> getEquipo_de_Desarollo();
	string getNombre_del_Proyecto();

};

