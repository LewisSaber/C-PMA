#include "Doctor.h"

Doctor::Doctor():Human()
{
	WE = 0;
	prof = "none";
}
Doctor::Doctor(string Surname, string Name, int Age, string Prof, int we) : Human(Surname, Name, Age)
{
	WE = we;
	prof = Prof;
}
Doctor::Doctor(const Doctor& D)
{
	name = D.name;
	surname = D.surname;
		age = D.age;
	WE = D.WE;
	prof = D.prof;

}
void Doctor::print()
{
	cout << "Name: " << surname << " " << name << " Age: " << age << " Proffesion: " << prof << " Work Exp: " << WE << endl;
}

string Doctor::get_Proffesion()
{
	return prof;
}

int Doctor::get_WE()
{
	return WE;
}

void Doctor::set(string Surname, string Name, int Age, string Prof, int we)
{
	Human::set(Surname, Name, Age);
	WE = we;
	prof = Prof;
}
