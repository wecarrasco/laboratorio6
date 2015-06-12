#ifndef PROPULSOR_H
#define PROPULSOR_H

#include <vector>
#include <string>

using std :: string;
using std :: vector;

class propulsor{
public:
	propulsor(int potencia, string serie);
	propulsor(const propulsor&);
	~propulsor();
	string toString()const;
	void addPotencia();
	void deletePotencia(int);
	void addSerie();
	void deleteSerie();
private:
	int potencia;
	string serie;
	bool validarPoncia(int potencia);
	vector <propulsor>* lista_propulsores;
};

#endif
