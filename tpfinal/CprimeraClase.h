#pragma once
#include"CclaseDeServicio.h"
class CprimeraClase :public CclaseDeServicio
{
private:
	bool otebook;
	bool Masaje;
	bool Champagne;
public:
	void prenderNotebooks();
	void apagarNotebook();
	void pedirMasaje();
	void terminarMasaje();
	void pedirChampagne();
	void terminarChampagne();
	void imprimirprivilegiosPasajeroPrimeraClase();
};

