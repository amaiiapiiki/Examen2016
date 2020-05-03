#include "Miembro.h"
#include "Familia.h"
#include "ConHijos.h"
#include "ArbolFamilias.h"

#include <iostream>
using namespace std;

int main()
{
	Miembro luis("Luis Diez", 60 /*años*/);
	Miembro marta("Marta Sanchez", 58);
	Miembro angel("Angel Diez", 32);
	Miembro laura("Laura Ponte", 30);
	Miembro hodei("Hodei Diez", 2);
	Miembro ana("Ana Diez", 7);
	Miembro pablo("Pablo Diez", 10);
	Miembro jon("Jon Pena", 40);
	Miembro maite("Maite Pazos", 35);

	cout<< luis.toStr() << " os desea suerte en el examen." << endl;

	Miembro * h1 =  &angel;
	Miembro h2[3];
	h2[0] = hodei;
	h2[1] = ana;
	h2[2] = pablo;

	Familia f1(jon, maite);
	ConHijos f2(luis, marta, h1, 1);
	ConHijos f3(angel, laura, h2, 3);

	f1.imprimir();
	cout << endl;
	f3.imprimir();
	cout << endl;

	Familia* familias[3];
	*familias[0] = f1;
	*familias[1] = f2;
	*familias[2] = f3;

	ArbolFamilias arbol(familias);
	arbol.imprimir();

	cout << "Menores 35 años: " << arbol.contarMenoresEdad(35) << " miembros" << endl;
	cout << endl;

	cout << "Conyuges cuyo nombre empieza por L:" << endl;
	int nConyuges;
	Miembro* miembrosL = arbol.getConyugesInicial(&nConyuges, 'L');
	for(int i = 0; i < nConyuges; i++){
		cout << miembrosL[i].toStr() << endl;
	}

	return 0;
}
