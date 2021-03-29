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

void leerDecimales(float& primerDecimal, float& segundoDecimal)
{
	cout << "Ingrese el primer numero" << endl;
	cin >> primerDecimal;
	cout << "Ingrese el segundo numero" << endl;
	cin >> segundoDecimal;
}

int main()
{
	int primerNumero = 0, segundoNumero = 0;
	float primerDecimal = 0, segundoDecimal = 0;
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
				cout << primerNumero + segundoNumero << endl;
				break;
			}
			case 2:
			{
				cout << "RESTA" << endl;
				leerNumeros(primerNumero, segundoNumero);
				cout << primerNumero - segundoNumero << endl;	
				break;
			}
			case 3:
			{
				cout << "MULTIPLICACION" << endl;
				leerDecimales(primerDecimal, segundoDecimal);
				cout << primerDecimal * segundoDecimal << endl;
				break;
			}
			case 4:
			{
				cout << "DIVISION" << endl;
				leerDecimales(primerDecimal, segundoDecimal);
				cout << primerDecimal / segundoDecimal << endl;	
				break;
			}
		}	
		system("pause");
		system("CLS");
	} while (operacion!=0);
	
	return 0;
}