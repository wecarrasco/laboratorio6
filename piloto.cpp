#include "piloto.hpp"
#include <string>
#include <sstream>

using namespace std;

Piloto::piloto(int edad,int _exp,string nombre){
	if(edad > 0 && _exp > 0){
		this-> edad=edad;
		this-> _exp=_exp;
		this->	nombre=nombre;
	}else{
		throw("Sus datos con incorrectos");
	}
}

piloto crearPiloto(int edad,int _exp,string nombre){
	piloto retval;
	retval= new piloto(edad,_exp,nombre);
	return retval; 
}

void Piloto::setEdad(int edad){
	this->edad = edad;
}
int Piloto::getEdad()const{
	return this->edad;
}
void Piloto::set_exp(int _exp){
	this->_exp = _exp;
}
int Piloto::get_exp()const{
	return this->_exp;
}
void Piloto::setNombre(string nombre){
	this->nombre = nombre;
}
string Piloto::getNombre(){
	retunr this->nombre;
}
string Piloto::toString()const{
	stringstream ss;
	ss << "Nombre: " << nombre << " Edad: " << edad << " Años de expeiencia: "<< _exp;
	return ss.str();
}
