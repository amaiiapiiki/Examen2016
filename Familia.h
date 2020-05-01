#ifndef FAMILIA_H_
#define FAMILIA_H_

class Familia : public Miembro
{
private:
	Miembro marido;
    Miembro mujer;
public:
    Familia();
	Familia(const char*, int);
	Familia(const Familia&);
	~Familia();
	char* getNombre() const;
	void setNombre(const char*);
	int getEdad() const;
	void setEdad(int);
	char* toStr() const;
    char cadenas[19]
	
};

#endif /* FAMILIA_H_ */