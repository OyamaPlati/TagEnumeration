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

namespace pltoya001 {
	struct TagStruct {
		std :: string tagName;
		int numberOfTags;
		std :: string text;
	};

	void openFile (char* name, std :: vector<TagStruct> tagStruct);
	int indexOf (std :: string& text, std :: string& pattern);
}

#endif
