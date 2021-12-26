#include "FIFOandLIFO.h"
#include <iostream>
#include <string>



int main() {
	FIFO array(0);	// or LIFO array(0)

	Storage &stor = array;

	std :: cout << "Enter the number: ";
	int number;
	std :: cin >> number;
	int place = 1;
	int flaggen = 0;
	stor.push(number, place);
	stor.show();
	while(flaggen == 0) {
		std :: string flag;
		if (place == 0) {
			std :: cout << "Enter 'yes' to continue, enter 'stop' to end the programm: ";
			std :: cin >> flag;
		}
		else {
			std :: cout << "Enter 'yes' to put another, enter 'no' to delete element from storage: ";
			std :: cin >> flag;
		}

		if (flag == "yes") {
			place++;
			std :: cout << "Enter the number: ";
			int num;
			std :: cin >> num;
			stor.push(num, place);
			stor.show();
		}
		if (flag == "no") {
			place--;
			stor.pop();
			stor.show();
		}
		/*if (flag == "stop") {
			flaggen = 1;
		}*/
	}

	return 0;
}