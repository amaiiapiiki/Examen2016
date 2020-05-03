/*
 * ArbolFamilias.cpp
 *
 *  Created on: 2 may. 2020
 *      Author: amaia
 */

#include "Miembro.h"
#include "Familia.h"
#include "ConHijos.h"
#include <stdio.h>
#include <string.h>
#include <iostream>

#include "ArbolFamilias.h"
using namespace std;

ArbolFamilias::ArbolFamilias()
{
	this->familias[0] = new Familia();
	this->familias[1] = new Familia();
	this->familias[2] = new Familia();
	this->familias[3] = new Familia();
	this->familias[4] = new Familia();
}
ArbolFamilias::ArbolFamilias(const ArbolFamilias & a)
{
  	for(int i = 0; i < 5; i++) this->familias[i] = a.familias[i];
}
ArbolFamilias::ArbolFamilias(Familia** familias)
{
  	for(int i = 0; i < 5; i++) this->familias[i] = familias[i];
}
ArbolFamilias::~ArbolFamilias()
{
	delete[] familias;
}
void ArbolFamilias::setFamilias(Familia** familias)
{
	for(int i = 0; i < 5; i++) this->familias[i] = familias[i];
}
Familia** ArbolFamilias::getFamilias()
{
	return this->familias;
}
void ArbolFamilias::anadirFamilia(Familia f)
{
	for(int i = 0; i < 5; i++)
	{
		if(this->familias[i] == NULL){
			this->familias[i] = new Familia(f);
			break;
		}
	}
}
void ArbolFamilias::imprimir()
{
	cout << "Arbol familiar" << endl;
	cout << "--------------" << endl;
	for(int i = 0; i < 5; i++)
	{
		if(this->familias[i] != NULL){
			this->familias[i]->imprimir();
		}
	}
}
int ArbolFamilias::contarMenoresEdad(int edad)
{
	int n;
	char* nombres[];
	ConHijos ch;
	bool exists;

	for(int i = 0; i < 5; i++)
	{
		if(this->familias[i] != NULL){
			if(familias[i]->getConyugeH().getEdad() < edad){
				for(int j = 0; j < n; j++){
					if(strcmp(nombres[j], familias[i]->getConyugeH().getNombre()) != 0){
						exists = false;
					}
				}
				if(!exists){
					nombres[n] = new char[strlen(familias[i]->getConyugeH().getNombre())];
					strcpy(nombres[n], familias[i]->getConyugeH().getNombre());
					n++;
				}
			}
			if(familias[i]->getConyugeM().getEdad() < edad){
				for(int j = 0; j < n; j++){
					if(strcpy(nombres[j], familias[i]->getConyugeM().getNombre()) != 0){
						exists = false;
					}
				}
				if(!exists){
					nombres[n] = new char[strlen(familias[i]->getConyugeM().getNombre())];
					strcpy(nombres[n], familias[i]->getConyugeM().getNombre());
					n++;
				}
			}
			if(familias[i]->getnHijos() != 0){
				ch(*familias[i]);
				for(int j = 0; j < ch.getnHijos(); j++){
					if(ch.getHijos()[j].getEdad() < edad){
						for(int k = 0; k < n; k++){
							if(strcmp(nombres[k], ch.getHijos()[j].getNombre()) != 0){
								exists = false;
							}
						}
						if(!exists){
							nombres[n] = new char[strlen(ch.getHijos()[j].getNombre())];
							strcpy(nombres[n], familias[i]->getConyugeM().getNombre());
							n++;
						}
					}
				}
			}
		}
	}
	return n;
}
Miembro* ArbolFamilias::getConyugesInicial(int* nMiembros, char inicial)
{
	Miembro* miembros;
	*nMiembros = 0;
	for(int i = 0; i < 5; i++)
	{
		if(this->familias[i] != NULL){
			if(familias[i]->getConyugeH().getNombre()[0] == inicial){
				miembros[*nMiembros] = familias[i]->getConyugeH();
				*nMiembros++;
			}
			if(familias[i]->getConyugeM().getNombre()[0] == inicial){
				miembros[*nMiembros] = familias[i]->getConyugeM();
				*nMiembros++;
			}
		}
	}
	return miembros;
}

