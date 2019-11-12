
#include "MyForm.h"
#include <iostream>

#include <filesystem>
#include <string>

using namespace std;
using namespace std::experimental::filesystem;
using namespace ProyectoFinal;



int main() {

	string path = "C:\\Users\\Proyecto\\Documents\\New folder\\Test";
	for (const auto& entry : recursive_directory_iterator(path)) {
		cout << "- ";
		cout << entry.path() << std::endl;
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