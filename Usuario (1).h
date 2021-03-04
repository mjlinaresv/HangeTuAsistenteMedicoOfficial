#include<iostream>
#include<string.h>
using namespace std;

const int LIM = 80;


class Usuario{
    public:
        char nombre[LIM];
        int edad;
        int peso;
        int talla;
        char TipoSangre[LIM];
        char enfermedad[LIM];
    public:
        Usuario();
        void RegistrarUsuario(char[],int,int,int,char[],char[]);
        void ImprimirDatosUsuario(Usuario&);
        char* getNombre();
        char* getEnferm();
};

Usuario::Usuario(){
	strcpy(nombre,"vacio");
	edad=0;
	peso=0;
	talla=0;
	strcpy(TipoSangre,"vacio");
	strcpy(enfermedad,"vacio");
}

void Usuario::RegistrarUsuario(char n[],int e,int p, int t, char ts[], char enf[]){
	strcpy(nombre,n);
	edad=e;
	peso=p;
	talla=t;
	strcpy(TipoSangre,ts);
	strcpy(enfermedad,enf);
}

void ImprimirDatosUsuario(Usuario &usua){
	cout<<"Nombre: "<<usua.nombre<<endl;
	cout<<"Edad: "<<usua.edad<<endl;
	cout<<"Peso: "<<usua.peso<<endl;
	cout<<"Talla: "<<usua.talla<<endl;
	cout<<"Tipo de Sangre: "<<usua.TipoSangre<<endl;
	cout<<"Enfermedad: "<<usua.enfermedad<<endl;
}

char* Usuario::getEnferm(){
	return enfermedad;
}

char* Usuario::getNombre(){
	return nombre;
}
