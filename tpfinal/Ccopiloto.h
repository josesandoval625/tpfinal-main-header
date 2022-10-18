#pragma once
#include"Cpersona.h"
#include"Cazafata.h"
class Ccopiloto:public Cpersona
{
private:
	bool MensajeParaDespegar;
	bool MensajeParaAterrizar;
	Cazafata azafata;
public:
	void pedirBebida();
	void terminarBebida();
	void pedirComida();
	void terminarDeComer();
	void IrAlBaņo();
	void regresarDelBaņo();
	void comenzarAdormir();
	void despiertar();
	void llamarAzafata(Cazafata*);
	void imprimirTipoDePivilegio();
};

