#pragma once
#include <string>
using namespace std;
class Historias_de_Usuario{
private:
	int ID_Historia_de_Usuario;
	string Titulo_de_la_Historia;
	int Prioridad;
	int Tiempo_Estimado;
	int ID_de_Sprint_Relacionado;
public:
	~Historias_de_Usuario();
	Historias_de_Usuario(int, string,int, int, int);
};