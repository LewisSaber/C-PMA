#include "car.h"

car::car()
{
    mark = "none";
    details = work = 0;
}

car::car(string m, double d, double w)
{
    mark = m;
    details = d;
    work = w;
}

double car::getCost()
{
    return details + work;
}

void car::print()
{
    cout <<"Mark: "<< mark << "Details cost: " << details << "Cost for work: " << work << "Total cost" << getCost() << endl;
}

double car::getWorkCost()
{
    return work;
}
