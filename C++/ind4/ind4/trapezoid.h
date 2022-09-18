#pragma once
#include "shapes.h"
class trapezoid :
    public shapes
{
private:
    double a, b, h;
public:
    trapezoid();
    trapezoid(double, double, double );
    void print();
    double area();
};

