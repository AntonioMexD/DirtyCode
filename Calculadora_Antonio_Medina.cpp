#include <iostream>

#include "Calculadora.h"

using namespace std;

int main()
{	
	Calculadora calculadora;
	while(calculadora.estaActivo())
	{
		calculadora.mostrarMenu();
		calculadora.realizarOperacionMatematica();
		calculadora.borrarPantalla();
	}
	return 0;
}
