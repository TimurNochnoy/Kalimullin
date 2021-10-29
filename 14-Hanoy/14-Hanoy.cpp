#include <iostream>
#include <stdio.h>

void hanoy(int N, int start, int buff, int end)
{
    if (N == 0)
        return;
    hanoy(N - 1, start, end, buff);
    std :: cout << start << " -> " << end << "\n";
    hanoy(N - 1, buff, start, end);
    return;
}

// start - 1 rod (start).
// buff - 2 rod (intermediate).
// end - 3 rod (end).

int main()
{
	int N=3;
	std :: cout << "Enter N: ";
	std :: cin >> N;
    hanoy(N, 1, 2, 3);
    return 0;
}