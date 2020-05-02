#include <iostream>
#include "ConHijos.h"
#include "Miembro.h"
#include "Familia.h"

using namespace std;

ConHijos::ConHijos(Miembro hijos:Familia[], int nHijos):Familia(Miembro conyuge1, Miembro conyuge2)
{
    Miembro hijotmp[nHijos];
    for (int i = 0; i <= nHijos; i++)
    {
        hijotmp[i].setNombre(hijos[i].getNombre());
        hijotmp[i].setEdad(hijos[i].getEdad());

    }
    this->nHijos = hijotmp;
    this->Familia(Miembro conyuge1, Miembro conyuge2);
}

ConHijos::imprimir()
{
    cout << "Familia " << this->familia->getNombre() << endl;
}
