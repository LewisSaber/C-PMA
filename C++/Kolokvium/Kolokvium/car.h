#pragma once
#include "Avtoservise.h"
class car :
    public Avtoservise
{
public:
    car();
    car(string, double,double);
   double getCost() ;
  void print() ;
  double getWorkCost();
};

