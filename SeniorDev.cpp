#include "SeniorDev.h"
SeniorDev::~SeniorDev(){
}
SeniorDev::SeniorDev(int id, string nombreCompleto, int anosExperiencia, string Puesto) :Developer(id, nombreCompleto, anosExperiencia, Puesto) {
}
SeniorDev::SeniorDev(int id, string nombreCompleto, int anosExperiencia, string Puesto, vector<Historias_de_Usuario*> Historia_de_Usuario):Developer(id,nombreCompleto,anosExperiencia,Puesto){
	this->Historia_de_Usuario = Historia_de_Usuario;
}