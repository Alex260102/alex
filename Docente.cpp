#include "persona2.cpp"
#include <iostream>
using namespace std;
class Docente : Persona {
	// atributos
	private :
		
		string codigo;
		string puesto;
		float salario;
	// metodos constructor,get set,crud
	public :
		Docente (){
		}
		Docente(string nom,string ape,string dir, int tel,string fn, string c,string p,float s, string n,bool g) : Persona(nom,ape,dir,tel,fn,g,n){
			codigo = c;
			puesto = p;
			salario = s;
		}
		//set (modificar)
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
		void setPuesto(string p){
			puesto = p;
		}
		void setSalario(float s){
			salario = s;
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
		string getCodigo(){
			return codigo;
		}
		string getPuesto(){
			return puesto;
		}
		float getSalario(){
			return salario;
		}
		bool getGenero(){
			return Genero;
		}
		void leer (){
			cout<<"Nit: " <<Nit<<endl;
			cout<<"Nombres: "<<nombres<<endl;
			cout<<"Apellidos: "<<apellidos<<endl;
			cout<<"Direccion: "<<direccion<<endl;
			cout<<"Fecha Nacimiento: "<<fecha_nacimiento<<endl;
			cout<<"Codigo: "<<codigo<<endl;
			cout<<"Puesto: "<<puesto<<endl;
			cout<<"Salario:"<<salario<<endl;
			cout<<"Genero: "<<Genero<<endl;
			cout<<"Telefono: "<<telefono<<endl;
			
		}
};

