#ifndef MISIL_H
#define MISIL_H



class misil{
public:
	misil(int alcance,int radio);
	misil crearMisil(int alcance,int radio);
private:
	int alcance;
	int radio;
};

#endif