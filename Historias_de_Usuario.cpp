#include "Historias_de_Usuario.h"
Historias_de_Usuario::~Historias_de_Usuario() {
}
Historias_de_Usuario::Historias_de_Usuario(int ID_Historia_de_Usuario, string Titulo_de_la_Historia, string Prioridad, int Tiempo_Estimado, int ID_de_Sprint_Relacionado) {
	this->ID_Historia_de_Usuario = ID_Historia_de_Usuario;
	this->Titulo_de_la_Historia = Titulo_de_la_Historia;
	this->Prioridad = Prioridad;
	this->Tiempo_Estimado = Tiempo_Estimado;
	this->ID_de_Sprint_Relacionado = ID_de_Sprint_Relacionado;
}