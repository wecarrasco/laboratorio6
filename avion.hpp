#ifndef AVION_H
#define AVION_H



class avion{
public:

	avion(propulsor propulsor,misil misil,piloto piloto);
	avion crearAvion(propulsor,misil,piloto);

private:
	propulsor propulsor;
	misil misil;
	piloto piloto;
};

#endif