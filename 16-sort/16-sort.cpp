#include <iostream>
#include <stdio.h>
#include <cstdlib>
#include <ctime>

int a[100];

void swap1(int *x, int *y) {
	int temp;
	temp=*x;
	*x=*y;
	*y=temp;
}

void swap2(int *x, int *y) {
	std :: swap (*x, *y);
}

void swap3(int *x, int *y) {
	if (x != y) {
		*x ^= *y;
		*y ^= *x;
		*x ^= *y;
	}
}

void QuickSort(int first, int last) {
	int pivot;
	int l,r;
	l=first; r=last;
	pivot=a[(l+r)/2];
	while (l<=r) {
		while (a[l]<pivot) l++;
		while (a[r]>pivot) r--;
		if (l<=r) {
			swap3(&a[l],&a[r]);
			l++;
			r--;
		}
	}
	if (first<r) QuickSort(first,r);
	if (l<last) QuickSort(l,last);
	}


int main() {
	int N=0, i=0;
	std :: cout << "Enter the number of elements in the array: ";
	do {
		std :: cin >> N;
		if (N > 100) {
			std :: cout << "Error!" << "\n";
		}
	} while (N > 100);
	srand(time(NULL));
	std :: cout << "Source array:" << "\n";
	for (i=0; i<N; i++) {
		a[i] = rand() % (N+1); // 0 ... 100
		std :: cout << a[i] << " ";
	}
	std :: cout << "\n";

	QuickSort(0, N-1);
	std :: cout << "Sorted array:" << "\n";
	for (i=0; i<N; i++) {
		std :: cout << a[i] << " ";
	}
	std :: cout << "\n";
	return 0;
}