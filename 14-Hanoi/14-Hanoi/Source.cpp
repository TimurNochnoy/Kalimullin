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

// start - 1 �������� (���������).
// buff - 2 �������� (����������).
// end - 3 �������� (���� ���� �����������).

int main()
{
	int N=3;
	std :: cout << "������� N: ";
	std :: cin >> N;
    hanoi(N, 1, 2, 3);
    return 0;
}