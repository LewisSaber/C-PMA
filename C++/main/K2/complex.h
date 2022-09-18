#pragma once
#include <iostream>
#include <string>

using namespace std;
class complex
{
private: 
	double r;
	double i;
public:
	complex();
	complex(double, double);
	complex(const complex&);
	complex operator+(complex&);
	complex operator-(complex&);
	complex operator*(complex&);
	complex operator/(complex&);
	friend ostream& operator<<(ostream& out, const complex&);
	friend istream& operator>>(istream& in, complex&);
	bool operator==(complex& );
	complex spr();
	void Random(int);


};

