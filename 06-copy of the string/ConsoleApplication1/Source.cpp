#include <iostream>
#include <string>

int main() {
	std::cout << "Enter the string:\n";
	std::string s;
	std::cin >> s;
	std::string sc;
	//for (int i=0; i<4; i++) {
	//	sc[i]=s[i];
	//};
	//std::cout << sc;
	sc=s;
	std::cout << "Copy of the string: ";
	std::cout << sc << "\n";
    return 1;
}