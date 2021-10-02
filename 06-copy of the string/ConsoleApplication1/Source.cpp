#include <iostream>
#include <string>

int main() {
	std::cout << "Enter a string of no more than 50 characters:\n";
	std::string s;
	std::cin >> s;
	do {
		std::cout << "Error\n";
		std::cin >> s;
	} while (s.length() > 50);
	std::string sc;
	sc=s;
	std::cout << "Copy of the string: ";
	std::cout << sc << "\n";
    return 1;
}