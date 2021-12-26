#include <iostream>
#include <fstream>
#include <cmath>



int main() {
	std :: ofstream f("z=sin(x)sin(y).txt");
	float l = 2*acos(-1.0)/100.0;
	for (float j=0; j<=2*acos(-1.0); j+=l) {
		for (float i=0; i<=2*acos(-1.0); i+=l)
			f << j << ", " << i << ", " << sin(i)*sin(j) << "\n";
	}
	f.close();

	return 0;
}