#pragma once
#include"Cazafata.h"
class CclaseDeServicio
{
private:
	bool Bebida;
	bool Comida;
	bool Baño;
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
	void IrAlBaño();
	void regresarDelBaño();
	void comenzarAdormir();
	void despiertar();
	void llamarAzafata(Cazafata*);
	void imprimirTipoDePivilegio();
};

