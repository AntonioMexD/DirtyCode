#ifndef MENU_H
#define MENU_H

#include <iostream>
#include <string>

#include "Suma.h"
#include "Resta.h"
#include "Multiplicacion.h"
#include "Division.h"

using namespace std;

class Menu
{
private:
    int operacion;
public:
    void mostrarOpcionesMenu()
    {
        cout << "Calculadora simple" << endl;
        cout << "1. Suma" << endl;
        cout << "2. Resta" << endl;
        cout << "3. Multiplicacion" << endl;
        cout << "4. Division" << endl;       
    }
    void elegirOperacion()
    {
        mostrarOpcionesMenu();
        cin >> operacion;
    }
    OperacionMatematica* obtenerOperacionMatematicaElegida()
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
    void borrarMenu()
    {
        system("pause");
	    system("CLS");
    }    
};

#endif
