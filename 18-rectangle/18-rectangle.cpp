#include <iostream>
#include <stdio.h>
#include <fstream>

class CRectangle {
public:
	const double xL, yL, xR, yR;
	CRectangle(double xL, double yL, double xR, double yR) : xL(xL), yL(yL), xR(xR), yR(yR) {};
};

void crossing(CRectangle rectangle1, CRectangle rectangle2) {
	int f = 1;
	if ((rectangle1.xR < rectangle2.xL) || (rectangle1.xL > rectangle2.xR)) {
		f = 0;
	}
	else if ((rectangle1.xR >= rectangle2.xL) && (rectangle1.xL <= rectangle2.xR) && ((rectangle1.yR < rectangle2.yL) || (rectangle1.yL > rectangle2.yR))) {
		f = 0;
	}
	if (f == 0) {
		std :: cout << "NO\n";
	}
	else {
		std :: cout << "YES\n";
	}
}

int main() {
	int x1, x2, x3, x4, x5, x6, x7, x8;
	std :: ifstream f("input.txt");
	f >> x1 >> x2 >> x3 >> x4 >> x5 >> x6 >> x7 >> x8;
	CRectangle r1 (x1, x2, x3, x4);
	CRectangle r2 (x5, x6, x7, x8);
	crossing(r1, r2);
	return 0;
}