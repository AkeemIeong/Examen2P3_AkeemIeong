#pragma once
#include <string>
using namespace std;
class Sprint{
private:
	int ID_de_Sprint;
	string Nombre_del_Sprint;
	string Fecha_de_Inicio;
	string Fecha_de_Finalizacion;
	string Estado_del_sprint;
	int ID_de_Proyecto_Relacionado;
public:
	~Sprint();
	Sprint(int, string, string, string, string);
	void setID_de_Proyecto_Relacionado(int);
	string getNombre_del_Sprint();
};

