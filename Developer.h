#pragma once
#include <string>
using namespace std;
class Developer{
private:
	int id;
	string nombreCompleto;
	int anosExperiencia;
	string Puesto;
public:
	~Developer();
	Developer(int,string,int,string);
};

