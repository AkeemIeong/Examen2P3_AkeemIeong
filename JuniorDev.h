#pragma once
#include <vector>
#include "Tarea.h"
#include "Developer.h"
class JuniorDev:public Developer{
private:
	vector <Tarea*> TareasAsignadas;
public:
	~JuniorDev();
	JuniorDev(int, string, int, string);
	JuniorDev(int, string, int, string, vector<Tarea*>);
};

