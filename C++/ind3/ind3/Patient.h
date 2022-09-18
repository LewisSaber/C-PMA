#pragma once
#include "Human.h"
class Patient :
    public Human
{
    string illnes;
    string severity;
public:
    Patient();
    Patient(string, string, int, string, string);
    void print();
    string get_Illnes();
    string get_Severity();
    void set(string, string, int, string, string);
    
  
};


