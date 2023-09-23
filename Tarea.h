#pragma once
#include <string>
using namespace std;
class Tarea{
private:
	int ID_de_Tarea;
	string Descripcion_de_la_Tarea;
	string Estado_de_la_Tarea;
	int ID_de_Usuari_Relacionada;
public:
	~Tarea();
	Tarea(int, string, string);
	void setID_de_Usuari_Relacionada(int);
	int getID_de_Tarea();
	string getDescripcion_de_la_Tarea();
	string getEstado_de_la_Tarea();
	int getID_de_Usuari_Relacionada();
};

