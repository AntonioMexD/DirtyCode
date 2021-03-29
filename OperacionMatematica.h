#ifndef OPERACIONMATEMATICA_H
#define OPERACIONMATEMATICA_H

#include <iostream>
#include <string>

using namespace std;

class OperacionMatematica
{
protected:
    int primerNumero;
    int segundoNumero;
public:
    OperacionMatematica() {}
    virtual ~OperacionMatematica() {}
    void leerNumeros() 
    {
        cout << "Ingrese el primer numero" << endl;
        cin >> primerNumero;
        cout << "Ingrese el segundo numero" << endl;
        cin >> segundoNumero;
    }
    virtual string obtenerTitulo() = 0;
    void mostrarTitulo() 
    {
        cout << obtenerTitulo() << endl;
    }
    virtual int obtenerResultado() = 0;
    void mostrarResultado()
    {
        cout << obtenerResultado() << endl;
    }
};
#endif