#include<iostream>
#include<string.h>
using namespace std;

const int MAX=80;

class Usuario;

class Medicina{
	public:
		char nombre[MAX];
		int dia;
		int dosis;
		Usuario *usuario;
	public:
		Medicina();
		void asignarmedica(char[],int,int);
		int getdia();
		char* getnombre();
		void mostrarmedica(Medicina&);
};

int SIZE = sizeof(Medicina);

Medicina::Medicina(){
	dia=0;
	strcpy(nombre,"vacio");
}

void Medicina::asignarmedica(char n[], int d, int ds){
	strcpy(nombre,n);
	dia=d;
	dosis=ds;
}

void mostrarmedica(Medicina &medic){
	cout<<"Nombre: "<<medic.nombre<<endl;
	cout<<"Dosis: "<<medic.dosis<<endl;
}

int Medicina::getdia(){
	return dia;
}

char* Medicina::getnombre(){
	return nombre;
}



