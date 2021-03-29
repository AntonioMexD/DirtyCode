#ifndef RESTA_H
#define RESTA_H

#include <iostream>
#include <string>

#include "OperacionMatematica.h"

using namespace std;

class Resta : public OperacionMatematica
{
public:
    string obtenerTitulo()
    {
        return "RESTA";
    }
    int obtenerResultado()
    {
        return primerNumero - segundoNumero;
    }
};

#endif
