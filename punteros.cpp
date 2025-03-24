#include <iostream>
using namespace std;
// para reconocer un puntero siempre lleva el signo * y si lleva ** es puntero bidimencional
// un puntero no apunta a un valor, sino que apunta a una direccion de memoria
main(){
	int edad=25,*p_edad;
	p_edad = &edad;
	
	cout<<"Variable Edad:"<<edad<<endl;
	cout<<"puntero edad:"<<*p_edad<<endl;
	
	cout<<"----------Cambiar valores-----------"<<endl;
	*p_edad = 40;
	
	cout<<"Variable Edad:"<<edad<<endl;
	cout<<"puntero edad:"<<*p_edad<<endl;
	cout<<"----------Otra variable a p_edad valores-----------"<<endl;
	int edad2=100;
	p_edad = &edad2;
	edad=400;
	cout<<"Variable Edad:"<<edad<<endl;
	cout<<"puntero edad:"<<*p_edad<<endl;
	cout<<"Variable Edad2:"<<edad2<<endl;
	
	system("pause");
}
