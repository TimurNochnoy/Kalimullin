#include <iostream>
#include <string>

int main() {
	int a=50, b=0, c=50, k=0, memory=50;
	std::cout << "Think of a number N from 1 to 100, and I'll guess!\n";
	do {
		k++;
		memory = a;
        std::cout << "Is N greater than " << a << " (1 yes, 2 no, 3 equals)?\n";
		std::cin >> b;
		if (b == 1) {
			a = a + c/(k*2);
		}
		else {
			a  = a - c/(k*2);
		};
    } while (b != 3);
	std::cout << "You have conceived the number " << memory << "! And I'm great! Number of attempts: " << k << "\n";
    return 0;
}