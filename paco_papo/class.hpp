#pragma once
#include "iostream"
#include "cstdlib"
#include "string"
using namespace System;
using namespace std;

class Contacto
{
public:
	Contacto();
	~Contacto();
	void setNombre(string _nombre);
	string getNombre();
	void setEdad(int _edad);
	int getEdad();
private:
	string nombre;
	int edad;

};

Contacto::Contacto()
{
	edad = 0;
	nombre = "";
}

Contacto::~Contacto()
{
}

void Contacto::setEdad(int _edad)
{
	edad = _edad;
	//this -> edad = _edad;
	//(*this).edad = _edad;	
}

int Contacto::getEdad()
{
	return edad;
}

void Contacto::setNombre(string _nombre)
{
	nombre = _nombre;
}

string Contacto::getNombre()
{
	return nombre;
}