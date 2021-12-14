#ifndef __CSlise_H__
#define __CSlise_H__

#include <iostream>
#include <stdio.h>
#include <fstream>
#include <string>
#include <sstream>



class CSlice {
private:
	int *array;
	int lenght;

	std :: string first_number;
    std :: string second_number;
    std :: string third_number;

public:
	CSlice(std :: string &slice);

	~CSlice();

	void process();

};

#endif