#include <iostream>
#include <cmath>

#include "TWODObject.h"



TWODObject :: TWODObject(float x, float y): xc(x), yc(y) {}
void TWODObject :: move() {}
void TWODObject :: show() {}
void TWODObject :: rotate() {} 
void TWODObject :: scale() {}



Square :: Square(float x, float y, float a): TWODObject(x, y), len(a), xtop(xc - len/2),  ytop(yc - len/2) {}

void Square :: move(float x, float y)  {
    xc = xc + x;
    yc = yc + y;
    xtop = xtop + x;
    ytop = ytop + y;
}

void Square :: show() {
    std :: cout << "Square, centre (" << xc << "," << yc << "), lower left vertex (" << xtop << "," << ytop << ")" << "\n";
}

void Square :: rotate(int phi) {
	double xtopn, radian, ytopn, xrast, yrast;
	const double PI = 3.141592653589793;

	radian = (phi * PI) / 180;
    xrast = (xc - xtop) * cos(radian) - (yc - ytop) * sin(radian);
    yrast = (xc - xtop) * sin(radian) + (yc - ytop) * cos(radian);
	xtop = xc - xrast;
	ytop = yc - yrast;
}

void Square :: scale(float coefficient) {
    len = len * coefficient;
	xtop = xc - len/2; 
	ytop = yc - len/2;
}



Circle :: Circle(float x, float y, float r): TWODObject(x, y), rad(r) {}

void Circle :: move(float x, float y) {
    xc = xc + x;
    yc = yc + y;
}

void Circle :: show() {
    std :: cout << "Circle, centre (" << xc << "," << yc << "), r = " << rad << "\n";
}

void Circle :: rotate(int phi) {}

void Circle :: scale(float coefficient) {
    rad = rad * coefficient;
}