#pragma once
#include "Shape.h"
class Triangle :
    public Shape
{
	int a;
	int b;
	int c;
public:
	Triangle();
	Triangle(int, int, int);
	Triangle(const Triangle&);
	 double area() = 0;
	 double perimeter() = 0;
	 void input() = 0;
	 void print() = 0;
};

