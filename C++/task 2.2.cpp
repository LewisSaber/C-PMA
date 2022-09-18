// task 2.2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;
int main()
{
	int day, year, month, century;
	cout << "Day: ";
	cin >> day;
	cout << "Month: ";
	cin >> month;
	cout << "Year: ";
	cin >> year;
	century = year / 100;
	year = year % 100;
	
	switch (month)
	{
	case 1: month = month + 10; break;
	case 2: month= month + 10; break;
	default: month -= 2;

	}
	
	int r;
	switch (r = (day + ((13 * month - 1) / 5) + year + year / 4 + century / 4 - 2 * century + 777) % 7)
	{
	case  0: cout << "Its sunday"; break;
	case  1: cout << "Its monday"; break;
	case  2: cout << "Its tuesday"; break;
	case  3: cout << "Its wednesday"; break;
	case  4: cout << "Its thursday"; break;
	case  5: cout << "Its friday"; break;
	case  6: cout << "Its saturday"; break;
	}
	

	return 0;




}

