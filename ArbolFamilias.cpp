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
	this->familias = new Familia[5];
}
ArbolFamilias::ArbolFamilias(const ArbolFamilias & a)
{
 	this->familias = new Familia[5];
  	for(int i = 0; i < 5; i++) this->familias[i] = a.familias[i];
}
ArbolFamilias::ArbolFamilias(Familia* familias)
{
	this->familias = new Familia[5];
  	for(int i = 0; i < 5; i++) this->familias[i] = familias[i];
}
ArbolFamilias::~ArbolFamilias()
{
	delete[] familias;
}
void ArbolFamilias::setFamilias(Familia* familias)
{
	for(int i = 0; i < 5; i++) this->familias[i] = familias[i];
}
Familia* ArbolFamilias::getFamilias()
{
	return this->familias;
}
void ArbolFamilias::anadirFamilia(Familia f)
{
	for(int i = 0; i < 5; i++)
	{
		if(this->familias[i] == NULL){
			this->familias[i] = f;
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
			this->familias[i].imprimir();
		}
	}
}
int ArbolFamilias::contarMenoresEdad(int edad)
{
	int n;
	char* nombres[];
	ConHijos ch;
	for(int i = 0; i < 5; i++)
	{
		if(this->familias[i] != NULL){
//			if(familias[i].getMarido().getEdad() < edad){
//				n++;
//			}
//			if(familias[i].getMujer().getEdad() < edad){
//				n++;
//			}
//			if(familias[i].getnHijos() != 0){
//				ch = familias[i];
//				for(int x = 0; x < ch.getnHijos(); x++){
//					if(ch.getHijos()[x].getEdad() < edad){
//						n++;
//					}
//				}
//			}
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
//			if(familias[i].getMarido().getNombre()[0] == inicial){
//				miembros[*nMiembros] = familias[i].getMarido();
//				*nMiembros++;
//			}
//			if(familias[i].getMujer().getNombre()[0] == inicial){
//				miembros[*nMiembros] = familias[i].getMujer();
//				*nMiembros++;
//			}
		}
	}
	return miembros;
}

