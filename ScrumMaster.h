#pragma once
#include <vector>
#include "Proyecto.h"
#include "Sprint.h"
#include "Developer.h"
class ScrumMaster: public Developer{
private:
	vector<Proyecto*> Proyectos;
	vector<Sprint*> Sprints;
public:
	~ScrumMaster();
	ScrumMaster(int, string, int, string);
	ScrumMaster(int, string, int, string, vector<Proyecto*>, vector<Sprint*>);
	vector<Proyecto*> getProyectos();
	void addsprint(Sprint*);
};

