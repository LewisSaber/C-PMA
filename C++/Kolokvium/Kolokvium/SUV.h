#pragma once
#include "Avtoservise.h"
class SUV :
    public Avtoservise
{
private:
    double mass;

public:
    SUV();
    SUV(string, double, double, double);
    double getCost();
    void print();
    double getWorkCost();
};

