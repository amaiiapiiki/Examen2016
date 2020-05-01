#ifndef FAMILIA_H_
#define FAMILIA_H_

class Familia
{
private:
	Miembro marido;
    Miembro mujer;
    char* nombreMarido;
    char* apellidoMarido;
    char* nombreMujer;
    char* apellidoMujer;
public:
    Familia();
    Familia(const char* nombreMarido, const char* apellidoMarido, const char* nombreMujer, const char* apellidoMujer);
	Familia(const Familia&);
    ~Familia();
    char* getNombre() const;
    void Imprimir();
};

#endif /* FAMILIA_H_ */