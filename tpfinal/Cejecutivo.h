#pragma once
#include"CclaseDeServicio.h"
class Cejecutivo :public CclaseDeServicio
{
private:
	bool notebook;
public:
	Cejecutivo(bool, bool, bool, bool, bool, bool);
	Cejecutivo();
	~Cejecutivo();
	void imprimirprivilegiosPasajeroEjecutivo();
	void prenderNotebooks();
	void apagarNotebook();
	void imprimirprivilegiosPasajeroEjecutivo();
};

