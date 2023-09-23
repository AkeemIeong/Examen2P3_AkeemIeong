#include "Sprint.h"
Sprint::~Sprint() {
}
Sprint::Sprint(int ID_de_Sprint, string Nombre_del_Sprint, string Fecha_de_Inicio, string Fecha_de_Finalizacion, string Estado_del_sprint) {
	this->ID_de_Sprint = ID_de_Sprint;
	this->Nombre_del_Sprint = Nombre_del_Sprint;
	this->Fecha_de_Inicio = Fecha_de_Inicio;
	this->Fecha_de_Finalizacion = Fecha_de_Finalizacion;
	this->Estado_del_sprint = Estado_del_sprint;
	
}
void Sprint::setID_de_Proyecto_Relacionado(int ID_de_Proyecto_Relacionado) {
	this->ID_de_Proyecto_Relacionado = ID_de_Proyecto_Relacionado;
}

string Sprint::getNombre_del_Sprint() {
	return Nombre_del_Sprint;
}
