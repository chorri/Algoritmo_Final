#pragma once

#include "Alumno.hpp"

#include "MyForm.h"
#include <iostream>

#include <Windows.h>
#include <sstream>

#include <fstream>

#include <filesystem>
#include <string>

#include <list>

using namespace std;
using namespace std::experimental::filesystem;


class MainProgramManager
{
public:

	WIN32_FILE_ATTRIBUTE_DATA datos;

	string RutaFija = "RutaFija.txt";

	string ruta = "C:\\Users\\Juan\\Desktop\\UPC\\TercerCiclo\\Algoritmo\\TrabajoFinal\\Algoritmo_Final\\Debug";
	list<Archivo>* alumnos = new list<Archivo>();

	

	MainProgramManager() {
		ifstream lector(RutaFija, ios::in);
		//Existe el archivo de Ruta // sino Crealo
		if (lector.fail()) {
			//Crear el archivo de Ruta
			fstream escritor(RutaFija, ios::out);

			escritor << ruta;
			
			ruta = string((std::istreambuf_iterator<char>(lector)), std::istreambuf_iterator<char>());
			CargarPrograma();
			escritor.close();
		}
		else {
			ruta = string((std::istreambuf_iterator<char>(lector)), std::istreambuf_iterator<char>());

			cout << "@@@" << ruta << "@@@";
			CargarPrograma();
		}
		lector.close();
		
	}
	~MainProgramManager() {
	}

	void EditarRuta(string str) {
		ruta = str;
		CargarRuta();
	}

	void CargarPrograma() {

		//Usando la ruta conseguimos la información de los archivos y la agregamos a los alumnos
		for (const auto& entry : directory_iterator(ruta)) {

			GetFileAttributesEx(entry.path().c_str(), GetFileExInfoStandard, &datos);

			std::stringstream sstr;
			sstr << datos.nFileSizeLow;
			std::string str = sstr.str();

			auto ftime = std::experimental::filesystem::last_write_time(ruta);
			std::time_t cftime = decltype(ftime)::clock::to_time_t(ftime);

			Archivo temp = Archivo(entry.path().filename().string(), stoi(str, nullptr, 10), cftime);

			//Cargar informacion de alumno

			alumnos->push_back(temp);
		}
	}

private:

	bool CargarRuta() {
		ifstream lector(ruta, ios::in);

		if (lector.fail()) {
			lector.close();
			return false;
		}
		else {
			ruta = string((std::istreambuf_iterator<char>(lector)),std::istreambuf_iterator<char>());
		}

		lector.close();
	}
};