#pragma once
#include "bill.h"
class Gas :
    public bill
{
private:
    string surname;
    int persons;
    int paid;
public:
    Gas(string,int,int);
    void print();
};

