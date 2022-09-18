#include "SUV.h"

SUV::SUV()
{
	mark = "none";
	details = work = mass = 0;
}

SUV::SUV(string m, double d, double w, double ma)
{
	mark = m;
	details = d;
	work = w;
	mass = ma;
}

double SUV::getCost()
{
	return details + getWorkCost();
}

void SUV::print()
{
	cout << "Mark: " << mark << " Mass: " << mass << " Details cost: " << details << " Cost for work: " << getWorkCost() << " Total cost" << getCost() << endl;
}

double SUV::getWorkCost()
{
	return work + mass * 0,001;
}
