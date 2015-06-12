//Include .hpp
#include "avion.hpp"
#include "misil.hpp"
#include "piloto.hpp"

//Include
#include <iostream>

using namespace std;

int main(int argc, char * argv){
	vector <avion> listaAviones;
	vector <misil> listaMisiles;
	vector <piloto> listaPilotos;
	vector <propulsor> listaPro;

	int opcion;

	while(true){
		cout<<"Argye Wings Inc."<<endl;
		cout<<"1. Agregar"<<endl;
		cout<<"2. Eliminar"<<endl;
		cout<<"3. Reporte"<<endl;
		cin>>opcion;
		
		if(opcion == 1){
			cout << "1. Agregar Avion" << endl;
			cout << "2. Agregar Misil" << endl;
			cout << "3. Agregar Piloto" << endl;
			cout << "4. Agregar Propulsor" << endl;
			int opcion1;
			cin >> opcion1;
			if (opcion1 == 1)
			{
				
			}else if (opcion1 == 2)
			{
				double alcance, radio;
				cout << "Ingrese alcance: ";
				cin >> alcance;
				cout << "Ingrese radio de destruccion: ";
				cin >> radio;
				listaMisiles.push_back(misil(alcance, radio));
			}else if (opcion1 == 3)
			{
				
			}else{

			}
		}
		if(opcion == 2){
		}
		if(opcion == 3){
			for(int i = 0; i < 
		}
	}
}
