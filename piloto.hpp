#ifndef PILOTO_H
#define PILOTO_H
#include <stirng>

class pilotos{

public:

	piloto(int edad,int _exp,string nombre);
	piloto crearPiloto(int edad,int _exp,string nombre);
	
private:
	int edad;
	int años_exp;
	string nombre;

};

#endif