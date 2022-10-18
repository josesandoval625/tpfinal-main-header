#pragma once
#include"Cpersona.h"
class Cazafata:public  Cpersona
{
private:
	bool Disponibilidad;
public:
	Cazafata();
	Cazafata(string, string, string, bool,bool);
	~Cazafata();
	bool azafataOcupada();
	void imprimir();
};

