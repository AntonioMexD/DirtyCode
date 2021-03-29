#include <iostream>

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

void leerNumeros(int& primerNumero, int& segundoNumero)
{
	cout << "Ingrese el primer numero" << endl;
	cin >> primerNumero;
	cout << "Ingrese el segundo numero" << endl;
	cin >> segundoNumero;
}

int sumar(int primerNumero, int segundoNumero)
{
	return primerNumero + segundoNumero;
}

int restar(int primerNumero, int segundoNumero)
{
	return primerNumero - segundoNumero;
}

float multiplicar(float primerNumero, float segundoNumero)
{
	return primerNumero * segundoNumero;
}

float dividir(float primerNumero, float segundoNumero)
{
	return primerNumero / segundoNumero;
}

void mostrarTitulo(int operacion)
{
	switch(operacion)
	{
		case 1: 
		{
			cout << "SUMA" << endl;
			break;
		}
		case 2: 
		{
			cout << "RESTA" << endl;
			break;
		}
		case 3:
		{
			cout << "MULTIPLICACION" << endl;
			break;
		}
		case 4:
		{
			cout << "DIVSION" << endl;
			break;
		}
	}	
}

int main()
{
	int primerNumero = 0, segundoNumero = 0;	
	int operacion;
	do
	{	
		operacion = operacionMenu();
		mostrarTitulo(operacion);
		if(operacion != 0)
		{
			leerNumeros(primerNumero, segundoNumero);
		}
		switch(operacion)
		{
			case 1:
			{	
				cout << sumar(primerNumero, segundoNumero) << endl;
				break;
			}
			case 2:
			{				
				cout << restar(primerNumero, segundoNumero) << endl;	
				break;
			}
			case 3:
			{
				cout << multiplicar(primerNumero, segundoNumero) << endl;
				break;
			}
			case 4:
			{
				cout << dividir(primerNumero, segundoNumero) << endl;
				break;
			}
		}	
		system("pause");
		system("CLS");
	} while (operacion!=0);
	
	return 0;
}