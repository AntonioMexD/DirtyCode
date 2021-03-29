#include <iostream>

#include "Suma.h"
#include "Resta.h"
#include "Multiplicacion.h"
#include "Division.h"

using namespace std;

int operacionMenu()
{
	int operacion;
	cout << "Calculadora simple" << endl;
	cout << "1. Suma" << endl;
	cout << "2. Resta" << endl;
	cout << "3. Multiplicacion" << endl;
	cout << "4. Division" << endl;
	cin >> operacion;
	return operacion;
}

OperacionMatematica* obtenerOperacionMatematica(int operacion)
{
	switch(operacion)
	{
		case 1: return new Suma();
		case 2: return new Resta();
		case 3: return new Multiplicacion();
		case 4: return new Division();
		default: return NULL;
	}
}

int main()
{	
	int operacion;
	OperacionMatematica* operacionMatematica = NULL;
	do
	{	
		if(operacionMatematica != NULL) delete operacionMatematica;
		operacion = operacionMenu();
		operacionMatematica = obtenerOperacionMatematica(operacion);
		if(operacionMatematica != NULL)
		{
			operacionMatematica->mostrarTitulo();
			operacionMatematica->leerNumeros();
			operacionMatematica->mostrarResultado();			
		}			
		system("pause");
		system("CLS");
	} while (operacion!=0);
	
	return 0;
}