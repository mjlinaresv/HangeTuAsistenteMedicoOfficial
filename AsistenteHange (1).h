
#include<iostream>
#include<string.h>

using namespace std;

const int lim2=50;

class AsistenteHange{
    public:
    	char nombre[lim2];
    	char creadora1[lim2];
		char creadora2[lim2];
    	char proposito[lim2];
    public:
    	AsistenteHange();
    	void AsignarDatos(char[], char[], char[], char[]);
    	void VerDatos();
};

AsistenteHange::AsistenteHange(){
	strcpy(nombre,"vacio");
	strcpy(creadora1,"vacio");
	strcpy(creadora2,"vacio");
	strcpy(proposito,"vacio");
}

void AsistenteHange::AsignarDatos(char n[], char c1[], char c2[], char p[]){
	strcpy(nombre, "Hange");
	strcpy(creadora1,"Milagros Judit Linares Vera");
	strcpy(creadora2,"Milagros Isabel Centeno Llanos");
	strcpy(proposito,"Velar por tu salud organizando tu horario de medicinas.");
	
}

void AsistenteHange::VerDatos(){
	cout<<"\t\tHOLA! Mi nombre es "<<nombre<<" y sere tu Asistente Medico Persnoal"<<endl<<endl;
	cout<<"\t\tMis creadoras son:\n\t\t\t"<<creadora1<<endl;
	cout<<"\t\t\t"<<creadora2<<endl<<endl;
	cout<<"\t\tFui programada para "<<proposito<<endl;
}
