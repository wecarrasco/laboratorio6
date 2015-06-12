//Include .hpp
#include "avion.hpp"
#include "misil.hpp"
#include "piloto.hpp"
#include "propulsor.hpp"

//Include
#include <iostream>
#include <vector>

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
				bool entra1,entra2,entra3;
				if (listaPro.size() > 0)
				{
					entra1 = true;
				}else{
					entra1 = false;
				}

				if (listaMisiles.size() > 0)
				{
					entra2 = true;
				}else{
					entra2 = false;
				}

				if (listaPilotos.size() > 0)
				{
					entra3 = true;
				}else{
					entra3 = false;
				}

				if (entra1  &&  entra2  &&  entra3)
				{
					listaAviones.push_back(listaPro[listaPro.size()], listaMisiles[listaMisiles.size()], listaPilotos[listaPilotos.size()]);
					listaPro.pop_back();
					listaPilotos.pop_back();
					listaMisiles.pop_back();
				}else{
					cout << "No hay elementos suficientes para crear avion" << endl;
				}
			}else if (opcion1 == 2)
			{
				double alcance, radio;
				cout << "Ingrese alcance: ";
				cin >> alcance;
				cout << endl;
				cout << "Ingrese radio de destruccion: ";
				cin >> radio;
				cout << endl;
				listaMisiles.push_back(misil(alcance, radio));
			}else if (opcion1 == 3)
			{
				int edad, _exp;
				string nombre;
				cout << "Ingrese nombre: ";
				cin >> nombre;
				cout << endl;
				cout << "Ingrese edad: ";
				cin >> edad;
				cout << endl;
				cout << "Ingrese experiencia: ";
				cin << _exp;
				cout << endl;
				listaPilotos.push_back(piloto(edad, _exp, nombre));
			}else{
				bool entra;
				do{
					int potencia;
					cout << "Ingrese potencia: " << endl;
					cin >> potencia;
					if (potencia > 29 && potencia < 51)
					{
						entra = true;
					}else{
						entra = false;
						cout<< "Ingrese valor entre 30 - 50"<< endl;
					}
				}while(entra == false)

				listaPro.push_back(propulsor(potencia));
			}
		}
		if(opcion == 2){
			cout << "1. Eliminar Avion" << endl;
			cout << "2. Eliminar Misil" << endl;
			cout << "3. Eliminar Piloto" << endl;
			cout << "4. Eliminar Propulsor" << endl;
			int opcion2;
			cin >> opcion2;
			if (opcion2 == 1)
			{
				cout <<"-------------AVIONES------------"<<endl;
				for (int i = 0; i < listaAviones.size(); i++)
				{
					cout << (i+1) << listaAviones[i].toString() << endl;
				}
				int opc;
				cout << "Cual desea eliminar? "<< endl;
				cin >> opc;
				listaAviones.erase(opc - 1);
			}else if (opcion2 == 2)
			{
				cout <<"-------------MISILES------------"<<endl;
				for (int i = 0; i < listaMisiles.size(); i++)
				{
					cout << (i+1) << listaMisiles[i].toString() << endl;
				}
				int opc;
				cout << "Cual desea eliminar? "<< endl;
				cin >> opc;
				listaMisiles.erase(opc - 1);
			}else if (opcion2 == 3)
			{
				cout <<"-------------PILOTOS------------"<<endl;
				for (int i = 0; i < listaPilotos.size(); i++)
				{
					cout << (i+1) << listaPilotos[i].toString() << endl;
				}
				int opc;
				cout << "Cual desea eliminar? "<< endl;
				cin >> opc;
				listaPilotos.erase(opc - 1);
			}else {
				cout <<"-------------PROPULSORES------------"<<endl;
				for (int i = 0; i < listaPro.size(); i++)
				{
					cout << (i+1) << listaPro[i].toString() << endl;
				}
				int opc;
				cout << "Cual desea eliminar? "<< endl;
				cin >> opc;
				listaPro.erase(opc - 1);
			}
		}
		if(opcion == 3){
			for(int i = 0; i < 	listaAviones.size(); i++){
				cout << listaAviones[i].toString << endl;
			}
		}
	}
	return 0;
}
