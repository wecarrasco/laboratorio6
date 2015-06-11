#ifndef PROPULSOR_H
#define PROPULSOR_H

#include <string>
using std :: string;

class propulsor{
public:
	propulsor(int potencia);
	void generarSerie();
	propulsor crearPropulsor(int potencia,string serie);
	void setPotencia(int);
	int getPotencia()const;
	void setSerie(string);
	string getSerie()const;
	string toString()const;
private:
	int potencia;
	string serie;
	bool validarPotencia(int potencia);
};

#endif
