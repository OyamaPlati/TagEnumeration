#include "tagEnumeration.h"

#include <iostream>
#include <string>
#include <fstream>
#include <vector>

void pltoya001 :: openFile (char* name, std :: vector<pltoya001 :: TagStruct> tagStruct) {
	std :: string line;

	std :: ifstream myFile (name);

	if (myFile.is_open()) {
		while (std :: getline(myFile, line)) {
			// std :: cout << line << std :: endl;
			//Push back new tag  created with default constructor.

			for (int i = 0; i < line.length(); i++) {
				// process the line of text

			}
		}
		myFile.close();
	}
	else std :: cout << "Cannot open file" << std :: endl;
}

int pltoya001 :: indexOf (std :: string& text, std :: string& pattern) {
	// where appears the pattern in the text
	std :: string :: size_type location  = text.find(pattern, 0);
	if (location != std :: string :: npos) {
		return location;
	}
	else {
		return -1;
	}
	//return 0;
}
