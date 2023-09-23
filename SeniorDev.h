#pragma once
#include <vector>
#include "Historias_de_Usuario.h"
#include "Developer.h"
class SeniorDev:public Developer{
	vector <Historias_de_Usuario*> Historia_de_Usuario;
public:
	~SeniorDev();
	SeniorDev(int, string, int, string);
	SeniorDev(int, string, int, string, vector<Historias_de_Usuario*>);
};

