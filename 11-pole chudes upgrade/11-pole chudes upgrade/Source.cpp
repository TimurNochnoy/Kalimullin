#include <stdio.h>
#include <iostream>
#include <string>

int main() {
	std::cout << "Введите слово: ";
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
		std::cout << "Введите букву:";
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
					std::cout << "Эта буква уже была, попробуйте еще раз.\n";
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
			std::cout << "Нет такой буквы!\n";
			std::cout << su << "\n";
		}
		else if (f == '@') {
			std::cout << "Вы угадали слово!\n";
			std::cout << sk << "\n";
			su = s;
		}
		else if (f == '#') {
			std::cout << "К сожалению, вы не угадали слово. Вы проиграли.\n";
			su = s;
		}
		else if (f == '$') {
			f = '!';
		}
		else if (f == '%'){
			std::cout << "Есть такая буква!"<< "\n";
			std::cout << su << "\n";
		}
	} while (s != su);
	return 0;
}