#include "misil.hpp"
#include "avion.hpp"
#include <string>
#include <sstream>
#include <vector>

using std :: string;
using std :: stringstream;
using std :: vector;

Misil::Misil(double alcance, double radio){
	if(alcance > 0 && radio > 0 ){
		this->alcance = alcance;
		this->radio = radio;
	}else{
		throw("Sus datos no son validos");
	}
	lista_miles = new misil<misil>;
}

Misil::Misil(const misil& other):alcance(other.alcance), radio(other.radio){
	lista_misiles = new vector<misiles>(other.lista_misiles->size());
	for(int i = 0; i<other.grades->size(); i++)
		(*lista_misiles)[i] = (*other.lista_misiles)[i];
}

Misil::~Misil(){
	if(lista_misiles){
		deleter lista_misiles;
	}
}

string Misil:toString()const{
	stringstream ss;
	ss << "Alcance: " << alcance << " Radio: " << radio;
	if(lista_misiles->size() != 0){
		for(int i = 0; i < grades->size()-1; i++){
			ss << (*lista_misiles)[i] << " ";
		}
			ss << (*lista_misiles)[lista_misiles->size()-1];
	}

	return ss.str();
}

void addAlcance(alcance){
}

void deleteAlcance(int){
}

void addRadio(radio){

}
void deleteRadio(int){
}
