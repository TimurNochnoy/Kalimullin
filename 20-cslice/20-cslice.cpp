#include <iostream>
#include <stdio.h>
#include <fstream>
#include <string>
#include <sstream>

#include "CSlice.h"



int main() {
	
	std :: cout << "Enter 'stop' if you want to finish the programm" << "\n";
	std :: cout << "Source array:" << "\n";
	std :: string getcontent;
	std :: ifstream file ("input.txt");
	if (file.is_open()) {
	    while (std :: getline(file, getcontent)) {
		    std :: cout << getcontent << "\n";
		}
	}
	std :: cout << "\n";

	std :: string slice;
	do {
		std :: cin >> slice;
		if (slice != "stop") {
			CSlice command(slice);
			command.process();
			std :: cout << "\n";
		}
	} while (slice != "stop");

	return 0;
}