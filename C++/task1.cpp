// ConsoleApplication1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;
int main()
{
	int a, b, c, d,m;
	cout << "Enter 4 numbers : ";
	cin >> a >> b >> c >> d;
	if (a == b || a == c)
	{
		m = -2 * a + b + c + d;
	}
	else m = a;
	cout << m;
	return 0;
}

