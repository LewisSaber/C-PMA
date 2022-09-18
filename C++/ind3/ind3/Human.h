#pragma once
#include <string>
#include <iostream>
using namespace std;
class Human
{
protected:
	string surname;
	string name;
	int age;
public:
	Human();
	Human(string, string, int);
	Human(string, int);
	Human(const Human&);
	virtual void print();
    string get_Name();
    string get_Surname();
    int get_Age();
	void set(string,string,int);
	virtual string get_I(string);








};

