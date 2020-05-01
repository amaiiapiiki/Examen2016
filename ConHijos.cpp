#include <iostream>
#include "ConHijos.h"
#include "Miembro.h"
#include "Familia.h"

using namespace std;

ConHijos::ConHijos(Miembro hijos[], int nHijos, Miembro conyuge1, Miembro conyuge2)
{
    this->hijos = hijos;
    this->nHijos = nHijos;
    this->Familia(Miembro conyuge1, Miembro conyuge2);
}

ConHijos::imprimir()
{
    cout << "Familia " << this->getNombre() << 
}
