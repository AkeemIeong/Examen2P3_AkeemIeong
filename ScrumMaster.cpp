#include "ScrumMaster.h"
ScrumMaster::~ScrumMaster() {
}
ScrumMaster::ScrumMaster(int id, string nombreCompleto, int anosExperiencia, string Puesto) :Developer(id, nombreCompleto, anosExperiencia, Puesto) {
}
ScrumMaster::ScrumMaster(int id, string nombreCompleto, int anosExperiencia, string Puesto, vector<Proyecto*> Proyectos,vector<Sprint*> Sprints) :Developer(id, nombreCompleto, anosExperiencia, Puesto) {
	this->Proyectos = Proyectos;
	this->Sprints = Sprints;
}
vector <Proyecto*> ScrumMaster::getProyectos() {
	return Proyectos;
}

void ScrumMaster::addsprint(Sprint* sprint) {
	this->Sprints.push_back(sprint);
}