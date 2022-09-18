#pragma once
#include "Human.h"
class Doctor :
    public Human
{
    int WE;
    string prof;
public:
    Doctor();
    Doctor(string, string, int, string, int);
    Doctor(const Doctor&);
    void print();
    string get_Proffesion();
    int get_WE();
    void set(string, string, int, string, int);
   
};

