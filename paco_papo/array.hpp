#pragma once
#include "class.hpp"

class ArregloContacto
{
public:
	ArregloContacto();
	~ArregloContacto();
	void AddContacto(Contacto* dato);
	Contacto* getContacto(int indice);
	Contacto** crearArreglo();
	int getN();
private:
	Contacto **arregloContacto;
	int* N;
};

ArregloContacto::ArregloContacto(void)
{
	arregloContacto = NULL;
	N = new int;
	*N = 0;
}

ArregloContacto::~ArregloContacto()
{
	for (int i = 0; i < *N; i++)
	{
		delete arregloContacto[i];
	}

	delete N;
}

void ArregloContacto::AddContacto(Contacto *dato)
{
	Contacto** Aux;
	Aux = new Contacto * [*N + 1];
	if (Aux != NULL)
	{
		for (int i = 0; i < *N; i++)
		{
			Aux[i] = arregloContacto[i];
		}

		Aux[*N] = dato;
		*N = *N + 1;

		if (arregloContacto != NULL)
		{
			delete arregloContacto;
		}

		arregloContacto = Aux;
	}
}

Contacto* ArregloContacto::getContacto(int indice)
{
	return arregloContacto[indice]	;
}

int ArregloContacto::getN()
{
	return *N;
}