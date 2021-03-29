#include <iostream>

#include "Suma.h"
#include "Resta.h"
#include "Multiplicacion.h"
#include "Division.h"

using namespace std;

void borrarPantalla()
{
	system("pause");
	system("CLS");
}

void mostrarMenu()
{	
	cout << "Calculadora simple" << endl;
	cout << "1. Suma" << endl;
	cout << "2. Resta" << endl;
	cout << "3. Multiplicacion" << endl;
	cout << "4. Division" << endl;	
}

OperacionMatematica* obtenerOperacionMatematica()
{
	int operacion;
	mostrarMenu();
	cin >> operacion;
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
	OperacionMatematica* operacionMatematica = NULL;	
	while(true)
	{
		operacionMatematica = obtenerOperacionMatematica();
		if(operacionMatematica == NULL) break;
		operacionMatematica->mostrarTitulo();
		operacionMatematica->leerNumeros();
		operacionMatematica->mostrarResultado();
		delete operacionMatematica;
		borrarPantalla();
	}
	return 0;
}
