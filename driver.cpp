#include "tagEnumeration.h"

#include <iostream>
#include <vector>

int main (int argc, char** argv) {
	std :: vector <pltoya001 :: TagStruct> tagStruct;

	bool Quit = false;
        char choice = 'm';

        for (;;) { // loop forever
                std :: cout << "r: Read and process tag file" << std :: endl;
                std :: cout << "p: Print all tags" << std :: endl;
                std :: cout << "d: Dump/write tags and data to a called tag.txt" << std :: endl;
                std :: cout << "l: List/print tag data for given tag" << std :: endl;
                std :: cout << "q: Quit" << std :: endl;
                std :: cout << "Enter an option (r,p,d,l) or q to quit, and press return..." << std :: endl;

                std :: cin >> choice;

                switch (choice) {
                	case 'r':
                		std :: cout << "Read and process tag file" << std :: endl;

                		tagStruct = pltoya001 :: openFile (argv[1]);

                		break;

               		case 'p':
                		std :: cout << "Print all tags" << std :: endl;

				for (pltoya001 :: TagStruct tagData : tagStruct ) {
		     			std :: cout << pltoya001 :: myToString(tagData) << std :: endl;
       		        	}

                        	break;

                	case 'd':
                		std :: cout << "Dump/write tags and data to a le called tag.txt" << std :: endl;
                		break;

                	case 'l':
                		std :: cout << "List/print tag data for given tag" << std :: endl;
                		break;

                	case 'q': //user wants to quit
                		Quit = true;  //execution continues after the switch
                        	//or do this to end program
                        	std :: cout << "Quit" << std :: endl;
                        	//return 0;
                        	break;

                	default:
                       		std :: cout << "Bad Input, Try again " << std :: endl;
                       		break;
                }

                // After the switch break the process comes here !

                // process key press and call relevant functions
                if (Quit == true) break;
        }

	return 0;
}
