#pragma once
#include"Cazafata.h"
#include"Cpasajero.h"
class CasafataDeTripulacionDeVuelo:public Cazafata
{
private:
	bool PrimerosAuxilios;
public:
	void atenderpasajero(Cpasajero*);// devuelve un enum 
};

