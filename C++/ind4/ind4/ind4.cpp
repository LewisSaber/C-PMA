
#include "rectangle.h"
#include "shapes.h"
#include "circle.h"
#include "triangle.h"
#include"trapezoid.h"
#include <fstream>
#include <iostream>
#include <typeinfo>
#include <string>

void PRINT(shapes** A, int& n)
{
	for (int i = 0; i < n; i++)
	{
		A[i]->print();
		cout << "Area: " << A[i]->area() << endl;
	}

}

int main()
{
	ifstream fin("Data.txt");
	int n;
	fin >> n;
	shapes** A = new shapes * [n];
	string type;
	double a, b, c;
	for (int i = 0; i < n; i++)
	{
		fin>> type;
		if (type == "rectangle")
		{
			fin >> a;
			fin >> b;
			A[i] =  new rectangle(a, b);
		}
		if (type == "circle")
		{
			fin >> a;
			A[i] = new circle(a);
		}
		if (type == "triangle")
		{
			fin >> a;
			fin >> b;
			fin >> c;
			A[i] = new triangle(a, b,c);
		}
		if (type == "trapezoid")
		{
			fin >> a;
			fin >> b;
			fin >> c;
		
			A[i] = new trapezoid(a, b, c);
		}

	}
	PRINT(A, n);
	cout << "GGGGGGGG ";
	circle B(2);
	B.print();
	

	

}


