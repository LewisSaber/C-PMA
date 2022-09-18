#include "Patient.h"

Patient::Patient() :Human()
{
	illnes = "none";
	severity = "none";
}
Patient::Patient(string Surname,string Name,int Age,string Illnes,string Severity):Human(Surname,Name,Age)
{
	illnes = Illnes;
	severity = Severity;
}
void Patient::print()
{
	cout << "Name: " << surname << " " << name << " Age: " << age <<" Illnes: "<<illnes<<" Severity: "<<severity<<endl;
}

string Patient::get_Illnes()
{
	return illnes;
}

string Patient::get_Severity()
{
	return severity;
}

void Patient::set(string Surname, string Name, int Age, string Illnes, string Severity)
{
	Human::set(Surname, Name, Age);
	illnes = Illnes;
	severity = Severity;
}


