#include "Rational.h"

Rational::Rational()
{
	a = 1;
	b = 1;
}
Rational::Rational(double n)
{
	a = n;
	b = 1;
}
Rational::Rational(double A , double B)
{
	a = A;
	b = B;
}
Rational::Rational(Rational& n)
{
	a = n.a;
	b = n.b;
}
void Rational::Set_Number(double n)
{
	a = n;
	b = 1;
}
void Rational::Set_Number(double A, double B)
{
	a = A;
	if (B == 0)
		b = 1;
	else
	b = B;
}
double Rational::Get_Number()
{
	return a/b;
}
double Rational::Get_a()
{
	return a;
}
double Rational::Get_b()
{
	return b;
}
void Rational::Print()
{
	cout << "Number: " << a << "/" << b ;
}
void Rational::Print(string)
{
	cout << "Number: " << a << "/" << b << endl;
}
double Rational::operator+(double n)
{
	return (a + n *b) /b;
}
double Rational::operator+(Rational& n)
{
	return (a * n.b + n.a * b) / (n.b * b);
}
double Rational::operator-(double n)
{
	return (a - n * b) / b;
}
double Rational::operator-(Rational& n)
{
	return (a * n.b - n.a * b) / (n.b * b);
}
double Rational::operator*(double n)
{
	return a * n / b;
}
double Rational::operator*(Rational& n)
{
	return a * n.a / (b * n.b);
}
double Rational::operator/(double n)
{
	return a /(b* n);
}
double Rational::operator/(Rational& n)
{
	return (a * n.b) / (b * n.a);
}
void Rational::operator=(double n)
{
	a = n;
	b = 1;
}
void Rational::operator=(Rational& n)
{
	 a = n.a;
	 b = n.b;
}


ostream& operator<<(ostream& out,const Rational& n)
{
	out << n.a/n.b;
	return out;
}


istream& operator>>(istream& input, Rational& n)
{
	input >> n.a;
	n.b = 1;
	return input;
}
bool Rational::operator>(double n)
{
	if (Get_Number() > n)
		return true;
	else
		return false;
};
bool Rational::operator >(Rational& n)
{
	if (Get_Number() > n.Get_Number())
		return true;
	else
		return false;
};
bool Rational::operator<(Rational& n)
{
	if (Get_Number() < n.Get_Number())
		return true;
	else
		return false;
};
bool Rational::operator<(double n)
{
	if (Get_Number() < n)
		return true;
	else
		return false;
};
bool Rational::operator>=(Rational& n)
{
	if (Get_Number() >= n.Get_Number())
		return true;
	else
		return false;
};
bool Rational::operator>=(double n)
{
	if (Get_Number() >= n)
		return true;
	else
		return false;
};
bool Rational::operator<=(Rational& n)
{
	if (Get_Number() <= n.Get_Number())
		return true;
	else
		return false;
};
bool Rational::operator<=(double n)
{
	if (Get_Number() <= n)
		return true;
	else
		return false;
};
bool Rational::operator==(Rational& n)
{
	if (Get_Number() == n.Get_Number())
		return true;
	else
		return false;
};
bool Rational::operator==(double n)
{
	if (Get_Number() == n)
		return true;
	else
		return false;
};

int Rational::NSD()
{
	int n1 =a;
	int n2 = b;
	do {
		if (n1 == n2)
		{
			n1 = 0;
		}
		else {
			if (n1 > n2)
			{
				n1 -= n2;
			}
			if (n2 > n1)
			{
				n2 -= n1;
			}
		}


	} while (n1 > 0);
	return n2;
};
void Rational::Cut()
{
	int nsd = NSD();
		a = a / nsd;
	b = b / nsd;

}





