#pragma once
#include <iostream>
using namespace std;
class Persona{

protected: string nombre, ubicacion, fecha_inaguracion;
		 int cantidad_trabajadores = 0, id_sucursal = 0;

	Persona(){}
	Persona(string nom, string ubi, string fi, int ct, int id_sc) {
	
		nombre = nom;
		ubicacion = ubi;
		fecha_inaguracion = fi;
		cantidad_trabajadores = ct;
		id_sucursal = id_sc;
	}
};

