#pragma once
#include "Avtoservise.h"
class Bus :
    public Avtoservise
{
private:
    double chairs;
public:
    Bus();
    Bus(string,double,double,double);
    double getCost();
    void print();
    double getWorkCost();
};

