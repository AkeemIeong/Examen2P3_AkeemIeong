#include "Developer.h"
Developer::~Developer() {
}
Developer::Developer(int id,string nombreCompleto,int anosExperiencia,string Puesto) {
	this->id = id;
	this->nombreCompleto = nombreCompleto;
	this->anosExperiencia = anosExperiencia;
	this->Puesto = Puesto;
}