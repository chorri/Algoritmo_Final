
#include "MyForm.h"
#include <iostream>

#include <Windows.h>
#include <sstream>

#include <filesystem>
#include <string>

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