#include <iostream>
using namespace std;
// metodo y envios de parametros por valor
// con el signo &(&num1) cambia la posicion de memoria, por referencia
void suma(int num1,int num2){
	int resultado = 0;
	num1+=1;   //11
	num2+=1;   //21
	resultado = num1+num2;  //32
	cout<<resultado<<endl;
}
// funcion que sume 3 valores
int suma(int num1,int num2,int num3){
	int resultado = 0;
	resultado = num1+num2+num3;
	return resultado;
}
main (){
	int a=10,b=20;
	suma(a,b);
	cout<<"a: "<<a<<endl;
	cout<<"b: "<<b<<endl;
	cout<<suma(10,20,30)<<endl;
	
	
	
	system("pause");
}
