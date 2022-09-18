#include "Bus.h"

Bus::Bus()
{
    mark = "none";
    details = work = chairs = 0;
}

Bus::Bus(string m , double d, double w , double c)
{
    mark = m;
    details = d;
    work = w;
    chairs = c;
}

double Bus::getCost()
{
    return details + getWorkCost();
}

void Bus::print()
{
    cout << "Mark: " << mark <<" Chairs: "<<chairs << " Details cost: " << details << " Cost for work: " << getWorkCost() << " Total cost" << getCost() << endl;
}

double Bus::getWorkCost()
{
    return work + chairs * 50;
}
