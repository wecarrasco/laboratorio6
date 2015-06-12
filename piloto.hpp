#ifndef PILOTO_H
#define PILOTO_H
#include <string>

using namespace std;
class piloto{

public:
	piloto(int, int, string);
	piloto(const piloto&);
	~piloto();
	string toString()const;
	void piloto(int, int, string);
	void deletePiloto(int);
private:
	int edad;
	int _exp;
	string nombre;
	vector<piloto>* lista_piloto;
};

#endif
