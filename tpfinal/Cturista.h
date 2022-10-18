#pragma once
#include"CclaseDeServicio.h"
class Cturista:public CclaseDeServicio
{
public:
	Cturista(bool, bool, bool, bool, bool, bool);
	Cturista();
	~Cturista();
	void imprimirprivilegiosPasajeroTurista();
};

