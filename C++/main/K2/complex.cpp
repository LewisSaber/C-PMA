#include "complex.h"

complex::complex()
{
	r = 0;
	i = 0;
}

complex::complex(double a, double b)
{
	r = a;
	i = b;
}

complex::complex( const complex& c)
{
	r = c.r;
	i = c.i;
}

complex complex::operator+(complex& B)
{
	complex R(r + B.r, i + B.i);
	return R;
}

complex complex::operator-(complex& B)
{
	complex R(r - B.r, i - B.i);
	return R;
}

complex complex::operator*(complex& B)
{
	complex R(r*B.r-i * B.i,r * B.i + i * B.r);
	return R;
}

complex complex::operator/(complex& B)
{
	double divider = B.r * B.r + B.i * B.i;
	complex R((r * B.r + i * B.i)/divider,( i * B.r - r * B.i) / divider);
	return R;
}

bool complex::operator==(complex& B)
{
	return (r == B.r && i == B.i);
}

complex complex::spr()
{
	complex R(r, -1 * i);
	return R;
}

void complex::Random(int max)
{
	
	r = -10 * max + rand() % (max * 20 + 1);
	r = r / 10;
	i = -10 * max + rand() % (max * 20 + 1);
	i = i / 10;
}

ostream& operator<<(ostream& out, const complex& B)
{
	if (B.i == 0)
		out << B.r;
	if (B.i > 0)
		out << B.r << "+" <<B.i <<"i";
	if (B.i < 0)
		out << B.r << B.i << "i";
	
	return out;
}

istream& operator>>(istream& in, complex& B)
{
	in >> B.r ;
	B.i = 0;
	return in;
}

