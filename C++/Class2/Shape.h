#pragma once
#include <string>
#include <iostream>

using namespace std;

class Shape
{
public:
	virtual double area() = 0;
	virtual double perimeter() = 0;
	virtual void input() = 0;
	virtual void print() = 0;
};

