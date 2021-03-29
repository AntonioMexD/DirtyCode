#include <iostream>

using namespace std;

int main()
{
	int primerNumero = 0, segundoNumero = 0;
	float primerDecimal = 0, segundoDecimal = 0;
	int op;
	do
	{
		cout << "Calculadora simple" << endl;
		cout << "1. Suma" << endl;
		cout << "2. Resta" << endl;
		cout << "3. Multiplicacion" << endl;
		cout << "4. Division" << endl;
		cin >> op;
		if (op == 1)
		{
			cout << "SUMA" << endl;
			cout << "Ingrese el primer numero" << endl;
			cin >> primerNumero;
			cout << "Ingrese el segundo numero" << endl;
			cin >> segundoNumero;
			cout << primerNumero + segundoNumero << endl;			
		}
		if (op == 2)
		{
			cout << "RESTA" << endl;
			cout << "Ingrese el primer numero" << endl;
			cin >> primerNumero;
			cout << "Ingrese el segundo numero" << endl;
			cin >> segundoNumero;
			cout << primerNumero - segundoNumero << endl;			
		}
		if (op == 3)
		{
			cout << "MULTIPLICACION" << endl;
			cout << "Ingrese el primer numero" << endl;
			cin >> primerDecimal;
			cout << "Ingrese el segundo numero" << endl;
			cin >> segundoDecimal;
			cout << primerDecimal * segundoDecimal << endl;			
		}
		if (op == 4)
		{
			cout << "DIVISION" << endl;
			cout << "Ingrese el primer numero" << endl;
			cin >> primerDecimal;
			cout << "Ingrese el segundo numero" << endl;
			cin >> segundoDecimal;
			cout << primerDecimal / segundoDecimal << endl;			
		}
		system("pause");
		system("CLS");
	} while (op!=0);

	return 0;
}