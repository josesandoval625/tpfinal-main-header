#pragma once
#include"Cazafata.h"
#include"Cpasajero.h"
class CazafataDeTripulacionDeVuelo:public Cazafata
{
private:
	bool PrimerosAuxilios;
	bool Disponibilidad;
public:
	CazafataDeTripulacionDeVuelo();
	CazafataDeTripulacionDeVuelo(string, string, string, bool, bool,bool);
	void atenderpasajero(Cpasajero*);// devuelve un enum 
};

