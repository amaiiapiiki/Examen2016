#include <iostream>
#include <string.h>
#include <stdlib.h>
#include "Miembro.h"

#include "Familia.h"
using namespace std;

Familia::Familia()
{
	this->conyugeH = Miembro();
	this->conyugeM = Miembro();
}
Familia::Familia(Miembro conyugeH, Miembro conyugeM)
{
	this->conyugeH = Miembro(conyugeH);
	this->conyugeM = Miembro(conyugeM);
}
Familia::Familia(const Familia & f)
{
	this->conyugeH = Miembro(f.conyugeH);
	this->conyugeM = Miembro(f.conyugeM);
}
Familia::~Familia()
{
	delete this->conyugeH;
	delete this->conyugeM;
}
Miembro Familia::getConyugeH()
{
	return this->conyugeH;
}
void Familia::setConyugeH(Miembro conyugeH)
{
	this->conyugeH = new Miembro(conyugeH);
}
Miembro Familia::getConyugeM()
{
	return this->conyugeM;
}
void Familia::setConyugeM(Miembro conyugeM)
{
	this->conyugeM = new Miembro(conyugeM);
}
int Familia::getnHijos()
{
	return 0;
}
char* Familia::getNombre()
{
	char* r1;
	char* r2;
	char* r;
	char* nombreH = new char[strlen(this->conyugeH.getNombre())+1];
	strcpy(nombreH, this->conyugeH.getNombre());
	char* nombreM = new char[strlen(this->conyugeM.getNombre())+1];
	strcpy(nombreM, this->conyugeM.getNombre());

	for(int i = 0; i < strlen(nombreH); i++){
		if(nombreH[i] == " "){
			r1 = new char[strlen(nombreH)-i+1+1];
			for(int j = 0; j < strlen(nombreH)-i+1; j++){
				r1[j] = nombreH[i+1+j];
			}
			break;
		}
	}
	for(int i = 0; i < strlen(nombreM); i++){
		if(nombreM[i] == " "){
			r1 = new char[strlen(nombreM)-i+1+1];
			for(int j = 0; j < strlen(nombreM)-i+1; j++){
				r1[j] = nombreM[i+1+j];
			}
			break;
		}
	}

	r = r1 + " - " + r2;
	return r;
}
void Familia::imprimir()
{
	cout << "---" << endl;
	cout << "FAMILIA: " << this->getNombre() << endl;
	cout << "Marido: " << this->conyugeH.toStr() << endl;
	cout << "Mujer: " << this->conyugeM.toStr() << endl;
	cout << "---" << endl;
}


