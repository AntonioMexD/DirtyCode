#include "Calculadora.h"

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
