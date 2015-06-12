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
	void piloto(int,int ,string );
	void deletePiloto(int);
private:
	int edad;
	int años_exp;
	string nombre;
	vector<piloto>* lista_piloto;
};

#endif
