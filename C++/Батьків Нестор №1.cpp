
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	bool repeat = 1;//для повторення

	float a, b, h, y, min, max;
	while(repeat)
	{
	cout << "Enter a : ";
	cin >> a;
	cout << "Enter b : ";
	cin >> b;
	cout << "Enter h : ";
	cin >> h;
	if (a > b)// Перевірка чи проміжок починається з меншого числа
		cout << " a should be lover then b !";
	else
	{
		cout << " x   y " << endl;
		min = max = log(2 + (sin(a) * sin(a)));// присвоєння min,max значення першого y
		for (a; a <= b; a = a + h)//Цикл з кроком h
		{
			y = log(2 + (sin(a) * sin(a)));
			cout << " " << a << "   " << y << endl;
			if (y > max)//знаходження макс і мін у
				max = y;
			if (y < min)
				min = y;
		}
		cout << "Sum of min + max y : " << min << " + " << max << " = " << min + max << endl;
	}
	cout << "Enter 1 to go again, 0 to stop : ";
	cin >> repeat;
}
	return 0;
}

