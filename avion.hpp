#ifndef AVION_H
#define AVION_H

#include "misil.hpp"
#include "propulsor.hpp"
#include "piloto.hpp"

#include <iostream>
#include <string>
#include <vector>

using std::string;
using std::vector;
using std::string;

class avion{
public:
	
	avion(propulsor,misil,piloto);
	avion(const avion&);
	~avion();	
	string toString()const;
	void addavion(propulsor,misil,piloto);
	void deleteavion(int);		

private:
	propulsor propulsor;
	misil misil;
	piloto piloto;
	vector<avion>* lista_aviones;
};

#endif
