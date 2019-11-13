#ifndef __ARBOLAVL_HPP__
#define __ARBOLAVL_HPP__

#include "NodoAVL.hpp"
#include <functional>

class ArbolAVL
{
private:
	Nodo* raiz;

	int _cantidad(Nodo* nodo) {
		if (nodo == nullptr)return 0;
		else {
			int ci, cd;
			ci = _cantidad(nodo->izq);
			cd = _cantidad(nodo->der);
			return 1 + ci + cd;
		}
	}

	int _Altura(Nodo* nodo) {
		if (nodo == nullptr)
			return 0;
		else
			return nodo->altura;
	}

	void _rotarDerecha(Nodo*& nodo) {
		Nodo* p = nodo->izq;
		nodo->izq = p->der;
		p->der = nodo;

		nodo = p;
	}
	void _rotarIzquierda(Nodo*& nodo) {
		Nodo* p = nodo->der;
		nodo->der = p->izq;
		p->izq = nodo;

		nodo = p;
	}

	void _balancear(Nodo*& nodo) {
		int ai = _Altura(nodo->izq);
		int ad = _Altura(nodo->der);
		
		int A = ad - ai;
		if (A > 1) {
			int ani = _Altura(nodo->der->izq);
			int and = _Altura(nodo->der->der);

			if (ani > and)
				_rotarDerecha(nodo->der);
			_rotarIzquierda(nodo);
		}
		if (A < -1) {
			int ani = _Altura(nodo->izq->izq);
			int and = _Altura(nodo->izq->der);

			if (and > ani) 
				_rotarIzquierda(nodo->izq);
			_rotarDerecha(nodo);
		}

		ai = _Altura(nodo->izq);
		ad = _Altura(nodo->der);
		nodo->altura = 1 + ((ai > ad) ? ai : ad);
	}

	bool _Buscar(Nodo* nodo, Alumno* alumno) {
		if (nodo == nullptr) return false;
		else {
			if (nodo->getAlumno() == alumno)return true;
			else if (nodo->getAlumno() > alumno)
				return _Buscar(nodo->izq, alumno);
			else
				return _Buscar(nodo->der, alumno);
		}
	}

public:
	ArbolAVL(){}
	
	int cantidad() {
		return _cantidad(raiz);
	}

	bool Buscar(Alumno* alumno) {
		return _Buscar(raiz, alumno);
	}

	int Altura() {
		return _Altura(raiz);
	}

	/*bool Eliminar(Alumno* alumno) {
		return _Eliminar(raiz, alumno);
	}*/


};






#endif