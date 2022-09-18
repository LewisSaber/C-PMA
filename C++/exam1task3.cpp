

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	float x, y;
	cout << "x : ";
	cin >> x;
	cout << "y : ";
	cin >> y;
	if (-2 * abs(x) + 2 >= y && y >= -1)//перевірка чи точка входить
	{
		cout << "Напиши сам що точка входить" << endl;
	}
	else
		cout << "Напиши сам що точка не входить" << endl;
}

