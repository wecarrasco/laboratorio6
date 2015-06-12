#ifndef PILOTO_H
#define PILOTO_H
#include <string>

using namespace std;
class pilotos{

public:
	piloto(int edad, int años_exp, string nombre);
	piloto(const piloto&);
	~piloto();
	string toString()const;
	void addEdad(int);
	void addAños_exp(int);
	void addNombre(string);
	void deletePiloto(int);
private:
	int edad;
	int años_exp;
	string nombre;
	vector<piloto>* lista_piloto;
};

#endif
