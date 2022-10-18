#pragma once
#include<string>
#include"CclaseDeServicio.h"
using namespace std;
enum class EnumPrivilegios
{
	turista,ejecutivo,primaveraClase,ninguno
};
enum class EnumEstadoDeDescompensacion
{
	SaludEstable, SaludRegular, SaludCritica }
};
class Cpasajero: public Cpersona
{
private:
	EnumEstadoDeDescompensacion Descompensacion;
	EnumPrivilegios TipoDePrivilegio;
	string codigo;   //codigo alfanumerico
	CclaseDeServicio* ClaseDeservicio;
	bool Conducta;
public:
	Cpasajero();
	Cpasajero(string, string, string, bool,EnumEstadoDeDescompensacion,EnumPrivilegios,string,CclaseDeServicio,bool);
	~Cpasajero();
	void imprmirEstadoDeDescompensacion();
};

