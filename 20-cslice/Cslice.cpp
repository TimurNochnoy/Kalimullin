#include <iostream>
#include <stdio.h>
#include <fstream>
#include <string>
#include <sstream>

#include "CSlice.h"



CSlice :: CSlice(std :: string &slice) {

	array = new int[100];

	std :: ifstream f("input.txt");
	int n = 0;
	while (f.eof() == 0) {
	    n++;
	    f >> array[n - 1];
	}
	f.close();

	lenght = n;
	int startc = slice.find("[");
	slice.erase(0, startc + 1);
	int finish = slice.find("]");
	slice.erase(finish, finish + 1);

	std :: stringstream stream(slice);
	std :: getline(stream, first_number, ':');
	std :: getline(stream, second_number, ':');
	std :: getline(stream, third_number, ':');

}

CSlice :: ~CSlice() {
	delete[] array;
}


void CSlice :: process() {
	int start, stop, step;
	int flag = 0;

	if (first_number == "")
		start = 0;
	else
		start = stoi(first_number);

	if ((second_number == "") && (third_number == "") && (start != 0)) {
		//[+]
		if (start > 0) {
			std :: cout << array[start] << " ";
			flag = 1;
		}
		//[-]
		if (start < 0) {
			std :: cout << array[lenght - abs(start)];
			flag = 1;
		}
	}
	else {
		if (second_number == "")
			stop = lenght;
		else
			stop = stoi(second_number);

		if (third_number == "")
			step = 1;
		else
			step = stoi(third_number);

		// [+:+:+]
		if ((start >= 0) && (stop >= 0) && (step >= 0)) {
			for(int i=start; i<=stop-1; i+=step) {
				std :: cout << array[i] << " ";
				flag = 1;
			}
		}

		// [+:+:-]
		if ((start >= 0) && (stop >=0)  && (step < 0)) {
			for(int i=stop-1; i>=start; i-=abs(step)) {
				std :: cout << array[i] << " ";
				flag = 1;
			}
		}

		// [+:-:+]
		if ((start >= 0) && (stop < 0) && (step >= 0)) {
			for(int i=start; i<lenght-abs(stop); i+=step) {
				std :: cout << array[i] << " ";
				flag = 1;
			}
		}

		// [+:-:-]
		if ((start >= 0) && (stop < 0) && (step < 0)) {
			for(int i=lenght-abs(stop)-1; i>=start; i-=abs(step)) {
				std :: cout << array[i] << " ";
				flag = 1;
			}
		}

		// [-:+:+]
		if ((start < 0) && (stop >= 0) && (step >= 0)) {
			for(int i=lenght-abs(start); i<=stop-1; i+=step) {
				std :: cout << array[i] << " ";
				flag = 1;
			}
		}

		// [-:+:-]
		if ((start < 0) && (stop >= 0) && (step < 0)) {
			for(int i=stop-1; i>=lenght-abs(start); i-=abs(step)) {
				std :: cout << array[i] << " ";
				flag = 1;
			}
		}

		//[-:-:+]
		if ((start < 0) && (stop < 0) && (step >= 0)) {
			for(int i=lenght-abs(start); i<lenght-abs(stop); i+=step) {
				std :: cout << array[i] << " ";
				flag = 1;
			}
		}

		// [-:-:-]
		if ((start < 0) && (stop < 0) && (step < 0)) {
			for(int i=lenght-abs(stop)-1; i>=lenght-abs(start); i-=abs(step)) {
				std :: cout << array[i] << " ";
				flag = 1;
			}
		}

	}

	if (flag == 0)
		std :: cout << "Invalid input, try again\n";

}