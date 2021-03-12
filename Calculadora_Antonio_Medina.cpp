#include <iostream>

using namespace std;

int main()
{
	int n1 = 0, n2 = 0;
	float x1 = 0, x2 = 0;
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
			cin >> n1;
			cout << "Ingrese el segundo numero" << endl;
			cin >> n2;
			cout << n1 + n2 << endl;
			system("pause");
		}
		if (op == 2)
		{
			cout << "RESTA" << endl;
			cout << "Ingrese el primer numero" << endl;
			cin >> n1;
			cout << "Ingrese el segundo numero" << endl;
			cin >> n2;
			cout << n1 - n2 << endl;
			system("pause");
		}
		if (op == 3)
		{
			cout << "MULTIPLICACION" << endl;
			cout << "Ingrese el primer numero" << endl;
			cin >> x1;
			cout << "Ingrese el segundo numero" << endl;
			cin >> x2;
			cout << x1 * x2 << endl;
			system("pause");
		}
		if (op == 4)
		{
			cout << "DIVISION" << endl;
			cout << "Ingrese el primer numero" << endl;
			cin >> x1;
			cout << "Ingrese el segundo numero" << endl;
			cin >> x2;
			cout << x1 / x2 << endl;
			system("pause");
		}
		system("CLS");
	} while (op!=0);

	return 0;
}