#include "Proyecto.h"
Proyecto::~Proyecto() {
}
Proyecto::Proyecto(int ID_de_Proyecto,string Nombre_del_Proyecto,string Fecha_de_Inicio,string Fecha_de_Finalizacion,string Estado_del_proyecto) {
	this->ID_de_Proyecto = ID_de_Proyecto;
	this->Nombre_del_Proyecto = Nombre_del_Proyecto;
	this->Fecha_de_Inicio = Fecha_de_Inicio;
	this->Fecha_de_Finalizacion = Fecha_de_Finalizacion;
	this->Estado_del_proyecto = Estado_del_proyecto;
}

void Proyecto::setEquipo_de_Desarollo(vector<Developer*> Equipo_de_Desarollo) {
	this->Equipo_de_Desarollo = Equipo_de_Desarollo;
}

vector<Developer*> Proyecto::getEquipo_de_Desarollo() {
	return Equipo_de_Desarollo;
}

string Proyecto::getNombre_del_Proyecto() {
	return Nombre_del_Proyecto;
}