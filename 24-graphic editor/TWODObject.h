#ifndef __TWODObject_H__
#define __TWODObject_H__



class TWODObject {
public:
    float xc;
    float yc;

	TWODObject(float x, float y);
	virtual void move();
	virtual void show();
	virtual void rotate(); 
	virtual void scale();
};

class Square: public TWODObject {
public:
	float len, xtop, ytop;
	
	Square(float x, float y, float a);
	virtual void move(float x, float y);
	virtual void show();
	virtual void rotate(int phi); 
	virtual void scale(float coefficient);
};

class Circle: public TWODObject {
public:
	float rad;
	
	Circle(float x, float y, float r);
	virtual void move(float x, float y);
	virtual void show();
	virtual void rotate(int phi); 
	virtual void scale(float coefficient);
};

#endif