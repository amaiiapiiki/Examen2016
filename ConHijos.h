#ifndef CONHIJOS_H_
#define CONHIJOS_H_
#include "Miembro.h"
#include "Familia.h"

class ConHijos : public Familia
{
private:
    Miembro hijos[];
    int nHijos;
    Familia(Miembro conyuge1, Miembro conyuge2);
public:
    ConHijos(Miembro hijos[], int nHijos, Miembro conyuge1, Miembro conyuge2);
    virtual Miembro[] getHijos();
    virtual void setHijos(Miembro hijos[]);
    virtual int getnHijos();
    virtual void setnHijos(int nHijos);
    virtual void imprimir();

};

#endif /* CONHIJOS_H_ */