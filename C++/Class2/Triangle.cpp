#include "Triangle.h"
	


Triangle::Triangle()
{
	a = 1;
	b = 1;
	c = 1;
}

Triangle::Triangle(int _a, int _b, int _c)
{
	if (_a > 0 && _b > 0 && _c > 0 && _a + _b > _c && _a + _c > _b && _b + _c > _a)
	{
		a = _a;
		b = _b;
		c = _c;

	}
	else
	{
		cout << "Wrong data\n";

	}
}

Triangle::Triangle(const Triangle& t)
{
	a = t.a;
	b = t.b;
	c = t.c;
}
double Triangle::perimeter()
{
	return a + b + c;
}
double Triangle::area()
{
	double p = perimeter() / 2.0;
		return sqrt(p * (p - a)*(p - b)*(p - c));
}
void Triangle::print()
{
	cout << "Triangle: a = " << a << ", b = " << b << ", c = " << c << ", S = " << area() << ", P = " << perimeter() << endl;
}