#pragma once
#include"Cpersona.h"
#include"Cazafata.h"
class Cpiloto:public Cpersona 
{
private:
	bool Pilotear;
	bool autorizacion;
	Cazafata azafata;
public:
	Cpiloto();
	Cpiloto(string, string, string, bool, bool, bool);
	void AnuncioAltaVoz();
	void pedirBebida();
	void terminarBebida();
	void pedirComida();
	void terminarDeComer();
	void IrAlBaño();
	void regresarDelBaño();
	void comenzarAdormir();
	void despiertar();
	void llamarAzafata(Cazafata*);
	void imprimirTipoDePivilegio();
};

