#include "JuniorDev.h"
JuniorDev::~JuniorDev() {
}
JuniorDev::JuniorDev(int id, string nombreCompleto, int anosExperiencia, string Puesto) :Developer(id, nombreCompleto, anosExperiencia, Puesto) {
}
JuniorDev::JuniorDev(int id, string nombreCompleto, int anosExperiencia, string Puesto, vector<Tarea*> TareasAsignadas) :Developer(id, nombreCompleto, anosExperiencia, Puesto){
	this->TareasAsignadas = TareasAsignadas;
}