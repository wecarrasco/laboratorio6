#ifndef MISIL_H
#define MISIL_H

#include "avion.hpp"
#include <string>
#include <vector>

using std :: string;
using std :: vector;

class misil{
public:
	//misil(int alcance,int radio);
	//misil crearMisil(int alcance,int radio);
	misil(double alcance = 0, double radio = 0);
	misil(const misil&);
	string toString()const;
	void addAlcance()const;
	void deleteAlcance(int);
	void AddRadio()const;
	void deleteRadio(int);

private:
	//int alcance;
	//int radio;
	double alcance, radio;
	vector<misil>  lista_misiles;
	misil(const misil&);
};

#endif
