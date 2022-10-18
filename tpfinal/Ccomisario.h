#pragma once
#include"Cpersona.h"
#include"Cpasajero.h"
class Ccomisario: public Cpersona
{
private:
	bool TodoEnOrden;
public:
	Ccomisario();
	Ccomisario(string, string, string, bool, bool);
	~Ccomisario();
	bool preguntarSiTodoEstaEnOrden();
	bool mandarMensajeParaDespegar();
	bool mandarMensajeParaAterrizar();
	void encerrapasajero(Cpasajero*);
};

