#pragma once
#include <string>
#include <iostream>
using namespace std;
class Rational
{
private:
	double a;
	double b;
public:
	Rational();
	Rational(double);
	Rational(double, double);
	Rational(Rational&);
	void Set_Number(double);
	void Set_Number(double, double);
	double Get_Number();
	double Get_a();
	double Get_b();
	void Print();
	void Print(string);
	double operator+(double);
	double operator+(Rational&);
	double operator-(double);
	double operator-(Rational&);
	double operator*(double);
	double operator*(Rational&);
	double operator/(double);
	double operator/(Rational&);
	bool operator>(double);
	bool operator>(Rational&);
	bool operator<(double);
	bool operator<(Rational&);
	bool operator>=(double);
	bool operator>=(Rational&);
	bool operator<=(double);
	bool operator==(Rational& n);
	bool operator<=(Rational&);
	void operator=(double);
	void operator=(Rational&);
	friend ostream& operator<<(ostream& out, const Rational&);
	friend istream& operator>>(istream& in,  Rational&);
	bool operator==(double n);
	int NSD();
	void Cut();


};

