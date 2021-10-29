#include <iostream>
#include <stdio.h>

class FIFO {
private:
	int *array;
	int lenght;
public:
	FIFO(int N) {
		lenght = N;
		array = new int[lenght];
	}

	~FIFO() {
		delete[] array;
	}

	void push(int place, int value) {
		array[lenght - 1 - place] = value;
	}

	void pop(int m) {
		std :: cout << m + 1 << " to exit - " << array[lenght - 1] << "\n";
		lenght--;
	}

};


int main() {
	int N;
	int i=0;
	int number;

	std :: cout << "Enter the number of items: ";
	std :: cin >> N;

	FIFO array(N);

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