#include <iostream>
using namespace std;
// 1. Nombre de la Clase (persona)

class Persona {
	// 2.1 controles de acceso (Private, Protected(clases heredadas), Public)	
	// 2. Atributos = caracteristicas de las clases (objeto)
	protected :
			string nombres,apellidos,direccion,fecha_nacimiento;
			int telefono;
	
	// 3. Constructor
	public :
		Persona(){
		}
		Persona (string nom,string ape, string dir,string fn,int t){
			nombres = nom;
			apellidos = ape;
			direccion = dir;
			fecha_nacimiento = fn;
			telefono = t;
		}
		
	// 4. Metodos
	// CRUD es un acronimo en ingles que significa "create,road, update,delete"
	// es decir, crear , leer. actualizar y eliminar
	void crear();
	void leer(){
		cout<<"nombres: " <<nombres<<endl;
		cout<<"apellidos: " <<apellidos<<endl;
		cout<<"direccion: " <<direccion<<endl;
		cout<<"telefono: " <<telefono<<endl;
		cout<<"fecha nacimiento: " <<fecha_nacimiento<<endl;
	}
	void actualizar();
	void eliminar();
};
