/*
 * ArbolFamilias.h
 *
 *  Created on: 29 abr. 2020
 *      Author: amaia
 */

#ifndef ARBOLFAMILIAS_H_
#define ARBOLFAMILIAS_H_

class ArbolFamilias{
private:
//	Familia* familias;
public:
	//CONSTRUCTORES Y DESTRUCTORES
	ArbolFamilias();
	ArbolFamilias(const ArbolFamilias & a);
//	ArbolFamilias(Familia* familias);
	~ArbolFamilias();

	//GET Y SET
//	void setFamilias(Familia* familias);
//	Familia* getFamilias();

	//RESTO DE METODOS
//	void anadirFamilia(Familia f);
	void imprimir();
	int contarMenoresEdad(int edad);
	Miembro* getConyugesInicial(int* nMiembros, char inicial);
};

#endif /* ARBOLFAMILIAS_H_ */
