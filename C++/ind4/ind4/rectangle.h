#pragma once
#include "shapes.h"


class rectangle :
    public shapes
{
private:
    double a;
    double b;
public:
    rectangle();
    rectangle(double, double);
    void print();
    double area();
};

