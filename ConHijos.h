#ifndef CONHIJOS_H_
#define CONHIJOS_H_
#include "Miembro.h"
#include "Familia.h"

class ConHijos : public Familia
{
private:
    Miembro* hijos;
    int nHijos;
public:
    ConHijos();
    ConHijos(Miembro conyugeH, Miembro conyugeM, Miembro* hijos, int nHijos);
    ConHijos(const ConHijos & ch);
    virtual ~ConHijos();

    Miembro* getHijos();
    void setHijos(int nHijos, Miembro* hijos);
    int getnHijos();
    void setnHijos(int nHijos);

    virtual void imprimir();
};

#endif /* CONHIJOS_H_ */
