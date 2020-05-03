/*
 * ArbolFamilias.h
 *
 *  Created on: 2 may. 2020
 *      Author: amaia
 */

#ifndef ARBOLFAMILIAS_H_
#define ARBOLFAMILIAS_H_

class ArbolFamilias{
private:
	Familia* familias[5];
public:
	//CONSTRUCTORES Y DESTRUCTORES
	ArbolFamilias();
	ArbolFamilias(const ArbolFamilias & a);
	ArbolFamilias(Familia** familias);
	~ArbolFamilias();

	//GET Y SET
	void setFamilias(Familia** familias);
	Familia** getFamilias();

	//RESTO DE METODOS
	void anadirFamilia(const Familia f);
	void imprimir();
	int contarMenoresEdad(int edad);
	Miembro* getConyugesInicial(int* nMiembros, char inicial);
};

#endif /* ARBOLFAMILIAS_H_ */
