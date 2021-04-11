#include "pch.h"
#include "class.hpp"
#include "conio.h"
#include "funciones.h"
#include "array.hpp"
#include "stdio.h"

int main()
{
	//variables
	int op;
	string nombreContacto;
	int edadContacto;

	//definicion de objetos
	Contacto* objContacto;
	ArregloContacto *objArregloContacto;
	
	//instanciar el objeto  objArregloContacto
	objArregloContacto = new ArregloContacto();

	while (1)
	{
		Console::Clear();
		op = Menu();

		if (op == 1)
		{
			if (objArregloContacto->getN() > 0)
			{
				cout << "NOMBRE \t \t  EDAD\n";
				for (int i = 0; i < objArregloContacto -> getN(); i++)
				{
					//obterner el contacto
					objContacto = objArregloContacto->getContacto(i);

					cout << objContacto->getNombre(); cout << "\t" << "\t";
					cout << objContacto->getEdad();
					cout << endl;
				}
				_getch();
			}
			else
				cout << "\n El Arreglo no tiene datos ...";
		}
		if (op == 2)
		{
			objContacto = new Contacto();
			
			cout << "\nNUEVO CONTACTO\n";
			cin.ignore();
			cout << "Ingrese Nombre : "; cin >>nombreContacto;
			cout << "Ingrese Edad : "; cin >> edadContacto;

			//Enviamos los datos ingresos al objeto contacto
			objContacto->setEdad(edadContacto);
			objContacto->setNombre(nombreContacto);

			//Agregamos el objeto al arreglo
			objArregloContacto->AddContacto(objContacto);
		}

	}
	system("pause");
    return 0;
}
