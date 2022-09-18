

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	cout << "Enter X: ";
	float result, x;
	cin >> x;
	if (x > 3)
	{
		result = 1 / (x * x * x + 6);
	}
	else
		result = x * x - 3 * x + 9;
	cout << "Result : " << result;
	return 0;
}


