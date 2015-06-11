#ifndef PILOTO_H
#define PILOTO_H
#include <stirng>

using namespace std;
class pilotos{

public:

	piloto(int edad = 0,int _exp = 0,string nombre);
	piloto crearPiloto(int edad,int _exp,string nombre);
	void setEdad(int);
	int getEdad()const;
	voud set_exp(int);
	int get_exp()const;
	void setNombre(string);
	string getNombre()const;
	string toString()const;
private:
	int edad;
	int años_exp;
	string nombre;

};

#endif
