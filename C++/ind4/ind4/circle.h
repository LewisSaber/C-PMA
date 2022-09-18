#pragma once
#include "shapes.h"
#include <cmath>

class circle :
    public shapes
{
private: 
    double r;
public:
    circle();
    circle(double);
    void print();
    double area();
    
};

