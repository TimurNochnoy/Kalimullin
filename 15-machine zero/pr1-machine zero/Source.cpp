#include <iostream>
#include <stdio.h>

int main() {
	float z = 1, e = 1, inftop = 1, infbottom = 1, sum = 0, dif = 0;
	double zd = 1, ed = 1, inftopd = 1, infbottomd = 1, sumd = 0, difd = 0;
	long double zld = 1, eld = 1, inftopld = 1, infbottomld = 1, sumld = 0, difld = 0;
	int i = 0, k = 0;

	// float
	do {
		z = z / 2;
		k++;
	} while (z != 0);
	z = 1;
	for (i=0; i<k-1; i++) {
		z = z / 2;
	}
	do {
		e = e / 2;
	} while (1 + e != 1);
	inftop = FLT_MAX;
	infbottom = - FLT_MAX;
	sum = z + e;
	dif = e - z;
	
	k = 0;
	// double
	do {
		zd = zd / 2;
		k++;
	} while (zd != 0);
	zd = 1;
	for (i=0; i<k-1; i++) {
		zd = zd / 2;
	}
	do {
		ed = ed / 2;
	} while (1 + ed != 1);
	inftopd = DBL_MAX;
	infbottomd = - DBL_MAX;
	sumd = zd + ed;
	difd = ed - zd;

	k = 0;
	// long double
	do {
		zld = zld / 2;
		k++;
	} while (zld != 0);
	zld = 1;
	for (i=0; i<k-1; i++) {
		zld = zld / 2;
	}
	do {
		eld = eld / 2;
	} while (1 + eld != 1);
	inftopld = LDBL_MAX;
	infbottomld = - LDBL_MAX;
	sumld = zld + eld;
	difld = eld - zld;
	
	std::cout << "�������� 0 float: " << z << "\n";
	std::cout << "�������� ������������� + float: " << inftop << "\n";
	std::cout << "�������� ������������� - float: " << infbottom << "\n";
	std::cout << "�������� ������� float: " << e << "\n";
	std::cout << "����� ��������� 0 � ������� float: " << sum << "\n";
	std::cout << "�������� ��������� 0 � ������� float: " << dif << "\n";
	
	
	std::cout << "�������� 0 double: " << zd << "\n";
	std::cout << "�������� ������������� + double: " << inftopd << "\n";
	std::cout << "�������� ������������� - double: " << infbottomd << "\n";
	std::cout << "�������� ������� double: " << ed << "\n";
	std::cout << "����� ��������� 0 � ������� double: " << sumd << "\n";
	std::cout << "�������� ��������� 0 � ������� double: " << difd << "\n";

	std::cout << "�������� 0 long double: " << zld << "\n";
	std::cout << "�������� ������������� + long double: " << inftopld << "\n";
	std::cout << "�������� ������������� - long double: " << infbottomld << "\n";
	std::cout << "�������� ������� long double: " << eld << "\n";
	std::cout << "����� ��������� 0 � ������� long double: " << sumld << "\n";
	std::cout << "�������� ��������� 0 � ������� long double: " << difld << "\n";
	return 0;
}