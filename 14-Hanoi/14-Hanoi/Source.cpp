#include <iostream>
#include <stdio.h>

void hanoi(int N, int start, int buff, int end)
{
    if (N == 0)
        return;
    hanoi(N - 1, start, end, buff);
    std :: cout << start << " -> " << end << "\n";
    hanoi(N - 1, buff, start, end);
    return;
}

// start - 1 стержень (стартовый).
// buff - 2 стержень (переходный).
// end - 3 стержень (куда надо переместить).

int main()
{
	int N=3;
	std :: cout << "Введите N: ";
	std :: cin >> N;
    hanoi(N, 1, 2, 3);
    return 0;
}