#include <iostream>
#include <string>

int main() {
	int a=50, b=0, c=50, k=0;
	std::cout << "��������� ����� N �� 1 �� 100, � � ������!\n";
	do {
		k++;
        std::cout << "N ������ " << a << " (1 ��, 2 ���, 3 �����)?\n";
		std::cin >> b;
		if (b == 1) {
			a = a + c/(k*2);
		}
		else {
			a  = a - c/(k*2);
		};
    } while (b != 3);
	std::cout << "�� ��������" << a << "! � � �������! ���������� �������: " << k << "\n";
    return 1;
}