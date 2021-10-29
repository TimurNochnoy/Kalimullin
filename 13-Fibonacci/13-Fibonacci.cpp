#include <iostream>
#include <stdio.h>

int main() {
	double n = 0;
	int i = 1, il = 1, k = 2, fl = 0;
    do {
		std::cin >> n;
		if(std::cin.fail()) {
	        std::cin.clear();
	        std::cin.ignore(10000, '\n');
	        std::cout << "Error! Re-enter.\n";
	    }
		else {
			if (n >= 1 && (n - int(n) == 0) && n <= 100) {
				if (n == 1) {
					std::cout << 1 << "\n";
					fl = 1;
				}
				else if (n == 2) {
					std::cout << 1 << " " << 1 << "\n";
					fl = 1;
				}
				else if (n >= 3) {
					std::cout << i << " ";
					std::cout << i << " ";
					do {
						i += il;
						il = i - il;
						std::cout << i << " ";
						k++;
					} while (k < n);
					fl = 1;
					std::cout << "\n";
					}
			}
			else {
				std::cout << "Error! Re-enter.\n";
			}
	    }
	} while (fl == 0);
	return 0;
}