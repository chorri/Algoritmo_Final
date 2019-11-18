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

	string ruta;
	list<Archivo>* alumnos = new list<Archivo>();

	MainProgramManager() {
		//Existe el archivo de Ruta // sino Crealo

		//Usando la ruta conseguimos la información de los archivos y la agregamos a los alumnos
		for (const auto& entry : directory_iterator(ruta)) {

			GetFileAttributesEx(entry.path().c_str(), GetFileExInfoStandard, &datos);

			std::stringstream sstr;
			sstr << datos.nFileSizeLow;
			std::string str = sstr.str();

			auto ftime = std::experimental::filesystem::last_write_time(ruta);
			std::time_t cftime = decltype(ftime)::clock::to_time_t(ftime);

			Archivo temp = Archivo(entry.path().filename, stoi(str, nullptr, 10),cftime);

			//Cargar informacion de alumno

			alumnos->push_back(temp);
		}
	}
	~MainProgramManager() {
	}

private:
};