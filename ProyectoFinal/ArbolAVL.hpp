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
		else
		_insertar(nodo->der, alumno);

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
			_insertarSegunDeuda(nodo->izq, alumno);
		}
		else if (alumno->getDeudaPendiente() >= nodo->alumno->getDeudaPendiente()) {
			_insertarSegunDeuda(nodo->der, alumno);
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
			_insertarSegunPeso(nodo->izq, alumno);
		}
		else if (alumno->getPeso() >= nodo->alumno->getPeso()) {
			_insertarSegunPeso(nodo->der, alumno);
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
			_insertarSegunFecha(nodo->izq, alumno);
		}
		else if (alumno->getPeso() >= nodo->alumno->getPeso()) {
			_insertarSegunFecha(nodo->der, alumno);
		}

		_balancear(nodo); //Proceso de balanceo del arbol

		return true;
	}
	bool _insertarSegunNombre(Nodo*& nodo, Alumno* alumno) {
		if (nodo == nullptr) {
			nodo = new Nodo(alumno);
			nodo->alumno = alumno;
		}
		else if (alumno->getNombre() < nodo->alumno->getNombre()) {
			_insertarSegunNombre(nodo->izq, alumno);
		}
		else if (alumno->getNombre() >= nodo->alumno->getNombre()) {
			_insertarSegunNombre(nodo->der, alumno);
		}

		_balancear(nodo); //Proceso de balanceo del arbol

		return true;
	}
	bool _insertarSegunInicial(Nodo*& nodo, Alumno* alumno, string letra) {
		if (nodo == nullptr) {
			nodo = new Nodo(alumno);
			nodo->alumno = alumno;
		}
		else if (alumno->getNombre() >= letra && alumno->getNombre() < _siguienteLetra(letra)) {
			if (nodo->alumno->getNombre() >= letra && nodo->alumno->getNombre() < _siguienteLetra(letra)) {
				_insertarSegunNombre(nodo, alumno);
			}
			else _insertarSegunInicial(nodo->izq, alumno, letra);
		}
		else if (nodo->alumno->getNombre() >= letra && nodo->alumno->getNombre() < _siguienteLetra(letra)) {
			_insertarSegunInicial(nodo->der, alumno, letra);
		}
		else _insertarSegunNombre(nodo, alumno);
		

		_balancear(nodo); //Proceso de balanceo del arbol

		return true;
	}

	string _siguienteLetra(string letra) {
		if (letra == "A") return "B";
		if (letra == "B") return "C";
		if (letra == "C") return "D";
		if (letra == "D") return "E";
		if (letra == "E") return "F";
		if (letra == "F") return "G";
		if (letra == "G") return "H";
		if (letra == "H") return "I";
		if (letra == "I") return "J";
		if (letra == "J") return "K";
		if (letra == "K") return "L";
		if (letra == "L") return "M";
		if (letra == "M") return "N";
		if (letra == "N") return "O";
		if (letra == "O") return "P";
		if (letra == "P") return "Q";
		if (letra == "Q") return "R";
		if (letra == "R") return "S";
		if (letra == "S") return "T";
		if (letra == "T") return "U";
		if (letra == "U") return "V";
		if (letra == "V") return "X";
		if (letra == "X") return "Y";
		if (letra == "Y") return "Z";
		if (letra == "Z") return "[";
	}
	////////////////////////////////////eliminar
	void _eliminar(Nodo*& nodo) {
		if (nodo != nullptr) {
			_eliminar(nodo->izq);
			_eliminar(nodo->der);
			nodo = nullptr;
		}
	}


public:
	ArbolAVL(){
		raiz = nullptr;
	}
	
	Nodo* getRaiz() {
		return raiz;
	}

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

	void Eliminar() {
		 _eliminar(raiz);
	}

	void insertarSegunPromedio(Alumno* alumno) {
		_insertarSegunPromedio(raiz, alumno);
	}
	void insertarSegunDeuda(Alumno* alumno) {
		_insertarSegunDeuda(raiz, alumno);
	}
	void insertarSegunPeso(Alumno* alumno) {
		_insertarSegunPeso(raiz, alumno);
	}
	void insertarSegunFecha(Alumno* alumno) {
		_insertarSegunFecha(raiz, alumno);
	}
	void insertarSegunNombre(Alumno* alumno) {
		_insertarSegunNombre(raiz, alumno);
	}
	void insertarSegunInicial(Alumno* alumno, string letra) {
		_insertarSegunInicial(raiz, alumno, letra);
	}
	string SiguienteLetra(string letra) {
		return _siguienteLetra(letra);
	}

};






#endif