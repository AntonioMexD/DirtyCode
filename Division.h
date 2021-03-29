#ifndef DIVISION_H
#define DIVISION_H

#include <iostream>
#include <string>

#include "OperacionMatematica.h"

using namespace std;

class Division : public OperacionMatematica
{
public:
    string obtenerTitulo()
    {
        return "DIVISION";
    }
    int obtenerResultado()
    {
        return primerNumero / segundoNumero;
    }
};

#endif
