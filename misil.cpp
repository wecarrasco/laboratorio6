#include "misil.h"
#include <string>
#include <sstream>

using std :: string;
using std :: stringstream;

Misil::Misil(double alcance, double radio){
	if(alcance > 0 && radio > 0 ){
		this->alcance = alcance;
		this->radio = radio;
	}else{
		throw("Sus datos no son validos");
	}
}

void Misil::setAlcance(double alcance){
	this->alcance = alcance;
}

double Misil::getAlcance() const{
	return this->alcance;
}

void Misil::setRadio(double radio){
	this->radio = radio;
}

double Misil:getRadio() const{
	return this->radio;
}
string Misil::toString()const{
	stringstream ss;
	ss << alcance <<" metros " << radio << " metros ";
	return ss.str();
}
