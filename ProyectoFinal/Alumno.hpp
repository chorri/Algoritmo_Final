#ifndef __ALUMNO_HPP__
#define __ALUMNO_HPP__
#include <iostream>
#include <string>
#include <Windows.h>

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
	int Peso;

public:
	Alumno() {}
	Alumno(string Nombre, float PromedioPonderado, 
		float DeudaPendiente, short Edad, 
		short CicloActual, float Mensualidad, int Peso){
		this->Nombre = Nombre;
		this->PromedioPonderado = PromedioPonderado;
		this->DeudaPendiente = DeudaPendiente;
		this->Edad = Edad;
		this->CicloActual = CicloActual;
		this->Mensualidad = Mensualidad;
		this->Peso = Peso;
	}

	~Alumno(){}

	string getNombre() { return Nombre; }
	float getPromedioPonderado() { return PromedioPonderado; }
	float getDeudaPendiente() { return DeudaPendiente; }
	short getEdad() { return Edad; }
	short getCicloActual() { return CicloActual; }
	float getMensualidad() { return Mensualidad; }
	float getPeso() { return Peso; }
	void setNombre(string Nombre) { this->Nombre = Nombre; }
	void setPromedioPonderado(float PromedioPonderado) { this->PromedioPonderado = PromedioPonderado; }
	void setDeudaPendiente(float DeudaPendiente) { this->DeudaPendiente = DeudaPendiente; }
	void setEdad(short Edad) { this->Edad = Edad; }
	void setCicloActual(short CicloActual) { this->CicloActual = CicloActual; }
	void setMensualidad(float Mensualidad) { this->Mensualidad = Mensualidad; }
	void setPeso(int Peso) { this->Peso = Peso; }
	
};





class Archivo
{
public:
	Alumno* alumnoAsignado;
	string nombreDelArchivo;
	int peso;
	time_t uEdicion;

	Archivo() {
		nombreDelArchivo = "";
		peso = 0;
	}
	Archivo(string n, int p, time_t uE, Alumno* _alumno) {
		nombreDelArchivo = n;
		peso = p;
		uEdicion = uE;
		alumnoAsignado = _alumno;
	}
	~Archivo() {

	}

	long int GetTimeAsNumber() {
		return static_cast<long int>(uEdicion);
	}

private:

};
#endif
