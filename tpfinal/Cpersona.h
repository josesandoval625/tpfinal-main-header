#pragma once
#include<string>
using namespace std;
enum class EnumPersonalDeVuelo
{
	pasajero,comisario,azafata,piloto,ninguno

};
class Cpersona
{
private:
	string nombre;
	string apellido;
	string dni;
	bool sexo;
	EnumPersonalDeVuelo personalDeVuelo;
	static int numeroDeAsiento;
public:
	Cpersona();
	Cpersona(string, string, string,bool);
	~Cpersona();
	void imprimirDatos();
	string toString();
};

