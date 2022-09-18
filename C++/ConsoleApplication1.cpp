// ConsoleApplication1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;
int main()
{
	int a, b, c, d,m;

	cin >> a;
	cin >> b;
	cin >> c;
	cin >> d;
/*if (a != b && a != c && a != d)
	{
		m = a;
	}else if(b)
	*/
	if (a == b || a == c)
	{
		m = -2 * a + b + c + d;
	}
	else m = a;
	cout << m;
	return 0;
}

