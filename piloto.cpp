#include "piloto.hpp"
#include <string>

using namespace std;

piloto(int edad,int _exp,string nombre){
	this-> edad=edad;
	this-> _exp=_exp;
	this->	nombre=nombre;
}

piloto crearPiloto(int edad,int _exp,string nombre){
	piloto retval;
	retval= new piloto(edad,_exp,nombre);
	return retval; 
}