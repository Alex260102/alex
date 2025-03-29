#include <iostream>
using namespace std;
//estuctura con punteros
struct estudiante{
	int *codigo;
	string *nombre;
	int **notas;
};
main(){
	estudiante estudiante;
	int fila=0,columna=0;
	cout<<"Cuantos estudiantes desea agregar:";
	cin>>fila;
	cout<<"Cuantos notas por estudiantes desea agregar:";
	cin>>columna;

	estudiante.codigo = new int[fila];
	estudiante.nombre = new string[fila];
	estudiante.notas = new int *[fila];
	for(int i=0;i<fila;i++){
		estudiante.notas[i]= new int [columna];
	}
	cout<<"________________ingreso de notas________________"<<endl;
	for(int i=0;i<fila;i++){
		cout<<"codigo["<<i<<"]:";
		cin>>estudiante.codigo[i];
		cin.ignore();
		cout<<"nombre completo["<<i<<"]:";
		getline (cin,estudiante.nombre[i]);
		for(int ii=0;ii<columna;ii++){
			cout<<"ingrese nota["<<i<<"]:";
			cin>>*(*(estudiante.notas+i)+ii);
		}
		cout<<"________________________________"<<endl;
	}
		cout<<"_________________Mostrar datos_______________"<<endl;
		for(int i=0;i<fila;i++){
		cout<<"codigo["<<i<<"]:"<<estudiante.codigo[i]<<endl;
		cout<<"nombre completo["<<i<<"]:"<<estudiante.nombre[i]<<endl;
		for(int ii=0;ii<columna;ii++){
			cout<<"nota["<<i<<"]:"<<*(*(estudiante.notas+i)+ii)<<endl;
		}
		cout<<"________________________________"<<endl;
	}
	
	
	for(int i=0;i<fila;i++){
		delete[] estudiante.notas[i];
	}
		 delete[] estudiante.codigo;
	delete[] estudiante.nombre;
	delete[] estudiante.notas;
	
	system("pause");
}
// estructuras struc es una forma de agrupar varias variables de distintos tipos
/*
struct estudiante{
	int codigo[4];
	string nombre[4];
	int nota[4];
};

main(){
	estudiante estudiante;
	
	for(int i=0;i<4;i++){
		cout<<"----------------------------"<<endl;
		cout<<"ingrese codigo:" ;
		cin>>estudiante.codigo[i];
	cin.ignore();
	cout<<"ingrese nombre completo:" ;
	getline(cin,estudiante.nombre[i]);
	cout<<"ingrese nota:" ;
	cin>>estudiante.nota[i];
	}
	
	for(int i=0;i<4;i++){
	cout<<"----------------------------"<<endl;
	cout<<"Codigo: "<<estudiante.codigo[i]<<endl;
	cout<<"Nombre completo: "<<estudiante.nombre[i]<<endl;
	cout<<"Nota: "<<estudiante.nota[i]<<endl;	
	}
	*/

