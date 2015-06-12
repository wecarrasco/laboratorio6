#include "propulsor.hpp"
#include "avion.hpp"
#include <sstream>
#include <string>
#include <vector>

using namespace std;

Propulsor::propulsor(int potencia, string serie){
	this->potencia = potencia;
	this->serie = serie;
	lista_propulsores = new vector<propulsor>;
}

Propulsor::propulsor(const propulsor& other):potencia(other.potencia), serie(other.serie){
	lista_propulsores = new vector<propulsor>(other.lusta_propulsor->size());
	for(int i = 0; i < other.grades->size(); i++){
		(*lista_propulsores)[i] = (*other.lista_propulsores)[i];
	}
}

Propulsor::~propulsor(){
	if(lista_propulsores)
		delete lista_propulsores;
}

string Propulsores::toString()const{
	stringstream ss;
	ss << "Potencia: " << potencia << " Serie: " << serie;
	if(lista_propulsores->size() != 0){
		for(int i=0; i < lista_propulsores->size()-1; i++){
			ss << (*lista_propulsores)[i] << " ";
		}
		ss << (*lista_propulsores)[lista_propulsores->size() - 1]
	}
	return ss.str();
}

void propulsor::propulsor(int potenncia,string serie){
	lista_propulsores->push_back(propulsor);
}
void propulsor::deletePropulsor(int posicion){
	if(i==posicion-1){
		delete lista_propulsores[i];
	}
}

bool validarPotencia(int potencia,bool entra){
	if(potencia<30 || potencia>50){
		entra=true;
		return entra;
	}else{
		entra=false
		return entra;
	}
}
