#pragma once

#include "Alumno.hpp"

#include "MyForm.h"
#include <iostream>

#include <Windows.h>
#include <sstream>

#include <filesystem>
#include <string>

#include <list>

using namespace std;
using namespace std::experimental::filesystem;


class MainProgramManager
{
public:

	WIN32_FILE_ATTRIBUTE_DATA datos;

	string ruta;
	list<Archivo>* alumnos = new list<Archivo>();

	MainProgramManager() {
		//Existe el archivo de Ruta // sino Crealo

		//Usando la ruta conseguimos la informaci�n de los archivos y la agregamos a los alumnos
		for (const auto& entry : directory_iterator(ruta)) {

			GetFileAttributesEx(entry.path().c_str(), GetFileExInfoStandard, &datos);

			std::stringstream sstr;
			sstr << datos.nFileSizeLow;
			std::string str = sstr.str();

			Archivo temp = Archivo(entry.path().filename, stoi(str, nullptr, 10));

			//Cargar informacion de alumno

			alumnos->push_back(temp);
		}
	}
	~MainProgramManager() {
	}

private:
};