#include <stdio.h>
#include <iostream>
#include <string>

int main() {
	std::cout << "Enter a word: ";
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
		std::cout << "Enter a letter: ";
		char a;
		int lk = 0;
		std::string sk;
		std::cin >> sk;
		lk = sk.length();
		char f = '!';
		if (lk == 1) {
			a = sk[0];
			for (int i=0; i<l; i++) {
				if (a == su[i] && f != '$') {
					std::cout << "This letter was already there, please try again.\n";
					f = '$';
				}
				if (a == s[i] && a != su[i]) {
					f = '%';
					su[i] = a;
				}
			}
		}
		else {
			if (sk == s) {
				f = '@';
			}
			else {
				f = '#';
			}
		}
		if (f == '!') {
			std::cout << "There is no such letter!\n";
			std::cout << su << "\n";
		}
		else if (f == '@') {
			std::cout << "You guessed the word!\n";
			std::cout << sk << "\n";
			su = s;
		}
		else if (f == '#') {
			std::cout << "Unfortunately, you have not guessed the word. You lose.\n";
			su = s;
		}
		else if (f == '$') {
			f = '!';
		}
		else if (f == '%'){
			std::cout << "There is such a letter!"<< "\n";
			std::cout << su << "\n";
		}
	} while (s != su);
	return 0;
}