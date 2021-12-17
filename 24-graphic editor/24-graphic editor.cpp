#include <iostream>

#include "TWODObject.h"



int main()
{
	Square square(0,0,2);
    Circle circle(0,0,1);
    
	TWODObject* obj[] = {&square, &circle};

	square.show();
	circle.show();

	std :: cout << "\n";

    square.move(2,3);
    square.scale(4);
    square.rotate(180);
    square.show();

	circle.move(2,3);
	circle.scale(4);
    circle.rotate(45);
    circle.show();

	std :: cout << "\n";

    return 0;
}