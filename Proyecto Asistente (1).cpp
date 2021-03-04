#include <iostream>
#include <fstream>
#include <string.h>
#include <ctime>
#include <vector>
#include "Medicina.h"
#include "Usuario.h"
#include "AsistenteHange.h"
#include "Recomendacion.h"

using namespace std;

int main(){
	int op,op1;
	int cant;
	time_t now = time(0);
	tm*time=localtime(&now);
	vector<string> dia_semana;
		dia_semana.push_back("Domingo");
		dia_semana.push_back("Lunes");
		dia_semana.push_back("Martes");
		dia_semana.push_back("Miercoles");
		dia_semana.push_back("Jueves");
		dia_semana.push_back("Viernes");
		dia_semana.push_back("Sabado");
	Medicina medicina;
	Usuario usuario;
	AsistenteHange hange;
	Recomendacion recomendacion;
	fstream archivo;

	archivo.open("asistente.dat", ios::in | ios::binary);
	archivo.open("asistente.dat", ios::out | ios::binary);
	bool seguir = true;
	bool continuar =true;
	
	if(seguir){
		cout<<" DATOS DEL PACIENTE\n\n";
		cout<<" Nombre : ";
		cin.sync();
		cin.getline(usuario.nombre, MAX);
		cout<<" Edad : ";
		cin.sync();
		cin>>usuario.edad;
		cout<<" Peso : ";
		cin.sync();
		cin>>usuario.peso;
		cout<<" Talla : ";
		cin.sync();
		cin>>usuario.talla;
		cout<<" Tipo de Sangre : ";
		cin.sync();
		cin.getline(usuario.TipoSangre, MAX);
		cout<<" Enfermedad : ";
		cin.sync();
		cin.getline(usuario.enfermedad, MAX);
		//archivo.write( (char *) &usuario, SIZE);
	}
	
	while(seguir || op!=4){
		system("cls");
		cout<<" 1.- Agregar Medicamento.\n";
		cout<<" 2.- Ver Horario.\n";
		cout<<" 3.- Recomendaciones de salud.\n";
		cout<<" 4.- Conocer mas de Hange.\n";
		cout<<" 5.- Salir.\n";
		cout<<"\n Ingrese su opcion : ";cin>>op;
		system("cls");
		
		switch(op){
			case 1:
				cout<<"Agregar Medicamento.\n\n";
				while(continuar){
					cout<<" Nombre del medicamento: ";
					cin.sync();
					cin.getline(medicina.nombre,MAX);
					cout<<" Dosis : ";
					cin.sync();
					cin>>medicina.dosis;
					cout<<endl<<endl;
					cout<<"A que dia corresponde?\n";
					cout<<"1)Lunes\n2)Martes\n3)Miercoles\n";
					cout<<"4)Jueves\n5)Viernes\n6)Sabado\n";
					cout<<"7)Domingo\n\nDia#";
					cin>>medicina.dia;
					archivo.write( (char *) &medicina, SIZE);
					cout<<" Desea registrar otro Medicamento?\n1)Si\n2)No\n ";
					cin>>op1;
					if (op1 == 2) {
						continuar = false;
						seguir = false;
					}
					system("cls");
				}
				archivo.close();
				break;
			case 2:
				cout<<"Ver Horario.\n";
				archivo.open("asistente.dat", ios::in | ios::binary);
				archivo.read( (char *) &medicina, SIZE);
				//time->tm_wday=5;			
				cout<<"DIA DE LA SEMANA: "<< dia_semana[time->tm_wday]<<endl;
				
				while (cant == SIZE) {
					//if(medicina.dia==time->tm_wday){
						mostrarmedica(medicina);
						archivo.read( (char *) &medicina, SIZE);
						cant = archivo.gcount();
				//	}
				
				}
				system("PAUSE");
				archivo.close();
				break;
			case 3:
				recomendacion.asignarrecomendacion();
				recomendacion.imprimirrecomend();
				break;
			case 4:
				cout<<" Conocer mas de Hange.\n";
				hange.VerDatos();
				system("PAUSE");
				break;
			case 5:
				cout<<"Muchas gracias,"<<usuario.getNombre();
				cout<<". Vuelva pronto\n";
				break;
			default:
				cout<<"Opcion Incorrecta. Intente de nuevo\n";
				break;
		}
		
	}
return 0;
}
