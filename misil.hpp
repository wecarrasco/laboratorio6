#ifndef MISIL_H
#define MISIL_H

#include <string>
using std :: string;

class misil{
public:
	//misil(int alcance,int radio);
	//misil crearMisil(int alcance,int radio);
	misil(double = 0, double = 0);

	void setAlcance(double);
	double getAlcance()const;
	void setRadio(double);
	double getRadio() const
	string toString()const;

private:
	//int alcance;
	//int radio;
	double alcance, radio;
};

#endif
