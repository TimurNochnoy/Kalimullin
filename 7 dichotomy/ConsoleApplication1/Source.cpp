#include <iostream>
#include <string>

int main() {
	int a=50, b=0, c=50, k=0;
	std::cout << "Задумайте число N от 1 до 100, а я угадаю!\n";
	do {
		k++;
        std::cout << "N больше " << a << " (1 да, 2 нет, 3 равно)?\n";
		std::cin >> b;
		if (b == 1) {
			a = a + c/(k*2);
		}
		else {
			a  = a - c/(k*2);
		};
    } while (b != 3);
	std::cout << "Вы задумали" << a << "! А я молодец! Количество попыток: " << k << "\n";
    return 1;
}