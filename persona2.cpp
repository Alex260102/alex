#include <iostream>
using namespace std;
class Persona {
	// atributos
	protected :
		string nombres,apellidos, direccion,fecha_nacimiento,Nit;
		int telefono;
		bool Genero;
	// Metodos 1) Constructor 2) Crud
	protected :
		Persona (){
		}
		Persona (string nom,string ape,string dir, int tel,string fn,bool g,string n){
			nombres= nom;
			apellidos= ape;
			direccion= dir;
			telefono= tel;
			fecha_nacimiento= fn;
			Genero = g;
			Nit = n;
		}
	void crear ();
	void leer ();
	void actualizar();
	void borrar();
};

