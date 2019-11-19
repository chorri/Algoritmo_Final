#include "MainManagers.h"
#include "MyForm.h"
#include <iostream>

#include <Windows.h>
#include <sstream>

#include <filesystem>
#include <string>
#include "ArbolAVL.hpp"

using namespace std;
using namespace std::experimental::filesystem;
using namespace ProyectoFinal;

WIN32_FILE_ATTRIBUTE_DATA dat;


void eraseSubStr(std::string & mainStr, const std::string & toErase)
{
	// Search for the substring in string
	size_t pos = mainStr.find(toErase);
	if (pos != std::string::npos)
	{
		// If found then erase it from string
		mainStr.erase(pos, toErase.length());
	}
}


int main() {
	MainProgramManager* mainmanage = new MainProgramManager();
	cout << mainmanage->alumnos->size();

	/*string path = "C:\\Users\\Juan\\Desktop\\UPC\\TercerCiclo\\Algoritmo\\TrabajoFinal\\Algoritmo_Final\\Debug";
	for (const auto& entry : directory_iterator(path)) {

		if (entry.path().extension().string() == ".txt") {

		}
		
		cout << "- ";
		//cout << entry.path() << std::endl;

		GetFileAttributesEx(entry.path().c_str(), GetFileExInfoStandard, &dat);
		
		std::stringstream sstr;
		sstr << dat.nFileSizeLow;
		std::string str = sstr.str();

		//cout << endl << entry.path().filename() << endl;

		//eraseSubStr(entry.path().string(), path);

		

		cout << entry.path().filename() << " | " << str << endl;
	}

	cout << "test" << endl;

	*/
	///////////////////////////AREA DE TESTEO

	Alumno** lista = new Alumno*[8]();

	for (int i = 0; i < mainmanage->alumnos->size(); i++)
	{
		lista[i] = mainmanage->alumnos->at(i).alumnoAsignado;
	}
	
	//Alumno* alumno1 = new Alumno("Abbcdefa", 15.6, 3050.2, 19, 4, 1500.5, 3);
	//Alumno* alumno2 = new Alumno("Defabc", 14.0,      0, 23, 4, 1500.5, 1);
	//Alumno* alumno3 = new Alumno("Cdefab", 12.2, 1050.2, 20, 4, 1500.5, 2);
	//Alumno* alumno4 = new Alumno("Ghijkl", 17.3, 3450.2, 19, 4, 1500.5, 5);
	//Alumno* alumno5 = new Alumno("Abcdef", 18.6,  450.2, 19, 4, 1500.5, 4);
	//Alumno* alumno6 = new Alumno("Fabcde", 11,   60.2, 18, 4, 1500.5, 8);
	//Alumno* alumno7 = new Alumno("Hijklg", 13.4,      0, 17, 4, 1500.5, 7);
	//Alumno* alumno8 = new Alumno("Efabcd", 15.1, 4050.5, 23, 4, 1500.5, 6);

	//lista[0] = alumno1;
	//lista[1] = alumno2;
	//lista[2] = alumno3;
	//lista[3] = alumno4;
	//lista[4] = alumno5;
	//lista[5] = alumno6;
	//lista[6] = alumno7;
	//lista[7] = alumno8;








	Application::Run(gcnew MyForm(lista,mainmanage));

	return 0;
}

/*

using namespace std;
//using namespace std::experimental::filesystem;
//namespace fs = std::filesystem;

int main() {
	//string path = "C:\\";
	//for (const auto& entry : recursive_directory_iterator(path)) {
	//	cout << "- ";
	//	cout << entry.path() << std::endl;
	//}

	system("pause");
}

*/