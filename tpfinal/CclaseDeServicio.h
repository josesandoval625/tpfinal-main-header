#pragma once
#include"Cazafata.h"
class CclaseDeServicio
{
private:
	bool Bebida;
	bool Comida;
	bool Ba�o;
	bool Asiento;
	bool Duermer;
	bool LlamarAzafata_o;
public:
	CclaseDeServicio();
	CclaseDeServicioC
	~CclaseDeServicio();
	void pedirBebda();
	void terminarBebida();
	void pedirComida();
	void terminarDeComer();
	void IrAlBa�o();
	void regresarDelBa�o();
	void comenzarAdormir();
	void despiertar();
	void llamarAzafata(Cazafata*);
	void imprimirTipoDePivilegio();
};

