#include <iostream>
#include <fstream>
#include <cmath>



int main() {
	std :: ofstream f("y=sin(x).txt");
	float l = 2*acos(-1.0)/100.0;
	for (float i=0; i<=2*acos(-1.0); i+=l) {
		f << i << ", " << sin(i) << "\n";
	}
	f.close();

	return 0;
}