#include "persona2.cpp"
#include <iostream>
using namespace std;

class Estudiante : Persona {
	// atributos
	private :
			string carnet;
	// metodos constructor,get set,crud
	public :
		Estudiante (){
		}
		Estudiante(string nom,string ape,string dir, int tel,string fn, string c,string p,float s, string n,bool g) : Persona(nom,ape,dir,tel,fn,g,n){
				carnet = c;
		}
		//set (modificar)
		void setCarnet(string c){
			carnet = c;
		}
		void setNit(string n){
			Nit = n;
		}
		void setNombres(string nom){
			nombres = nom;
		}
		void setApellidos(string ape){
			apellidos = ape;
		}
		void setDireccion(string dir){
			direccion = dir;
		}
		void setTelefono(int tel){
			telefono = tel;
		}
		
		//get (mostrar)
		string getNit(){
			return Nit;
		}
		string getNombres(){
			return nombres;
		}
		string getApellidos(){
			return apellidos;
		}
		string getDireccion(){
			return direccion;
		}
		int getTelefono(){
			return telefono;
		}
		string getFechaNacimiento(){
			return fecha_nacimiento;
		}
		bool getGenero(){
			return Genero;
		}
		string getCarnet(){
			return carnet;
		}
		void leer (){
			cout<<"Nit: " <<Nit<<endl;
			cout<<"Nombres: "<<nombres<<endl;
			cout<<"Apellidos: "<<apellidos<<endl;
			cout<<"Direccion: "<<direccion<<endl;
			cout<<"Fecha Nacimiento: "<<fecha_nacimiento<<endl;
			cout<<"Genero: "<<Genero<<endl;
			cout<<"Carnet: "<<carnet<<endl;
			
		}
};

