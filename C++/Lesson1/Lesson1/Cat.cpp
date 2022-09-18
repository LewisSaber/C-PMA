#include "Cat.h"
#include <iostream>
#include <string>

Cat::Cat()
{
	age = 0;
	name = "noname";
}
Cat::Cat(int Age, string Name)
{
	if (Age < 0)
		age = 0;
	else
		age = Age;
	name = Name;
}
Cat::Cat(Cat& Another)
{
	age = Another.age;
	name = Another.name;
}
void Cat::Set_Age(int Age)
{
	if (Age > 0)
		age = Age;
	
}
int Cat::Get_Age()
{
	return age;
}
void Cat::Meow(int n)
{
for(int i = 0; i < n ; i++ )
{
	cout << "Meow ";
}
cout << endl;
}
void Cat::Out()
{
	cout << "Name: " << name << ", Age: " << age << endl;
}
void Cat::Set_Name(string Name)
{
	name = Name;
}

