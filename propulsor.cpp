#include "propulsor.hpp"
#include <string>

using namespace std;

propulsor(int potencia){
	this->potencia=potencia;
	string serie;

}

void generarSerie(){
}

propulsor crearPropulsor(int potencia,string serie){
	if(entra==true){

	}else{
		propulsor(0," ");
	}
}

void getPotencia(){
	return potencia;
}
void setPotencia(int potencia){
	this->potencia=potencia;
	return potencia;
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