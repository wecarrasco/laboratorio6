#ifndef AVION_H
#define AVION_H

#include <iostream>
#include <string>
#include <vector>

using std::string;
using std::vector;
using std::string;

class avion{
public:
	
	avion(propulsor propulsor,misil misil,piloto piloto);
	avion(const avion&);
	~avion();	
	string toString()const;
	void addPropulsor(propulsor);
	void deletePropulsor(int);
	void addMisil()const;
	void deleteMisil(int);
	void addPiloto()const;
	void deletePiloto(int);

private:
	propulsor propulsor;
	misil misil;
	piloto piloto;
	vector<avion>* lista_aviones;
};

#endif
