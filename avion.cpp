#include "avion.hpp"
#include <string>
#include <sstream>
#include <vector>

using std::string;
using std::vector;
using std::stringstream;

avion::avion(propulsor propulsor,misil misil,piloto piloto){
	this-> propulsor= propulsor;
	this-> misil= misil;
	this-> piloto= piloto;

	lista_aviones = new vector<avion>;
}
avion::avion(const avion& other):propulsor(other.propulsor), misil(other.misil), piloto(other.piloto){
	lista_aviones = new vector<avion>(other.lista_aviones->size());
	for(int i=0; i<other.lista_aviones->size(); i++){
		(*lista_aviones)[i] = (*other.lista_aviones)[i];
	}
}
avion::~avion(){
	if(lista_aviones){
		delete lista_aviones;
	}
}
string avion::toString()cosnt{
	stringstream ss;
		if(lista_aviones->size > 0){
			for(int i = 0; i < other.lista_aviones->size(); i++){
				ss << "Avion: " i + 1 << " Propulsor: " << propulsor << " Misil: " << misil << " Piloto:: " << piloto;
			}
		}else{
			ss << "Avion: Propulsor: " << propulsor << " Misil: " << misil << "Piloto: " << piloto;
		}
	return ss.str();
}
void avion::addavion(propulsor propulsor,misil misil,piloto piloto){
	lista_aviones->push_back(avion);
}

void avion::deleteavion(int posicion){
	for (int i = 0; i < avion.size(); i++){
		if(i==posicion-1){
			delete lista_aviones[i];
		}
	}
}