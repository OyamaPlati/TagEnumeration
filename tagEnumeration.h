/***********************************************************
* Header for the tag enumeration library
* Author: Oyama Plati
* Date: 03/25/2021
***********************************************************/

// Pre-processor dierectives

#ifndef tagEnumeration_h
#define tagEnumeration_h

#include <string>
#include <vector>
#include <iostream>

namespace pltoya001 {
	struct TagStruct {
		std :: string tagName;
		int numberOfTags;
		std :: string text;
	};

	std :: vector<TagStruct> openFile (char* name);
	int indexOf (std :: string& text, std :: string& pattern);
	std :: string myToString (TagStruct tagData);
	void printAll (const std :: vector<TagStruct>& tagStruct);
}

#endif
