#pragma once
#include "iostream"
using namespace	System;
using namespace std;



int Menu()
{
	int opcion;

	do
	{
		system("cls");
		cout << "MENU" << endl << endl;
		cout << "1.- Mostrar Contactos" << endl;
		cout << "2.- Agregar Contactos" << endl << endl;

		cout << "INGRESE OPCION : "; cin >> opcion;

	} while (opcion < 1 || opcion > 2);

	return opcion;
}