#include <iostream>
using namespace std;

main() {
	//ese codigo es para colocar un arreglo para nombres
	/* string nombre;
	cout<<"ingrese nombre completo:";
	getline(cin,nombre);
	cout<<nombre<<endl;
	*/
	//para mostrar los dias de la semana
	/*
	string semana[7]={"Lunes","Martes","Miercoles","jueves","Viernes","Sabado","Domingo"};
	semana[3]= "Jueves";
	for (int i=0;i<7;i++){
		cout<<semana[i]<<endl;
	}
	*/
	int tam=0,suma=0,promedio=0;
	int notas[tam];
	char res;
	do{
		tam++;
		cout<<"ingrese nota " <<tam<<":";
		cin>>notas[tam-1];
		cout<<"desea ingresar otra nota (s/n):";
		cin>>res;
	}while(res=='s'||res=='S');
	for(int i=0;i<tam;i++){
		suma+=notas[i];
		}
	promedio = suma / tam;
	cout<<"el promedio es :"<<promedio<<endl;
	system("pause");
};
