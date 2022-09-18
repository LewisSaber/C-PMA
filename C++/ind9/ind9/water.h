#pragma once
#include "bill.h"
class water :
    public bill
{
private:
    string surname;
    int pokaznik;
    int paidV;
    int paid;
public:
    water(string,int,int,int);
    void print();


};

