#pragma once
#include"Cpersona.h"
class ClistaDePasajeros
{
private:
	Cpersona** pasajeros;
public:
	ClistaDePasajeros();
	~ClistaDePasajeros();
	void agregarPasajerosAlaLista(Cpersona*);
	void quitarPasajeroLista(Cpersona*);
	void eliminarPasajeroDeLaLista(Cpersona*);
	void imprimirLista();
};

