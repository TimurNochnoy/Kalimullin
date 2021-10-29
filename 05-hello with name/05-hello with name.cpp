#include <iostream>
#include <string>

int main() {
	std::cout << "What is your name?\n";
	std::string s;
	std::cin >> s;
	std::cout << "Hello, " << s << "!\n";
    return 0;
}