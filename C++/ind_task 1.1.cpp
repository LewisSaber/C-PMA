

#include <iostream>
using namespace std;
int main()
{
	float x, y,temp;
	cout << "Enter X: ";
	cin >> x;
	cout << "Enter Y: ";
	cin >> y;
	if (x < y)
	{
		x = x + y;
		y = x - y;
		x = x - y;


	}
	cout << "X: " << x << endl;
	cout << "Y: " << y << endl;
	return 0;
}

