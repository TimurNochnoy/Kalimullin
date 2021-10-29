#include <iostream>
#include <stdio.h>

int main() {
	double a = 0;
	int i = 0, f = 1, fl = 0;
    do {
		std::cin >> a;
		if(std::cin.fail()) {
	        std::cin.clear();
	        std::cin.ignore(10000, '\n');
	        std::cout << "Error! Re-enter.\n";
	    }
		else {
			if (a >= 0 && (a - int(a) == 0) && a <= 100000) {
				if (int(a) == 0) {
					std::cout << 1 << "\n";
					fl = 1;
				}
				else {
					for (i=1; i<=int(a); i++) {
						f *= i;
					}
					std::cout << f << "\n";
					fl = 1;
				}
			}
			else {
				std::cout << "Error! Re-enter.\n";
			}
	    }
	} while (fl == 0);
	return 0;
}