#ifndef CALCULADORA_H
#define CALCULADORA_H

#include <iostream>
#include <string>

#include "Suma.h"
#include "Resta.h"
#include "Multiplicacion.h"
#include "Division.h"

using namespace std;

class Calculadora
{
private:
    OperacionMatematica* operacionMatematica;
    bool activo;
public:
    Calculadora()
    {
        activo = true;
        operacionMatematica = NULL;        
    }
    ~Calculadora()
    {
        if(operacionMatematica) delete operacionMatematica;
    }
    void mostrarOpcionesMenu()
    {
        cout << "Calculadora simple" << endl;
        cout << "1. Suma" << endl;
        cout << "2. Resta" << endl;
        cout << "3. Multiplicacion" << endl;
        cout << "4. Division" << endl;	
    }
    void mostrarMenu()
    {
        int operacion;
        mostrarOpcionesMenu();
        cin >> operacion;
        operacionMatematica = obtenerOperacionMatematica(operacion);
    }
    void borrarPantalla()
    {
        system("pause");
	    system("CLS");
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
    void realizarOperacionMatematica()
    {
        if(operacionMatematica)
        {
            operacionMatematica->mostrarTitulo();
            operacionMatematica->leerNumeros();
            operacionMatematica->mostrarResultado();
            delete operacionMatematica;
            operacionMatematica = NULL;
        }
        else
        {
            activo = false;
        }
    }
    bool estaActivo()
    {
        return activo;
    }
};

#endif
