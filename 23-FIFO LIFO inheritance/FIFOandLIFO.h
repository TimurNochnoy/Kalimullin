#ifndef __FIFOandLIFO_H__
#define __FIFOandLIFO_H__



class Storage {
public:
	int* array;
	int lenght;

	Storage(int N);

	~Storage();

	void push(int number, int place);

	void show();

	virtual void pop();
};

class FIFO: public Storage {
public:
	FIFO(int N);

	virtual void pop();
};

class LIFO: public Storage {
public:
	LIFO(int N);

	virtual void pop();
};

#endif