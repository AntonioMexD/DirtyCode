#ifndef SUMA_H
#define SUMA_H

#include <iostream>
#include <string>

#include "OperacionMatematica.h"

using namespace std;

class Suma : public OperacionMatematica
{
public:
    string obtenerTitulo()
    {
        return "SUMA";
    }
    int obtenerResultado()
    {
        return primerNumero + segundoNumero;
    }
};

#endif
