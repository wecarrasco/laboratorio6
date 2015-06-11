#include "avion.hpp"

avion::avion(propulsor propulsor,misil misil,piloto piloto){
	this-> propulsor= propulsor;
	this-> misil= misil;
	this-> piloto= piloto;
}
avion avion::crearAvion(propulsor propulsor,misil misil,piloto piloto){
	avion retval;
	retval=new avion(propulsor,misil,piloto);
	return retval;
}