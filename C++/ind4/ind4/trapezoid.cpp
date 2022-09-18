#include "trapezoid.h"

trapezoid::trapezoid()
{
    a = b = h  = 1;
}

trapezoid::trapezoid(double A, double B,  double C)
{
    a = A;
    b = B;
    h = C;
 
}

void trapezoid::print()
{
    cout << "Trapezoid with bases: " << a << ", " << b << " and height: " << h << endl;
}


double trapezoid::area()
{
    return (a+b) * h / 2;
}
