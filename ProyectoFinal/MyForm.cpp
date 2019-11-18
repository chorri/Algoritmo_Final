
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
	string path = "C:\\Users\\Juan\\Desktop\\UPC\\TercerCiclo\\Algoritmo\\TrabajoFinal\\Algoritmo_Final\\ProyectoFinal\\Debug\\ProyectoFinal.tlog";
	for (const auto& entry : directory_iterator(path)) {
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


	///////////////////////////AREA DE TESTEO

	ArbolAVL* arbol = new ArbolAVL();
	Alumno* alumno1 = new Alumno("Abcdef", 15.6, 3050.2, 19, 4, 1500.5, 3);
	Alumno* alumno2 = new Alumno("bcdefa", 14.0,      0, 23, 4, 1500.5, 3);
	Alumno* alumno3 = new Alumno("cdefab", 12.2, 1050.2, 20, 4, 1500.5, 3);
	Alumno* alumno4 = new Alumno("defabc", 17.3, 3450.2, 19, 4, 1500.5, 3);
	Alumno* alumno5 = new Alumno("efabcd", 18.6,  450.2, 19, 4, 1500.5, 3);
	Alumno* alumno6 = new Alumno("fabcde", 12.9,   60.2, 18, 4, 1500.5, 3);
	Alumno* alumno7 = new Alumno("ghijkl", 13.4,      0, 17, 4, 1500.5, 3);
	Alumno* alumno8 = new Alumno("hijklg", 15.1, 4050.5, 23, 4, 1500.5, 3);

	Alumno* alumno[8] = { alumno1, alumno2, alumno3, alumno4, alumno5, alumno6, alumno7, alumno8 };








	Application::Run(gcnew MyForm);

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