
#ifndef  CAT_H_INCLUDED
#define CAT_H_INCLUDED

#include <iostream>
#include <string>
using namespace std;

class Cat
{
private:
	int age;
	string name;
public:
	Cat();
	Cat(int, string);
	Cat(Cat&);
	int Get_Age();
	void Meow(int);
	void Set_Age(int);
	void Out();
	void Set_Name(string);
	

};


#endif 
