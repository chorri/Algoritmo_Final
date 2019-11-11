#pragma once

#include <Windows.h>

class Folder_Manager
{
public:

	WIN32_FILE_ATTRIBUTE_DATA fInfo;

	Folder_Manager() {
		GetFileAttributesEx(, GetFileExInfoStandard, &fInfo);
	}
	~Folder_Manager() {

	}



private:

};
