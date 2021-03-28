#include "tagEnumeration.h"

#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <string.h>
#include <bits/stdc++.h>

std :: vector<pltoya001 :: TagStruct> pltoya001 :: openFile (char* name) {
	std :: vector <pltoya001 :: TagStruct> temp_arr;

	std :: string line;

	std :: ifstream myFile (name);

	char openingTag{60};
	char closingTag{62};
	char forwardSlash{47};

	if (myFile.is_open()) {
		int i = 0;
		while (std :: getline(myFile, line)) {
			// process the line of text
			temp_arr.push_back(pltoya001 :: TagStruct());
			std :: string oT (1, openingTag);
			std :: string cT (1, closingTag);
			std :: string fS (1, forwardSlash);

			int posOT = pltoya001 :: indexOf (line, oT) + 1;
			int posCT = pltoya001 :: indexOf (line, cT) - 1;
			int posFS = pltoya001 :: indexOf (line, fS);
			temp_arr[i].tagName = line.substr(posOT, posCT);

			//tagStruct[i].numberOftags = 1;
			temp_arr[i].text = line.substr(posCT + 2, line.length() - (temp_arr[i].tagName.length() + 3 + posCT + 2));

			i++;
		}
		myFile.close();
	}
	else std :: cout << "Cannot open file" << std :: endl;

	return temp_arr;
}

// @reference : noobtuts.com/cpp/index-of-strings
int pltoya001 :: indexOf (std :: string& text, std :: string& pattern) {
	// where appears the pattern in the text
	std :: string :: size_type location  = text.find(pattern, 0);
	if (location != std :: string :: npos) {
		return location;
	}
	else {
		return -1;
	}
}

std :: string pltoya001 :: myToString (pltoya001 :: TagStruct tagData) {
	return "Tag: " + tagData.tagName + " No#: " + std :: to_string(tagData.numberOfTags) + "  Text: " + tagData.text;
}

void printAll (const std :: vector<pltoya001 :: TagStruct>& tagStruct) {
	for (pltoya001 :: TagStruct tagData : tagStruct ) {
		std :: cout << pltoya001 :: myToString(tagData) << std :: endl;
	}
	std :: cout << "Done !!" << std :: endl;
}

