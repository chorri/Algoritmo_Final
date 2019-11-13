#ifndef __NODOAVL_HPP__
#define __NODOAVL_HPP__

#include "Alumno.hpp"

class Nodo
{
public:
	Alumno* alumno;
	Nodo* izq;
	Nodo* der;
	int altura;

	Nodo(Alumno* alumno) {
		this->alumno = alumno;
		izq = nullptr;
		der = nullptr;
		altura = 0;
	}

	Alumno* getAlumno() { return alumno; }

};




#endif
