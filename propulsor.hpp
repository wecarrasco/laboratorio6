#ifndef PROPULSOR_H
#define PROPULSOR_H
#include <string>


class propulsor{
public:
	propulsor(int potencia);
	void generarSerie();
	propulsor crearPropulsor(int potencia,string serie);
private:
	int potencia;
	string serie;
	bool validarPotencia(int potencia);
};

#endif