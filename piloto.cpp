#include "piloto.hpp"
#include "avion.hpp"
#include <string>
#include <sstream>
#include <vector>

using namespace std;

Piloto::piloto(int edad,int _exp,string nombre){
	if(edad > 0 && _exp > 0){
		this-> edad=edad;
		this-> _exp=_exp;
		this->	nombre=nombre;
	}else{
		throw("Sus datos con incorrectos");
	}
	piloto = new vector<piloto>
}

Piloto::piloto(const piloto& other):edad(other.edad), _exp(other._exp), nombre(other.nombre){
	piloto = new vector<piloto>(other.lista_piloto->size());
	for(int i=0; i<other.lista_piloto->size(); i++){
		(*lista_piloto)[i] = (*other.lista_piloto)[i];
	}
}

Piloto::~piloto(){
	if(lista_piloto)
		delete lista_piloto;
}

string Piloto::toString()const{
	stringstream ss;
	ss << "Edad: " << edad << " Años de Experiencia: " << _exp << " Nombre: "<<nombre;
	if(lista_piloto->size() != 0){	
		for(int i = 0; i < lista_piloto->size()-1; i++){
			ss<< (*lista_piloto)[i] << " ";
		}
		ss << (*lista_piloto)[lista_piloto->size()-1];
	}
	return ss.str();
}

void piloto::piloto(int edad,int _exp,string nombre){
	lista_piloto->push_back(piloto);
}
void piloto::deletePiloto(int posicion){
	if(i==posicion-1){
		delete lista_piloto[i];
	}
}
