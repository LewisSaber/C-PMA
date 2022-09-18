

#include <iostream>
using namespace std;
int main()
{
	float x, y;
	bool repeat = 1;//для повторення
	while (repeat)
	{
		cout << "Enter x : ";
		cin >> x;
		cout << "Enter y : ";
		cin >> y;
		if (x * x + y * y <= 1)//За формулою кола визначажмо чи точка всередині чи ззовні
			cout << " A(x,y) is inside circle"<< endl;
		else
			cout << " A(x,y) is outside of circle"<< endl;

		cout << "Press 1 to repeat program, 0 to stop : ";
		cin >> repeat;
	}
	return 0;
}
