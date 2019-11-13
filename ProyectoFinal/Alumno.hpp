#ifndef __ALUMNO_HPP__
#define __ALUMNO_HPP__
#include <iostream>
#include <string>

using namespace std;

class Alumno
{
private:
	string Nombre;
	float PromedioPonderado;
	float DeudaPendiente;
	short Edad;
	short CicloActual;
	float Mensualidad;

public:
	Alumno() {}
	Alumno(string Nombre, float PromedioPonderado, 
		float DeudaPendiente, short Edad, 
		short CicloActual, float Mensualidad){
		this->Nombre = Nombre;
		this->PromedioPonderado = PromedioPonderado;
		this->DeudaPendiente = DeudaPendiente;
		this->Edad = Edad;
		this->CicloActual = CicloActual;
		this->Mensualidad = Mensualidad;
	}

	~Alumno(){}

	string getNombre() { return Nombre; }
	float getPromedioPonderado() { return PromedioPonderado; }
	float getDeudaPendiente() { return DeudaPendiente; }
	short getEdad() { return Edad; }
	short getCicloActual() { return CicloActual; }
	float getMensualidad() { return Mensualidad; }
	void setNombre(string Nombre) { this->Nombre = Nombre; }
	void setPromedioPonderado(float PromedioPonderado) { this->PromedioPonderado = PromedioPonderado; }
	void setDeudaPendiente(float DeudaPendiente) { this->DeudaPendiente = DeudaPendiente; }
	void setEdad(short Edad) { this->Edad = Edad; }
	void setCicloActual(short CicloActual) { this->CicloActual = CicloActual; }
	void setMensualidad(float Mensualidad) { this->Mensualidad = Mensualidad; }
	
};




#endif
