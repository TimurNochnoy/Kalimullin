#include "FIFOandLIFO.h"
#include <iostream>



Storage :: Storage(int N) {
	lenght = N;
	array = new int[lenght];
}

Storage :: ~Storage() {
	delete[] array;
}

void Storage :: push(int number, int place) {
	lenght = place;
	if (lenght == 1)
		array[0] = number;
	else {
		for(int i=1; i<lenght; i++)
			array[lenght - i] = array[lenght - i - 1];
		array[0] = number;
	}
}

void Storage :: show() {
	if (lenght == 0)
		std :: cout << "Storage is empty.\n";
	else {
		int m = 0;
		while (m < lenght) {
			std :: cout << array[m] <<" ";
			m++;
		}
		std :: cout << "\n";
	}
}

void Storage :: pop() {}

FIFO :: FIFO(int N) :Storage(N) {}

void FIFO :: pop() {
	lenght--;
}

LIFO :: LIFO(int N) :Storage(N) {}

void LIFO :: pop() {
	int k = 0;
	while (k < lenght - 1) {
		array[k] = array[k + 1];
		k++;
	}
	lenght--;
}