#include "tagEnumeration.h"

#include <iostream>
#include <vector>

int main (int argc, char** argv) {
	std :: vector <pltoya001 :: TagStruct> tagStruct;
	pltoya001 :: openFile (argv[1], tagStruct);
	return 0;
}
