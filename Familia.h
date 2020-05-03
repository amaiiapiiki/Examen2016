#ifndef FAMILIA_H_
#define FAMILIA_H_

class Familia
{
private:
	Miembro conyugeH;
    Miembro conyugeM;
public:
    Familia();
    Familia(Miembro conyugeH, Miembro conyugeM);
	Familia(const Familia & f);
    virtual ~Familia();

    Miembro getConyugeH();
    void setConyugeH(Miembro conyugeH);
    Miembro getConyugeM();
    void setConyugeM(Miembro conyugeM);

    virtual int getnHijos();
    char* getNombre() const;
    virtual void imprimir();
};

#endif /* FAMILIA_H_ */
