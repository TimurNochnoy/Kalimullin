#include <stdio.h>
#include <iostream>
#include <string>

int main() {
	std::cout << "������� �����: ";
	std::string s;
	std::cin >> s;
	int l=0;
	l = s.length();
	std::string su=s;
	for (int i=0; i<l; i++) {
		su[i] = '_';
	};
	std::cout << su << "\n";
	do {
		std::cout << "������� �����:";
		char a;
		std::cin >> a;
		char f='!';
		for (int i=0; i<l; i++) {
			if (a == s[i]) {
				f = a;
				su[i] = a;
			};
		};
		if (f != '!') {
			std::cout << "���� ����� �����!"<< "\n";
			std::cout << su << "\n";
		}
		else {
			std::cout << "��� ����� �����!\n";
			std::cout << su << "\n";
		}
	} while (s != su);

}