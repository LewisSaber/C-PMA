#include "circle.h"

circle::circle()
{
	r = 1;
}

circle::circle(double R)
{
	r = R;
}

void circle::print()
{
	cout << "Circle with radius: " << r << endl;
}

double circle::area()
{
	return r * r * 3.14;
}
