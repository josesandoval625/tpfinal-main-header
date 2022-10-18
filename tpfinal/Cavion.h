#pragma once
#include<string>
#include"Cpasajero.h"
using namespace std;
enum class EnumFila
{

};
enum class EnumColumna
{

};
class Cavion
{
private:
	int  AsientoAleatorioComisario;
	int antidadDeAsientosDePasajeros;
	int CatidadDeAsientosOcupados;
	string CodigoDeIngresoAlAvion;
	Clistatamplate* ListaCompleta;
	Cpasajero ListaDePasajero;
	EnumFila fila;
	EnumColumna Columna;
	int NumeroDeAsiento;
public:
	bool comparaAmbasListas(template);
	int dejarSubirAlAvion(bool) : int
	int evitarSubirAlAvion(bool) : int
	void imprimirPasajerosAbordo() : void
	int imprimircantidadDePasajerosAbordo
};

