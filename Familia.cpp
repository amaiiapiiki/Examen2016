#include <iostream>
#include <string.h>
#include <stdlib.h>

#include "Familia.h"
#include "Miembro.h"
using namespace std;

Familia::Familia()
{
	this->nombreMarido = new char[1];
	this->nombreMarido[0] = '\0';
    this->apellidoMarido = new char[1];
	this->apellidoMarido[0] = '\0';
    this->nombreMujer = new char[1];
	this->nombreMujer[0] = '\0';
    this->apellidoMujer = new char[1];
	this->apellidoMujer[0] = '\0';
}
Familia::Familia(const char* nombreMarido, const char* apellidoMarido, const char* nombreMujer, const char* apellidoMujer)
{
	this->nombreMarido = new char[strlen(nombreMarido) + 1];
	strcpy(this->nombreMarido, nombreMarido);
    this->apellidoMarido = new char[strlen(apellidoMarido) + 1];
	strcpy(this->apellidoMarido, apellidoMarido);
    this->nombreMujer = new char[strlen(nombreMujer) + 1];
	strcpy(this->nombreMujer, nombreMujer);
    this->apellidoMujer = new char[strlen(apellidoMujer) + 1];
	strcpy(this->apellidoMujer, apellidoMujer);

}
Familia::Familia(const Familia& p)
{
	this->nombreMarido = new char[strlen(p.nombreMarido) + 1];
	strcpy(this->nombreMarido, p.nombreMarido);
    this->apellidoMarido = new char[strlen(p.apellidoMarido) + 1];
	strcpy(this->apellidoMarido, p.apellidoMarido);
    this->nombreMujer = new char[strlen(p.nombreMujer) + 1];
	strcpy(this->nombreMujer, p.nombreMujer);
    this->apellidoMujer = new char[strlen(p.apellidoMujer) + 1];
	strcpy(this->apellidoMujer, p.apellidoMujer);

}
Familia::~Familia()
{
	delete[] this->nombreMarido;
    delete[] this->apellidoMarido;
    delete[] this->nombreMujer;
    delete[] this->apellidoMujer;
}


void Familia::Imprimir(){

    std::cout << "FAMILIA" << this->getNombre << std::endl;
    std::cout << "Marido: " << this->get_ruedas() << std::endl;
    std::cout << "Mujer: " << this->get  << std::endl;
}


