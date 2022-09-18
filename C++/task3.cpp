// task3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <cmath>
using namespace std;
int main() {
	double x;
	cin >> x;
	if (x <= 0)
	{
		if (cos(x) >= sin(x))
			cout << sin(x) << " " << cos(x) << " ;ln(" << x << ") dont exist";
		else
			cout << cos(x) << " " << sin(x) << " ;ln(" << x << ") dont exist";
	}
	else
	{
		double M[3];
		double temp =-2;
		double max ,mid;
		M[0] = cos(x);
		M[1] = sin(x);
		M[2] = log10(x);
		for (int i = 0; i < 3; i++)
		{
			if (M[i] > temp)
			{
				temp = M[i];

			}
			
		}
		max = temp;
		temp = -2;
		for (int i = 0; i < 3; i++)
		{
			if (M[i] == max)
				M[i] = -3;
			if (M[i] > temp)
			{
				temp = M[i];
			}
		}
		mid = temp;

		temp = -2;
		for (int i = 0; i < 3; i++)
		{
			if (M[i] == mid)
				M[i] = -3;
			if (M[i] > temp)
			{
				temp = M[i];
			}
		}
		cout << temp << " " << mid << " " << max;

	}
	return 0;




}
  
