#include <iostream>
#include <stdio.h>

int main() {
	double a = 0;
	int i = 0, f = 0;
	std::cout << "������� ����������� �����: ";
	if (std::cin >> a) {
		if ((a > 0) && (a - int(a) == 0)) {
			for (i=2; i <= a/2; i++) {
				if (int(a)%i == 0){
					f = 1;
				}
			}
			if (f == 0) {
				std::cout << "��� ������� �����!" << "\n";
			}
			else {
				std::cout << "��� ��������� �����!" << "\n";
			}
		}
		else {
			std::cout << "������!" << "\n";
		}
	}
	else {
		std::cout << "������!" << "\n";
	};
	return 0;
}