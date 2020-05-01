#include <iostream>
#include <string.h>
#include <stdlib.h>

#include "Familia.h"
#include "Miembro.h"
using namespace std;

Familia::Familia(const char* nombre, int edad)
{
	this->edad = 0;
	this->nombre = new char[1];
	this->nombre[0] = '\0';
}
Familia::Familia(const Familia& p)
{
	this->nombre = new char[strlen(p.nombre) + 1];
	strcpy(this->nombre, p.nombre);
	this->edad = p.edad;

}
Familia::~Familia()
{
	delete[] this->nombre;
}
char* Familia::getNombre() const
{
	return this->nombre;
}
int Familia::getEdad() const
{
	return this->edad;
}
void Familia::setNombre(const char* nombre)
{
	delete[] this->nombre;
	this->nombre = new char[strlen(nombre) + 1];
	strcpy(this->nombre, nombre);
}
void Familia::setEdad(int edad)
{
	this->edad = edad;
}
char* Familia::toStr() const
{
	char* str = new char[100];
	char edad[5];
	itoa (this->edad, edad, 10);
	strcpy(str, this->nombre);
	strcat(str, " (");
	strcat(str, edad);
	strcat(str, " a�os)");
	return str;
}


