#include<iostream>
#include<cstdlib>
#include<string>
#include"Cpersona.h"
#include"ClistaDePasajeros.h"

#define N 5;
using namespace std;

int main() {
	ClistaDePasajeros** listaDePasajeros = new ClistaDePasajeros*[N];
	Cpersona* persona1 = new Cpersona("lucho","pepe","94445678",true);
	Cpersona* persona2 = new Cpersona("jose", "aquino", "94445378", true);
	Cpersona* persona3 = new Cpersona("pedro", "castillo", "94346718", true);
	Cpersona* persona4 = new Cpersona("anais", "gonzales", "94443758", false);
	Cpersona* persona5 = new Cpersona("maria", "vazques", "94445678", false);
	Cpersona* piloto1 = new Cpersona("marlene", "horna", "94415678", true);
	Cpersona* piloto2 = new Cpersona("diana", "melendez", "94445678", true);
	Cpersona* copiloto1 = new Cpersona("lucho", "pepe", "94434578", true);
	Cpersona* copiloto2 = new Cpersona("james", "perez", "91235678", true);
	Cpersona* azafata1 = new Cpersona("soledad", "quempes", "94445678", false);
	Cpersona* azafata2 = new Cpersona("lucho", "pepe", "12345678", true);
	Cpersona* azafatadetripulacion1 = new Cpersona("lucho","pedro", "23456789", true,false,false);
	Cpersona* azafatadetripulacion2= new Cpersona("lucho", "rojas", "87654321", true,false,false);
	listaDePasajeros



	

	return 0;
}