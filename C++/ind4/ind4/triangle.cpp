#include "triangle.h"

triangle::triangle()
{
    a = b = c = 1;
}

triangle::triangle(double A)
{
    a = b = c = A;
}

triangle::triangle(double A, double B, double C)
{
    a = A;
    b = B;
    c = C;
}

double triangle::area()
{
    double P = a + b + c;
    double p = P / 2;
    return sqrt(p * (p-a) * (p-b) * (p-c));
}

void triangle::print()
{
    cout << "Triangle with sides : " << a << ", " << b << " and " << c << endl;
}
