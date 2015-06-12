#include "misil.hpp"
#include "avion.hpp"
#include <string>
#include <sstream>
#include <vector>

using std :: string;
using std :: stringstream;
using std :: vector;

misil::misil(double alcance, double radio){
	if(alcance > 0 && radio > 0 ){
		this->alcance = alcance;
		this->radio = radio;
	}else{
		throw("Sus datos no son validos");
	}
	lista_miles = new misil<misil>;
}

misil::misil(const misil& other):alcance(other.alcance), radio(other.radio){
	lista_misiles = new vector<misil>(other.lista_misiles->size());
	for(int i = 0; i<other.grades->size(); i++)
		(*lista_misiles)[i] = (*other.lista_misiles)[i];
}

misil::~misil(){
	if(lista_misiles){
		delete lista_misiles;
	}
}

string misil::toString()const{
	stringstream ss;
	ss << "Alcance: " << alcance << " Radio: " << radio;
	if(lista_misiles->size() != 0){
		for(int i = 0; i < lista_misiles->size()-1; i++){
			ss << (*lista_misiles)[i] << " ";
		}
			ss << (*lista_misiles)[lista_misiles->size()-1];
	}

	return ss.str();
}

void misil::misil(double alcance,double radio){
	lista_misiles->push_back(misil);
}
void misil::deleteMisil(int posicion){
	if(i==posicion-1){
		delete lista_misiles[i];
	}
}
