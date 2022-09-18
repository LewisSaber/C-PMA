#include "rectangle.h"


rectangle::rectangle()
{
	a = 1;
	b = 2;
}

rectangle::rectangle(double A, double B)
{
	a = A;
	b = B;
}

void rectangle::print()
{
	cout<< "Rectangule with sides: " << a << " and " << b<<endl;
}

double rectangle::area()
{
	
	return a * b;
}
