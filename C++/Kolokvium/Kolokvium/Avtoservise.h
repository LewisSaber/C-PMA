#pragma once
#include <iostream>
#include <string>
#include <vector>

using namespace std;
class Avtoservise
{
protected:
	string mark;
	double details;
	double work;
public:
	virtual double getWorkCost() = 0;
	virtual double getCost()  = 0;
	virtual void print() = 0;
};

