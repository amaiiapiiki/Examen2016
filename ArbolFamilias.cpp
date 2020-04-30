/*
 * ArbolFamilias.cpp
 *
 *  Created on: 29 abr. 2020
 *      Author: amaia
 */
/*
#include "Miembro.h"
#include "Familia.h"
#include "ConHijos.h"
#include "ArbolFamilias.h"


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
  	for(int i = 0; i < 5; i++) this->familias[i] = familias.familias[i];
}
ArbolFamilias::~ArbolFamilias()
{
	delete[] familias;
}
void ArbolFamilias::setFamilias(Familia* familias)
{
	for(int i = 0; i < 5; i++) this->familias[i] = a.familias[i];
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
	for(int i = 0; i < 5; i++)
	{
		if(this->familias[i] != NULL){

		}
	}
}
Miembro* ArbolFamilias::getConyugesInicial(int* nMiembros, char inicial)
{

}
*/
