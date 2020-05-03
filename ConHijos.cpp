#include "Miembro.h"
#include "Familia.h"
#include <iostream>

#include "ConHijos.h"
using namespace std;

ConHijos::ConHijos(Miembro conyugeH, Miembro conyugeM, Miembro* hijos, int nHijos) :Familia(conyugeH, conyugeM)
{
    this->nHijos = nHijos;
    this->hijos = new Miembro[nHijos];
    for(int i = 0; i < nHijos; i++){
    	this->hijos[i] = hijos[i];
    }
}

ConHijos::imprimir()
{
    cout << "Familia " << this->familia->getNombre() << endl;
}
