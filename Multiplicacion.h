#ifndef MULTIPLICACION_H
#define MULTIPLICACION_H

#include <iostream>
#include <string>

#include "OperacionMatematica.h"

using namespace std;

class Multiplicacion : public OperacionMatematica
{
public:
    string obtenerTitulo()
    {
        return "MULTIPLICACION";
    }
    int obtenerResultado()
    {
        return primerNumero * segundoNumero;
    }
};

#endif
