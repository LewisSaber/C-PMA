#include "Human.h"

Human::Human()
{
	name = "nul";
	surname = "nul";
	age = 0;
}
Human::Human( string Surname, string Name, int Age)
{
	name = Name;
	surname = Surname;
	age = Age;
}
Human::Human(string Surname, int Age)
{
	surname = Surname;
	name = "";
	age = Age;
}
Human::Human(const Human& h)
{
	name = h.name;
	surname = h.surname;
	age = h.age;
}
void Human::print()
{
	cout << "Name: " << surname << " " << name << " Age: " << age << endl;
}

string Human::get_Name()
{
	return name;
}

string Human::get_Surname()
{
	return surname;
}

int Human::get_Age()
{
	return age;
}

void Human::set(string Surname, string Name, int Age)
{
name = Name;
surname = Surname;
age = Age;
}

string Human::get_I(string a)
{
	if (a == "name")
		return name;
	if (a == "surname")
		return surname;
	if (a == "age")
		return to_string(age);
}
