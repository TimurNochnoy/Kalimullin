#include <iostream>
#include <stdio.h>

class LIFO {
private:
	int *array;
	int lenght;
public:
	LIFO(int N) {
		lenght = N;
		array = new int[lenght];
	}

	~LIFO() {
		delete[] array;
	}

	void push(int place, int value) {
		array[lenght - 1 - place] = value;
	}

	void pop(int m) {
		int	i = 0;

		std :: cout << m + 1 << " to exit - " << array[0] << "\n";
			
		while (i < lenght - 1)
		{
			array[i] = array[i + 1];
			i++;
		}
	}

};


int main() {
	int N;
	int i=0;
	int number;

	std :: cout << "Enter the number of items: ";
	std :: cin >> N;

	LIFO array(N);

	std :: cout << "Enter the items: ";
	while (i < N) {
		std :: cin >> number;
		array.push(i, number);
		i++;
	}

	for(int i=0; i<N; i++) {
		array.pop(i);
	}

	return 0;
}