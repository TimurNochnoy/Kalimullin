#include <iostream>
#include <fstream>
#include <cmath>



int main() {
	std :: ofstream f("normal distribution.txt");
	double l = 0.05;
	for (double j=-5.0; j<=5.0; j+=l) {
		for (double i=-5.0; i<=5.0; i+=l)
			f << j << ", " << i << ", " << exp(-((i*i+j*j)/2.0))/(2.0*acos(-1.0)) << "\n";
	}
	f.close();

	return 0;
}