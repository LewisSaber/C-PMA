// task 4.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;
int main()
{
	int x, y;
	cin>> x;
	cin>> y;
	string s = "IV";
	if (x == 0 && y != 0)
	{
		cout << "Point on Y axis";
	}

	else
		if (x != 0 && y == 0)
			cout << "Point on X axis";
		else
			if (x == 0 && y == 0)
				cout << "Point in Coordinate center";
	else
	{
		if (x > 0 && y > 0)
			s = "I";
		if (x > 0 && y < 0)
			s = "II";
		if (x < 0 && y < 0)
			s = "III";
		cout << "Point in " << s << " quarter";
	}
	return 0;
}

