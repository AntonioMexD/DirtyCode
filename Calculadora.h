#ifndef CALCULADORA_H
#define CALCULADORA_H

#include <iostream>
#include <string>

#include "Menu.h"
#include "OperacionMatematica.h"

using namespace std;

class Calculadora
{
private:
    OperacionMatematica* operacionMatematica;
    bool activo;
    Menu menu;
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
    void mostrarMenu()
    {
        menu.elegirOperacion();
        operacionMatematica = menu.obtenerOperacionMatematicaElegida();        
    }
    void borrarPantalla()
    {
        menu.borrarMenu();
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
