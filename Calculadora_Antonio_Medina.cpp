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

int main()
{
	int primerNumero = 0, segundoNumero = 0;	
	int operacion;
	do
	{	
		operacion = operacionMenu();
		switch(operacion)
		{
			case 1:
			{
				cout << "SUMA" << endl;
				leerNumeros(primerNumero, segundoNumero);
				cout << sumar(primerNumero, segundoNumero) << endl;
				break;
			}
			case 2:
			{
				cout << "RESTA" << endl;
				leerNumeros(primerNumero, segundoNumero);
				cout << restar(primerNumero, segundoNumero) << endl;	
				break;
			}
			case 3:
			{
				cout << "MULTIPLICACION" << endl;
				leerNumeros(primerNumero, segundoNumero);
				cout << multiplicar(primerNumero, segundoNumero) << endl;
				break;
			}
			case 4:
			{
				cout << "DIVISION" << endl;
				leerNumeros(primerNumero, segundoNumero);
				cout << dividir(primerNumero, segundoNumero) << endl;
				break;
			}
		}	
		system("pause");
		system("CLS");
	} while (operacion!=0);
	
	return 0;
}