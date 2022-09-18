#pragma once
#include "shapes.h"
class triangle :
    public shapes
{
private:
    double a;
    double b;
    double c;
public:
    triangle();
    triangle(double);
    triangle(double, double, double);
    double area();
    void print();
};

