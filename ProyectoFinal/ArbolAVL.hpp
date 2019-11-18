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

	////////////////////////////insertar
	bool _insertar(Nodo*& nodo, Alumno* alumno) {
		if (nodo == nullptr) {
			nodo = new Nodo(alumno);
			nodo->alumno = alumno;
		}
		else if (alumno < nodo->alumno) {
			_insertar(nodo->izq, alumno);
		}
		else if (alumno > nodo->alumno) {
			_insertar(nodo->der, alumno);
		}

		_balancear(nodo); //Proceso de balanceo del arbol

		return true;
	}

	bool _insertarSegunPromedio(Nodo*& nodo, Alumno* alumno) {
		if (nodo == nullptr) {
			nodo = new Nodo(alumno);
			nodo->alumno = alumno;
		}
		else if (alumno->getPromedioPonderado() < nodo->alumno->getPromedioPonderado()) {
			_insertarSegunPromedio(nodo->izq, alumno);
		}
		else if (alumno->getPromedioPonderado() >= nodo->alumno->getPromedioPonderado()) {
			_insertarSegunPromedio(nodo->der, alumno);
		}

		_balancear(nodo); //Proceso de balanceo del arbol

		return true;
	}
	bool _insertarSegunDeuda(Nodo*& nodo, Alumno* alumno) {
		if (nodo == nullptr) {
			nodo = new Nodo(alumno);
			nodo->alumno = alumno;
		}
		else if (alumno->getDeudaPendiente() < nodo->alumno->getDeudaPendiente()) {
			_insertarSegunPromedio(nodo->izq, alumno);
		}
		else if (alumno->getDeudaPendiente() >= nodo->alumno->getDeudaPendiente()) {
			_insertarSegunPromedio(nodo->der, alumno);
		}

		_balancear(nodo); //Proceso de balanceo del arbol

		return true;
	}
	bool _insertarSegunPeso(Nodo*& nodo, Alumno* alumno) {
		if (nodo == nullptr) {
			nodo = new Nodo(alumno);
			nodo->alumno = alumno;
		}
		else if (alumno->getPeso() < nodo->alumno->getPeso()) {
			_insertarSegunPromedio(nodo->izq, alumno);
		}
		else if (alumno->getPeso() >= nodo->alumno->getPeso()) {
			_insertarSegunPromedio(nodo->der, alumno);
		}

		_balancear(nodo); //Proceso de balanceo del arbol

		return true;
	}
	bool _insertarSegunFecha(Nodo*& nodo, Alumno* alumno) { ///FALTA
		if (nodo == nullptr) {
			nodo = new Nodo(alumno);
			nodo->alumno = alumno;
		}
		else if (alumno->getPeso() < nodo->alumno->getPeso()) {
			_insertarSegunPromedio(nodo->izq, alumno);
		}
		else if (alumno->getPeso() >= nodo->alumno->getPeso()) {
			_insertarSegunPromedio(nodo->der, alumno);
		}

		_balancear(nodo); //Proceso de balanceo del arbol

		return true;
	}
	bool _insertarSegunNombre(Nodo*& nodo, Alumno* alumno) { /// AYUDAAAAAAAAAAAAAA
		if (nodo == nullptr) {
			nodo = new Nodo(alumno);
			nodo->alumno = alumno;
		}
		else if (alumno->getNombre() < nodo->alumno->getNombre()) {
			_insertarSegunPromedio(nodo->izq, alumno);
		}
		else if (alumno->getNombre() >= nodo->alumno->getNombre()) {
			_insertarSegunPromedio(nodo->der, alumno);
		}

		_balancear(nodo); //Proceso de balanceo del arbol

		return true;
	}

	////////////////////////////////////eliminar
	//void _Eliminar 

	
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

	void insertar(Alumno* alumno) {
		_insertar(raiz, alumno);
	}

	/*bool Eliminar(Alumno* alumno) {
		return _Eliminar(raiz, alumno);
	}*/

	bool insertarSegunPromedio(Alumno* alumno) {
		_insertarSegunPromedio(raiz, alumno);
	}
	bool insertarSegunDeuda(Alumno* alumno) {
		_insertarSegunDeuda(raiz, alumno);
	}
	bool insertarSegunPeso(Alumno* alumno) {
		_insertarSegunPeso(raiz, alumno);
	}
	bool insertarSegunFecha(Alumno* alumno) {
		_insertarSegunFecha(raiz, alumno);
	}
	bool insertarSegunNombre(Alumno* alumno) {
		_insertarSegunNombre(raiz, alumno);
	}

};






#endif