
#include <iostream>
#include <cmath>
using namespace std;


int main()
{
	double x = 10;
	int costM = 100000;
	double y = 1.3;
	for (int i = 0;i<10;i++)
	{
		if (costM > 2000 && i == 0)
		{
			y = log10(costM)/10 + 1;
		}
		x = floor(x * 4* floor(log10(x)) - floor(log10(x)) * (log(costM)/log(y)));
		cout << i << " : "<< x << endl;
	}
	x = 10;
	 costM = 1000000;
	 y = 1.3;
	cout << endl << endl;
	for (int i = 0; i < 30; i++)
	{
		if (costM > 2000 && i == 0)
		{
			y = log10(costM)/10 + 1;
		}
		x = floor(x * 4 * floor(log10(x)) - floor(log10(x)) * (log(costM) / log(y)));
		cout << i << " : " << x << endl;
	}
	x = 10;
	costM = 1999;
	y = 1.3;
	cout << endl << endl;
	for (int i = 0; i < 10; i++)
	{
		if (costM > 2000)
		{
			y = log10(costM) - 1;
		}
		x = floor(x * 4 * floor(log10(x)) - floor(log10(x)) * (log(costM) / log(y)));
		cout << i << " : " << x << endl;
	}
}

