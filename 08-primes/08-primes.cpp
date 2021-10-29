#include <iostream>
#include <stdio.h>

int main() {
	double a = 0;
	int i = 0, f = 0;
	std::cout << "Enter a natural number: ";
	if (std::cin >> a) {
		if ((a > 0) && (a - int(a) == 0)) {
			for (i=2; i <= a/2; i++) {
				if (int(a)%i == 0){
					f = 1;
				}
			}
			if (f == 0) {
				std::cout << "It's a prime number!" << "\n";
			}
			else {
				std::cout << "This is a composite number!" << "\n";
			}
		}
		else {
			std::cout << "Error!" << "\n";
		}
	}
	else {
		std::cout << "Error!" << "\n";
	};
	return 0;
}