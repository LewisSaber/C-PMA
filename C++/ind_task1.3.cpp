
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	float x, y, r;
	cout << "Enter R: ";
	cin >> r;
	cout << "Enter X: ";
	cin >> x;
	cout << "Enter Y: ";
	cin >> y;
	
	
	if((x * x + y * y <= r * r)&& (x <= y&& x >= 0 && y >= 0) || (x >= y && x < 0 && y < 0))
	
		//if (1 / tan(x) > 0 && 1 / tan(x) <= 1)
		
			cout << " the point belongs";
		else
			cout << "the point doesnt belong";
	
	
	return 0;

}

