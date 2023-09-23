#include "Tarea.h"
Tarea::~Tarea() {
}

Tarea::Tarea(int ID_de_Tarea, string Descripcion_de_la_Tarea, string Estado_de_la_Tarea) {
	this->ID_de_Tarea = ID_de_Tarea;
	this->Descripcion_de_la_Tarea = Descripcion_de_la_Tarea;
	this->Estado_de_la_Tarea = Estado_de_la_Tarea;
	
}

void Tarea:: setID_de_Usuari_Relacionada(int ID_de_Usuari_Relacionada){
	this->ID_de_Usuari_Relacionada = ID_de_Usuari_Relacionada;
}