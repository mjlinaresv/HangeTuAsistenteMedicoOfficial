#include<iostream>
#include<string.h>
#include<fstream>

using namespace std;

const int lim3=80;

class Usuario;

class Recomendacion{
	public:
		int opcion;
		Usuario *usuario;
	public:
		Recomendacion();
		void asignarrecomendacion();
		void imprimirrecomend();
};

Recomendacion::Recomendacion(){
	opcion=0;
}

void Recomendacion::asignarrecomendacion(){
	cout<<"Elige una enfermedad y Hange te proporcionar� un tip\n";
	cout<<"1)Hipertension\n2)Diabetes\n3)Gastritis\n";
	cout<<"4)Amigdalitis\n5)Estres\n";
	cin>>opcion;
}

void Recomendacion::imprimirrecomend(){
	ifstream archivo1;
		string texto;
	ifstream archivo2;
		string texto2;
	ifstream archivo3;
		string texto3;
	ifstream archivo4;
		string texto4;
	ifstream archivo5;
		string texto5;
	switch(opcion){
		case 1:
			archivo1.open("Hipertencion.txt",ios::in);
			while(!archivo1.eof()){
				getline(archivo1,texto);
				cout<<texto<<endl;
			}
			system("PAUSE");
			archivo1.close();
			break;
		case 2:	
			archivo2.open("Diabetes.txt",ios::in);
			while(!archivo2.eof()){
				getline(archivo2,texto2);
				cout<<texto2<<endl;
			}
			system("PAUSE");
			archivo2.close();
			break;
		case 3:
			archivo3.open("Gastritis.txt",ios::in);
			while(!archivo3.eof()){
				getline(archivo3,texto3);
				cout<<texto3<<endl;
			}
			system("PAUSE");
			archivo3.close();
			break;
		case 4:
			archivo4.open("Amigdalitis.txt",ios::in);
			while(!archivo4.eof()){
				getline(archivo4,texto4);
				cout<<texto4<<endl;
			}
			system("PAUSE");
			archivo4.close();
			break;
		case 5:			
			archivo5.open("Hipertencion.txt",ios::in);
			while(!archivo5.eof()){
				getline(archivo5,texto5);
				cout<<texto5<<endl;
			}
			system("PAUSE");
			archivo5.close();
			break;
	}
	archivo1.close();
	archivo2.close();
	archivo3.close();
	archivo4.close();
	archivo5.close();
}

