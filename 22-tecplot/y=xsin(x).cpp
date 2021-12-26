#include <iostream>
#include <fstream>
#include <cmath>



int main() {
	std :: ofstream f("y=xsin(x).txt");
	for (float i=-100; i<=100; i+=1) {
		f << i << ", " << i*sin(i) << "\n";
	}
	f.close();

	return 0;
}